// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GalleryExcelConfig.cpp

// Line 22: range 0000000014452A38-0000000014452C1B
int32_t __cdecl GalleryExcelConfigMgr::checkConfig(
        GalleryExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GalleryExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GalleryExcelConfigMgr::checkGalleryExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GalleryExcelConfig.cpp",
      "checkConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v5,
      (const char (*)[33])"rewriteGalleryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
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

// Line 32: range 0000000014452C1C-0000000014452DFF
int32_t __cdecl GalleryExcelConfigMgr::rewriteConfig(GalleryExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = GalleryExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GalleryExcelConfigMgr::rewriteGalleryExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GalleryExcelConfig.cpp",
      "rewriteConfig",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v5,
      (const char (*)[33])"rewriteGalleryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
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

// Line 42: range 0000000014452E00-000000001445CD5C
int32_t __cdecl GalleryExcelConfigMgr::rewriteGalleryExcelConfig(
        GalleryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::GalleryType *p_type; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // r15d
  const std::string *v12; // rax
  char *v13; // rsi
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // edx
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  const std::string *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::remove_reference<GalleryBalloonParam&>::type *v30; // rdx
  const unsigned int *v31; // rcx
  GalleryBalloonParam *v32; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  int v41; // r15d
  const std::string *v42; // rax
  char *v43; // rsi
  bool v44; // r15
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  GadgetExcelConfigMgr *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  int v50; // edx
  const std::string *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  const std::string *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  std::remove_reference<GalleryFallParam&>::type *v57; // rdx
  const unsigned int *v58; // rcx
  GalleryFallParam *v59; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int v67; // r15d
  const std::string *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  const std::string *v71; // rax
  bool v72; // r15
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  std::remove_reference<GalleryFlowerParam&>::type *v75; // rdx
  const unsigned int *v76; // rcx
  GalleryFlowerParam *v77; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  _BOOL4 v85; // r15d
  const std::string *v86; // rax
  bool v87; // r15
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  const std::string *v90; // rax
  bool v91; // r15
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rdx
  unsigned __int64 v94; // rax
  const std::string *v95; // rax
  bool v96; // r15
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  _BOOL4 v99; // r15d
  unsigned __int64 v100; // rax
  const std::string *v101; // rax
  char *v102; // rsi
  bool v103; // r15
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  int v106; // r15d
  std::vector<unsigned int>::size_type v107; // r15
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r13
  std::vector<unsigned int>::size_type v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // r13
  std::vector<unsigned int>::size_type v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rdx
  __int64 v116; // rsi
  std::vector<unsigned int>::reference v117; // rax
  int *v118; // rdx
  int v119; // ecx
  char v120; // al
  __int64 v121; // rsi
  std::vector<unsigned int>::reference v122; // rax
  int *v123; // rdx
  int v124; // ecx
  char v125; // dl
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // r13
  std::vector<unsigned int>::size_type v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // r13
  std::vector<unsigned int>::size_type v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rdx
  int v134; // edx
  std::vector<unsigned int>::size_type v135; // rax
  std::remove_reference<BuoyantCombatParam&>::type *v136; // rdx
  const unsigned int *v137; // rcx
  BuoyantCombatParam *v138; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rdx
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  _DWORD *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rdx
  int v148; // r15d
  const std::string *v149; // rax
  bool v150; // r15
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rdx
  const std::string *v153; // rax
  bool v154; // r15
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rdx
  std::remove_reference<SumoCombatParam&>::type *v157; // rdx
  const unsigned int *v158; // rcx
  SumoCombatParam *v159; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rdx
  _DWORD *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rdx
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rdx
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rdx
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rdx
  HomeWorldExcelConfigMgr *v181; // rcx
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rdx
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rdx
  common::milog::MiLogStream *v190; // rax
  common::milog::MiLogStream *v191; // rdx
  _BOOL4 v192; // eax
  unsigned __int64 v193; // rax
  const std::string *v194; // rax
  bool v195; // r15
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rdx
  int v198; // r15d
  common::milog::MiLogStream *v199; // rax
  common::milog::MiLogStream *v200; // rdx
  __int64 v201; // rsi
  std::vector<unsigned int>::reference v202; // rax
  int *v203; // rdx
  int v204; // ecx
  char v205; // al
  __int64 v206; // rsi
  std::vector<unsigned int>::reference v207; // rax
  int *v208; // rdx
  int v209; // ecx
  char v210; // dl
  __int64 v211; // rsi
  std::vector<unsigned int>::reference v212; // rax
  int *v213; // rdx
  int v214; // ecx
  char v215; // al
  std::remove_reference<SalvagePreventParam&>::type *v216; // rdx
  const unsigned int *v217; // rcx
  SalvagePreventParam *v218; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v219; // rax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rdx
  unsigned __int64 v222; // rdx
  common::milog::MiLogStream *v223; // rax
  common::milog::MiLogStream *v224; // rdx
  _BOOL4 v225; // eax
  unsigned __int64 v226; // rax
  const std::string *v227; // rax
  bool v228; // r15
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rdx
  int v231; // r15d
  common::milog::MiLogStream *v232; // rax
  common::milog::MiLogStream *v233; // rdx
  __int64 v234; // rsi
  std::vector<unsigned int>::reference v235; // rax
  int *v236; // rdx
  int v237; // ecx
  char v238; // al
  __int64 v239; // rsi
  std::vector<unsigned int>::reference v240; // rax
  int *v241; // rdx
  int v242; // ecx
  char v243; // dl
  __int64 v244; // rsi
  std::vector<unsigned int>::reference v245; // rax
  int *v246; // rdx
  int v247; // ecx
  char v248; // al
  std::remove_reference<SalvageEscortParam&>::type *v249; // rdx
  const unsigned int *v250; // rcx
  SalvageEscortParam *v251; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v252; // rax
  common::milog::MiLogStream *v253; // rax
  common::milog::MiLogStream *v254; // rdx
  unsigned __int64 v255; // rdx
  _DWORD *v256; // rax
  common::milog::MiLogStream *v257; // rax
  common::milog::MiLogStream *v258; // rdx
  int v259; // r15d
  const std::string *v260; // rax
  bool v261; // r15
  common::milog::MiLogStream *v262; // rax
  common::milog::MiLogStream *v263; // rdx
  const std::string *v264; // rax
  bool v265; // r15
  common::milog::MiLogStream *v266; // rax
  common::milog::MiLogStream *v267; // rdx
  std::remove_reference<GalleryCrystalLinkParam&>::type *v268; // rdx
  const unsigned int *v269; // rcx
  GalleryCrystalLinkParam *v270; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v271; // rax
  common::milog::MiLogStream *v272; // rax
  common::milog::MiLogStream *v273; // rdx
  _DWORD *v274; // rax
  unsigned __int64 v275; // rax
  common::milog::MiLogStream *v276; // rax
  common::milog::MiLogStream *v277; // rdx
  common::milog::MiLogStream *v278; // rax
  int v279; // r15d
  const std::string *v280; // rax
  bool v281; // r15
  common::milog::MiLogStream *v282; // rax
  common::milog::MiLogStream *v283; // rdx
  const std::string *v284; // rax
  bool v285; // r15
  common::milog::MiLogStream *v286; // rax
  common::milog::MiLogStream *v287; // rdx
  const std::string *v288; // rax
  common::milog::MiLogStream *v289; // rax
  common::milog::MiLogStream *v290; // rdx
  std::remove_reference<GalleryLuminanceStoneChallengeParam&>::type *v291; // rdx
  const unsigned int *v292; // rcx
  GalleryLuminanceStoneChallengeParam *v293; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v294; // rax
  common::milog::MiLogStream *v295; // rax
  common::milog::MiLogStream *v296; // rdx
  unsigned __int64 v297; // rax
  _DWORD *v298; // rax
  common::milog::MiLogStream *v299; // rax
  common::milog::MiLogStream *v300; // rdx
  int v301; // r15d
  const std::string *v302; // rax
  bool v303; // r15
  common::milog::MiLogStream *v304; // rax
  common::milog::MiLogStream *v305; // rdx
  const std::string *v306; // rax
  bool v307; // r15
  common::milog::MiLogStream *v308; // rax
  common::milog::MiLogStream *v309; // rdx
  std::remove_reference<GalleryInstableSprayParam&>::type *v310; // rdx
  const unsigned int *v311; // rcx
  GalleryInstableSprayParam *v312; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v313; // rax
  common::milog::MiLogStream *v314; // rax
  common::milog::MiLogStream *v315; // rdx
  _DWORD *v316; // rax
  uint32_t control_group_id; // ecx
  char v318; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v320; // rax
  common::milog::MiLogStream *v321; // rax
  int v322; // edx
  common::milog::MiLogStream *v323; // rax
  common::milog::MiLogStream *v324; // rdx
  int v325; // eax
  const std::string *v326; // rax
  common::milog::MiLogStream *v327; // rax
  common::milog::MiLogStream *v328; // rdx
  int v329; // eax
  common::milog::MiLogStream *v331; // rax
  common::milog::MiLogStream *v332; // rax
  common::milog::MiLogStream *v333; // rax
  common::milog::MiLogStream *v334; // rdx
  std::remove_reference<GalleryFungusFighterCaptureParam&>::type *v335; // rdx
  const unsigned int *v336; // rcx
  GalleryFungusFighterCaptureParam *v337; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v338; // rax
  common::milog::MiLogStream *v339; // rax
  common::milog::MiLogStream *v340; // rdx
  common::milog::MiLogStream *v341; // rax
  common::milog::MiLogStream *v342; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-2104h]
  data::GalleryExcelConfigMap *__for_range; // [rsp+30h] [rbp-2100h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::reference v347; // [rsp+38h] [rbp-20F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GalleryExcelConfig> >::type *id; // [rsp+40h] [rbp-20F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GalleryExcelConfig> >::type *config; // [rsp+48h] [rbp-20E8h]
  data::HomeWorldFurnitureExcelConfig *furniture_config_ptr_0; // [rsp+50h] [rbp-20E0h]
  data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+58h] [rbp-20D8h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-20D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v353; // [rsp+68h] [rbp-20C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gadget_id_0; // [rsp+70h] [rbp-20C0h]
  std::map<unsigned int,int> *__for_range_0; // [rsp+80h] [rbp-20B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::reference v356; // [rsp+88h] [rbp-20A8h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *gadget_id; // [rsp+90h] [rbp-20A0h]
  char v358[8336]; // [rsp+A0h] [rbp-2090h] BYREF

  v3 = (unsigned __int64)v358;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_8(8288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "153 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 4 12 group_id:426 560 4 9 param:436 576 8 14 __for_begin:43 608 8 12 __for_end:43 640 8 14 __"
                        "for_begin:61 672 8 12 __for_end:61 704 8 15 __for_begin:105 736 8 13 __for_end:105 768 8 9 <unkn"
                        "own> 800 8 9 <unknown> 832 8 15 level_param:192 864 8 9 <unknown> 896 8 9 <unknown> 928 12 9 par"
                        "am:281 960 12 9 param:317 992 24 20 revise_level_vec:173 1056 24 19 score_ratio_vec:179 1120 24 "
                        "19 score_ratio_vec:287 1184 24 19 score_ratio_vec:323 1248 32 9 <unknown> 1312 32 9 <unknown> 13"
                        "76 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown"
                        "> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unk"
                        "nown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 "
                        "<unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 3"
                        "2 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 29"
                        "12 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown"
                        "> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unk"
                        "nown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 "
                        "<unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 3"
                        "2 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown> 44"
                        "48 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unknown"
                        "> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 5024 32 9 <unk"
                        "nown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown> 5344 32 9 "
                        "<unknown> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unknown> 5664 3"
                        "2 9 <unknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <unknown> 59"
                        "84 32 9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32 9 <unknown"
                        "> 6304 32 9 <unknown> 6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 6560 32 9 <unk"
                        "nown> 6624 32 9 <unknown> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown> 6880 32 9 "
                        "<unknown> 6944 32 9 <unknown> 7008 32 9 <unknown> 7072 32 9 <unknown> 7136 32 9 <unknown> 7200 3"
                        "2 9 <unknown> 7264 56 8 param:93 7360 56 9 param:132 7456 96 9 param:215 7584 96 9 param:346 771"
                        "2 96 9 param:401 7840 104 8 param:49 7984 104 9 param:371 8128 120 9 param:157";
  *(_QWORD *)(v3 + 16) = GalleryExcelConfigMgr::rewriteGalleryExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -234753535;
  v5[536862726] = -234753535;
  v5[536862727] = -234753535;
  v5[536862728] = -234753535;
  v5[536862729] = -234753535;
  v5[536862730] = -234753535;
  v5[536862731] = -234753535;
  v5[536862732] = -234753535;
  v5[536862733] = -234753535;
  v5[536862734] = -234753535;
  v5[536862735] = -234753535;
  v5[536862736] = -234753535;
  v5[536862737] = -234556924;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -218959360;
  v5[536862743] = -218959360;
  v5[536862744] = -218959360;
  v5[536862745] = -218959360;
  v5[536862746] = -218959360;
  v5[536862747] = -218959360;
  v5[536862748] = -218959360;
  v5[536862749] = -219020288;
  v5[536862750] = -219020288;
  v5[536862751] = -234881024;
  v5[536862752] = -218959118;
  v5[536862753] = -234881024;
  v5[536862754] = -218959118;
  v5[536862755] = -234881024;
  v5[536862756] = -218959118;
  v5[536862757] = -234881024;
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -218959118;
  v5[536862786] = -218959118;
  v5[536862788] = -218959118;
  v5[536862790] = -218959118;
  v5[536862792] = -218959118;
  v5[536862794] = -218959118;
  v5[536862796] = -218959118;
  v5[536862798] = -218959118;
  v5[536862800] = -218959118;
  v5[536862802] = -218959118;
  v5[536862804] = -218959118;
  v5[536862806] = -218959118;
  v5[536862808] = -218959118;
  v5[536862810] = -218959118;
  v5[536862812] = -218959118;
  v5[536862814] = -218959118;
  v5[536862816] = -218959118;
  v5[536862818] = -218959118;
  v5[536862820] = -218959118;
  v5[536862822] = -218959118;
  v5[536862824] = -218959118;
  v5[536862826] = -218959118;
  v5[536862828] = -218959118;
  v5[536862830] = -218959118;
  v5[536862832] = -218959118;
  v5[536862834] = -218959118;
  v5[536862836] = -218959118;
  v5[536862838] = -218959118;
  v5[536862840] = -218959118;
  v5[536862842] = -218959118;
  v5[536862844] = -218959118;
  v5[536862846] = -218959118;
  v5[536862848] = -218959118;
  v5[536862850] = -218959118;
  v5[536862852] = -218959118;
  v5[536862854] = -218959118;
  v5[536862856] = -218959118;
  v5[536862858] = -218959118;
  v5[536862860] = -218959118;
  v5[536862862] = -218959118;
  v5[536862864] = -218959118;
  v5[536862866] = -218959118;
  v5[536862868] = -218959118;
  v5[536862870] = -218959118;
  v5[536862872] = -218959118;
  v5[536862874] = -218959118;
  v5[536862876] = -218959118;
  v5[536862878] = -218959118;
  v5[536862880] = -218959118;
  v5[536862882] = -218959118;
  v5[536862884] = -218959118;
  v5[536862886] = -218959118;
  v5[536862888] = -218959118;
  v5[536862890] = -218959118;
  v5[536862892] = -218959118;
  v5[536862894] = -218959118;
  v5[536862896] = -218959118;
  v5[536862898] = -218959118;
  v5[536862900] = -218959118;
  v5[536862902] = -218959118;
  v5[536862904] = -218959118;
  v5[536862906] = -218959118;
  v5[536862908] = -218959118;
  v5[536862910] = -218959118;
  v5[536862912] = -218959118;
  v5[536862914] = -218959118;
  v5[536862916] = -218959118;
  v5[536862918] = -218959118;
  v5[536862920] = -218959118;
  v5[536862922] = -218959118;
  v5[536862924] = -218959118;
  v5[536862926] = -218959118;
  v5[536862928] = -218959118;
  v5[536862930] = -218959118;
  v5[536862932] = -218959118;
  v5[536862934] = -218959118;
  v5[536862936] = -218959118;
  v5[536862938] = -218959118;
  v5[536862940] = -218959118;
  v5[536862942] = -218959118;
  v5[536862944] = -218959118;
  v5[536862946] = -218959118;
  v5[536862948] = -234881024;
  v5[536862949] = -218959118;
  v5[536862951] = -234881024;
  v5[536862952] = -218959118;
  v5[536862956] = -218959118;
  v5[536862960] = -218959118;
  v5[536862964] = -218959118;
  v5[536862968] = -218959360;
  v5[536862969] = 62194;
  v5[536862972] = -234881024;
  v5[536862973] = -218959118;
  v5[536862977] = -218103808;
  v5[536862978] = -202116109;
  __for_range = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 576, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v3 + 576) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 608, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v3 + 608) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::end(__for_range);
  while ( 2 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GalleryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v3 + 576),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v3 + 608)) )
    {
      v37 = 1;
      goto LABEL_407;
    }
    v347 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v3 + 576));
    id = std::get<0ul,unsigned int const,data::GalleryExcelConfig>(v347);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GalleryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GalleryExcelConfig>(v347);
    p_type = &config->type;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    switch ( config->type )
    {
      case GALLERY_TYPE_BALLOON:
        v8 = ((v3 + 7840) >> 3) + 2147450880;
        *(_DWORD *)v8 = 0;
        *(_DWORD *)(v8 + 4) = 0;
        *(_DWORD *)(v8 + 8) = 0;
        *(_BYTE *)(v8 + 12) = 0;
        GalleryBalloonParam::GalleryBalloonParam((GalleryBalloonParam *const)(v3 + 7840));
        if ( std::vector<std::string>::size(&config->param) <= 2 )
        {
          *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1248, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1248),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            52);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1248),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v9,
                  (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
          *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
          goto LABEL_54;
        }
        *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 1376),
          ":",
          (const std::allocator<char> *)(v3 + 48));
        *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 1312),
          ",",
          (const std::allocator<char> *)(v3 + 32));
        v12 = std::vector<std::string>::operator[](&config->param, 0LL);
        v13 = (char *)(v3 + 1312);
        v14 = common::tools::StringUtils::splitToMap<unsigned int,int>(
                v12,
                (const std::string *)(v3 + 1312),
                (const std::string *)(v3 + 1376),
                (std::map<unsigned int,int> *)(v3 + 7840),
                0) != 0;
        std::string::~string((void *)(v3 + 1312));
        *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v3 + 1376));
        *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v14 )
        {
          *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1440, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1440),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            57);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1440),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v15,
                  (const char (*)[33])"[GALLERY] splitToMap failed, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
          *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
          goto LABEL_54;
        }
        __for_range_0 = (std::map<unsigned int,int> *)(v3 + 7840);
        *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 640, v13);
        *(std::map<unsigned int,int>::iterator *)(v3 + 640) = std::map<unsigned int,int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 672, v13);
        *(std::map<unsigned int,int>::iterator *)(v3 + 672) = std::map<unsigned int,int>::end(__for_range_0);
        while ( 2 )
        {
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::_Self *)(v3 + 640),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::_Self *)(v3 + 672)) )
          {
            v356 = std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,int> > *const)(v3 + 640));
            gadget_id = std::get<0ul,unsigned int const,int>(v356);
            std::get<1ul,unsigned int const,int>(v356);
            p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(gadget_id);
            }
            if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *gadget_id) )
            {
              std::_Rb_tree_iterator<std::pair<unsigned int const,int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,int> > *const)(v3 + 640));
              continue;
            }
            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1504, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1504),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              65);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1504),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v18,
                    (const char (*)[38])byte_1AD7A3A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, gadget_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v20 = 0;
          }
          else
          {
            v20 = 1;
          }
          break;
        }
        *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
        if ( v20 == 1 )
        {
          v21 = std::vector<std::string>::operator[](&config->param, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v21, (unsigned int *)(v3 + 7888), 1) )
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
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              71);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1568),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v22,
                    (const char (*)[31])"[GALLERY] strToNum failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
            *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v11 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 80);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 1696),
              ":",
              (const std::allocator<char> *)(v3 + 80));
            *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 64);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 1632),
              ",",
              (const std::allocator<char> *)(v3 + 64));
            v24 = std::vector<std::string>::operator[](&config->param, 2uLL);
            v25 = common::tools::StringUtils::splitToMap<unsigned int,float>(
                    v24,
                    (const std::string *)(v3 + 1632),
                    (const std::string *)(v3 + 1696),
                    (std::map<unsigned int,float> *)(v3 + 7896),
                    0) != 0;
            std::string::~string((void *)(v3 + 1632));
            *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 64);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 1696));
            *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 80);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            if ( v25 )
            {
              *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1760, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1760),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                76);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1760),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v26,
                      (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
              *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v11 = 0;
            }
            else if ( std::map<unsigned int,float>::empty((const std::map<unsigned int,float> *const)(v3 + 7896)) )
            {
              *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1824) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1824, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1824),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                81);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1824),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      v28,
                      (const char (*)[40])byte_1AD7A440);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
              *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v11 = 0;
            }
            else
            {
              v30 = std::move<GalleryBalloonParam &>((GalleryBalloonParam *)(v3 + 7840));
              v33 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryBalloonParam>(
                      &this->gallery_param_map,
                      id,
                      v30,
                      v31,
                      v32);
              if ( !v33.second )
              {
                *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1888, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1888),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  86);
                v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1888),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v35 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v34,
                        (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
                *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v11 = 0;
              }
              else
              {
                v11 = 1;
              }
            }
          }
        }
        else
        {
          v11 = 0;
        }
LABEL_54:
        GalleryBalloonParam::~GalleryBalloonParam((GalleryBalloonParam *const)(v3 + 7840));
        v36 = ((v3 + 7840) >> 3) + 2147450880;
        *(_DWORD *)v36 = -117901064;
        *(_DWORD *)(v36 + 4) = -117901064;
        *(_DWORD *)(v36 + 8) = -117901064;
        *(_BYTE *)(v36 + 12) = -8;
        if ( v11 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_FALL:
        v38 = ((v3 + 7264) >> 3) + 2147450880;
        *(_DWORD *)v38 = 0;
        *(_WORD *)(v38 + 4) = 0;
        *(_BYTE *)(v38 + 6) = 0;
        GalleryFallParam::GalleryFallParam((GalleryFallParam *const)(v3 + 7264));
        if ( std::vector<std::string>::size(&config->param) <= 2 )
        {
          *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1952) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1952, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1952),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            96);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1952),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v39,
                  (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
          *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v41 = 0;
          goto LABEL_93;
        }
        *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 2080),
          ":",
          (const std::allocator<char> *)(v3 + 112));
        *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 2016),
          ",",
          (const std::allocator<char> *)(v3 + 96));
        v42 = std::vector<std::string>::operator[](&config->param, 0LL);
        v43 = (char *)(v3 + 2016);
        v44 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                v42,
                (const std::string *)(v3 + 2016),
                (const std::string *)(v3 + 2080),
                (std::map<unsigned int,unsigned int> *)(v3 + 7264),
                0) != 0;
        std::string::~string((void *)(v3 + 2016));
        *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 96);
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v3 + 2080));
        *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 112);
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v44 )
        {
          *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2144) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2144, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2144),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            101);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2144),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v45,
                  (const char (*)[33])"[GALLERY] splitToMap failed, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2144));
          *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v41 = 0;
          goto LABEL_93;
        }
        __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 7264);
        *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 704, v43);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 704) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 736, v43);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 736) = std::map<unsigned int,unsigned int>::end(__for_range_1);
        while ( 2 )
        {
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 704),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 736)) )
          {
            v353 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 704));
            gadget_id_0 = std::get<0ul,unsigned int const,unsigned int>(v353);
            std::get<1ul,unsigned int const,unsigned int>(v353);
            v47 = &txt_config_mgr->gadget_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)gadget_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)gadget_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id_0 >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(gadget_id_0);
            }
            if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(v47, *gadget_id_0) )
            {
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 704));
              continue;
            }
            *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2208) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2208, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2208),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              109);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2208),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v48,
                    (const char (*)[38])byte_1AD7A3A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, gadget_id_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2208));
            *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v50 = 0;
          }
          else
          {
            v50 = 1;
          }
          break;
        }
        *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
        if ( v50 == 1 )
        {
          v51 = std::vector<std::string>::operator[](&config->param, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v51, (unsigned int *)(v3 + 7312), 1) )
          {
            *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2272) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2272, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2272),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              115);
            v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2272),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v53 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v52,
                    (const char (*)[31])"[GALLERY] strToNum failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2272));
            *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v41 = 0;
          }
          else
          {
            v54 = std::vector<std::string>::operator[](&config->param, 2uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v54, (unsigned int *)(v3 + 7316), 1) )
            {
              *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2336) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2336, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2336),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                120);
              v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 2336),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v56 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v55,
                      (const char (*)[31])"[GALLERY] strToNum failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2336));
              *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v41 = 0;
            }
            else
            {
              v57 = std::move<GalleryFallParam &>((GalleryFallParam *)(v3 + 7264));
              v60 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryFallParam>(
                      &this->gallery_param_map,
                      id,
                      v57,
                      v58,
                      v59);
              if ( !v60.second )
              {
                *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2400) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2400, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2400),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  125);
                v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2400),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v62 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v61,
                        (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2400));
                *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v41 = 0;
              }
              else
              {
                v41 = 1;
              }
            }
          }
        }
        else
        {
          v41 = 0;
        }
LABEL_93:
        GalleryFallParam::~GalleryFallParam((GalleryFallParam *const)(v3 + 7264));
        v63 = ((v3 + 7264) >> 3) + 2147450880;
        *(_DWORD *)v63 = -117901064;
        *(_WORD *)(v63 + 4) = -1800;
        *(_BYTE *)(v63 + 6) = -8;
        if ( v41 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_ARENA_CHALLENGE:
      case GALLERY_TYPE_FADEOUT_FLOOR:
      case GALLERY_TYPE_AVOID_RAYS:
      case GALLERY_TYPE_BROKEN_FLOOR:
      case GALLERY_TYPE_BULLET_GAME:
      case GALLERY_TYPE_AVOID_BUBBLES:
      case GALLERY_TYPE_REMEMBER_ROAD:
      case GALLERY_TYPE_MIST_TRIAL:
      case GALLERY_TYPE_HIDE_AND_SEEK:
      case GALLERY_TYPE_BOUNCE_CONJURING:
      case GALLERY_TYPE_HANDBALL:
      case GALLERY_TYPE_FISH:
      case GALLERY_TYPE_DIG_COMBAT:
      case GALLERY_TYPE_TRIATHLON:
      case GALLERY_TYPE_PHOTO:
      case GALLERY_TYPE_SWORD_WAY:
      case GALLERY_TYPE_MP_BLOCK:
      case GALLERY_TYPE_ISLAND_PARTY_RAFT:
      case GALLERY_TYPE_ISLAND_PARTY_SAIL:
      case GALLERY_TYPE_ISLAND_PARTY_DOWN_HILL:
      case GALLERY_TYPE_SUMMER_TIME_V2_BOAT_RACE:
      case GALLERY_TYPE_GRAVEN_INNOCENCE_RACE:
      case GALLERY_TYPE_MUQADAS_POTION:
      case GALLERY_TYPE_TREASURE_SEELIE:
      case GALLERY_TYPE_VINTAGE_HUNTING:
      case GALLERY_TYPE_WIND_FIELD:
      case GALLERY_TYPE_CHAR_AMUSE_SPIN_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_PILLAR:
      case GALLERY_TYPE_CHAR_AMUSE_RUN_ON_WATER:
      case GALLERY_TYPE_CHAR_AMUSE_BASE_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_FOOT_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_BRICK_WALL:
      case GALLERY_TYPE_CHAR_AMUSE_BATTLE:
      case GALLERY_TYPE_EFFIGY_CHALLENGE_V2:
      case GALLERY_TYPE_BRICK_BREAKER:
      case GALLERY_TYPE_COIN_COLLECT:
      case GALLERY_TYPE_ELECTROHERCULES_BATTLE:
      case GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE:
      case GALLERY_TYPE_LANV3_BOAT_GAME_MULTI:
      case GALLERY_TYPE_TEAM_CHAIN:
      case GALLERY_TYPE_DUEL_HEART:
      case GALLERY_TYPE_LANV3_RACE:
        goto LABEL_405;
      case GALLERY_TYPE_CATCH_FLOWER:
        v64 = ((v3 + 7360) >> 3) + 2147450880;
        *(_DWORD *)v64 = 0;
        *(_WORD *)(v64 + 4) = 0;
        *(_BYTE *)(v64 + 6) = 0;
        GalleryFlowerParam::GalleryFlowerParam((GalleryFlowerParam *const)(v3 + 7360));
        if ( std::vector<std::string>::size(&config->param) )
        {
          v68 = std::vector<std::string>::operator[](&config->param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v68, (unsigned int *)(v3 + 7360), 1) )
          {
            *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2528, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2528),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              140);
            v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2528),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v70 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    v69,
                    (const char (*)[31])"[GALLERY] strToNum failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
            *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v67 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 2656),
              ":",
              (const std::allocator<char> *)(v3 + 144));
            *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 2592),
              ";",
              (const std::allocator<char> *)(v3 + 128));
            v71 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v72 = common::tools::StringUtils::splitToMap<unsigned int,float>(
                    v71,
                    (const std::string *)(v3 + 2592),
                    (const std::string *)(v3 + 2656),
                    (std::map<unsigned int,float> *)(v3 + 7368),
                    0) != 0;
            std::string::~string((void *)(v3 + 2592));
            *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 128);
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 2656));
            *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 144);
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v72 )
            {
              *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2720) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2720, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2720),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                145);
              v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 2720),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v74 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v73,
                      (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
              *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v67 = 0;
            }
            else
            {
              v75 = std::move<GalleryFlowerParam &>((GalleryFlowerParam *)(v3 + 7360));
              v78 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryFlowerParam>(
                      &this->gallery_param_map,
                      id,
                      v75,
                      v76,
                      v77);
              if ( !v78.second )
              {
                *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2784) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2784, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2784),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  150);
                v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2784),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v80 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v79,
                        (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2784));
                *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v67 = 0;
              }
              else
              {
                v67 = 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2464),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            135);
          v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2464),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v66 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v65,
                  (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2464));
          *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v67 = 0;
        }
        GalleryFlowerParam::~GalleryFlowerParam((GalleryFlowerParam *const)(v3 + 7360));
        v81 = ((v3 + 7360) >> 3) + 2147450880;
        *(_DWORD *)v81 = -117901064;
        *(_WORD *)(v81 + 4) = -1800;
        *(_BYTE *)(v81 + 6) = -8;
        if ( v67 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_BUOYANT_COMBAT:
        v82 = ((v3 + 8128) >> 3) + 2147450880;
        *(_DWORD *)v82 = 0;
        *(_DWORD *)(v82 + 4) = 0;
        *(_DWORD *)(v82 + 8) = 0;
        *(_WORD *)(v82 + 12) = 0;
        *(_BYTE *)(v82 + 14) = 0;
        BuoyantCombatParam::BuoyantCombatParam((BuoyantCombatParam *const)(v3 + 8128));
        if ( std::vector<std::string>::size(&config->param) > 3 )
        {
          *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 176);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 2976),
            ":",
            (const std::allocator<char> *)(v3 + 176));
          *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 2912),
            ",",
            (const std::allocator<char> *)(v3 + 160));
          v86 = std::vector<std::string>::operator[](&config->param, 0LL);
          v87 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                  v86,
                  (const std::string *)(v3 + 2912),
                  (const std::string *)(v3 + 2976),
                  (std::map<unsigned int,unsigned int> *)(v3 + 8128),
                  0) != 0;
          std::string::~string((void *)(v3 + 2912));
          *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 160);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v3 + 2976));
          *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 176);
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
          if ( v87 )
          {
            *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 3040) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 3040, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 3040),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              165);
            v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 3040),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v89 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v88,
                    (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3040));
            *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v85 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 208);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 3168),
              ":",
              (const std::allocator<char> *)(v3 + 208));
            *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 3104),
              ",",
              (const std::allocator<char> *)(v3 + 192));
            v90 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v91 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                    v90,
                    (const std::string *)(v3 + 3104),
                    (const std::string *)(v3 + 3168),
                    (std::map<unsigned int,unsigned int> *)(v3 + 8176),
                    0) != 0;
            std::string::~string((void *)(v3 + 3104));
            *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 192);
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 3168));
            *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 208);
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
            if ( !v91 )
            {
              v94 = ((v3 + 992) >> 3) + 2147450880;
              *(_WORD *)v94 = 0;
              *(_BYTE *)(v94 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 992));
              *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 224);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 3296),
                ",",
                (const std::allocator<char> *)(v3 + 224));
              v95 = std::vector<std::string>::operator[](&config->param, 2uLL);
              v96 = common::tools::StringUtils::splitToList<unsigned int>(
                      v95,
                      (const std::string *)(v3 + 3296),
                      (std::vector<unsigned int> *)(v3 + 992),
                      0) != 0;
              std::string::~string((void *)(v3 + 3296));
              *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 224);
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
              if ( v96 )
              {
                *(_DWORD *)(((v3 + 3360) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 3360) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 3391) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 3391) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 3360, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 3360),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  176);
                v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 3360),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v98 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        v97,
                        (const char (*)[34])"[GALLERY] splitToList failed, id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3360));
                *(_DWORD *)(((v3 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v99 = 0;
              }
              else
              {
                v100 = ((v3 + 1056) >> 3) + 2147450880;
                *(_WORD *)v100 = 0;
                *(_BYTE *)(v100 + 2) = 0;
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1056));
                *(_DWORD *)(((v3 + 3424) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 240);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 3424),
                  ",",
                  (const std::allocator<char> *)(v3 + 240));
                v101 = std::vector<std::string>::operator[](&config->param, 3uLL);
                v102 = (char *)(v3 + 3424);
                v103 = common::tools::StringUtils::splitToList<unsigned int>(
                         v101,
                         (const std::string *)(v3 + 3424),
                         (std::vector<unsigned int> *)(v3 + 1056),
                         0) != 0;
                std::string::~string((void *)(v3 + 3424));
                *(_DWORD *)(((v3 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 240);
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
                if ( v103 )
                {
                  *(_DWORD *)(((v3 + 3488) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 3488) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 3519) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3519) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 3488, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 3488),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GalleryExcelConfig.cpp",
                    "rewriteGalleryExcelConfig",
                    182);
                  v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 3488),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v105 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                           v104,
                           (const char (*)[34])"[GALLERY] splitToList failed, id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3488));
                  *(_DWORD *)(((v3 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v106 = 0;
                }
                else
                {
                  v107 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 992));
                  if ( v107 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1056)) )
                  {
                    for ( idx = 0;
                          idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 992));
                          ++idx )
                    {
                      *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v3 + 832, v102);
                      }
                      *(_DWORD *)(v3 + 832) = 0;
                      if ( *(_BYTE *)(((v3 + 836) >> 3) + 0x7FFF8000) != 0
                        && (char)(((v3 + 68) & 7) + 3) >= *(_BYTE *)(((v3 + 836) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store4(v3 + 836, (((_BYTE)v3 + 68) & 7u) + 3);
                      }
                      *(_DWORD *)(v3 + 836) = 1;
                      v116 = idx;
                      v117 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 992), idx);
                      v118 = (int *)v117;
                      if ( *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v117 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v117 >> 3)
                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_load4(v117);
                      }
                      v119 = *v118;
                      v120 = *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000);
                      if ( v120 != 0 && v120 <= 3 )
                      {
                        LOBYTE(v116) = v120 != 0;
                        __asan_report_store4(v3 + 832, v116);
                      }
                      *(_DWORD *)(v3 + 832) = v119;
                      if ( idx >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1056)) )
                      {
                        *(_DWORD *)(((v3 + 3616) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 3616) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 3647) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 3647) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 3616, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 3616),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/GalleryExcelConfig.cpp",
                          "rewriteGalleryExcelConfig",
                          200);
                        v126 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 3616),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v127 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                 v126,
                                 (const char (*)[33])"[GALLERY] revise_level_vec size:");
                        *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
                        v128 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 992));
                        if ( *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) )
                          v128 = __asan_report_store8(v3 + 864, "[GALLERY] revise_level_vec size:");
                        *(_QWORD *)(v3 + 864) = v128;
                        v129 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                                 v127,
                                 (const unsigned __int64 *)(v3 + 864));
                        v130 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                 v129,
                                 (const char (*)[24])", score_ratio_vec size:");
                        *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
                        v131 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1056));
                        if ( *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) )
                          v131 = __asan_report_store8(v3 + 896, ", score_ratio_vec size:");
                        *(_QWORD *)(v3 + 896) = v131;
                        v132 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                                 v130,
                                 (const unsigned __int64 *)(v3 + 896));
                        v133 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                 v132,
                                 (const char (*)[6])", id:");
                        v102 = (char *)id;
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v133, id);
                        *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = -8;
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3616));
                        *(_DWORD *)(((v3 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v134 = 0;
                      }
                      else
                      {
                        v121 = idx;
                        v122 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1056), idx);
                        v123 = (int *)v122;
                        if ( *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v122 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v122 >> 3)
                                                                                 + 0x7FFF8000) )
                        {
                          __asan_report_load4(v122);
                        }
                        v124 = *v123;
                        v125 = *(_BYTE *)(((v3 + 836) >> 3) + 0x7FFF8000);
                        if ( v125 != 0 && (char)(((v3 + 68) & 7) + 3) >= v125 )
                        {
                          LOBYTE(v121) = v125 != 0;
                          __asan_report_store4(v3 + 836, v121);
                        }
                        *(_DWORD *)(v3 + 836) = v124;
                        v102 = (char *)(v3 + 832);
                        std::vector<BuoyantCombaLevelParam>::emplace_back<BuoyantCombaLevelParam&>(
                          (std::vector<BuoyantCombaLevelParam> *const)(v3 + 8224),
                          (BuoyantCombaLevelParam *)(v3 + 832),
                          (BuoyantCombaLevelParam *)(v3 + 8224));
                        v134 = 1;
                      }
                      *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = -8;
                      if ( v134 != 1 )
                      {
                        v106 = 0;
                        goto LABEL_173;
                      }
                    }
                    v135 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 992));
                    std::vector<BuoyantCombaLevelParam>::resize(
                      (std::vector<BuoyantCombaLevelParam> *const)(v3 + 8224),
                      v135);
                    v136 = std::move<BuoyantCombatParam &>((BuoyantCombatParam *)(v3 + 8128));
                    v139 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,BuoyantCombatParam>(
                             &this->gallery_param_map,
                             id,
                             v136,
                             v137,
                             v138);
                    if ( !v139.second )
                    {
                      *(_DWORD *)(((v3 + 3680) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 3680) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 3711) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3711) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 3680, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 3680),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/GalleryExcelConfig.cpp",
                        "rewriteGalleryExcelConfig",
                        208);
                      v140 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 3680),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v141 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                               v140,
                               (const char (*)[33])"[GALLERY] duplicated gallery id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v141, id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3680));
                      *(_DWORD *)(((v3 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v106 = 0;
                    }
                    else
                    {
                      v106 = 1;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 3552) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 3552) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 3583) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 3583) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 3552, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 3552),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GalleryExcelConfig.cpp",
                      "rewriteGalleryExcelConfig",
                      187);
                    v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 3552),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v109 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                             v108,
                             (const char (*)[33])"[GALLERY] revise_level_vec size:");
                    *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
                    v110 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 992));
                    if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) )
                      v110 = __asan_report_store8(v3 + 768, "[GALLERY] revise_level_vec size:");
                    *(_QWORD *)(v3 + 768) = v110;
                    v111 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                             v109,
                             (const unsigned __int64 *)(v3 + 768));
                    v112 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                             v111,
                             (const char (*)[24])", score_ratio_vec size:");
                    *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                    v113 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1056));
                    if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) )
                      v113 = __asan_report_store8(v3 + 800, ", score_ratio_vec size:");
                    *(_QWORD *)(v3 + 800) = v113;
                    v114 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                             v112,
                             (const unsigned __int64 *)(v3 + 800));
                    v115 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                             v114,
                             (const char (*)[6])", id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, id);
                    *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3552));
                    *(_DWORD *)(((v3 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v106 = 0;
                  }
                }
LABEL_173:
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1056));
                v99 = v106 != 0;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 992));
              v85 = v99;
              goto LABEL_175;
            }
            *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 3232) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 3232, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 3232),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              170);
            v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 3232),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v93 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v92,
                    (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3232));
            *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v85 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2848) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2848, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2848),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            160);
          v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2848),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v84 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v83,
                  (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2848));
          *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v85 = 0;
        }
LABEL_175:
        BuoyantCombatParam::~BuoyantCombatParam((BuoyantCombatParam *const)(v3 + 8128));
        v142 = ((v3 + 8128) >> 3) + 2147450880;
        *(_DWORD *)v142 = -117901064;
        *(_DWORD *)(v142 + 4) = -117901064;
        *(_DWORD *)(v142 + 8) = -117901064;
        *(_WORD *)(v142 + 12) = -1800;
        *(_BYTE *)(v142 + 14) = -8;
        v143 = ((v3 + 992) >> 3) + 2147450880;
        *(_WORD *)v143 = -1800;
        *(_BYTE *)(v143 + 2) = -8;
        v144 = ((v3 + 1056) >> 3) + 2147450880;
        *(_WORD *)v144 = -1800;
        *(_BYTE *)(v144 + 2) = -8;
        if ( v85 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_SUMO_COMBAT:
        v145 = (_DWORD *)(((v3 + 7456) >> 3) + 2147450880);
        *v145 = 0;
        v145[1] = 0;
        v145[2] = 0;
        SumoCombatParam::SumoCombatParam((SumoCombatParam *const)(v3 + 7456));
        if ( std::vector<std::string>::size(&config->param) > 1 )
        {
          *(_DWORD *)(((v3 + 3872) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 272);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 3872),
            ":",
            (const std::allocator<char> *)(v3 + 272));
          *(_DWORD *)(((v3 + 3808) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 256);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 3808),
            ",",
            (const std::allocator<char> *)(v3 + 256));
          v149 = std::vector<std::string>::operator[](&config->param, 0LL);
          v150 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                   v149,
                   (const std::string *)(v3 + 3808),
                   (const std::string *)(v3 + 3872),
                   (std::map<unsigned int,unsigned int> *)(v3 + 7456),
                   0) != 0;
          std::string::~string((void *)(v3 + 3808));
          *(_DWORD *)(((v3 + 3808) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 256);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v3 + 3872));
          *(_DWORD *)(((v3 + 3872) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 272);
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( v150 )
          {
            *(_DWORD *)(((v3 + 3936) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 3936) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 3967) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3967) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 3936, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 3936),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              223);
            v151 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 3936),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v152 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     v151,
                     (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v152, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3936));
            *(_DWORD *)(((v3 + 3936) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v148 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 4064) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 304);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 4064),
              ":",
              (const std::allocator<char> *)(v3 + 304));
            *(_DWORD *)(((v3 + 4000) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 288);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 4000),
              ",",
              (const std::allocator<char> *)(v3 + 288));
            v153 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v154 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                     v153,
                     (const std::string *)(v3 + 4000),
                     (const std::string *)(v3 + 4064),
                     (std::map<unsigned int,unsigned int> *)(v3 + 7504),
                     0) != 0;
            std::string::~string((void *)(v3 + 4000));
            *(_DWORD *)(((v3 + 4000) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 288);
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 4064));
            *(_DWORD *)(((v3 + 4064) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 304);
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
            if ( v154 )
            {
              *(_DWORD *)(((v3 + 4128) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 4128) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 4159) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 4159) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 4128, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 4128),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                228);
              v155 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 4128),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v156 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v155,
                       (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v156, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4128));
              *(_DWORD *)(((v3 + 4128) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v148 = 0;
            }
            else
            {
              v157 = std::move<SumoCombatParam &>((SumoCombatParam *)(v3 + 7456));
              v160 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,SumoCombatParam>(
                       &this->gallery_param_map,
                       id,
                       v157,
                       v158,
                       v159);
              if ( !v160.second )
              {
                *(_DWORD *)(((v3 + 4192) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 4192) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 4223) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 4223) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 4192, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 4192),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  233);
                v161 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 4192),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v162 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                         v161,
                         (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v162, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4192));
                *(_DWORD *)(((v3 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v148 = 0;
              }
              else
              {
                v148 = 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 3744) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 3744) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 3775) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3775) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 3744, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 3744),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            218);
          v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 3744),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v147 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v146,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v147, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3744));
          *(_DWORD *)(((v3 + 3744) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v148 = 0;
        }
        SumoCombatParam::~SumoCombatParam((SumoCombatParam *const)(v3 + 7456));
        v163 = (_DWORD *)(((v3 + 7456) >> 3) + 2147450880);
        *v163 = -117901064;
        v163[1] = -117901064;
        v163[2] = -117901064;
        if ( v148 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_HOME_RACING:
        if ( *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->group_furniture_id);
        }
        if ( !config->group_furniture_id )
        {
          *(_DWORD *)(((v3 + 4256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 4287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            242);
          v164 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4256),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v165 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                   v164,
                   (const char (*)[25])"group_furniture_id is 0:");
          v166 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v165,
                   &config->group_furniture_id);
          v167 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v166,
                   (const char (*)[14])", gallery id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v167, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4256));
          v2 = -1;
          v37 = 0;
          goto LABEL_407;
        }
        p_home_config_mgr = &txt_config_mgr->home_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->group_furniture_id);
        }
        furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                 p_home_config_mgr,
                                 config->group_furniture_id);
        if ( !furniture_config_ptr )
        {
          *(_DWORD *)(((v3 + 4320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 4351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            248);
          v169 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4320),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v170 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   v169,
                   (const char (*)[28])"invalid group_furniture_id:");
          v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v170,
                   &config->group_furniture_id);
          v172 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v171,
                   (const char (*)[14])", gallery id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v172, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4320));
          v2 = -1;
          v37 = 0;
          goto LABEL_407;
        }
        if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&furniture_config_ptr->special_furniture_type);
        }
        if ( furniture_config_ptr->special_furniture_type == GroupFurnitrue )
          goto LABEL_405;
        *(_DWORD *)(((v3 + 4384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 4384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 4415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 4415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 4384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 4384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "rewriteGalleryExcelConfig",
          253);
        v173 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 4384),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v174 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 v173,
                 (const char (*)[30])"invalid group_furniture type:");
        v175 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v174, &config->group_furniture_id);
        v176 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v175,
                 (const char (*)[14])", gallery id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v176, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4384));
        v2 = -1;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_SALVAGE_PREVENT:
        *(_WORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 1024;
        if ( std::vector<std::string>::size(&config->param) )
        {
          v193 = ((v3 + 1120) >> 3) + 2147450880;
          *(_WORD *)v193 = 0;
          *(_BYTE *)(v193 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1120));
          *(_DWORD *)(((v3 + 4704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 320);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 4704),
            ",",
            (const std::allocator<char> *)(v3 + 320));
          v194 = std::vector<std::string>::operator[](&config->param, 0LL);
          v195 = common::tools::StringUtils::splitToList<unsigned int>(
                   v194,
                   (const std::string *)(v3 + 4704),
                   (std::vector<unsigned int> *)(v3 + 1120),
                   0) != 0;
          std::string::~string((void *)(v3 + 4704));
          *(_DWORD *)(((v3 + 4704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 320);
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v195 )
          {
            *(_DWORD *)(((v3 + 4768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 4768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 4799) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 4799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 4768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 4768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              290);
            v196 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 4768),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v197 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     v196,
                     (const char (*)[34])"[GALLERY] splitToList failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v197, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4768));
            *(_DWORD *)(((v3 + 4768) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v198 = 0;
          }
          else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1120)) > 1 )
          {
            v201 = 0LL;
            v202 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1120), 0LL);
            v203 = (int *)v202;
            if ( *(_BYTE *)(((unsigned __int64)v202 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v202 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v202 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v202);
            }
            v204 = *v203;
            v205 = *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000);
            if ( v205 != 0 && v205 <= 3 )
            {
              LOBYTE(v201) = v205 != 0;
              __asan_report_store4(v3 + 928, v201);
            }
            *(_DWORD *)(v3 + 928) = v204;
            v206 = 1LL;
            v207 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1120), 1uLL);
            v208 = (int *)v207;
            if ( *(_BYTE *)(((unsigned __int64)v207 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v207 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v207 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v207);
            }
            v209 = *v208;
            v210 = *(_BYTE *)(((v3 + 932) >> 3) + 0x7FFF8000);
            LOBYTE(v206) = v210 != 0;
            if ( v210 != 0 && (char)(((v3 - 92) & 7) + 3) >= v210 )
              __asan_report_store4(v3 + 932, v206);
            *(_DWORD *)(v3 + 932) = v209;
            if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1120)) == 3 )
            {
              v211 = 2LL;
              v212 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1120), 2uLL);
              v213 = (int *)v212;
              if ( *(_BYTE *)(((unsigned __int64)v212 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v212 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v212 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v212);
              }
              v214 = *v213;
              v215 = *(_BYTE *)(((v3 + 936) >> 3) + 0x7FFF8000);
              if ( v215 != 0 && v215 <= 3 )
              {
                LOBYTE(v211) = v215 != 0;
                __asan_report_store4(v3 + 936, v211);
              }
              *(_DWORD *)(v3 + 936) = v214;
            }
            else
            {
              if ( *(_BYTE *)(((v3 + 936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 936) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 936, v206);
              *(_DWORD *)(v3 + 936) = 0;
            }
            v216 = std::move<SalvagePreventParam &>((SalvagePreventParam *)(v3 + 928));
            v219 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,SalvagePreventParam>(
                     &this->gallery_param_map,
                     id,
                     v216,
                     v217,
                     v218);
            if ( !v219.second )
            {
              *(_DWORD *)(((v3 + 4896) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 4896) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 4927) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 4927) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 4896, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 4896),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                310);
              v220 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 4896),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v221 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v220,
                       (const char (*)[33])"[GALLERY] duplicated gallery id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v221, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4896));
              *(_DWORD *)(((v3 + 4896) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v198 = 0;
            }
            else
            {
              v198 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 4832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 4832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 4863) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 4863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 4832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 4832),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              295);
            v199 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 4832),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v200 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                     v199,
                     (const char (*)[45])"[GALLERY] score_ratio_vec size must > 2, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v200, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4832));
            *(_DWORD *)(((v3 + 4832) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v198 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1120));
          v192 = v198 != 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 4640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4671) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 4671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4640),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            284);
          v190 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4640),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v191 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v190,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v191, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4640));
          *(_DWORD *)(((v3 + 4640) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v192 = 0;
        }
        *(_WORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -1800;
        v222 = ((v3 + 1120) >> 3) + 2147450880;
        *(_WORD *)v222 = -1800;
        *(_BYTE *)(v222 + 2) = -8;
        if ( v192 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_SALVAGE_ESCORT:
        *(_WORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 1024;
        if ( std::vector<std::string>::size(&config->param) )
        {
          v226 = ((v3 + 1184) >> 3) + 2147450880;
          *(_WORD *)v226 = 0;
          *(_BYTE *)(v226 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1184));
          *(_DWORD *)(((v3 + 5024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 336);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 5024),
            ",",
            (const std::allocator<char> *)(v3 + 336));
          v227 = std::vector<std::string>::operator[](&config->param, 0LL);
          v228 = common::tools::StringUtils::splitToList<unsigned int>(
                   v227,
                   (const std::string *)(v3 + 5024),
                   (std::vector<unsigned int> *)(v3 + 1184),
                   0) != 0;
          std::string::~string((void *)(v3 + 5024));
          *(_DWORD *)(((v3 + 5024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 336);
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
          if ( v228 )
          {
            *(_DWORD *)(((v3 + 5088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 5088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 5119) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 5119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 5088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 5088),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              326);
            v229 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 5088),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v230 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     v229,
                     (const char (*)[34])"[GALLERY] splitToList failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v230, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5088));
            *(_DWORD *)(((v3 + 5088) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v231 = 0;
          }
          else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1184)) == 3 )
          {
            v234 = 0LL;
            v235 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1184), 0LL);
            v236 = (int *)v235;
            if ( *(_BYTE *)(((unsigned __int64)v235 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v235 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v235 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v235);
            }
            v237 = *v236;
            v238 = *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000);
            if ( v238 != 0 && v238 <= 3 )
            {
              LOBYTE(v234) = v238 != 0;
              __asan_report_store4(v3 + 960, v234);
            }
            *(_DWORD *)(v3 + 960) = v237;
            v239 = 1LL;
            v240 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1184), 1uLL);
            v241 = (int *)v240;
            if ( *(_BYTE *)(((unsigned __int64)v240 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v240 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v240 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v240);
            }
            v242 = *v241;
            v243 = *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000);
            if ( v243 != 0 && (char)(((v3 - 60) & 7) + 3) >= v243 )
            {
              LOBYTE(v239) = v243 != 0;
              __asan_report_store4(v3 + 964, v239);
            }
            *(_DWORD *)(v3 + 964) = v242;
            v244 = 2LL;
            v245 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 1184), 2uLL);
            v246 = (int *)v245;
            if ( *(_BYTE *)(((unsigned __int64)v245 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v245 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v245 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v245);
            }
            v247 = *v246;
            v248 = *(_BYTE *)(((v3 + 968) >> 3) + 0x7FFF8000);
            if ( v248 != 0 && v248 <= 3 )
            {
              LOBYTE(v244) = v248 != 0;
              __asan_report_store4(v3 + 968, v244);
            }
            *(_DWORD *)(v3 + 968) = v247;
            v249 = std::move<SalvageEscortParam &>((SalvageEscortParam *)(v3 + 960));
            v252 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,SalvageEscortParam>(
                     &this->gallery_param_map,
                     id,
                     v249,
                     v250,
                     v251);
            if ( !v252.second )
            {
              *(_DWORD *)(((v3 + 5216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 5216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 5247) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 5247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 5216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 5216),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                339);
              v253 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 5216),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v254 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v253,
                       (const char (*)[33])"[GALLERY] duplicated gallery id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v254, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5216));
              *(_DWORD *)(((v3 + 5216) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v231 = 0;
            }
            else
            {
              v231 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 5152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 5152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 5183) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 5183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 5152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 5152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              331);
            v232 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 5152),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v233 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                     v232,
                     (const char (*)[44])"[GALLERY] score_ratio_vec size must =3, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v233, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5152));
            *(_DWORD *)(((v3 + 5152) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v231 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1184));
          v225 = v231 != 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 4960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4991) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 4991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            320);
          v223 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4960),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v224 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v223,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v224, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4960));
          *(_DWORD *)(((v3 + 4960) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v225 = 0;
        }
        *(_WORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -1800;
        v255 = ((v3 + 1184) >> 3) + 2147450880;
        *(_WORD *)v255 = -1800;
        *(_BYTE *)(v255 + 2) = -8;
        if ( v225 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_HOME_BALLOON:
      case GALLERY_TYPE_HOME_SEEK_FURNITURE:
        if ( *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->group_furniture_id);
        }
        if ( !config->group_furniture_id )
        {
          *(_DWORD *)(((v3 + 4448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 4479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            263);
          v177 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4448),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v178 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                   v177,
                   (const char (*)[25])"group_furniture_id is 0:");
          v179 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v178,
                   &config->group_furniture_id);
          v180 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v179,
                   (const char (*)[14])", gallery id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v180, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4448));
          v2 = -1;
          v37 = 0;
          goto LABEL_407;
        }
        v181 = &txt_config_mgr->home_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->group_furniture_id);
        }
        furniture_config_ptr_0 = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                   v181,
                                   config->group_furniture_id);
        if ( !furniture_config_ptr_0 )
        {
          *(_DWORD *)(((v3 + 4512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 4512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 4543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 4543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 4512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 4512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            269);
          v182 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 4512),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v183 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   v182,
                   (const char (*)[28])"invalid group_furniture_id:");
          v184 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v183,
                   &config->group_furniture_id);
          v185 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v184,
                   (const char (*)[14])", gallery id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v185, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4512));
          v2 = -1;
          v37 = 0;
          goto LABEL_407;
        }
        if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_0->special_furniture_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&furniture_config_ptr_0->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&furniture_config_ptr_0->special_furniture_type);
        }
        if ( furniture_config_ptr_0->special_furniture_type == GroupFurnitrue )
        {
LABEL_405:
          std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v3 + 576));
          continue;
        }
        *(_DWORD *)(((v3 + 4576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 4576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 4607) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 4607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 4576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 4576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "rewriteGalleryExcelConfig",
          274);
        v186 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 4576),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v187 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 v186,
                 (const char (*)[30])"invalid group_furniture type:");
        v188 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v187, &config->group_furniture_id);
        v189 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v188,
                 (const char (*)[14])", gallery id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v189, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4576));
        v2 = -1;
        v37 = 0;
LABEL_407:
        if ( v37 == 1 )
          v2 = 0;
        if ( v358 == (char *)v3 )
        {
          *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF820C) = 0LL;
          memset(
            (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 532) & 0xFFFFFFF8) >> 3));
          *(_DWORD *)((v3 >> 3) + 0x7FFF8218) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8220) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8228) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8230) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8238) = 0;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8240) = 0LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF837C) = 0LL;
          memset(
            (void *)((unsigned __int64)(v5 + 536862866) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * ((((_DWORD)v5 + 2147451456 - (((_DWORD)v5 + 2147451464) & 0xFFFFFFF8) + 324) & 0xFFFFFFF8) >> 3));
          *(_QWORD *)((v3 >> 3) + 0x7FFF8388) = 0LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8404) = 0LL;
          memset(
            (void *)((unsigned __int64)(v5 + 536862948) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * ((((_DWORD)v5 + 2147451784 - (((_DWORD)v5 + 2147451792) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
        }
        else
        {
          *(_QWORD *)v3 = 1172321806LL;
          __asan_stack_free_8(v3, 8288LL, v358);
        }
        return v2;
      case GALLERY_TYPE_CRYSTAL_LINK:
        v256 = (_DWORD *)(((v3 + 7584) >> 3) + 2147450880);
        *v256 = 0;
        v256[1] = 0;
        v256[2] = 0;
        GalleryCrystalLinkParam::GalleryCrystalLinkParam((GalleryCrystalLinkParam *const)(v3 + 7584));
        if ( std::vector<std::string>::size(&config->param) > 1 )
        {
          *(_DWORD *)(((v3 + 5408) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 368);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 5408),
            ":",
            (const std::allocator<char> *)(v3 + 368));
          *(_DWORD *)(((v3 + 5344) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 352);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 5344),
            ",",
            (const std::allocator<char> *)(v3 + 352));
          v260 = std::vector<std::string>::operator[](&config->param, 0LL);
          v261 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                   v260,
                   (const std::string *)(v3 + 5344),
                   (const std::string *)(v3 + 5408),
                   (std::map<unsigned int,unsigned int> *)(v3 + 7584),
                   0) != 0;
          std::string::~string((void *)(v3 + 5344));
          *(_DWORD *)(((v3 + 5344) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 352);
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v3 + 5408));
          *(_DWORD *)(((v3 + 5408) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 368);
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
          if ( v261 )
          {
            *(_DWORD *)(((v3 + 5472) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 5472) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 5503) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 5503) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 5472, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 5472),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              354);
            v262 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 5472),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v263 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     v262,
                     (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v263, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5472));
            *(_DWORD *)(((v3 + 5472) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v259 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 5600) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 400);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 5600),
              ":",
              (const std::allocator<char> *)(v3 + 400));
            *(_DWORD *)(((v3 + 5536) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 384);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 5536),
              ",",
              (const std::allocator<char> *)(v3 + 384));
            v264 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v265 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                     v264,
                     (const std::string *)(v3 + 5536),
                     (const std::string *)(v3 + 5600),
                     (std::map<unsigned int,unsigned int> *)(v3 + 7632),
                     0) != 0;
            std::string::~string((void *)(v3 + 5536));
            *(_DWORD *)(((v3 + 5536) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 384);
            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 5600));
            *(_DWORD *)(((v3 + 5600) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 400);
            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
            if ( v265 )
            {
              *(_DWORD *)(((v3 + 5664) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 5664) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 5695) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 5695) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 5664, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 5664),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                359);
              v266 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 5664),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v267 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v266,
                       (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v267, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5664));
              *(_DWORD *)(((v3 + 5664) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v259 = 0;
            }
            else
            {
              v268 = std::move<GalleryCrystalLinkParam &>((GalleryCrystalLinkParam *)(v3 + 7584));
              v271 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryCrystalLinkParam>(
                       &this->gallery_param_map,
                       id,
                       v268,
                       v269,
                       v270);
              if ( !v271.second )
              {
                *(_DWORD *)(((v3 + 5728) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 5728) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 5759) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 5759) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 5728, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 5728),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  364);
                v272 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 5728),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v273 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                         v272,
                         (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v273, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5728));
                *(_DWORD *)(((v3 + 5728) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v259 = 0;
              }
              else
              {
                v259 = 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 5280) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 5280) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 5311) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 5311) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 5280, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 5280),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            349);
          v257 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 5280),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v258 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v257,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v258, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5280));
          *(_DWORD *)(((v3 + 5280) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v259 = 0;
        }
        GalleryCrystalLinkParam::~GalleryCrystalLinkParam((GalleryCrystalLinkParam *const)(v3 + 7584));
        v274 = (_DWORD *)(((v3 + 7584) >> 3) + 2147450880);
        *v274 = -117901064;
        v274[1] = -117901064;
        v274[2] = -117901064;
        if ( v259 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_LUMINANCE_STONE_CHALLENGE:
        v275 = ((v3 + 7984) >> 3) + 2147450880;
        *(_DWORD *)v275 = 0;
        *(_DWORD *)(v275 + 4) = 0;
        *(_DWORD *)(v275 + 8) = 0;
        *(_BYTE *)(v275 + 12) = 0;
        GalleryLuminanceStoneChallengeParam::GalleryLuminanceStoneChallengeParam((GalleryLuminanceStoneChallengeParam *const)(v3 + 7984));
        if ( std::vector<std::string>::size(&config->param) > 2 )
        {
          *(_DWORD *)(((v3 + 5920) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 432);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 5920),
            ":",
            (const std::allocator<char> *)(v3 + 432));
          *(_DWORD *)(((v3 + 5856) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 416);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 5856),
            ",",
            (const std::allocator<char> *)(v3 + 416));
          v280 = std::vector<std::string>::operator[](&config->param, 0LL);
          v281 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                   v280,
                   (const std::string *)(v3 + 5856),
                   (const std::string *)(v3 + 5920),
                   (std::map<unsigned int,unsigned int> *)(v3 + 7984),
                   0) != 0;
          std::string::~string((void *)(v3 + 5856));
          *(_DWORD *)(((v3 + 5856) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 416);
          *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v3 + 5920));
          *(_DWORD *)(((v3 + 5920) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 432);
          *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
          if ( v281 )
          {
            *(_DWORD *)(((v3 + 5984) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 5984) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 6015) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 6015) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 5984, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 5984),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              379);
            v282 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 5984),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v283 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     v282,
                     (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v283, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5984));
            *(_DWORD *)(((v3 + 5984) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v279 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 6112) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 464);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 6112),
              ":",
              (const std::allocator<char> *)(v3 + 464));
            *(_DWORD *)(((v3 + 6048) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 448);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 6048),
              ",",
              (const std::allocator<char> *)(v3 + 448));
            v284 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v285 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                     v284,
                     (const std::string *)(v3 + 6048),
                     (const std::string *)(v3 + 6112),
                     (std::map<unsigned int,unsigned int> *)(v3 + 8032),
                     0) != 0;
            std::string::~string((void *)(v3 + 6048));
            *(_DWORD *)(((v3 + 6048) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 448);
            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 6112));
            *(_DWORD *)(((v3 + 6112) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 464);
            *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
            if ( v285 )
            {
              *(_DWORD *)(((v3 + 6176) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 6176) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 6207) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 6207) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 6176, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 6176),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                384);
              v286 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 6176),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v287 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v286,
                       (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v287, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6176));
              *(_DWORD *)(((v3 + 6176) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v279 = 0;
            }
            else
            {
              v288 = std::vector<std::string>::operator[](&config->param, 2uLL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v288, (unsigned int *)(v3 + 8080), 1) )
              {
                *(_DWORD *)(((v3 + 6240) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 6240) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 6271) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 6271) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 6240, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 6240),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  389);
                v289 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 6240),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v290 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                         v289,
                         (const char (*)[31])"[GALLERY] strToNum failed, id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v290, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6240));
                *(_DWORD *)(((v3 + 6240) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v279 = 0;
              }
              else
              {
                v291 = std::move<GalleryLuminanceStoneChallengeParam &>((GalleryLuminanceStoneChallengeParam *)(v3 + 7984));
                v294 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryLuminanceStoneChallengeParam>(
                         &this->gallery_param_map,
                         id,
                         v291,
                         v292,
                         v293);
                if ( !v294.second )
                {
                  *(_DWORD *)(((v3 + 6304) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 6304) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 6335) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 6335) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 6304, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 6304),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GalleryExcelConfig.cpp",
                    "rewriteGalleryExcelConfig",
                    394);
                  v295 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 6304),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v296 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                           v295,
                           (const char (*)[33])"[GALLERY] duplicated gallery id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v296, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6304));
                  *(_DWORD *)(((v3 + 6304) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v279 = 0;
                }
                else
                {
                  v279 = 1;
                }
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 5792) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 5792) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 5823) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 5823) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 5792, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 5792),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            374);
          v276 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 5792),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v277 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v276,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          v278 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v277, id);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v278,
            (const char (*)[20])". ignore it for now");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 5792));
          *(_DWORD *)(((v3 + 5792) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v279 = 0;
        }
        GalleryLuminanceStoneChallengeParam::~GalleryLuminanceStoneChallengeParam((GalleryLuminanceStoneChallengeParam *const)(v3 + 7984));
        v297 = ((v3 + 7984) >> 3) + 2147450880;
        *(_DWORD *)v297 = -117901064;
        *(_DWORD *)(v297 + 4) = -117901064;
        *(_DWORD *)(v297 + 8) = -117901064;
        *(_BYTE *)(v297 + 12) = -8;
        if ( v279 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_INSTABLE_SPRAY:
        v298 = (_DWORD *)(((v3 + 7712) >> 3) + 2147450880);
        *v298 = 0;
        v298[1] = 0;
        v298[2] = 0;
        GalleryInstableSprayParam::GalleryInstableSprayParam((GalleryInstableSprayParam *const)(v3 + 7712));
        if ( std::vector<std::string>::size(&config->param) > 1 )
        {
          *(_DWORD *)(((v3 + 6496) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 496);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 6496),
            ":",
            (const std::allocator<char> *)(v3 + 496));
          *(_DWORD *)(((v3 + 6432) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 480);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 6432),
            ",",
            (const std::allocator<char> *)(v3 + 480));
          v302 = std::vector<std::string>::operator[](&config->param, 0LL);
          v303 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                   v302,
                   (const std::string *)(v3 + 6432),
                   (const std::string *)(v3 + 6496),
                   (std::map<unsigned int,unsigned int> *)(v3 + 7712),
                   0) != 0;
          std::string::~string((void *)(v3 + 6432));
          *(_DWORD *)(((v3 + 6432) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 480);
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v3 + 6496));
          *(_DWORD *)(((v3 + 6496) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 496);
          *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
          if ( v303 )
          {
            *(_DWORD *)(((v3 + 6560) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 6560) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 6591) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 6591) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 6560, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 6560),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              409);
            v304 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 6560),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v305 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     v304,
                     (const char (*)[33])"[GALLERY] splitToMap failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v305, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6560));
            *(_DWORD *)(((v3 + 6560) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v301 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 6688) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 528);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 6688),
              ":",
              (const std::allocator<char> *)(v3 + 528));
            *(_DWORD *)(((v3 + 6624) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v3 + 512);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v3 + 6624),
              ",",
              (const std::allocator<char> *)(v3 + 512));
            v306 = std::vector<std::string>::operator[](&config->param, 1uLL);
            v307 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                     v306,
                     (const std::string *)(v3 + 6624),
                     (const std::string *)(v3 + 6688),
                     (std::map<unsigned int,unsigned int> *)(v3 + 7760),
                     0) != 0;
            std::string::~string((void *)(v3 + 6624));
            *(_DWORD *)(((v3 + 6624) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 512);
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v3 + 6688));
            *(_DWORD *)(((v3 + 6688) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v3 + 528);
            *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
            if ( v307 )
            {
              *(_DWORD *)(((v3 + 6752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 6752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 6783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 6783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 6752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 6752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                414);
              v308 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 6752),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v309 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v308,
                       (const char (*)[33])"[GALLERY] splitToMap failed, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v309, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6752));
              *(_DWORD *)(((v3 + 6752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v301 = 0;
            }
            else
            {
              v310 = std::move<GalleryInstableSprayParam &>((GalleryInstableSprayParam *)(v3 + 7712));
              v313 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryInstableSprayParam>(
                       &this->gallery_param_map,
                       id,
                       v310,
                       v311,
                       v312);
              if ( !v313.second )
              {
                *(_DWORD *)(((v3 + 6816) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 6816) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 6847) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 6847) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 6816, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 6816),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  419);
                v314 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 6816),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v315 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                         v314,
                         (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v315, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6816));
                *(_DWORD *)(((v3 + 6816) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v301 = 0;
              }
              else
              {
                v301 = 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 6368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 6368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 6399) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 6399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 6368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 6368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            404);
          v299 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 6368),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v300 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v299,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v300, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6368));
          *(_DWORD *)(((v3 + 6368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v301 = 0;
        }
        GalleryInstableSprayParam::~GalleryInstableSprayParam((GalleryInstableSprayParam *const)(v3 + 7712));
        v316 = (_DWORD *)(((v3 + 7712) >> 3) + 2147450880);
        *v316 = -117901064;
        v316[1] = -117901064;
        v316[2] = -117901064;
        if ( v301 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING:
        *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&config->control_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->control_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->control_group_id);
        }
        control_group_id = config->control_group_id;
        v318 = *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000);
        if ( v318 != 0 && v318 <= 3 )
        {
          LOBYTE(v7) = v318 != 0;
          __asan_report_store4(v3 + 544, v7);
        }
        *(_DWORD *)(v3 + 544) = control_group_id;
        p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 544);
        if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v3 + 544)) )
        {
          v322 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 6880) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 6880) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 6911) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 6911) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 6880, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 6880),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            429);
          v320 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 6880),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v321 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                   v320,
                   (const char (*)[82])byte_1AD7A840);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v321, (const unsigned int *)(v3 + 544));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6880));
          *(_DWORD *)(((v3 + 6880) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v322 = 0;
        }
        *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
        if ( v322 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      case GALLERY_TYPE_FUNGUS_FIGHTING_CAPTURE:
        *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 560, v7);
        *(_DWORD *)(v3 + 560) = 0;
        if ( std::vector<std::string>::size(&config->param) )
        {
          v326 = std::vector<std::string>::operator[](&config->param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v326, (unsigned int *)(v3 + 560), 1) )
          {
            *(_DWORD *)(((v3 + 7008) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 7008) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 7039) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 7039) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 7008, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 7008),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "rewriteGalleryExcelConfig",
              444);
            v327 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 7008),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v328 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                     v327,
                     (const char (*)[31])"[GALLERY] strToNum failed, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v328, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 7008));
            *(_DWORD *)(((v3 + 7008) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v325 = 0;
          }
          else
          {
            v329 = *(unsigned __int8 *)(((v3 + 560) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v329 != 0 && (char)v329 <= 3 )
              __asan_report_load4(v3 + 560);
            if ( *(_DWORD *)(v3 + 560)
              && !data::ActivityFungusFighterExcelConfigMgrBase::findFungusCampExcelConfig(
                    &txt_config_mgr->activity_fungus_fighter_config_mgr,
                    *(unsigned int *)(v3 + 560)) )
            {
              *(_DWORD *)(((v3 + 7072) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 7072) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 7103) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 7103) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 7072, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 7072),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "rewriteGalleryExcelConfig",
                449);
              v331 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 7072),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v332 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       v331,
                       (const char (*)[33])"[GALLERY] invalid camp_id param:");
              v333 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v332,
                       (const unsigned int *)(v3 + 560));
              v334 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v333, (const char (*)[6])", id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v334, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 7072));
              *(_DWORD *)(((v3 + 7072) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v325 = 0;
            }
            else
            {
              v335 = std::move<GalleryFungusFighterCaptureParam &>((GalleryFungusFighterCaptureParam *)(v3 + 560));
              v338 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,GalleryFungusFighterCaptureParam>(
                       &this->gallery_param_map,
                       id,
                       v335,
                       v336,
                       v337);
              if ( !v338.second )
              {
                *(_DWORD *)(((v3 + 7136) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 7136) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 7167) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 7167) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 7136, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 7136),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "rewriteGalleryExcelConfig",
                  454);
                v339 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 7136),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v340 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                         v339,
                         (const char (*)[33])"[GALLERY] duplicated gallery id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v340, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 7136));
                *(_DWORD *)(((v3 + 7136) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v325 = 0;
              }
              else
              {
                v325 = 1;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 6944) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 6944) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 6975) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 6975) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 6944, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 6944),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "rewriteGalleryExcelConfig",
            439);
          v323 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 6944),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v324 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                   v323,
                   (const char (*)[37])"[GALLERY] param size not enough, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v324, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 6944));
          *(_DWORD *)(((v3 + 6944) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v325 = 0;
        }
        *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
        if ( v325 == 1 )
          goto LABEL_405;
        v37 = 0;
        goto LABEL_407;
      default:
        *(_DWORD *)(((v3 + 7200) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 7200) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 7231) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 7231) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 7200, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 7200),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "rewriteGalleryExcelConfig",
          504);
        v341 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 7200),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v342 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 v341,
                 (const char (*)[43])"[GALLERY] un-supported gallery type, type:");
        common::milog::MiLogStream::operator<<<data::GalleryType,(data::GalleryType*)0>(v342, &config->type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 7200));
        v2 = -1;
        v37 = 0;
        goto LABEL_407;
    }
  }
};

// Line 512: range 000000001445CD5E-0000000014460B86
int32_t __cdecl GalleryExcelConfigMgr::checkGalleryExcelConfig(
        GalleryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_scene_id; // rax
  __int64 revive_point_config_id; // rsi
  __int64 scene_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  char *v38; // rsi
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  char *v45; // rsi
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  char *v52; // rsi
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  _BOOL4 v71; // eax
  __int64 transfer_group_id; // rsi
  int SceneIdByGroupId; // edx
  char v74; // al
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  __int64 v77; // rsi
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rdx
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::GalleryExcelConfig> >::type *v86; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rdx
  int v94; // eax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rdx
  unsigned int *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rdx
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  int v106; // edx
  unsigned __int64 v107; // rax
  const unsigned int *M_current; // rsi
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rdx
  char *v113; // rsi
  unsigned int *v114; // rax
  int *v115; // rdx
  int v116; // ecx
  char v117; // al
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rdx
  int v123; // edx
  unsigned __int64 v124; // rdx
  int v125; // eax
  const unsigned int *__lasta; // [rsp+8h] [rbp-AB8h]
  std::set<unsigned int>::size_type __lastb; // [rsp+8h] [rbp-AB8h]
  _BOOL4 __last; // [rsp+8h] [rbp-AB8h]
  int32_t ret; // [rsp+2Ch] [rbp-A94h]
  LuaConfigMgr *lua_config_mgr; // [rsp+30h] [rbp-A90h]
  JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-A88h]
  data::GalleryExcelConfigMap *__for_range; // [rsp+40h] [rbp-A80h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::reference v134; // [rsp+48h] [rbp-A78h]
  std::tuple_element<0,std::pair<unsigned int const,data::GalleryExcelConfig> >::type *id; // [rsp+50h] [rbp-A70h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GalleryExcelConfig> >::type *config; // [rsp+58h] [rbp-A68h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+60h] [rbp-A60h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A58h]
  const GroupScriptConfig *group_script_config_ptr_0; // [rsp+78h] [rbp-A48h]
  const data::ConfigAbilityGroup *config_ability_group_ptr; // [rsp+80h] [rbp-A40h]
  const std::vector<std::string> *__for_range_1; // [rsp+88h] [rbp-A38h]
  const std::vector<std::string> *__for_range_2; // [rsp+90h] [rbp-A30h]
  const std::vector<std::string> *__for_range_3; // [rsp+98h] [rbp-A28h]
  const std::vector<std::string> *__for_range_4; // [rsp+A0h] [rbp-A20h]
  const GroupScriptConfig *group_config_ptr; // [rsp+A8h] [rbp-A18h]
  const SceneScriptConfig *scene_config_ptr_0; // [rsp+B0h] [rbp-A10h]
  const std::vector<unsigned int> *__for_range_5; // [rsp+B8h] [rbp-A08h]
  const unsigned int *config_id; // [rsp+C0h] [rbp-A00h]
  const PointScriptConfig *point_config_ptr; // [rsp+C8h] [rbp-9F8h]
  const std::vector<unsigned int> *__for_range_6; // [rsp+D0h] [rbp-9F0h]
  uint32_t *group_id; // [rsp+D8h] [rbp-9E8h]
  const std::vector<unsigned int> *__for_range_7; // [rsp+E8h] [rbp-9D8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference ab_2; // [rsp+F0h] [rbp-9D0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr_3; // [rsp+F8h] [rbp-9C8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference ab_1; // [rsp+100h] [rbp-9C0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr_2; // [rsp+108h] [rbp-9B8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference ab_0; // [rsp+110h] [rbp-9B0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr_1; // [rsp+118h] [rbp-9A8h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference ab; // [rsp+120h] [rbp-9A0h]
  const data::ConfigAbilityGroup *config_ability_group_ptr_0; // [rsp+128h] [rbp-998h]
  char v161[2448]; // [rsp+130h] [rbp-990h] BYREF

  v3 = (unsigned __int64)v161;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2400LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "48 32 4 12 group_id:526 48 4 12 scene_id:677 64 4 23 gallery_stop_reason:730 80 8 15 __for_begin"
                        ":516 112 8 13 __for_end:516 144 8 15 __for_begin:526 176 8 13 __for_end:526 208 8 15 __for_begin"
                        ":582 240 8 13 __for_end:582 272 8 15 __for_begin:602 304 8 13 __for_end:602 336 8 15 __for_begin"
                        ":621 368 8 13 __for_end:621 400 8 15 __for_begin:640 432 8 13 __for_end:640 464 8 15 __for_begin"
                        ":697 496 8 13 __for_end:697 528 8 15 __for_begin:712 560 8 13 __for_end:712 592 8 15 __for_begin"
                        ":730 624 8 13 __for_end:730 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <u"
                        "nknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 "
                        "<unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <unknown> 1488 3"
                        "2 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9 <unknown> 18"
                        "08 32 9 <unknown> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <unknown> 2064 32 9 <unknown"
                        "> 2128 32 9 <unknown> 2192 32 9 <unknown> 2256 32 9 <unknown> 2320 48 35 success_gallery_stop_reason_set:724";
  *(_QWORD *)(v3 + 16) = GalleryExcelConfigMgr::checkGalleryExcelConfig;
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
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = 62194;
  v5[536862737] = -234881024;
  v5[536862738] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862753] = -219021312;
  v5[536862754] = 62194;
  v5[536862755] = -219021312;
  v5[536862756] = 62194;
  v5[536862757] = -219021312;
  v5[536862758] = 62194;
  v5[536862759] = -219021312;
  v5[536862760] = 62194;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862763] = -219021312;
  v5[536862764] = 62194;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862771] = -219021312;
  v5[536862772] = 62194;
  v5[536862773] = -219021312;
  v5[536862774] = 62194;
  v5[536862775] = -219021312;
  v5[536862776] = 62194;
  v5[536862777] = -219021312;
  v5[536862778] = 62194;
  v5[536862779] = -219021312;
  v5[536862780] = 62194;
  v5[536862781] = -219021312;
  v5[536862782] = 62194;
  v5[536862783] = -219021312;
  v5[536862784] = 62194;
  v5[536862785] = -219021312;
  v5[536862786] = 62194;
  v5[536862787] = -219021312;
  v5[536862788] = 62194;
  v5[536862789] = -219021312;
  v5[536862790] = 62194;
  v5[536862791] = -219021312;
  v5[536862792] = 62194;
  v5[536862794] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  ret = 0;
  __for_range = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GalleryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v3 + 112)) )
  {
    v134 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v3 + 80));
    id = std::get<0ul,unsigned int const,data::GalleryExcelConfig>(v134);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GalleryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GalleryExcelConfig>(v134);
    p_scene_id = &config->scene_id;
    revive_point_config_id = (((_BYTE)config + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    if ( config->scene_id )
    {
      scene_id = config->scene_id;
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, scene_id);
      if ( !scene_config_ptr )
      {
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          523);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 656),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"scene_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->scene_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_250;
      }
      __for_range_0 = &config->group_id;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, scene_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 176, scene_id);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v13 = (char *)(v3 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176)) )
        {
          v21 = 1;
          goto LABEL_33;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
        v15 = (int *)v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = *v15;
        v17 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          LOBYTE(v13) = v17 != 0;
          __asan_report_store4(v3 + 32, v13);
        }
        *(_DWORD *)(v3 + 32) = v16;
        if ( !SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, *(unsigned int *)(v3 + 32)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144));
      }
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 720),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GalleryExcelConfig.cpp",
        "checkGalleryExcelConfig",
        531);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 720),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])"group_id: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v21 = 0;
LABEL_33:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v21 != 1 )
      {
        v12 = 0;
        goto LABEL_250;
      }
      revive_point_config_id = (((_BYTE)config + 100) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->revive_point_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->revive_point_group_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->revive_point_group_id);
      }
      if ( config->revive_point_group_id )
      {
        group_script_config_ptr_0 = SceneScriptConfig::findGroupScriptConfig(
                                      scene_config_ptr,
                                      config->revive_point_group_id);
        if ( !group_script_config_ptr_0 )
        {
          *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 784, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 784),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            540);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 784),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v22,
                  (const char (*)[24])"revive_point_group_id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  &config->revive_point_group_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
          *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
          goto LABEL_250;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->revive_point_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->revive_point_config_id);
        }
        revive_point_config_id = config->revive_point_config_id;
        if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr_0, revive_point_config_id) )
        {
          *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 848, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 848),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            545);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 848),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v25,
                  (const char (*)[25])"revive_point_config_id: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  &config->revive_point_config_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
          *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
          goto LABEL_250;
        }
      }
    }
    if ( *(char *)(((unsigned __int64)&config->is_enable_single_prepare >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_enable_single_prepare, revive_point_config_id, &config->is_enable_single_prepare);
    if ( config->is_enable_single_prepare )
    {
      revive_point_config_id = (((_BYTE)config + 44) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->single_prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->single_prepare_time >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->single_prepare_time);
      }
      if ( !config->single_prepare_time )
      {
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          554);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v28, (const char (*)[34])byte_1AD7B020);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_250;
      }
    }
    if ( *(char *)(((unsigned __int64)&config->is_enable_mp_prepare >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_enable_mp_prepare, revive_point_config_id, &config->is_enable_mp_prepare);
    if ( config->is_enable_mp_prepare )
    {
      revive_point_config_id = (((_BYTE)config + 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->mp_prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->mp_prepare_time >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->mp_prepare_time);
      }
      if ( !config->mp_prepare_time )
      {
        *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 976, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 976),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          562);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 976),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v30, (const char (*)[37])byte_1AD7B080);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
        *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_250;
      }
    }
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      config_ability_group_ptr = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &config->ability_group);
      if ( !config_ability_group_ptr )
      {
        *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1040) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1040, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1040),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          571);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1040),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v32, (const char (*)[43])byte_1AD7B0E0);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &config->ability_group);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
        *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v12 = 1;
        goto LABEL_250;
      }
      revive_point_config_id = (((_BYTE)config_ability_group_ptr + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ability_group_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr->ability_group_target_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ability_group_ptr->ability_group_target_type);
      }
      if ( config_ability_group_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
      {
        *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          577);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1104),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v34, (const char (*)[63])byte_1AD7B140);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
        v37 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v36, (const char (*)[18])byte_1AD7B1A0);
        revive_point_config_id = (__int64)&config->ability_group;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &config->ability_group);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
        *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    __for_range_1 = &config->selectable_ability_groups;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, revive_point_config_id);
    *(std::vector<std::string>::const_iterator *)(v3 + 208) = std::vector<std::string>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, revive_point_config_id);
    *(std::vector<std::string>::const_iterator *)(v3 + 240) = std::vector<std::string>::end(__for_range_1);
    while ( 1 )
    {
      v38 = (char *)(v3 + 240);
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 208),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 240)) )
        break;
      ab = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 208));
      if ( (unsigned __int8)std::string::empty() != 1 )
      {
        config_ability_group_ptr_0 = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, ab);
        if ( config_ability_group_ptr_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_0->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ability_group_ptr_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_0->ability_group_target_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ability_group_ptr_0->ability_group_target_type);
          }
          if ( config_ability_group_ptr_0->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
          {
            *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1232, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1232),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "checkGalleryExcelConfig",
              595);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1232),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v41,
                    (const char (*)[63])byte_1AD7B140);
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
            v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v43,
                    (const char (*)[18])byte_1AD7B1A0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, ab);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
            *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1168) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1168, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1168),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            589);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1168),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v39, (const char (*)[42])byte_1AD7B1E0);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, ab);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
          *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 208));
    }
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &config->ability_group_list;
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 272, v38);
    *(std::vector<std::string>::const_iterator *)(v3 + 272) = std::vector<std::string>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 304, v38);
    *(std::vector<std::string>::const_iterator *)(v3 + 304) = std::vector<std::string>::end(__for_range_2);
    while ( 1 )
    {
      v45 = (char *)(v3 + 304);
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 272),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 304)) )
        break;
      ab_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 272));
      if ( (unsigned __int8)std::string::empty() != 1 )
      {
        config_ability_group_ptr_1 = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, ab_0);
        if ( config_ability_group_ptr_1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_1->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ability_group_ptr_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_1->ability_group_target_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ability_group_ptr_1->ability_group_target_type);
          }
          if ( config_ability_group_ptr_1->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
          {
            *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1360) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1360, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1360),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "checkGalleryExcelConfig",
              615);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1360),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v48,
                    (const char (*)[63])byte_1AD7B140);
            v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, id);
            v51 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v50,
                    (const char (*)[18])byte_1AD7B1A0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, ab_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
            *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1296, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1296),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            609);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1296),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v46, (const char (*)[42])byte_1AD7B1E0);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, ab_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
          *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 272));
    }
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
    __for_range_3 = &config->team_ability_group_list;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 336, v45);
    *(std::vector<std::string>::const_iterator *)(v3 + 336) = std::vector<std::string>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, v45);
    *(std::vector<std::string>::const_iterator *)(v3 + 368) = std::vector<std::string>::end(__for_range_3);
    while ( 1 )
    {
      v52 = (char *)(v3 + 368);
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 336),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 368)) )
        break;
      ab_1 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 336));
      if ( (unsigned __int8)std::string::empty() != 1 )
      {
        config_ability_group_ptr_2 = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, ab_1);
        if ( config_ability_group_ptr_2 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_2->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ability_group_ptr_2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_2->ability_group_target_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ability_group_ptr_2->ability_group_target_type);
          }
          if ( config_ability_group_ptr_2->ability_group_target_type != ABILITY_GROUP_TARGET_TEAM )
          {
            *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1488) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1488, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1488),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "checkGalleryExcelConfig",
              634);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1488),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v55,
                    (const char (*)[61])byte_1AD7B240);
            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, id);
            v58 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v57,
                    (const char (*)[18])byte_1AD7B1A0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, ab_1);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
            *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1424) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1424, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1424),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            628);
          v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1424),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v54 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v53, (const char (*)[42])byte_1AD7B1E0);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, ab_1);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
          *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 336));
    }
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    __for_range_4 = &config->selectable_team_ability_group_list;
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 400, v52);
    *(std::vector<std::string>::const_iterator *)(v3 + 400) = std::vector<std::string>::begin(__for_range_4);
    *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 432, v52);
    *(std::vector<std::string>::const_iterator *)(v3 + 432) = std::vector<std::string>::end(__for_range_4);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 400),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 432)) )
    {
      ab_2 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 400));
      if ( (unsigned __int8)std::string::empty() != 1 )
      {
        config_ability_group_ptr_3 = JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, ab_2);
        if ( config_ability_group_ptr_3 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_3->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ability_group_ptr_3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ability_group_ptr_3->ability_group_target_type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ability_group_ptr_3->ability_group_target_type);
          }
          if ( config_ability_group_ptr_3->ability_group_target_type != ABILITY_GROUP_TARGET_TEAM )
          {
            *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1616) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1616, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1616),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "checkGalleryExcelConfig",
              653);
            v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1616),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v62 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v61,
                    (const char (*)[61])byte_1AD7B240);
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, id);
            v64 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v63,
                    (const char (*)[18])byte_1AD7B1A0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, ab_2);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
            *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1552, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1552),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            647);
          v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1552),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v60 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v59, (const char (*)[42])byte_1AD7B1E0);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, ab_2);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
          *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 400));
    }
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_furniture_id);
    }
    if ( config->group_furniture_id )
      goto LABEL_158;
    if ( *(char *)(((unsigned __int64)&config->is_permit_input_in_prepare >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_permit_input_in_prepare, v3 + 432, &config->is_permit_input_in_prepare);
    if ( !config->is_permit_input_in_prepare )
    {
LABEL_158:
      if ( *(_BYTE *)(((unsigned __int64)&config->transfer_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->transfer_group_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->transfer_group_id);
      }
      if ( !config->transfer_group_id )
        goto LABEL_222;
      group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, config->transfer_group_id);
      if ( group_config_ptr )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&config->transfer_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->transfer_group_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->transfer_group_id);
        }
        transfer_group_id = config->transfer_group_id;
        SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, transfer_group_id);
        v74 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v74 != 0 && v74 <= 3 )
        {
          LOBYTE(transfer_group_id) = v74 != 0;
          __asan_report_store4(v3 + 48, transfer_group_id);
        }
        *(_DWORD *)(v3 + 48) = SceneIdByGroupId;
        if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->scene_id);
        }
        if ( config->scene_id == *(_DWORD *)(v3 + 48) )
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v77 = *(unsigned int *)(v3 + 48);
          scene_config_ptr_0 = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, v77);
          if ( scene_config_ptr_0 )
          {
            if ( std::vector<unsigned int>::empty(&config->transfer_config_id_list) )
            {
              *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1936) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1936, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1936),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "checkGalleryExcelConfig",
                693);
              v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1936),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v83 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      v82,
                      (const char (*)[66])byte_1AD7B4A0);
              v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v83,
                      &config->transfer_group_id);
              v85 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v84,
                      (const char (*)[15])", gallery_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1936));
              *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v71 = 0;
            }
            else
            {
              __for_range_5 = &config->transfer_config_id_list;
              *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 464, v77);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 464) = std::vector<unsigned int>::begin(__for_range_5);
              *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 496, v77);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 496) = std::vector<unsigned int>::end(__for_range_5);
              while ( 1 )
              {
                v86 = (std::tuple_element<0,std::pair<unsigned int const,data::GalleryExcelConfig> >::type *)(v3 + 496);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 464),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 496)) )
                {
                  v94 = 1;
                  goto LABEL_203;
                }
                v87 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 464));
                config_id = v87;
                if ( *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v87 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v87);
                }
                point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *config_id);
                if ( !point_config_ptr )
                {
                  *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 2000) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 2000, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 2000),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GalleryExcelConfig.cpp",
                    "checkGalleryExcelConfig",
                    702);
                  v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 2000),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v89 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          v88,
                          (const char (*)[39])byte_1AD7B520);
                  v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, config_id);
                  v91 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v90,
                          (const char (*)[11])", group_id");
                  v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v91,
                          &config->transfer_group_id);
                  v93 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v92,
                          (const char (*)[15])", gallery_id: ");
                  v86 = id;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2000));
                  *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v94 = 0;
                  goto LABEL_203;
                }
                if ( !SceneScriptConfig::isPosValid(scene_config_ptr_0, &point_config_ptr->pos) )
                  break;
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 464));
              }
              *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2064) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2064, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2064),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GalleryExcelConfig.cpp",
                "checkGalleryExcelConfig",
                707);
              v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 2064),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v96 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      v95,
                      (const char (*)[48])byte_1AD7B5C0);
              v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, config_id);
              v98 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v97,
                      (const char (*)[11])", group_id");
              v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v98,
                      &config->transfer_group_id);
              v100 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                       v99,
                       (const char (*)[15])", gallery_id: ");
              v86 = id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2064));
              *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v94 = 0;
LABEL_203:
              *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
              if ( v94 == 1 )
              {
                __for_range_6 = &config->transfer_pre_register_group_id_list;
                *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 528, v86);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 528) = std::vector<unsigned int>::begin(__for_range_6);
                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 560, v86);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 560) = std::vector<unsigned int>::end(__for_range_6);
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 528),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 560)) )
                  {
                    v106 = 1;
                    goto LABEL_219;
                  }
                  v101 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 528));
                  group_id = v101;
                  if ( *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v101 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v101);
                  }
                  if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *group_id) )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 528));
                }
                *(_DWORD *)(((v3 + 2128) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2128) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2159) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 2159) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2128, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2128),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GalleryExcelConfig.cpp",
                  "checkGalleryExcelConfig",
                  717);
                v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2128),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v103 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                         v102,
                         (const char (*)[49])byte_1AD7B620);
                v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, group_id);
                v105 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                         v104,
                         (const char (*)[15])", gallery_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2128));
                *(_DWORD *)(((v3 + 2128) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v106 = 0;
LABEL_219:
                *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
                v71 = v106 == 1;
              }
              else
              {
                v71 = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1872) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1872, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1872),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GalleryExcelConfig.cpp",
              "checkGalleryExcelConfig",
              687);
            v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1872),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v79 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    v78,
                    (const char (*)[55])byte_1AD7B440);
            v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v79,
                    (const unsigned int *)(v3 + 48));
            v81 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v80,
                    (const char (*)[15])", gallery_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1872));
            *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v71 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1808) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1808, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1808),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            680);
          v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1808),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v76 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v75, (const char (*)[76])byte_1AD7B3C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1808));
          *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v71 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1744) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1744, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1744),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GalleryExcelConfig.cpp",
          "checkGalleryExcelConfig",
          673);
        v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1744),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v68 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v67, (const char (*)[49])byte_1AD7B320);
        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &config->transfer_group_id);
        v70 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v69, (const char (*)[15])", gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1744));
        *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v71 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v71 )
      {
LABEL_222:
        v107 = ((v3 + 2320) >> 3) + 2147450880;
        *(_DWORD *)v107 = 0;
        *(_WORD *)(v107 + 4) = 0;
        __lasta = std::vector<unsigned int>::end(&config->success_gallery_stop_reasons)._M_current;
        M_current = std::vector<unsigned int>::begin(&config->success_gallery_stop_reasons)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v3 + 2320),
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lasta);
        __lastb = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 2320));
        if ( __lastb == std::vector<unsigned int>::size(&config->success_gallery_stop_reasons) )
        {
          __for_range_7 = &config->success_gallery_stop_reasons;
          *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 592, M_current);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 592) = std::vector<unsigned int>::begin(__for_range_7);
          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 624, M_current);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 624) = std::vector<unsigned int>::end(__for_range_7);
          while ( 1 )
          {
            v113 = (char *)(v3 + 624);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 592),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 624)) )
            {
              v123 = 1;
              goto LABEL_246;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v114 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 592));
            v115 = (int *)v114;
            if ( *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v114 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v114);
            }
            v116 = *v115;
            v117 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v117 != 0 && v117 <= 3 )
            {
              LOBYTE(v113) = v117 != 0;
              __asan_report_store4(v3 + 64, v113);
            }
            *(_DWORD *)(v3 + 64) = v116;
            if ( !*(_DWORD *)(v3 + 64) || !proto::GalleryStopReason_IsValid(*(_DWORD *)(v3 + 64)) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 592));
          }
          *(_DWORD *)(((v3 + 2256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 2287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            734);
          v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 2256),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v120 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                   v119,
                   (const char (*)[29])"invalid gallery_stop_reason:");
          v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v120,
                   (const unsigned int *)(v3 + 64));
          v122 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v121,
                   (const char (*)[13])" gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v122, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2256));
          *(_DWORD *)(((v3 + 2256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v123 = 0;
LABEL_246:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
          __last = v123 == 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 2192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2223) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 2223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GalleryExcelConfig.cpp",
            "checkGalleryExcelConfig",
            727);
          v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 2192),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v110 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   v109,
                   (const char (*)[34])"duplicate gallery_stop_reason in ");
          v111 = common::milog::MiLogStream::operator<<<unsigned int>(v110, &config->success_gallery_stop_reasons);
          v112 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v111,
                   (const char (*)[13])" gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v112, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2192));
          *(_DWORD *)(((v3 + 2192) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          __last = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2320));
        if ( __last )
          v12 = 2;
        else
          v12 = 0;
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GalleryExcelConfig.cpp",
        "checkGalleryExcelConfig",
        663);
      v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1680),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v66 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(v65, (const char (*)[85])byte_1AD7B2A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1680));
      *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
LABEL_250:
    v124 = ((v3 + 2320) >> 3) + 2147450880;
    *(_DWORD *)v124 = -117901064;
    *(_WORD *)(v124 + 4) = -1800;
    if ( !v12 )
    {
      v125 = 0;
      goto LABEL_254;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v3 + 80));
  }
  v125 = 1;
LABEL_254:
  if ( v125 == 1 )
    v2 = ret;
  if ( v161 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8124) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 300) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2400LL, v161);
  }
  return v2;
};
