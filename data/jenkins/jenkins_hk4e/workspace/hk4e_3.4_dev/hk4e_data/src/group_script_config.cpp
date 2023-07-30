// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/group_script_config.cpp

// Line 38: range 000000000CCC9660-000000000CCC9877
__int64 __fastcall GroupScriptConfig::addConfigId(GroupScriptConfig *const this, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 config_id:37 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::addConfigId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = config_id;
  v5 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
         &this->config_id_set,
         (unsigned int *)(v2 + 48),
         (unsigned int *)&this->config_id_set);
  if ( v5.second )
  {
    result = 0LL;
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
      "./src/group_script_config.cpp",
      "addConfigId",
      41);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[29])"config id repeat config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0xFFFFFFFFLL;
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

// Line 48: range 000000000CCC9878-000000000CCD6F88
int32_t __cdecl GroupScriptConfig::checkGroup(
        const GroupScriptConfig *const this,
        HK4EDesignConfig *config,
        const SceneScriptConfig *scene_script_config,
        const GroupInfoScriptConfig *group_script_config)
{
  int32_t v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t scene_id; // ecx
  uint32_t group_id; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  unsigned int *v17; // rax
  uint32_t *v18; // rdx
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
  unsigned int first; // ecx
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
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
  common::milog::MiLogStream *v54; // rax
  GrowCurveExcelConfigMgr *p_grow_curve_config_mgr; // rdi
  data::GrowCurveType *p_grow_curve; // rax
  data::GrowCurveType grow_curve; // edx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  const char *v67; // rax
  GrowCurveExcelConfigMgr *p_level; // rdi
  data::GrowCurveType *v69; // rax
  data::GrowCurveType v70; // edx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r14
  const char *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  int v86; // edx
  JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t area_id; // edx
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  uint32_t v115; // ecx
  uint32_t v116; // r8d
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  DungeonExcelConfigMgr *v120; // rcx
  char v121; // al
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  std::unordered_map<std::string,VariableScriptConfig> *p_variable_map; // rdx
  const std::unordered_map<std::string,VariableScriptConfig>::key_type *p_pose_logic_state; // rcx
  std::unordered_map<std::string,VariableScriptConfig> *v130; // rdx
  std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true>::pointer v131; // rax
  char v132; // dl
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  unsigned __int64 v141; // rax
  uint32_t pose_id; // ecx
  std::_Rb_tree_const_iterator<std::pair<int const,unsigned int> >::reference v143; // rdx
  unsigned int *v144; // rax
  int *v145; // rdx
  int v146; // ecx
  JsonConfigMgr *p_monster_id; // rdi
  uint32_t v148; // ecx
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
  unsigned __int64 v159; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::reference v160; // rax
  unsigned int v161; // ecx
  NpcExcelConfigMgr *p_npc_config_mgr; // rcx
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
  JsonConfigMgr *p_area_id; // rdi
  uint32_t v178; // edx
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rax
  unsigned int v187; // ecx
  unsigned __int64 v188; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v190; // rax
  common::milog::MiLogStream *v191; // rax
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rax
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  const std::map<data::EntityType,proto::InteractType>::key_type *p_type; // rdx
  bool v199; // al
  std::_Rb_tree_const_iterator<std::pair<const data::EntityType,proto::InteractType> >::pointer v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // rax
  common::milog::MiLogStream *v203; // rax
  common::milog::MiLogStream *v204; // rax
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // rax
  char v207; // r14
  std::unordered_map<unsigned int,GadgetScriptConfig> *p_gadget_config_map; // rdx
  std::unordered_map<unsigned int,GadgetScriptConfig> *v209; // rdx
  const std::unordered_map<unsigned int,GadgetScriptConfig>::key_type *p_owner_config_id; // rcx
  char v211; // dl
  common::milog::MiLogStream *v212; // rax
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  common::milog::MiLogStream *v215; // rax
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // rax
  common::milog::MiLogStream *v218; // rax
  common::milog::MiLogStream *v219; // rax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rax
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // rax
  common::milog::MiLogStream *v224; // rax
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // rax
  JsonConfigMgr *v227; // rdi
  uint32_t v228; // edx
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // rax
  common::milog::MiLogStream *v232; // rax
  common::milog::MiLogStream *v233; // rax
  common::milog::MiLogStream *v234; // rax
  common::milog::MiLogStream *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rax
  common::milog::MiLogStream *v238; // rax
  common::milog::MiLogStream *v239; // rax
  int v240; // r14d
  common::milog::MiLogStream *v241; // rax
  common::milog::MiLogStream *v242; // rax
  common::milog::MiLogStream *v243; // rax
  common::milog::MiLogStream *v244; // rax
  common::milog::MiLogStream *v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rax
  common::milog::MiLogStream *v248; // rax
  common::milog::MiLogStream *v249; // rax
  common::milog::MiLogStream *v250; // rax
  common::milog::MiLogStream *v251; // rax
  common::milog::MiLogStream *v252; // rax
  int v253; // r14d
  char v254; // al
  common::milog::MiLogStream *v255; // rax
  common::milog::MiLogStream *v256; // rax
  common::milog::MiLogStream *v257; // rax
  common::milog::MiLogStream *v258; // rax
  common::milog::MiLogStream *v259; // rax
  common::milog::MiLogStream *v260; // rax
  common::milog::MiLogStream *v261; // rax
  common::milog::MiLogStream *v262; // rax
  common::milog::MiLogStream *v263; // rax
  common::milog::MiLogStream *v264; // rax
  common::milog::MiLogStream *v265; // rax
  common::milog::MiLogStream *v266; // rax
  common::milog::MiLogStream *v267; // rax
  common::milog::MiLogStream *v268; // rax
  MonsterExcelConfigMgr *v269; // rcx
  common::milog::MiLogStream *v270; // rax
  common::milog::MiLogStream *v271; // rax
  common::milog::MiLogStream *v272; // rax
  DungeonExcelConfigMgr *v273; // rcx
  unsigned int *v274; // rax
  uint32_t *v275; // rdx
  common::milog::MiLogStream *v276; // rax
  common::milog::MiLogStream *v277; // rax
  common::milog::MiLogStream *v278; // rax
  common::milog::MiLogStream *v279; // rax
  common::milog::MiLogStream *v280; // rax
  common::milog::MiLogStream *v281; // rax
  common::milog::MiLogStream *v282; // rax
  common::milog::MiLogStream *v284; // rax
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
  LuaConfigMgr *v295; // rdi
  common::milog::MiLogStream *v297; // rax
  common::milog::MiLogStream *v298; // rax
  common::milog::MiLogStream *v299; // rax
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // rax
  common::milog::MiLogStream *v302; // rax
  common::milog::MiLogStream *v303; // rax
  common::milog::MiLogStream *v305; // rax
  common::milog::MiLogStream *v306; // rax
  common::milog::MiLogStream *v307; // rax
  common::milog::MiLogStream *v308; // rax
  common::milog::MiLogStream *v309; // rax
  common::milog::MiLogStream *v310; // rax
  common::milog::MiLogStream *v311; // rax
  uint32_t v312; // ecx
  uint32_t v313; // r8d
  common::milog::MiLogStream *v314; // rax
  common::milog::MiLogStream *v315; // rax
  common::milog::MiLogStream *v316; // rax
  common::milog::MiLogStream *v317; // rax
  common::milog::MiLogStream *v318; // rax
  data::InteractActionType action_type; // eax
  GadgetExcelConfigMgr *v320; // rcx
  char v321; // al
  common::milog::MiLogStream *v322; // rax
  common::milog::MiLogStream *v323; // rax
  common::milog::MiLogStream *v324; // rax
  common::milog::MiLogStream *v325; // rax
  common::milog::MiLogStream *v326; // rax
  common::milog::MiLogStream *v327; // rax
  common::milog::MiLogStream *v328; // rax
  common::milog::MiLogStream *v329; // rax
  common::milog::MiLogStream *v330; // rax
  common::milog::MiLogStream *v331; // rax
  common::milog::MiLogStream *v332; // rax
  common::milog::MiLogStream *v333; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v334; // rax
  uint32_t v335; // edx
  common::milog::MiLogStream *v336; // rax
  common::milog::MiLogStream *v337; // rax
  common::milog::MiLogStream *v338; // rax
  common::milog::MiLogStream *v339; // rax
  common::milog::MiLogStream *v340; // rax
  common::milog::MiLogStream *v341; // rax
  common::milog::MiLogStream *v342; // rax
  common::milog::MiLogStream *v343; // rax
  common::milog::MiLogStream *v344; // rax
  common::milog::MiLogStream *v345; // rax
  common::milog::MiLogStream *v346; // rax
  int v347; // r14d
  int v348; // edx
  int v349; // edx
  common::milog::MiLogStream *v350; // rax
  common::milog::MiLogStream *v351; // rax
  common::milog::MiLogStream *v352; // rax
  common::milog::MiLogStream *v353; // rax
  common::milog::MiLogStream *v354; // rax
  common::milog::MiLogStream *v355; // rax
  common::milog::MiLogStream *v356; // rax
  common::milog::MiLogStream *v357; // rax
  common::milog::MiLogStream *v358; // rax
  common::milog::MiLogStream *v359; // rax
  common::milog::MiLogStream *v360; // rax
  DungeonExcelConfigMgr *v361; // rcx
  char v362; // al
  common::milog::MiLogStream *v363; // rax
  common::milog::MiLogStream *v364; // rax
  common::milog::MiLogStream *v365; // rax
  common::milog::MiLogStream *v366; // rax
  common::milog::MiLogStream *v367; // rax
  common::milog::MiLogStream *v368; // rax
  common::milog::MiLogStream *v369; // rax
  common::milog::MiLogStream *v370; // rax
  common::milog::MiLogStream *v371; // rax
  common::milog::MiLogStream *v372; // rax
  common::milog::MiLogStream *v373; // rax
  common::milog::MiLogStream *v374; // rax
  common::milog::MiLogStream *v375; // rax
  common::milog::MiLogStream *v376; // rax
  common::milog::MiLogStream *v377; // rax
  common::milog::MiLogStream *v378; // rax
  common::milog::MiLogStream *v379; // rax
  common::milog::MiLogStream *v380; // rax
  common::milog::MiLogStream *v381; // rax
  common::milog::MiLogStream *v382; // rax
  common::milog::MiLogStream *v383; // rax
  common::milog::MiLogStream *v384; // rax
  common::milog::MiLogStream *v385; // rax
  common::milog::MiLogStream *v386; // rax
  common::milog::MiLogStream *v387; // rax
  common::milog::MiLogStream *v388; // rax
  common::milog::MiLogStream *v389; // rax
  common::milog::MiLogStream *v390; // rax
  common::milog::MiLogStream *v391; // rax
  common::milog::MiLogStream *v392; // rax
  common::milog::MiLogStream *v393; // rax
  common::milog::MiLogStream *v394; // rax
  common::milog::MiLogStream *v395; // rax
  common::milog::MiLogStream *v396; // rax
  common::milog::MiLogStream *v397; // rax
  common::milog::MiLogStream *v398; // rax
  proto::InteractType *v399; // rax
  proto::InteractType *v400; // rdx
  const std::string *v401; // rax
  __int64 v402; // rax
  common::milog::MiLogStream *v403; // rax
  common::milog::MiLogStream *v404; // rax
  common::milog::MiLogStream *v405; // rax
  common::milog::MiLogStream *v406; // rax
  common::milog::MiLogStream *v407; // rax
  common::milog::MiLogStream *v408; // r14
  common::milog::MiLogStream *v409; // rax
  common::milog::MiLogStream *v410; // rax
  common::milog::MiLogStream *v411; // rax
  common::milog::MiLogStream *v412; // rax
  common::milog::MiLogStream *v413; // rax
  common::milog::MiLogStream *v414; // rax
  common::milog::MiLogStream *v415; // rax
  common::milog::MiLogStream *v416; // rax
  common::milog::MiLogStream *v417; // rax
  common::milog::MiLogStream *v418; // rax
  int v419; // eax
  unsigned __int64 v420; // rdx
  int v421; // edx
  common::milog::MiLogStream *v422; // rax
  common::milog::MiLogStream *v423; // rax
  common::milog::MiLogStream *v424; // rax
  common::milog::MiLogStream *v425; // rax
  common::milog::MiLogStream *v426; // rax
  common::milog::MiLogStream *v427; // rax
  common::milog::MiLogStream *v428; // rax
  common::milog::MiLogStream *v429; // rax
  common::milog::MiLogStream *v430; // rax
  common::milog::MiLogStream *v431; // rax
  common::milog::MiLogStream *v432; // rax
  JsonConfigMgr *v433; // rdi
  uint32_t v434; // edx
  common::milog::MiLogStream *v435; // rax
  common::milog::MiLogStream *v436; // rax
  common::milog::MiLogStream *v437; // rax
  common::milog::MiLogStream *v438; // rax
  common::milog::MiLogStream *v439; // rax
  common::milog::MiLogStream *v440; // rax
  common::milog::MiLogStream *v441; // rax
  common::milog::MiLogStream *v442; // rax
  common::milog::MiLogStream *v443; // rax
  common::milog::MiLogStream *v444; // rax
  common::milog::MiLogStream *v445; // rax
  common::milog::MiLogStream *v446; // rax
  common::milog::MiLogStream *v447; // rax
  common::milog::MiLogStream *v448; // rax
  common::milog::MiLogStream *v449; // rax
  common::milog::MiLogStream *v450; // rax
  common::milog::MiLogStream *v451; // rax
  common::milog::MiLogStream *v452; // rax
  common::milog::MiLogStream *v453; // rax
  common::milog::MiLogStream *v454; // rax
  common::milog::MiLogStream *v455; // rax
  common::milog::MiLogStream *v456; // rax
  common::milog::MiLogStream *v457; // rax
  common::milog::MiLogStream *v458; // rax
  int v459; // ecx
  unsigned int *v460; // rax
  int *v461; // rdx
  int v462; // ecx
  std::unordered_map<unsigned int,MonsterScriptConfig> *p_monster_config_map; // rdx
  std::unordered_map<unsigned int,MonsterScriptConfig> *v464; // rdx
  bool v465; // al
  common::milog::MiLogStream *v466; // rax
  common::milog::MiLogStream *v467; // rax
  common::milog::MiLogStream *v468; // rax
  common::milog::MiLogStream *v469; // rax
  common::milog::MiLogStream *v470; // rax
  common::milog::MiLogStream *v471; // rax
  unsigned int *v472; // rax
  int *v473; // rdx
  int v474; // ecx
  std::unordered_map<unsigned int,GadgetScriptConfig> *v475; // rdx
  std::unordered_map<unsigned int,GadgetScriptConfig> *v476; // rdx
  bool v477; // al
  common::milog::MiLogStream *v478; // rax
  common::milog::MiLogStream *v479; // rax
  common::milog::MiLogStream *v480; // rax
  common::milog::MiLogStream *v481; // rax
  common::milog::MiLogStream *v482; // rax
  common::milog::MiLogStream *v483; // rax
  unsigned int *v484; // rax
  int *v485; // rdx
  int v486; // ecx
  std::unordered_map<unsigned int,RegionScriptConfig> *p_region_config_map; // rdx
  std::unordered_map<unsigned int,RegionScriptConfig> *v488; // rdx
  bool v489; // al
  common::milog::MiLogStream *v490; // rax
  common::milog::MiLogStream *v491; // rax
  common::milog::MiLogStream *v492; // rax
  common::milog::MiLogStream *v493; // rax
  common::milog::MiLogStream *v494; // rax
  common::milog::MiLogStream *v495; // rax
  unsigned int *v496; // rax
  int *v497; // rdx
  int v498; // ecx
  std::unordered_map<unsigned int,NpcScriptConfig> *p_npc_config_map; // rdx
  std::unordered_map<unsigned int,NpcScriptConfig> *v500; // rdx
  bool v501; // al
  common::milog::MiLogStream *v502; // rax
  common::milog::MiLogStream *v503; // rax
  common::milog::MiLogStream *v504; // rax
  common::milog::MiLogStream *v505; // rax
  common::milog::MiLogStream *v506; // rax
  common::milog::MiLogStream *v507; // rax
  std::unordered_map<std::string,TriggerScriptConfig> *p_trigger_config_map; // rdx
  std::unordered_map<std::string,TriggerScriptConfig> *v509; // rdx
  bool v510; // al
  common::milog::MiLogStream *v511; // rax
  common::milog::MiLogStream *v512; // rax
  common::milog::MiLogStream *v513; // rax
  common::milog::MiLogStream *v514; // rax
  common::milog::MiLogStream *v515; // rax
  common::milog::MiLogStream *v516; // rax
  common::milog::MiLogStream *v517; // rax
  common::milog::MiLogStream *v518; // rax
  common::milog::MiLogStream *v519; // rax
  common::milog::MiLogStream *v520; // rax
  common::milog::MiLogStream *v521; // rax
  common::milog::MiLogStream *v522; // rax
  std::vector<SuiteScriptConfig>::size_type init_suite_index; // r14
  char v524; // al
  common::milog::MiLogStream *v525; // rax
  common::milog::MiLogStream *v526; // rax
  common::milog::MiLogStream *v527; // rax
  common::milog::MiLogStream *v528; // rax
  common::milog::MiLogStream *v529; // rax
  common::milog::MiLogStream *v530; // rax
  std::vector<SuiteScriptConfig>::size_type end_suite_index; // r14
  common::milog::MiLogStream *v533; // rax
  common::milog::MiLogStream *v534; // rax
  common::milog::MiLogStream *v535; // rax
  common::milog::MiLogStream *v536; // rax
  common::milog::MiLogStream *v537; // rax
  common::milog::MiLogStream *v538; // rax
  common::milog::MiLogStream *v539; // rax
  common::milog::MiLogStream *v540; // rax
  common::milog::MiLogStream *v541; // rax
  common::milog::MiLogStream *v542; // rax
  common::milog::MiLogStream *v543; // rax
  common::milog::MiLogStream *v544; // rax
  DungeonExcelConfigMgr *v545; // rcx
  char v546; // al
  common::milog::MiLogStream *v547; // rax
  common::milog::MiLogStream *v548; // rax
  common::milog::MiLogStream *v549; // rax
  common::milog::MiLogStream *v550; // rax
  common::milog::MiLogStream *v551; // rax
  common::milog::MiLogStream *v552; // rax
  common::milog::MiLogStream *v553; // rax
  common::milog::MiLogStream *v554; // rax
  unsigned int *v555; // rax
  int *v556; // rdx
  int v557; // ecx
  common::milog::MiLogStream *v558; // rax
  common::milog::MiLogStream *v559; // rax
  common::milog::MiLogStream *v560; // rax
  common::milog::MiLogStream *v561; // rax
  common::milog::MiLogStream *v562; // rax
  common::milog::MiLogStream *v563; // rax
  int v564; // edx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v566; // rax
  common::milog::MiLogStream *v567; // rax
  common::milog::MiLogStream *v568; // rax
  common::milog::MiLogStream *v569; // rax
  common::milog::MiLogStream *v570; // rax
  common::milog::MiLogStream *v571; // rax
  common::milog::MiLogStream *v572; // rax
  common::milog::MiLogStream *v573; // rax
  common::milog::MiLogStream *v574; // rax
  common::milog::MiLogStream *v575; // rax
  common::milog::MiLogStream *v576; // rax
  common::milog::MiLogStream *v577; // rax
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-2120h]
  char __l; // [rsp+10h] [rbp-2120h]
  bool has_boss_chest; // [rsp+47h] [rbp-20E9h]
  int32_t ret; // [rsp+48h] [rbp-20E8h]
  data::ItemLimitType item_limit_type; // [rsp+50h] [rbp-20E0h]
  data::ItemLimitType item_limit_type_0; // [rsp+58h] [rbp-20D8h]
  size_t idx; // [rsp+60h] [rbp-20D0h]
  const data::SceneExcelConfig *scene_excel_config_ptr; // [rsp+88h] [rbp-20A8h]
  const std::set<unsigned int> *dungeon_set_ptr; // [rsp+90h] [rbp-20A0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+A0h] [rbp-2090h]
  std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range_0; // [rsp+A8h] [rbp-2088h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference p; // [rsp+B0h] [rbp-2080h]
  const MonsterScriptConfig *monster_script_config; // [rsp+B8h] [rbp-2078h]
  data::MonsterExcelConfig *monster_config_ptr; // [rsp+C0h] [rbp-2070h]
  std::vector<data::FightPropGrowConfig> *__for_range_2; // [rsp+C8h] [rbp-2068h]
  const data::FightPropGrowConfig *fight_prop_0; // [rsp+D0h] [rbp-2060h]
  std::vector<data::FightPropGrowConfig> *__for_range_1; // [rsp+E0h] [rbp-2050h]
  const data::FightPropGrowConfig *fight_prop; // [rsp+E8h] [rbp-2048h]
  const std::map<int,unsigned int> *__for_range_3; // [rsp+F8h] [rbp-2038h]
  std::unordered_set<unsigned int> *__for_range_4; // [rsp+100h] [rbp-2030h]
  unsigned int *init_pose_id; // [rsp+110h] [rbp-2020h]
  std::unordered_map<unsigned int,NpcScriptConfig> *__for_range_5; // [rsp+118h] [rbp-2018h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range_6; // [rsp+120h] [rbp-2010h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference p_1; // [rsp+128h] [rbp-2008h]
  const GadgetScriptConfig *gadget_script_config; // [rsp+130h] [rbp-2000h]
  data::GadgetExcelConfig *gadget_config_ptr; // [rsp+138h] [rbp-1FF8h]
  data::RefreshPolicyExcelConfig *refresh_config; // [rsp+140h] [rbp-1FF0h]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+148h] [rbp-1FE8h]
  const data::MonsterExcelConfig *monster_config_ptr_0; // [rsp+150h] [rbp-1FE0h]
  const std::set<unsigned int> *dungeon_set_ptr_0; // [rsp+158h] [rbp-1FD8h]
  const data::DungeonExcelConfig *dungeon_config_ptr_0; // [rsp+168h] [rbp-1FC8h]
  const data::GadgetInteractExcelConfig *interact_config_ptr; // [rsp+170h] [rbp-1FC0h]
  const std::vector<data::GadgetInteractActionConfig> *__for_range_8; // [rsp+178h] [rbp-1FB8h]
  const data::GadgetInteractActionConfig *action_config; // [rsp+180h] [rbp-1FB0h]
  const std::vector<unsigned int> *__for_range_9; // [rsp+188h] [rbp-1FA8h]
  const unsigned int *point_id; // [rsp+190h] [rbp-1FA0h]
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+198h] [rbp-1F98h]
  std::set<proto::InteractType> *__for_range_10; // [rsp+1A0h] [rbp-1F90h]
  std::unordered_map<unsigned int,RegionScriptConfig> *__for_range_11; // [rsp+1A8h] [rbp-1F88h]
  const std::pair<unsigned int const,RegionScriptConfig> *p_2; // [rsp+1B0h] [rbp-1F80h]
  const RegionScriptConfig *region_config; // [rsp+1B8h] [rbp-1F78h]
  const std::vector<std::string> *__for_range_12; // [rsp+1C0h] [rbp-1F70h]
  const std::vector<std::string> *__for_range_13; // [rsp+1C8h] [rbp-1F68h]
  const std::string *ability_group_name_0; // [rsp+1D0h] [rbp-1F60h]
  const std::string *ability_group_name; // [rsp+1D8h] [rbp-1F58h]
  std::vector<unsigned int> *__for_range_19; // [rsp+1E0h] [rbp-1F50h]
  data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+1E8h] [rbp-1F48h]
  const SuiteScriptConfig *suite_script_config; // [rsp+1F0h] [rbp-1F40h]
  const std::set<unsigned int> *__for_range_15; // [rsp+200h] [rbp-1F30h]
  const std::set<unsigned int> *__for_range_16; // [rsp+208h] [rbp-1F28h]
  const std::set<unsigned int> *__for_range_17; // [rsp+210h] [rbp-1F20h]
  const std::set<std::string> *__for_range_18; // [rsp+218h] [rbp-1F18h]
  const std::string *trigger_name; // [rsp+220h] [rbp-1F10h]
  const std::pair<unsigned int const,NpcScriptConfig> *p_0; // [rsp+228h] [rbp-1F08h]
  char v636[7920]; // [rsp+240h] [rbp-1EF0h] BYREF

  v5 = (unsigned __int64)v636;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_7(7872LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "160 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 11 scene_id:49 96 4 11 group_id:50 1"
                        "12 4 13 config_id:114 128 4 9 <unknown> 144 4 16 init_pose_id:217 160 4 13 config_id:229 176 4 1"
                        "3 config_id:252 192 4 9 <unknown> 208 4 9 <unknown> 224 4 15 suite_index:597 240 4 13 config_id:"
                        "600 256 4 13 config_id:608 272 4 13 config_id:616 288 4 13 config_id:624 304 4 16 group_tag_id:6"
                        "83 320 8 14 __for_begin:79 352 8 12 __for_end:79 384 8 15 __for_begin:112 416 8 13 __for_end:112"
                        " 448 8 15 __for_begin:132 480 8 13 __for_end:132 512 8 9 <unknown> 544 8 15 __for_begin:146 576 "
                        "8 13 __for_end:146 608 8 9 <unknown> 640 8 6 it:204 672 8 9 <unknown> 704 8 9 <unknown> 736 8 15"
                        " __for_begin:213 768 8 13 __for_end:213 800 8 15 __for_begin:217 832 8 13 __for_end:217 864 8 15"
                        " __for_begin:227 896 8 13 __for_end:227 928 8 15 __for_begin:250 960 8 13 __for_end:250 992 8 29"
                        " gadget_interact_type_iter:263 1024 8 9 <unknown> 1056 8 9 <unknown> 1088 8 9 <unknown> 1120 8 1"
                        "5 __for_begin:355 1152 8 13 __for_end:355 1184 8 15 __for_begin:418 1216 8 13 __for_end:418 1248"
                        " 8 15 __for_begin:440 1280 8 13 __for_end:440 1312 8 15 __for_begin:530 1344 8 13 __for_end:530 "
                        "1376 8 15 __for_begin:557 1408 8 13 __for_end:557 1440 8 15 __for_begin:576 1472 8 13 __for_end:"
                        "576 1504 8 15 __for_begin:584 1536 8 13 __for_end:584 1568 8 15 __for_begin:600 1600 8 13 __for_"
                        "end:600 1632 8 9 <unknown> 1664 8 9 <unknown> 1696 8 15 __for_begin:608 1728 8 13 __for_end:608 "
                        "1760 8 9 <unknown> 1792 8 9 <unknown> 1824 8 15 __for_begin:616 1856 8 13 __for_end:616 1888 8 9"
                        " <unknown> 1920 8 9 <unknown> 1952 8 15 __for_begin:624 1984 8 13 __for_end:624 2016 8 9 <unknow"
                        "n> 2048 8 9 <unknown> 2080 8 15 __for_begin:632 2112 8 13 __for_end:632 2144 8 9 <unknown> 2176 "
                        "8 9 <unknown> 2208 8 15 __for_begin:683 2240 8 13 __for_end:683 2272 16 13 point_ptr:442 2304 32"
                        " 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 262"
                        "4 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown>"
                        " 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unkn"
                        "own> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <"
                        "unknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32"
                        " 9 <unknown> 3904 32 9 <unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 416"
                        "0 32 9 <unknown> 4224 32 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown>"
                        " 4480 32 9 <unknown> 4544 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unkn"
                        "own> 4800 32 9 <unknown> 4864 32 9 <unknown> 4928 32 9 <unknown> 4992 32 9 <unknown> 5056 32 9 <"
                        "unknown> 5120 32 9 <unknown> 5184 32 9 <unknown> 5248 32 9 <unknown> 5312 32 9 <unknown> 5376 32"
                        " 9 <unknown> 5440 32 9 <unknown> 5504 32 9 <unknown> 5568 32 9 <unknown> 5632 32 9 <unknown> 569"
                        "6 32 9 <unknown> 5760 32 9 <unknown> 5824 32 9 <unknown> 5888 32 9 <unknown> 5952 32 9 <unknown>"
                        " 6016 32 9 <unknown> 6080 32 9 <unknown> 6144 32 9 <unknown> 6208 32 9 <unknown> 6272 32 9 <unkn"
                        "own> 6336 32 9 <unknown> 6400 32 9 <unknown> 6464 32 9 <unknown> 6528 32 9 <unknown> 6592 32 9 <"
                        "unknown> 6656 32 9 <unknown> 6720 32 9 <unknown> 6784 32 9 <unknown> 6848 32 9 <unknown> 6912 32"
                        " 9 <unknown> 6976 32 9 <unknown> 7040 32 9 <unknown> 7104 32 9 <unknown> 7168 32 9 <unknown> 723"
                        "2 48 21 interact_type_set:254 7312 56 20 init_pose_id_set:212 7408 392 6 ss:529";
  *(_QWORD *)(v5 + 16) = GroupScriptConfig::checkGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753535;
  v7[536862722] = -234556927;
  v7[536862723] = -234556924;
  v7[536862724] = -234556924;
  v7[536862725] = -234556924;
  v7[536862726] = -234556924;
  v7[536862727] = -234556924;
  v7[536862728] = -234556924;
  v7[536862729] = -234556924;
  v7[536862730] = -218959360;
  v7[536862731] = -218959360;
  v7[536862732] = -218959360;
  v7[536862733] = -218959360;
  v7[536862734] = -218959360;
  v7[536862735] = -218959360;
  v7[536862736] = -218959360;
  v7[536862737] = -218959360;
  v7[536862738] = -218959360;
  v7[536862739] = -218959360;
  v7[536862740] = -218959360;
  v7[536862741] = -218959360;
  v7[536862742] = -218959360;
  v7[536862743] = -218959360;
  v7[536862744] = -218959360;
  v7[536862745] = -218959360;
  v7[536862746] = -218959360;
  v7[536862747] = -218959360;
  v7[536862748] = -218959360;
  v7[536862749] = -218959360;
  v7[536862750] = -218959360;
  v7[536862751] = -218959360;
  v7[536862752] = -218959360;
  v7[536862753] = -218959360;
  v7[536862754] = -218959360;
  v7[536862755] = -218959360;
  v7[536862756] = -218959360;
  v7[536862757] = -218959360;
  v7[536862758] = -218959360;
  v7[536862759] = -218959360;
  v7[536862760] = -218959360;
  v7[536862761] = -218959360;
  v7[536862762] = -218959360;
  v7[536862763] = -218959360;
  v7[536862764] = -218959360;
  v7[536862765] = -218959360;
  v7[536862766] = -218959360;
  v7[536862767] = -218959360;
  v7[536862768] = -218959360;
  v7[536862769] = -218959360;
  v7[536862770] = -218959360;
  v7[536862771] = -218959360;
  v7[536862772] = -218959360;
  v7[536862773] = -218959360;
  v7[536862774] = -218959360;
  v7[536862775] = -218959360;
  v7[536862776] = -218959360;
  v7[536862777] = -218959360;
  v7[536862778] = -218959360;
  v7[536862779] = -218959360;
  v7[536862780] = -218959360;
  v7[536862781] = -218959360;
  v7[536862782] = -218959360;
  v7[536862783] = -218959360;
  v7[536862784] = -218959360;
  v7[536862785] = -218959360;
  v7[536862786] = -218959360;
  v7[536862787] = -218959360;
  v7[536862788] = -218959360;
  v7[536862789] = -218959360;
  v7[536862790] = -218959360;
  v7[536862791] = -219021312;
  v7[536862793] = -218959118;
  v7[536862795] = -218959118;
  v7[536862797] = -218959118;
  v7[536862799] = -218959118;
  v7[536862801] = -218959118;
  v7[536862803] = -218959118;
  v7[536862805] = -218959118;
  v7[536862807] = -218959118;
  v7[536862809] = -218959118;
  v7[536862811] = -218959118;
  v7[536862813] = -218959118;
  v7[536862815] = -218959118;
  v7[536862817] = -218959118;
  v7[536862819] = -218959118;
  v7[536862821] = -218959118;
  v7[536862823] = -218959118;
  v7[536862825] = -218959118;
  v7[536862827] = -218959118;
  v7[536862829] = -218959118;
  v7[536862831] = -218959118;
  v7[536862833] = -218959118;
  v7[536862835] = -218959118;
  v7[536862837] = -218959118;
  v7[536862839] = -218959118;
  v7[536862841] = -218959118;
  v7[536862843] = -218959118;
  v7[536862845] = -218959118;
  v7[536862847] = -218959118;
  v7[536862849] = -218959118;
  v7[536862851] = -218959118;
  v7[536862853] = -218959118;
  v7[536862855] = -218959118;
  v7[536862857] = -218959118;
  v7[536862859] = -218959118;
  v7[536862861] = -218959118;
  v7[536862863] = -218959118;
  v7[536862865] = -218959118;
  v7[536862867] = -218959118;
  v7[536862869] = -218959118;
  v7[536862871] = -218959118;
  v7[536862873] = -218959118;
  v7[536862875] = -218959118;
  v7[536862877] = -218959118;
  v7[536862879] = -218959118;
  v7[536862881] = -218959118;
  v7[536862883] = -218959118;
  v7[536862885] = -218959118;
  v7[536862887] = -218959118;
  v7[536862889] = -218959118;
  v7[536862891] = -218959118;
  v7[536862893] = -218959118;
  v7[536862895] = -218959118;
  v7[536862897] = -218959118;
  v7[536862899] = -218959118;
  v7[536862901] = -218959118;
  v7[536862903] = -218959118;
  v7[536862905] = -218959118;
  v7[536862907] = -218959118;
  v7[536862909] = -218959118;
  v7[536862911] = -218959118;
  v7[536862913] = -218959118;
  v7[536862915] = -218959118;
  v7[536862917] = -218959118;
  v7[536862919] = -218959118;
  v7[536862921] = -218959118;
  v7[536862923] = -218959118;
  v7[536862925] = -218959118;
  v7[536862927] = -218959118;
  v7[536862929] = -218959118;
  v7[536862931] = -218959118;
  v7[536862933] = -218959118;
  v7[536862935] = -218959118;
  v7[536862937] = -218959118;
  v7[536862939] = -218959118;
  v7[536862941] = -218959118;
  v7[536862943] = -218959118;
  v7[536862945] = -218959118;
  v7[536862947] = -219021312;
  v7[536862948] = 62194;
  v7[536862950] = -218959360;
  v7[536862951] = 62194;
  v7[536862963] = -218103808;
  v7[536862964] = -202116109;
  v7[536862965] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&scene_script_config->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&scene_script_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&scene_script_config->scene_id);
  }
  scene_id = scene_script_config->scene_id;
  if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 80);
  *(_DWORD *)(v5 + 80) = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)group_script_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)group_script_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(group_script_config);
  }
  group_id = group_script_config->group_id;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 96);
  *(_DWORD *)(v5 + 96) = group_id;
  scene_excel_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                             &config->txt_config_mgr.scene_config_mgr,
                             *(_DWORD *)(v5 + 80));
  if ( !scene_excel_config_ptr )
  {
    if ( *(char *)(((v5 + 2304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 2335) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 2335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 2304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 2304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group_script_config.cpp",
      "checkGroup",
      60);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 2304),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            v10,
            (const char (*)[39])"findSceneExcelConfig fails, scene_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2304));
    v4 = -1;
    goto LABEL_902;
  }
  ret = 0;
  if ( !SceneScriptConfig::isPosValid(scene_script_config, &group_script_config->pos) )
  {
    if ( *(char *)(((v5 + 2368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 2399) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 2399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 2368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 2368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group_script_config.cpp",
      "checkGroup",
      68);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 2368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v12, (const char (*)[41])byte_1A176C20);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &group_script_config->group_id);
    v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &scene_script_config->scene_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2368));
    *(_DWORD *)(((v5 + 2368) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(char *)(((unsigned __int64)&group_script_config->is_ignore_world_level_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&group_script_config->is_ignore_world_level_revise);
  if ( group_script_config->is_ignore_world_level_revise )
  {
    p_dungeon_config_mgr = &config->txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 80);
    dungeon_set_ptr = DungeonExcelConfigMgr::findDungeonSetBySceneId(p_dungeon_config_mgr, *(_DWORD *)(v5 + 80));
    if ( dungeon_set_ptr )
    {
      *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 320) = std::set<unsigned int>::begin(dungeon_set_ptr);
      *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 352) = std::set<unsigned int>::end(dungeon_set_ptr);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 320),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 352)) )
      {
        v17 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 320));
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               &config->txt_config_mgr.dungeon_config_mgr,
                               *v18);
        if ( dungeon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->is_dynamic_level >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)dungeon_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->is_dynamic_level >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load1(&dungeon_config_ptr->is_dynamic_level);
          }
          if ( dungeon_config_ptr->is_dynamic_level )
          {
            *(_DWORD *)(((v5 + 2432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2463) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 2463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2432, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/group_script_config.cpp",
              "checkGroup",
              84);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 2432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v19,
                    (const char (*)[19])byte_1A176C80);
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    &group_script_config->group_id);
            v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v21,
                    (const char (*)[14])", @ scene_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v23, (const char (*)[38])byte_1A176D00);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2432));
            *(_DWORD *)(((v5 + 2432) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 320));
      }
      *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 352) >> 3) + 0x7FFF8000) = -8;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&group_script_config->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&group_script_config->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&group_script_config->rely_start_world_level_limit_activity_id);
  }
  if ( group_script_config->rely_start_world_level_limit_activity_id )
  {
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
            &config->txt_config_mgr.new_activity_config_mgr,
            group_script_config->rely_start_world_level_limit_activity_id) )
    {
      *(_DWORD *)(((v5 + 2496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2527) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 2527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        96);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])"group:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &group_script_config->group_id);
      v27 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v26, (const char (*)[62])byte_1A176DA0);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v27,
              &group_script_config->rely_start_world_level_limit_activity_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v28, (const char (*)[18])byte_1A176E00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2496));
      *(_DWORD *)(((v5 + 2496) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(char *)(((unsigned __int64)&group_script_config->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_script_config->is_dynamic_load);
    if ( !group_script_config->is_dynamic_load )
    {
      *(_DWORD *)(((v5 + 2560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2591) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 2591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2560),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        101);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2560),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])"group:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &group_script_config->group_id);
      v32 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v31, (const char (*)[62])byte_1A176DA0);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v32,
              &group_script_config->rely_start_world_level_limit_activity_id);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v33, (const char (*)[22])byte_1A176E40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2560));
      *(_DWORD *)(((v5 + 2560) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(char *)(((unsigned __int64)&group_script_config->is_ignore_world_level_revise >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_script_config->is_ignore_world_level_revise);
    if ( group_script_config->is_ignore_world_level_revise )
    {
      *(_DWORD *)(((v5 + 2624) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2624) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2655) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 2655) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2624, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2624),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        106);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2624),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])"group:");
      v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &group_script_config->group_id);
      v37 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v36, (const char (*)[62])byte_1A176DA0);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v37,
              &group_script_config->rely_start_world_level_limit_activity_id);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v38, (const char (*)[42])byte_1A176E80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2624));
      *(_DWORD *)(((v5 + 2624) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
  }
  __for_range_0 = &this->monster_config_map;
  *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 384) = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range_0);
  *(_BYTE *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 416) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 384),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 416)) )
  {
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v5 + 384));
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 112);
    *(_DWORD *)(v5 + 112) = first;
    monster_script_config = &p->second;
    p_monster_config_mgr = &config->txt_config_mgr.monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p->second.monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->second.monster_id);
    }
    monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                           p_monster_config_mgr,
                           p->second.monster_id);
    if ( !monster_config_ptr )
    {
      *(_DWORD *)(((v5 + 2688) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2688) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2719) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 2719) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2688, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2688),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        119);
      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2688),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v42 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v41, (const char (*)[28])byte_1A176EE0);
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &p->second.monster_id);
      v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v43, (const char (*)[13])", config_id:");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v44,
              (const unsigned int *)(v5 + 112));
      v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v45, (const char (*)[12])", group_id:");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v5 + 96));
      v48 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v47, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2688));
      *(_DWORD *)(((v5 + 2688) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( !SceneScriptConfig::isPosValid(scene_script_config, &p->second.pos) )
    {
      *(_DWORD *)(((v5 + 2752) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2752) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2783) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 2783) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2752, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2752),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        124);
      v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2752),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v50 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v49, (const char (*)[44])byte_1A176FA0);
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v50,
              &monster_script_config->config_id);
      v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v51, (const char (*)[12])", group_id:");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &group_script_config->group_id);
      v54 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v53, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &scene_script_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2752));
      *(_DWORD *)(((v5 + 2752) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( monster_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&monster_config_ptr->type);
      }
      if ( monster_config_ptr->type == MONSTER_PARTNER )
      {
        __for_range_1 = &monster_config_ptr->prop_grow_curves;
        *(_BYTE *)(((v5 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::FightPropGrowConfig>::iterator *)(v5 + 448) = std::vector<data::FightPropGrowConfig>::begin(__for_range_1);
        *(_BYTE *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::FightPropGrowConfig>::iterator *)(v5 + 480) = std::vector<data::FightPropGrowConfig>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v5 + 448),
                  (const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v5 + 480)) )
        {
          fight_prop = __gnu_cxx::__normal_iterator<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v5 + 448));
          p_grow_curve_config_mgr = &config->txt_config_mgr.grow_curve_config_mgr;
          p_grow_curve = &fight_prop->grow_curve;
          if ( *(_BYTE *)(((unsigned __int64)p_grow_curve >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_grow_curve & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_grow_curve >> 3)
                                                                           + 0x7FFF8000) )
          {
            p_grow_curve_config_mgr = (GrowCurveExcelConfigMgr *)&fight_prop->grow_curve;
            __asan_report_load4(p_grow_curve);
          }
          grow_curve = fight_prop->grow_curve;
          if ( *(_BYTE *)(((unsigned __int64)&p->second.level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&p->second.level >> 3) + 0x7FFF8000) <= 3 )
          {
            p_grow_curve_config_mgr = (GrowCurveExcelConfigMgr *)&p->second.level;
            __asan_report_load4(&p->second.level);
          }
          if ( !GrowCurveExcelConfigMgr::findPartnerCurveInfo(p_grow_curve_config_mgr, p->second.level, grow_curve) )
          {
            *(_DWORD *)(((v5 + 2816) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2816) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2847) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 2847) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2816, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2816),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/group_script_config.cpp",
              "checkGroup",
              137);
            v58 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)(v5 + 2816),
                    (const char (*)[42])byte_1A177000);
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &p->second.monster_id);
            v60 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v59,
                    (const char (*)[13])", config_id:");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v60,
                    (const unsigned int *)(v5 + 112));
            v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v61,
                    (const char (*)[12])", group_id:");
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v62,
                    (const unsigned int *)(v5 + 96));
            v64 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v63, (const char (*)[9])", level:");
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &p->second.level);
            v66 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v65,
                    (const char (*)[14])", grow_curve:");
            *(_BYTE *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&fight_prop->grow_curve >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fight_prop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fight_prop->grow_curve >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&fight_prop->grow_curve);
            }
            v67 = data::enumValToStr(fight_prop->grow_curve);
            if ( *(_BYTE *)(((v5 + 512) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)(v5 + 512) = v67;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v66, (const char *const *)(v5 + 512));
            *(_BYTE *)(((v5 + 512) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2816));
            *(_DWORD *)(((v5 + 2816) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
            break;
          }
          __gnu_cxx::__normal_iterator<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>::operator++((__gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v5 + 448));
        }
        *(_BYTE *)(((v5 + 448) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 480) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        __for_range_2 = &monster_config_ptr->prop_grow_curves;
        *(_BYTE *)(((v5 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 544) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::FightPropGrowConfig>::iterator *)(v5 + 544) = std::vector<data::FightPropGrowConfig>::begin(__for_range_2);
        *(_BYTE *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 576) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::FightPropGrowConfig>::iterator *)(v5 + 576) = std::vector<data::FightPropGrowConfig>::end(__for_range_2);
        while ( __gnu_cxx::operator!=<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v5 + 544),
                  (const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v5 + 576)) )
        {
          fight_prop_0 = __gnu_cxx::__normal_iterator<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v5 + 544));
          p_level = &config->txt_config_mgr.grow_curve_config_mgr;
          v69 = &fight_prop_0->grow_curve;
          if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
          {
            p_level = (GrowCurveExcelConfigMgr *)&fight_prop_0->grow_curve;
            __asan_report_load4(v69);
          }
          v70 = fight_prop_0->grow_curve;
          if ( *(_BYTE *)(((unsigned __int64)&p->second.level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&p->second.level >> 3) + 0x7FFF8000) <= 3 )
          {
            p_level = (GrowCurveExcelConfigMgr *)&p->second.level;
            __asan_report_load4(&p->second.level);
          }
          if ( !GrowCurveExcelConfigMgr::findMonsterCurveInfo(p_level, p->second.level, v70) )
          {
            *(_DWORD *)(((v5 + 2880) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 2880) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 2911) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 2911) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 2880, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 2880),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/group_script_config.cpp",
              "checkGroup",
              151);
            v71 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)(v5 + 2880),
                    (const char (*)[42])byte_1A1770E0);
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &p->second.monster_id);
            v73 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v72,
                    (const char (*)[13])", config_id:");
            v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v73,
                    (const unsigned int *)(v5 + 112));
            v75 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v74,
                    (const char (*)[12])", group_id:");
            v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v75,
                    (const unsigned int *)(v5 + 96));
            v77 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v76, (const char (*)[9])", level:");
            v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &p->second.level);
            v79 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v78,
                    (const char (*)[14])", grow_curve:");
            *(_BYTE *)(((v5 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&fight_prop_0->grow_curve >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fight_prop_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fight_prop_0->grow_curve >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&fight_prop_0->grow_curve);
            }
            v80 = data::enumValToStr(fight_prop_0->grow_curve);
            if ( *(_BYTE *)(((v5 + 608) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(_QWORD *)(v5 + 608) = v80;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v79, (const char *const *)(v5 + 608));
            *(_BYTE *)(((v5 + 608) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2880));
            *(_DWORD *)(((v5 + 2880) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
            break;
          }
          __gnu_cxx::__normal_iterator<data::FightPropGrowConfig *,std::vector<data::FightPropGrowConfig>>::operator++((__gnu_cxx::__normal_iterator<data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v5 + 544));
        }
        *(_BYTE *)(((v5 + 544) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 576) >> 3) + 0x7FFF8000) = -8;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&p->second.room_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p->second.room_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p->second.room_id);
    }
    if ( p->second.room_id )
      goto LABEL_135;
    if ( *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_excel_config_ptr->type);
    }
    if ( scene_excel_config_ptr->type != SCENE_ROOM )
    {
LABEL_135:
      p_json_config_mgr = &config->json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p->second.area_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p->second.area_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_json_config_mgr = (JsonConfigMgr *)&p->second.area_id;
        __asan_report_load4(&p->second.area_id);
      }
      area_id = p->second.area_id;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
      {
        p_json_config_mgr = (JsonConfigMgr *)(v5 + 80);
        __asan_report_load4(v5 + 80);
      }
      if ( JsonConfigMgr::checkPointInLevel1Area(p_json_config_mgr, *(_DWORD *)(v5 + 80), area_id, &p->second.pos) )
      {
        *(_DWORD *)(((v5 + 3008) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3008) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3039) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 3039) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3008, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3008),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          167);
        v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 3008),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v90 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v89,
                (const char (*)[20])"monster config_id: ");
        v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v90,
                (const unsigned int *)(v5 + 112));
        v92 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v91, (const char (*)[11])" group_id:");
        v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v92,
                (const unsigned int *)(v5 + 96));
        v94 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v93, (const char (*)[11])" scene_id:");
        v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v94,
                &scene_script_config->scene_id);
        v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v95, (const char (*)[16])byte_1A177200);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &p->second.area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3008));
        *(_DWORD *)(((v5 + 3008) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      p_lua_config_mgr = &config->lua_config_mgr;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 80);
      item_limit_type = LuaConfigMgr::getMonsterItemLimitType(
                          p_lua_config_mgr,
                          *(_DWORD *)(v5 + 80),
                          monster_script_config);
      if ( *(_BYTE *)(((unsigned __int64)&p->second.drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.drop_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->second.drop_id);
      }
      if ( p->second.drop_id && (unsigned __int8)std::string::empty(&p->second.drop_tag) != 1 )
      {
        *(_DWORD *)(((v5 + 3072) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3072) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3103) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 3103) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3072, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3072),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          173);
        v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 3072),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v100 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 v99,
                 (const char (*)[20])"monster config_id: ");
        v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v100,
                 (const unsigned int *)(v5 + 112));
        v102 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v101, (const char (*)[39])byte_1A177240);
        v103 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v102, (const char (*)[10])" drop_id:");
        v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &p->second.drop_id);
        v105 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v104, (const char (*)[11])" drop_tag:");
        v106 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, &p->second.drop_tag);
        v107 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v106, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v107, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3072));
        *(_DWORD *)(((v5 + 3072) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&p->second.drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.drop_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->second.drop_id);
      }
      if ( p->second.drop_id
        && !TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
              &config->txt_config_mgr,
              p->second.drop_id,
              item_limit_type) )
      {
        *(_DWORD *)(((v5 + 3136) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3136) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3167) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 3167) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3136, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3136),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          181);
        v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 3136),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v110 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 v109,
                 (const char (*)[20])"monster config_id: ");
        v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v110,
                 (const unsigned int *)(v5 + 112));
        v112 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v111, (const char (*)[49])byte_1A1772E0);
        v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v112, &p->second.drop_id);
        v114 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v113, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3136));
        *(_DWORD *)(((v5 + 3136) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 96);
      v115 = *(_DWORD *)(v5 + 96);
      if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 112);
      v116 = *(_DWORD *)(v5 + 112);
      if ( *(_BYTE *)(((unsigned __int64)&p->second.is_oneoff >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&p->second.is_oneoff >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->second.is_oneoff);
      }
      if ( !GroupScriptConfig::isDropTagValid(
              this,
              config,
              PROT_ENTITY_MONSTER,
              &p->second.drop_tag,
              p->second.is_oneoff,
              v116,
              v115) )
        ret = -1;
      if ( std::unordered_set<unsigned int>::count(
             &this->garbage_config_id_set,
             (const std::unordered_set<unsigned int>::key_type *)(v5 + 112)) )
      {
        *(_DWORD *)(((v5 + 3200) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3200) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3231) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 3231) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3200, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3200),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          192);
        v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 3200),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v118 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 v117,
                 (const char (*)[20])"monster config_id: ");
        v119 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v118,
                 (const unsigned int *)(v5 + 112));
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v119, (const char (*)[32])byte_1A177340);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3200));
        *(_DWORD *)(((v5 + 3200) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&p->second.is_oneoff >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&p->second.is_oneoff >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p->second.is_oneoff);
      }
      if ( !p->second.is_oneoff )
        goto LABEL_184;
      v120 = &config->txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 80);
      if ( DungeonExcelConfigMgr::isUsedForMpDungeon(v120, *(_DWORD *)(v5 + 80)) )
        v121 = 1;
      else
LABEL_184:
        v121 = 0;
      if ( v121 )
      {
        *(_DWORD *)(((v5 + 3264) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3264) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3295) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 3295) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3264, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3264),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          198);
        v122 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 3264),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v123 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 v122,
                 (const char (*)[20])"monster config_id: ");
        v124 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v123,
                 (const unsigned int *)(v5 + 112));
        v125 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v124, (const char (*)[74])byte_1A177380);
        v126 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v125,
                 (const unsigned int *)(v5 + 80));
        v127 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v126, (const char (*)[13])" ,group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v127, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3264));
        *(_DWORD *)(((v5 + 3264) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( (unsigned __int8)std::string::empty(&p->second.pose_logic_state) != 1 )
      {
        *(_BYTE *)(((v5 + 640) >> 3) + 0x7FFF8000) = 0;
        p_variable_map = &this->variable_map;
        p_pose_logic_state = &p->second.pose_logic_state;
        if ( *(_BYTE *)(((v5 + 640) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<std::string,VariableScriptConfig>::const_iterator *)(v5 + 640) = std::unordered_map<std::string,VariableScriptConfig>::find(
                                                                                                p_variable_map,
                                                                                                p_pose_logic_state);
        *(_BYTE *)(((v5 + 672) >> 3) + 0x7FFF8000) = 0;
        v130 = &this->variable_map;
        if ( *(_BYTE *)(((v5 + 672) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<std::string,VariableScriptConfig>::const_iterator *)(v5 + 672) = std::unordered_map<std::string,VariableScriptConfig>::end(v130);
        if ( std::__detail::operator==<std::pair<std::string const,VariableScriptConfig>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)(v5 + 640),
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)(v5 + 672)) )
        {
          goto LABEL_198;
        }
        v131 = std::__detail::_Node_const_iterator<std::pair<std::string const,VariableScriptConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true> *const)(v5 + 640));
        if ( *(_BYTE *)(((unsigned __int64)&v131->second.variable_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v131->second.variable_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v131->second.variable_type);
        }
        if ( v131->second.variable_type == VARIABLE_TYPE_LOGIC_STATE )
          v132 = 0;
        else
LABEL_198:
          v132 = 1;
        *(_BYTE *)(((v5 + 672) >> 3) + 0x7FFF8000) = -8;
        if ( v132 )
        {
          *(_DWORD *)(((v5 + 3328) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 3328) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3359) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 3359) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3328, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3328),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            207);
          v133 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3328),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v134 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   v133,
                   (const char (*)[27])"invalid pose_logic_state: ");
          v135 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v134, &p->second.pose_logic_state);
          v136 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v135,
                   (const char (*)[14])", config_id: ");
          v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v136,
                   (const unsigned int *)(v5 + 112));
          v138 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v137,
                   (const char (*)[13])", scene_id: ");
          v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v138,
                   (const unsigned int *)(v5 + 80));
          v140 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v139,
                   (const char (*)[13])", group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3328));
          *(_DWORD *)(((v5 + 3328) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        *(_BYTE *)(((v5 + 640) >> 3) + 0x7FFF8000) = -8;
      }
      v141 = ((v5 + 7312) >> 3) + 2147450880;
      *(_DWORD *)v141 = 0;
      *(_WORD *)(v141 + 4) = 0;
      *(_BYTE *)(v141 + 6) = 0;
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&p->second.pose_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.pose_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->second.pose_id);
      }
      pose_id = p->second.pose_id;
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 128);
      *(_DWORD *)(v5 + 128) = pose_id;
      __la._M_array = (std::initializer_list<unsigned int>::iterator)(v5 + 128);
      __la._M_len = 1LL;
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v5 + 64));
      std::unordered_set<unsigned int>::unordered_set(
        (std::unordered_set<unsigned int> *const)(v5 + 7312),
        __la,
        0LL,
        (const std::unordered_set<unsigned int>::hasher *)(v5 + 32),
        (const std::unordered_set<unsigned int>::key_equal *)(v5 + 48),
        (const std::unordered_set<unsigned int>::allocator_type *)(v5 + 64));
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v5 + 64));
      *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
      __for_range_3 = &p->second.logic_state_pose_id_map;
      *(_BYTE *)(((v5 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 736) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<int,unsigned int>::const_iterator *)(v5 + 736) = std::map<int,unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v5 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 768) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<int,unsigned int>::const_iterator *)(v5 + 768) = std::map<int,unsigned int>::end(__for_range_3);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<int const,unsigned int> >::_Self *)(v5 + 736),
                (const std::_Rb_tree_const_iterator<std::pair<int const,unsigned int> >::_Self *)(v5 + 768)) )
      {
        *(_BYTE *)(((v5 + 704) >> 3) + 0x7FFF8000) = 0;
        v143 = std::_Rb_tree_const_iterator<std::pair<int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<int const,unsigned int> > *const)(v5 + 736));
        if ( *(_BYTE *)(((v5 + 704) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( ((unsigned __int8)v143 & 7) >= *(_BYTE *)(((unsigned __int64)v143 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v143 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v143->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v143 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v143->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v143, 8LL);
        }
        *(std::pair<int const,unsigned int> *)(v5 + 704) = *v143;
        std::get<0ul,int const,unsigned int>((std::pair<int const,unsigned int> *)(v5 + 704));
        init_pose_id = std::get<1ul,int const,unsigned int>((std::pair<int const,unsigned int> *)(v5 + 704));
        std::unordered_set<unsigned int>::emplace<unsigned int &>(
          (std::unordered_set<unsigned int> *const)(v5 + 7312),
          init_pose_id,
          init_pose_id);
        std::_Rb_tree_const_iterator<std::pair<int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<int const,unsigned int> > *const)(v5 + 736));
      }
      *(_BYTE *)(((v5 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 768) >> 3) + 0x7FFF8000) = -8;
      __for_range_4 = (std::unordered_set<unsigned int> *)(v5 + 7312);
      *(_BYTE *)(((v5 + 800) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 800) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_set<unsigned int>::iterator *)(v5 + 800) = std::unordered_set<unsigned int>::begin(__for_range_4);
      *(_BYTE *)(((v5 + 832) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 832) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_set<unsigned int>::iterator *)(v5 + 832) = std::unordered_set<unsigned int>::end(__for_range_4);
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v5 + 800),
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v5 + 832)) )
      {
        *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 4;
        v144 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v5 + 800));
        v145 = (int *)v144;
        if ( *(_BYTE *)(((unsigned __int64)v144 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v144 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v144 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v144);
        }
        v146 = *v145;
        if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 144);
        *(_DWORD *)(v5 + 144) = v146;
        p_monster_id = &config->json_config_mgr;
        v148 = *(_DWORD *)(v5 + 144);
        if ( *(_BYTE *)(((unsigned __int64)&p->second.monster_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.monster_id >> 3) + 0x7FFF8000) )
        {
          p_monster_id = (JsonConfigMgr *)&p->second.monster_id;
          __asan_report_load4(&p->second.monster_id);
        }
        if ( !JsonConfigMgr::isMonserPoseIdValid(p_monster_id, p->second.monster_id, v148) )
        {
          *(_DWORD *)(((v5 + 3392) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 3392) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 3423) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 3423) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 3392, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 3392),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            221);
          v149 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 3392),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v150 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                   v149,
                   (const char (*)[23])"invalid init_pose_id, ");
          v151 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v150,
                   (const unsigned int *)(v5 + 144));
          v152 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                   v151,
                   (const char (*)[21])" monster config_id: ");
          v153 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v152,
                   (const unsigned int *)(v5 + 112));
          v154 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v153,
                   (const char (*)[14])" monster_id: ");
          v155 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v154, &p->second.monster_id);
          v156 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v155,
                   (const char (*)[13])"  scene_id: ");
          v157 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v156,
                   (const unsigned int *)(v5 + 80));
          v158 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v157,
                   (const char (*)[13])" ,group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v158, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3392));
          *(_DWORD *)(((v5 + 3392) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v5 + 800));
      }
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 832) >> 3) + 0x7FFF8000) = -8;
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v5 + 7312));
      v86 = 1;
    }
    else
    {
      *(_DWORD *)(((v5 + 2944) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 2944) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 2975) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 2975) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 2944, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 2944),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        161);
      v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 2944),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v82 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v81,
              (const char (*)[20])"monster config_id: ");
      v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v82,
              (const unsigned int *)(v5 + 112));
      v84 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v83, (const char (*)[31])byte_1A177180);
      v85 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v84, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 2944));
      *(_DWORD *)(((v5 + 2944) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      v86 = 0;
    }
    *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
    v159 = ((v5 + 7312) >> 3) + 2147450880;
    *(_DWORD *)v159 = -117901064;
    *(_WORD *)(v159 + 4) = -1800;
    *(_BYTE *)(v159 + 6) = -8;
    if ( v86 != 1 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v5 + 384));
  }
  *(_BYTE *)(((v5 + 384) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 416) >> 3) + 0x7FFF8000) = -8;
  __for_range_5 = &this->npc_config_map;
  *(_BYTE *)(((v5 + 864) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 864) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v5 + 864) = std::unordered_map<unsigned int,NpcScriptConfig>::begin(__for_range_5);
  *(_BYTE *)(((v5 + 896) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 896) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v5 + 896) = std::unordered_map<unsigned int,NpcScriptConfig>::end(__for_range_5);
  while ( std::__detail::operator!=<std::pair<unsigned int const,NpcScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v5 + 864),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v5 + 896)) )
  {
    v160 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v5 + 864));
    p_0 = v160;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v160 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v160);
    }
    v161 = p_0->first;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 160);
    *(_DWORD *)(v5 + 160) = v161;
    p_npc_config_mgr = &config->txt_config_mgr.npc_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_0->second.npc_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_0->second.npc_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p_0->second.npc_id);
    }
    if ( !data::NpcExcelConfigMgrBase::findNpcExcelConfig(p_npc_config_mgr, p_0->second.npc_id) )
    {
      *(_DWORD *)(((v5 + 3456) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3456) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3487) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 3487) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3456, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3456),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        234);
      v163 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3456),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v164 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v163, (const char (*)[21])byte_1A177640);
      v165 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v164, &p_0->second.npc_id);
      v166 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v165, (const char (*)[13])", config_id:");
      v167 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v166,
               (const unsigned int *)(v5 + 160));
      v168 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v167, (const char (*)[12])", group_id:");
      v169 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v168,
               (const unsigned int *)(v5 + 96));
      v170 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v169, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v170, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3456));
      *(_DWORD *)(((v5 + 3456) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( !SceneScriptConfig::isPosValid(scene_script_config, &p_0->second.pos) )
    {
      *(_DWORD *)(((v5 + 3520) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3520) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3551) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 3551) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3520, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3520),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        239);
      v171 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3520),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v172 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v171, (const char (*)[40])byte_1A177680);
      v173 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v172, &p_0->second.config_id);
      v174 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v173, (const char (*)[12])", group_id:");
      v175 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v174,
               &group_script_config->group_id);
      v176 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v175, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v176, &scene_script_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3520));
      *(_DWORD *)(((v5 + 3520) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_area_id = &config->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_0->second.area_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_0 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_0->second.area_id >> 3) + 0x7FFF8000) )
    {
      p_area_id = (JsonConfigMgr *)&p_0->second.area_id;
      __asan_report_load4(&p_0->second.area_id);
    }
    v178 = p_0->second.area_id;
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_area_id = (JsonConfigMgr *)(v5 + 80);
      __asan_report_load4(v5 + 80);
    }
    if ( JsonConfigMgr::checkPointInLevel1Area(p_area_id, *(_DWORD *)(v5 + 80), v178, &p_0->second.pos) )
    {
      *(_DWORD *)(((v5 + 3584) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3584) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3615) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 3615) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3584, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3584),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        244);
      v179 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3584),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v180 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v179,
               (const char (*)[16])"npc config_id: ");
      v181 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v180,
               (const unsigned int *)(v5 + 160));
      v182 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v181, (const char (*)[11])" group_id:");
      v183 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v182,
               (const unsigned int *)(v5 + 96));
      v184 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v183, (const char (*)[11])" scene_id:");
      v185 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v184,
               &scene_script_config->scene_id);
      v186 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v185, (const char (*)[16])byte_1A177200);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v186, &p_0->second.area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3584));
      *(_DWORD *)(((v5 + 3584) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v5 + 864));
  }
  *(_BYTE *)(((v5 + 864) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 896) >> 3) + 0x7FFF8000) = -8;
  has_boss_chest = 0;
  __for_range_6 = &this->gadget_config_map;
  *(_BYTE *)(((v5 + 928) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 928) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 928) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range_6);
  *(_BYTE *)(((v5 + 960) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 960) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 960) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range_6);
  while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 928),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 960)) )
  {
    p_1 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 928));
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_1 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_1);
    }
    v187 = p_1->first;
    if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 176);
    *(_DWORD *)(v5 + 176) = v187;
    gadget_script_config = &p_1->second;
    v188 = ((v5 + 7232) >> 3) + 2147450880;
    *(_DWORD *)v188 = 0;
    *(_WORD *)(v188 + 4) = 0;
    std::set<proto::InteractType>::set((std::set<proto::InteractType> *const)(v5 + 7232));
    p_gadget_config_mgr = &config->txt_config_mgr.gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p_1->second.gadget_id);
    }
    gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                          p_gadget_config_mgr,
                          p_1->second.gadget_id);
    if ( gadget_config_ptr )
    {
      *(_BYTE *)(((v5 + 992) >> 3) + 0x7FFF8000) = 0;
      p_type = &gadget_config_ptr->type;
      if ( *(_BYTE *)(((v5 + 992) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<data::EntityType,proto::InteractType>::const_iterator *)(v5 + 992) = std::map<data::EntityType,proto::InteractType>::find(
                                                                                        &GroupScriptConfig::gadget_interact_type_map,
                                                                                        p_type);
      *(_BYTE *)(((v5 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1024) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<data::EntityType,proto::InteractType>::const_iterator *)(v5 + 1024) = std::map<data::EntityType,proto::InteractType>::end(&GroupScriptConfig::gadget_interact_type_map);
      v199 = std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<const data::EntityType,proto::InteractType> >::_Self *)(v5 + 992),
               (const std::_Rb_tree_const_iterator<std::pair<const data::EntityType,proto::InteractType> >::_Self *)(v5 + 1024));
      *(_BYTE *)(((v5 + 1024) >> 3) + 0x7FFF8000) = -8;
      if ( v199 )
      {
        v200 = std::_Rb_tree_const_iterator<std::pair<data::EntityType const,proto::InteractType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::EntityType,proto::InteractType> > *const)(v5 + 992));
        std::set<proto::InteractType>::insert((std::set<proto::InteractType> *const)(v5 + 7232), &v200->second);
      }
      *(_BYTE *)(((v5 + 992) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      *(_DWORD *)(((v5 + 3648) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3648) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3679) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 3679) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3648, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3648),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        258);
      v190 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3648),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v191 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v190, (const char (*)[27])byte_1A177720);
      v192 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v191, &p_1->second.gadget_id);
      v193 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v192, (const char (*)[13])", config_id:");
      v194 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v193,
               (const unsigned int *)(v5 + 176));
      v195 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v194, (const char (*)[12])", group_id:");
      v196 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v195,
               (const unsigned int *)(v5 + 96));
      v197 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v196, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v197, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3648));
      *(_DWORD *)(((v5 + 3648) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( !SceneScriptConfig::isPosValid(scene_script_config, &p_1->second.pos) )
    {
      *(_DWORD *)(((v5 + 3712) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3712) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3743) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 3743) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3712, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3712),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        272);
      v201 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3712),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v202 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v201, (const char (*)[43])byte_1A177760);
      v203 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v202,
               &gadget_script_config->config_id);
      v204 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v203, (const char (*)[12])", group_id:");
      v205 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v204,
               &group_script_config->group_id);
      v206 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v205, (const char (*)[12])", scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v206, &scene_script_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3712));
      *(_DWORD *)(((v5 + 3712) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v207 = 0;
    __l = 0;
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.owner_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.owner_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.owner_config_id);
    }
    if ( !p_1->second.owner_config_id )
      goto LABEL_305;
    *(_BYTE *)(((v5 + 1088) >> 3) + 0x7FFF8000) = 0;
    p_gadget_config_map = &this->gadget_config_map;
    if ( *(_BYTE *)(((v5 + 1088) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 1088) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(p_gadget_config_map);
    v207 = 1;
    *(_BYTE *)(((v5 + 1056) >> 3) + 0x7FFF8000) = 0;
    v209 = &this->gadget_config_map;
    p_owner_config_id = &p_1->second.owner_config_id;
    if ( *(_BYTE *)(((v5 + 1056) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 1056) = std::unordered_map<unsigned int,GadgetScriptConfig>::find(
                                                                                            v209,
                                                                                            p_owner_config_id);
    __l = 1;
    if ( std::__detail::operator==<std::pair<unsigned int const,GadgetScriptConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 1056),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 1088)) )
    {
      v211 = 1;
    }
    else
    {
LABEL_305:
      v211 = 0;
    }
    if ( __l )
      *(_BYTE *)(((v5 + 1056) >> 3) + 0x7FFF8000) = -8;
    if ( v207 )
      *(_BYTE *)(((v5 + 1088) >> 3) + 0x7FFF8000) = -8;
    if ( v211 )
    {
      *(_DWORD *)(((v5 + 3776) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3776) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3807) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 3807) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3776, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3776),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        277);
      v212 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3776),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v213 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v212, (const char (*)[9])"gadget: ");
      v214 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v213,
               (const unsigned int *)(v5 + 176));
      v215 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v214, (const char (*)[18])byte_1A177800);
      v216 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v215, &p_1->second.owner_config_id);
      v217 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v216, (const char (*)[11])byte_1A11EF60);
      v218 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v217, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v218, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3776));
      *(_DWORD *)(((v5 + 3776) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.route_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.route_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.route_id);
    }
    if ( p_1->second.route_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_1->second.entity_type);
      }
      if ( p_1->second.entity_type != Platform )
      {
        *(_DWORD *)(((v5 + 3840) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3840) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3871) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 3871) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3840, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3840),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          285);
        v219 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 3840),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v220 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v219, (const char (*)[56])byte_1A177840);
        v221 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v220, &p_1->second.gadget_id);
        v222 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v221, (const char (*)[13])", config_id:");
        v223 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v222,
                 (const unsigned int *)(v5 + 176));
        v224 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v223, (const char (*)[12])", group_id:");
        v225 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v224,
                 (const unsigned int *)(v5 + 96));
        v226 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v225, (const char (*)[12])", scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v226, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3840));
        *(_DWORD *)(((v5 + 3840) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    v227 = &config->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.area_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.area_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v227 = (JsonConfigMgr *)&p_1->second.area_id;
      __asan_report_load4(&p_1->second.area_id);
    }
    v228 = p_1->second.area_id;
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
    {
      v227 = (JsonConfigMgr *)(v5 + 80);
      __asan_report_load4(v5 + 80);
    }
    if ( JsonConfigMgr::checkPointInLevel1Area(v227, *(_DWORD *)(v5 + 80), v228, &p_1->second.pos) )
    {
      *(_DWORD *)(((v5 + 3904) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 3904) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 3935) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 3935) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 3904, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 3904),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        291);
      v229 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 3904),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v230 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v229,
               (const char (*)[19])"gadget config_id: ");
      v231 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v230,
               (const unsigned int *)(v5 + 176));
      v232 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v231, (const char (*)[10])"scene_id:");
      v233 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v232,
               &scene_script_config->scene_id);
      v234 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v233, (const char (*)[16])byte_1A177200);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v234, &p_1->second.area_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3904));
      *(_DWORD *)(((v5 + 3904) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.room_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.room_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.room_id);
    }
    if ( !p_1->second.room_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_excel_config_ptr->type);
      }
      if ( scene_excel_config_ptr->type == SCENE_ROOM )
      {
        *(_DWORD *)(((v5 + 3968) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 3968) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 3999) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 3999) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 3968, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 3968),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          296);
        v235 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 3968),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v236 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v235,
                 (const char (*)[19])"gadget config_id: ");
        v237 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v236,
                 (const unsigned int *)(v5 + 176));
        v238 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v237, (const char (*)[30])byte_1A177920);
        v239 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v238, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v239, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 3968));
        *(_DWORD *)(((v5 + 3968) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v240 = 0;
        goto LABEL_638;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&group_script_config->refresh_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_script_config->refresh_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_script_config->refresh_id);
    }
    if ( group_script_config->refresh_id )
    {
      refresh_config = data::RefreshPolicyExcelConfigMgrBase::findRefreshPolicyExcelConfig(
                         &config->txt_config_mgr.refresh_policy_config_mgr,
                         group_script_config->refresh_id);
      if ( !refresh_config )
      {
        *(_DWORD *)(((v5 + 4032) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 4032) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 4063) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 4063) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 4032, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 4032),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          306);
        v241 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 4032),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v242 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v241,
                 (const char (*)[19])"gadget config_id: ");
        v243 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v242,
                 (const unsigned int *)(v5 + 176));
        v244 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v243, (const char (*)[35])byte_1A177960);
        v245 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v244,
                 &group_script_config->refresh_id);
        v246 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v245, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v246, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4032));
        *(_DWORD *)(((v5 + 4032) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v240 = 0;
        goto LABEL_638;
      }
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.point_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_1 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.point_type >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&p_1->second.point_type);
      }
      if ( p_1->second.point_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config->type >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config->type);
        }
        if ( refresh_config->type )
        {
          *(_DWORD *)(((v5 + 4096) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 4096) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 4127) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 4127) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 4096, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 4096),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            313);
          v247 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 4096),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v248 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v247,
                   (const char (*)[19])"gadget config_id: ");
          v249 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v248,
                   (const unsigned int *)(v5 + 176));
          v250 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                   v249,
                   (const char (*)[61])byte_1A1779C0);
          v251 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v250,
                   &group_script_config->refresh_id);
          v252 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v251, (const char (*)[11])" group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v252, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4096));
          *(_DWORD *)(((v5 + 4096) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v240 = 0;
          goto LABEL_638;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.entity_type);
    }
    if ( p_1->second.entity_type == Chest )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_1->second.drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_1->second.drop_id);
      }
      if ( p_1->second.drop_id )
        goto LABEL_365;
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_1 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&p_1->second.chest_drop_id);
      }
      v253 = p_1->second.chest_drop_id == 0;
      if ( v253 == (unsigned __int8)std::string::empty(&p_1->second.drop_tag) )
LABEL_365:
        v254 = 1;
      else
        v254 = 0;
      if ( v254 )
      {
        *(_DWORD *)(((v5 + 4160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 4160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 4191) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 4191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 4160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 4160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          325);
        v255 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 4160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v256 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v255,
                 (const char (*)[19])"gadget config_id: ");
        v257 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v256,
                 (const unsigned int *)(v5 + 176));
        v258 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v257, (const char (*)[69])byte_1A177A20);
        v259 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v258, (const char (*)[10])" drop_id:");
        v260 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v259, &p_1->second.drop_id);
        v261 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v260,
                 (const char (*)[16])" chest_drop_id:");
        v262 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v261, &p_1->second.chest_drop_id);
        v263 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v262, (const char (*)[11])" drop_tag:");
        v264 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v263, &p_1->second.drop_tag);
        v265 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v264, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v265, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4160));
        *(_DWORD *)(((v5 + 4160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.boss_chest >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_1->second.boss_chest >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_1->second.boss_chest);
      }
      if ( p_1->second.boss_chest.monster_config_id )
      {
        monster_script_config_ptr = GroupScriptConfig::findMonsterConfig(this, p_1->second.boss_chest.monster_config_id);
        if ( !monster_script_config_ptr )
        {
          *(_DWORD *)(((v5 + 4224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 4224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 4255) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 4255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 4224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 4224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            338);
          v266 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 4224),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v267 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v266,
                   (const char (*)[19])"gadget config_id: ");
          v268 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v267,
                   (const unsigned int *)(v5 + 176));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v268, (const char (*)[33])byte_1A177AE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4224));
          *(_DWORD *)(((v5 + 4224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v240 = 1;
          goto LABEL_638;
        }
        v269 = &config->txt_config_mgr.monster_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)monster_script_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->monster_id >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&monster_script_config_ptr->monster_id);
        }
        monster_config_ptr_0 = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                                 v269,
                                 monster_script_config_ptr->monster_id);
        if ( !monster_config_ptr_0 )
          goto LABEL_384;
        if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr_0->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)monster_config_ptr_0 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr_0->type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&monster_config_ptr_0->type);
        }
        if ( monster_config_ptr_0->type != MONSTER_BOSS )
        {
LABEL_384:
          *(_DWORD *)(((v5 + 4288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 4288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 4319) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 4319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 4288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 4288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            345);
          v270 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 4288),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v271 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v270,
                   (const char (*)[19])"gadget config_id: ");
          v272 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v271,
                   (const unsigned int *)(v5 + 176));
          common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v272, (const char (*)[55])byte_1A177B40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4288));
          *(_DWORD *)(((v5 + 4288) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        has_boss_chest = 1;
        if ( *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_excel_config_ptr->type);
        }
        if ( scene_excel_config_ptr->type == SCENE_DUNGEON )
        {
          v273 = &config->txt_config_mgr.dungeon_config_mgr;
          if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 80);
          dungeon_set_ptr_0 = DungeonExcelConfigMgr::findDungeonSetBySceneId(v273, *(_DWORD *)(v5 + 80));
          if ( dungeon_set_ptr_0 )
          {
            *(_BYTE *)(((v5 + 1120) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 1120) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::set<unsigned int>::iterator *)(v5 + 1120) = std::set<unsigned int>::begin(dungeon_set_ptr_0);
            *(_BYTE *)(((v5 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 1152) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::set<unsigned int>::iterator *)(v5 + 1152) = std::set<unsigned int>::end(dungeon_set_ptr_0);
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1120),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1152)) )
            {
              v274 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1120));
              v275 = v274;
              if ( *(_BYTE *)(((unsigned __int64)v274 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v274 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v274 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v274);
              }
              dungeon_config_ptr_0 = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                       &config->txt_config_mgr.dungeon_config_mgr,
                                       *v275);
              if ( !dungeon_config_ptr_0 )
                goto LABEL_405;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr_0->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr_0->type >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_config_ptr_0->type);
              }
              if ( dungeon_config_ptr_0->type != DUNGEON_BOSS )
              {
LABEL_405:
                *(_DWORD *)(((v5 + 4352) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v5 + 4352) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 4383) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 4383) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 4352, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 4352),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/group_script_config.cpp",
                  "checkGroup",
                  360);
                v276 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v5 + 4352),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v276, (const char (*)[48])byte_1A177BA0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4352));
                *(_DWORD *)(((v5 + 4352) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1120));
            }
            *(_BYTE *)(((v5 + 1120) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 1152) >> 3) + 0x7FFF8000) = -8;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&p_1->second.boss_chest.take_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p_1 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.boss_chest.take_num >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&p_1->second.boss_chest.take_num);
          }
          if ( !p_1->second.boss_chest.take_num )
          {
            *(_DWORD *)(((v5 + 4416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 4416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 4447) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 4447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 4416, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 4416),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/group_script_config.cpp",
              "checkGroup",
              369);
            v277 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 4416),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v278 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     v277,
                     (const char (*)[34])byte_1A177C00);
            v279 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v278,
                     (const unsigned int *)(v5 + 176));
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v279, (const char (*)[28])byte_1A177C60);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4416));
            *(_DWORD *)(((v5 + 4416) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&p_1->second.is_persistent >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p_1 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&p_1->second.is_persistent >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&p_1->second.is_persistent);
        }
        if ( !p_1->second.is_persistent )
        {
          *(_DWORD *)(((v5 + 4480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 4480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 4511) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 4511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 4480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 4480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            375);
          v280 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 4480),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v281 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v280,
                   (const char (*)[19])"gadget config_id: ");
          v282 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v281,
                   (const unsigned int *)(v5 + 176));
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v282, (const char (*)[26])byte_1A177CA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4480));
          *(_DWORD *)(((v5 + 4480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_1 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&p_1->second.chest_drop_id);
      }
      if ( p_1->second.chest_drop_id || (unsigned __int8)std::string::empty(&p_1->second.drop_tag) != 1 )
      {
        *(_DWORD *)(((v5 + 4544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 4544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 4575) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 4575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 4544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 4544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          384);
        v284 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 4544),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v285 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v284,
                 (const char (*)[19])"gadget config_id: ");
        v286 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v285,
                 (const unsigned int *)(v5 + 176));
        v287 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v286, (const char (*)[56])byte_1A177CE0);
        v288 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v287, (const char (*)[10])" drop_id:");
        v289 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v288, &p_1->second.drop_id);
        v290 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v289,
                 (const char (*)[16])" chest_drop_id:");
        v291 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v290, &p_1->second.chest_drop_id);
        v292 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v291, (const char (*)[11])" drop_tag:");
        v293 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v292, &p_1->second.drop_tag);
        v294 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v293, (const char (*)[11])" group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v294, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4544));
        *(_DWORD *)(((v5 + 4544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    v295 = &config->lua_config_mgr;
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
    {
      v295 = (LuaConfigMgr *)(v5 + 80);
      __asan_report_load4(v5 + 80);
    }
    item_limit_type_0 = LuaConfigMgr::getGadgetItemLimitType(v295, *(_DWORD *)(v5 + 80), gadget_script_config, 0);
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.drop_id);
    }
    if ( p_1->second.drop_id
      && !TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
            &config->txt_config_mgr,
            p_1->second.drop_id,
            item_limit_type_0) )
    {
      *(_DWORD *)(((v5 + 4608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 4608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 4639) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 4639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 4608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 4608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        396);
      v297 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 4608),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v298 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v297,
               (const char (*)[19])"gadget config_id: ");
      v299 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v298,
               (const unsigned int *)(v5 + 176));
      v300 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v299, (const char (*)[10])" drop_id:");
      v301 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v300, &p_1->second.drop_id);
      v302 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v301, (const char (*)[7])byte_1A117C40);
      v303 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v302, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v303, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4608));
      *(_DWORD *)(((v5 + 4608) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_1 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.chest_drop_id >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&p_1->second.chest_drop_id);
    }
    if ( p_1->second.chest_drop_id
      && !TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
            &config->txt_config_mgr,
            p_1->second.chest_drop_id,
            item_limit_type_0) )
    {
      *(_DWORD *)(((v5 + 4672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 4672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 4703) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 4703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 4672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 4672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        401);
      v305 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 4672),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v306 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v305,
               (const char (*)[19])"gadget config_id: ");
      v307 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v306,
               (const unsigned int *)(v5 + 176));
      v308 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v307,
               (const char (*)[16])" chest_drop_id:");
      v309 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v308, &p_1->second.chest_drop_id);
      v310 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v309, (const char (*)[7])byte_1A117C40);
      v311 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v310, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v311, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4672));
      *(_DWORD *)(((v5 + 4672) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 96);
    v312 = *(_DWORD *)(v5 + 96);
    if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 176);
    v313 = *(_DWORD *)(v5 + 176);
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p_1 + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&p_1->second.is_oneoff);
    }
    if ( !GroupScriptConfig::isDropTagValid(
            this,
            config,
            PROT_ENTITY_GADGET,
            &p_1->second.drop_tag,
            p_1->second.is_oneoff,
            v313,
            v312) )
      ret = -1;
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.interact_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_1 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.interact_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p_1->second.interact_id);
    }
    if ( p_1->second.interact_id )
    {
      interact_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetInteractExcelConfig(
                              &config->txt_config_mgr.gadget_config_mgr,
                              p_1->second.interact_id);
      if ( interact_config_ptr )
      {
        __for_range_8 = &interact_config_ptr->action_list;
        *(_BYTE *)(((v5 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 1184) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GadgetInteractActionConfig>::const_iterator *)(v5 + 1184) = std::vector<data::GadgetInteractActionConfig>::begin(__for_range_8);
        *(_BYTE *)(((v5 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 1216) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GadgetInteractActionConfig>::const_iterator *)(v5 + 1216) = std::vector<data::GadgetInteractActionConfig>::end(__for_range_8);
        while ( __gnu_cxx::operator!=<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *)(v5 + 1184),
                  (const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *)(v5 + 1216)) )
        {
          action_config = __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *const)(v5 + 1184));
          if ( *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&action_config->action_type);
          }
          action_type = action_config->action_type;
          if ( action_type == INTERACT_ACTION_SET_GADGET_CHAIN_BUFF )
          {
            if ( !gadget_config_ptr )
              goto LABEL_485;
            v320 = &config->txt_config_mgr.gadget_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gadget_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->chain_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gadget_config_ptr->chain_id);
            }
            if ( data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(v320, gadget_config_ptr->chain_id) )
LABEL_485:
              v321 = 0;
            else
              v321 = 1;
            if ( v321 )
            {
              *(_DWORD *)(((v5 + 4800) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 4800) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 4831) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 4831) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 4800, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 4800),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/group_script_config.cpp",
                "checkGroup",
                426);
              v322 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 4800),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v323 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                       v322,
                       (const char (*)[20])"gadget interact_id:");
              v324 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v323,
                       &p_1->second.interact_id);
              v325 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                       v324,
                       (const char (*)[76])byte_1A177DC0);
              v326 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v325,
                       (const unsigned int *)(v5 + 96));
              v327 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                       v326,
                       (const char (*)[19])" gadget config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v327,
                (const unsigned int *)(v5 + 176));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4800));
              *(_DWORD *)(((v5 + 4800) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else if ( action_type == INTERACT_ACTION_UNLOCK_SPECIAL_TRANSPORT_POINT )
          {
            if ( std::vector<unsigned int>::empty(&p_1->second.argument_vec) )
            {
              *(_DWORD *)(((v5 + 4864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 4864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 4895) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 4895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 4864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 4864),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/group_script_config.cpp",
                "checkGroup",
                436);
              v328 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 4864),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v329 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                       v328,
                       (const char (*)[20])"gadget interact_id:");
              v330 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v329,
                       &p_1->second.interact_id);
              v331 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                       v330,
                       (const char (*)[68])byte_1A177E80);
              v332 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v331,
                       (const unsigned int *)(v5 + 96));
              v333 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                       v332,
                       (const char (*)[19])" gadget config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v333,
                (const unsigned int *)(v5 + 176));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4864));
              *(_DWORD *)(((v5 + 4864) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            __for_range_9 = &p_1->second.argument_vec;
            *(_BYTE *)(((v5 + 1248) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 1248) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::vector<unsigned int>::const_iterator *)(v5 + 1248) = std::vector<unsigned int>::begin(__for_range_9);
            *(_BYTE *)(((v5 + 1280) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v5 + 1280) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::vector<unsigned int>::const_iterator *)(v5 + 1280) = std::vector<unsigned int>::end(__for_range_9);
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 1248),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 1280)) )
            {
              v334 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 1248));
              point_id = v334;
              *(_WORD *)(((v5 + 2272) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)v334 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v334 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v334 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v334);
              }
              if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v5 + 80);
              v335 = *(_DWORD *)(v5 + 80);
              if ( *(_WORD *)(((v5 + 2272) >> 3) + 0x7FFF8000) )
                __asan_report_store16(v5 + 2272);
              JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
                (const JsonConfigMgr *const)(v5 + 2272),
                (_DWORD)config + 89912,
                v335);
              if ( std::operator==<data::SceneTransPoint>(
                     0LL,
                     (const std::shared_ptr<data::SceneTransPoint> *)(v5 + 2272)) )
              {
                *(_DWORD *)(((v5 + 4928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v5 + 4928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v5 + 4959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 4959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v5 + 4928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v5 + 4928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/group_script_config.cpp",
                  "checkGroup",
                  445);
                v336 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v5 + 4928),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v337 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                         v336,
                         (const char (*)[20])"gadget interact_id:");
                v338 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v337,
                         &p_1->second.interact_id);
                v339 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                         v338,
                         (const char (*)[80])byte_1A177F00);
                v340 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                         v339,
                         (const char (*)[11])"Scene_id: ");
                v341 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v340,
                         (const unsigned int *)(v5 + 80));
                v342 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                         v341,
                         (const char (*)[12])" point_id: ");
                v343 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v342, point_id);
                v344 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                         v343,
                         (const char (*)[21])byte_1A177F80);
                v345 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v344,
                         (const unsigned int *)(v5 + 96));
                v346 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                         v345,
                         (const char (*)[19])" gadget config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v346,
                  (const unsigned int *)(v5 + 176));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4928));
                *(_DWORD *)(((v5 + 4928) >> 3) + 0x7FFF8000) = -117901064;
                v4 = -1;
                v347 = 0;
              }
              else
              {
                v347 = 1;
              }
              std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v5 + 2272));
              *(_WORD *)(((v5 + 2272) >> 3) + 0x7FFF8000) = -1800;
              if ( v347 != 1 )
              {
                v348 = 0;
                goto LABEL_515;
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 1248));
            }
            v348 = 1;
LABEL_515:
            *(_BYTE *)(((v5 + 1248) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 1280) >> 3) + 0x7FFF8000) = -8;
            if ( v348 != 1 )
            {
              v349 = 0;
              goto LABEL_519;
            }
          }
          __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *const)(v5 + 1184));
        }
        v349 = 1;
LABEL_519:
        *(_BYTE *)(((v5 + 1184) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 1216) >> 3) + 0x7FFF8000) = -8;
        if ( v349 != 1 )
        {
          v240 = 2;
          goto LABEL_638;
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 4736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 4736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 4767) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 4767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 4736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 4736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          413);
        v314 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 4736),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v315 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v314,
                 (const char (*)[19])"gadget config_id: ");
        v316 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v315,
                 (const unsigned int *)(v5 + 176));
        v317 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v316, (const char (*)[23])byte_1A177D40);
        v318 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v317, &p_1->second.interact_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v318, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4736));
        *(_DWORD *)(((v5 + 4736) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 192);
      *(_DWORD *)(v5 + 192) = 5;
      std::set<proto::InteractType>::insert(
        (std::set<proto::InteractType> *const)(v5 + 7232),
        (std::set<proto::InteractType>::value_type *)(v5 + 192));
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_1->second.explore_config);
      }
      if ( p_1->second.explore_config.type && p_1->second.explore_config.type != 2 )
      {
        *(_DWORD *)(((v5 + 4992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 4992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5023) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 5023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 4992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 4992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          461);
        v350 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 4992),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v351 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v350, (const char (*)[84])byte_1A177FC0);
        v352 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v351,
                 (const unsigned int *)(v5 + 96));
        v353 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v352, (const char (*)[12])" config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v353, (const unsigned int *)(v5 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 4992));
        *(_DWORD *)(((v5 + 4992) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.explore_config);
    }
    if ( p_1->second.explore_config.type == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.interact_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_1 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.interact_id >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&p_1->second.interact_id);
      }
      if ( !p_1->second.interact_id )
      {
        *(_DWORD *)(((v5 + 5056) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5056) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5087) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 5087) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5056, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5056),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          468);
        v354 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5056),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v355 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v354, (const char (*)[75])byte_1A178040);
        v356 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v355,
                 (const unsigned int *)(v5 + 96));
        v357 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v356, (const char (*)[12])" config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v357, (const unsigned int *)(v5 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5056));
        *(_DWORD *)(((v5 + 5056) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( std::unordered_set<unsigned int>::count(
           &this->garbage_config_id_set,
           (const std::unordered_set<unsigned int>::key_type *)(v5 + 176)) )
    {
      *(_DWORD *)(((v5 + 5120) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 5120) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 5151) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 5151) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 5120, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 5120),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        473);
      v358 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 5120),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v359 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v358,
               (const char (*)[19])"gadget config_id: ");
      v360 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v359,
               (const unsigned int *)(v5 + 176));
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v360, (const char (*)[32])byte_1A177340);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5120));
      *(_DWORD *)(((v5 + 5120) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)p_1 + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&p_1->second.is_oneoff);
    }
    if ( !p_1->second.is_oneoff )
      goto LABEL_550;
    v361 = &config->txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v5 + 80);
    if ( DungeonExcelConfigMgr::isUsedForMpDungeon(v361, *(_DWORD *)(v5 + 80)) )
      v362 = 1;
    else
LABEL_550:
      v362 = 0;
    if ( v362 )
    {
      *(_DWORD *)(((v5 + 5184) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 5184) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 5215) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 5215) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 5184, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 5184),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        478);
      v363 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 5184),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v364 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v363,
               (const char (*)[19])"gadget config_id: ");
      v365 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v364,
               (const unsigned int *)(v5 + 176));
      v366 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v365, (const char (*)[74])byte_1A177380);
      v367 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v366,
               (const unsigned int *)(v5 + 80));
      v368 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v367, (const char (*)[13])" ,group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v368, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5184));
      *(_DWORD *)(((v5 + 5184) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.offering_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.offering_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.offering_config);
    }
    if ( p_1->second.offering_config.offering_id )
    {
      if ( !OfferingExcelConfigMgr::isOfferingIdValid(
              &config->txt_config_mgr.offering_config_mgr,
              p_1->second.offering_config.offering_id) )
      {
        *(_DWORD *)(((v5 + 5248) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5248) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5279) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 5279) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5248, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5248),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          487);
        v369 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5248),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v370 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v369, (const char (*)[17])byte_1A1780C0);
        v371 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v370,
                 &gadget_script_config->config_id);
        v372 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v371, (const char (*)[22])byte_1A178100);
        v373 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v372,
                 &p_1->second.offering_config.offering_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v373, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5248));
        *(_DWORD *)(((v5 + 5248) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( gadget_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&gadget_config_ptr->type);
        }
        if ( gadget_config_ptr->type != OfferingGadget )
        {
          *(_DWORD *)(((v5 + 5312) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 5312) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 5343) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 5343) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 5312, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 5312),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            493);
          v374 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 5312),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v375 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                   v374,
                   (const char (*)[17])byte_1A1780C0);
          v376 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v375,
                   &gadget_script_config->config_id);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v376, (const char (*)[19])byte_1A178140);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5312));
          *(_DWORD *)(((v5 + 5312) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.point_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_1 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.point_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p_1->second.point_type);
    }
    if ( p_1->second.point_type )
    {
      gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(
                            &config->txt_config_mgr.gather_config_mgr,
                            p_1->second.point_type);
      if ( gather_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config.exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_1 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config.exp >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&p_1->second.explore_config.exp);
        }
        if ( !p_1->second.explore_config.exp )
          goto LABEL_585;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)gather_config_ptr + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load1(&gather_config_ptr->is_forbid_guest);
        }
        if ( !gather_config_ptr->is_forbid_guest )
        {
          *(_DWORD *)(((v5 + 5440) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 5440) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 5471) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 5471) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 5440, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 5440),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            509);
          v383 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 5440),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v384 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                   v383,
                   (const char (*)[78])byte_1A1781E0);
          v385 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v384, &p_1->second.point_type);
          v386 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v385, (const char (*)[11])" group_id:");
          v387 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v386,
                   (const unsigned int *)(v5 + 96));
          v388 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v387,
                   (const char (*)[12])" config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v388, (const unsigned int *)(v5 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5440));
          *(_DWORD *)(((v5 + 5440) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
LABEL_585:
          if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gather_config_ptr + 97) & 7) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_forbid_guest >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load1(&gather_config_ptr->is_forbid_guest);
          }
          if ( !gather_config_ptr->is_forbid_guest )
          {
            if ( *(char *)(((unsigned __int64)&gather_config_ptr->is_forbid_mp_mode >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&gather_config_ptr->is_forbid_mp_mode);
            if ( gather_config_ptr->is_forbid_mp_mode )
            {
              *(_DWORD *)(((v5 + 5504) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v5 + 5504) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v5 + 5535) >> 3) + 0x7FFF8000) != 0
                && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 5535) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v5 + 5504, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v5 + 5504),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/group_script_config.cpp",
                "checkGroup",
                514);
              v389 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v5 + 5504),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v390 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                       v389,
                       (const char (*)[70])byte_1A178260);
              v391 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v390,
                       &p_1->second.point_type);
              v392 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v391,
                       (const char (*)[11])" group_id:");
              v393 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v392,
                       (const unsigned int *)(v5 + 96));
              v394 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                       v393,
                       (const char (*)[12])" config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v394,
                (const unsigned int *)(v5 + 176));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5504));
              *(_DWORD *)(((v5 + 5504) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 5376) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5376) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5407) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 5407) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5376, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5376),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          504);
        v377 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5376),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v378 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                 v377,
                 (const char (*)[55])"findGatherExcelConfig fails, point_type and gather_id:");
        v379 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v378, &p_1->second.point_type);
        v380 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v379, (const char (*)[11])" group_id:");
        v381 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v380,
                 (const unsigned int *)(v5 + 96));
        v382 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v381, (const char (*)[12])" config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v382, (const unsigned int *)(v5 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5376));
        *(_DWORD *)(((v5 + 5376) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 208);
      *(_DWORD *)(v5 + 208) = 2;
      std::set<proto::InteractType>::insert(
        (std::set<proto::InteractType> *const)(v5 + 7232),
        (std::set<proto::InteractType>::value_type *)(v5 + 208));
      *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.explore_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.explore_config);
    }
    if ( p_1->second.explore_config.type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_1 + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&p_1->second.is_oneoff >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&p_1->second.is_oneoff);
      }
      if ( !p_1->second.is_oneoff )
      {
        *(_DWORD *)(((v5 + 5568) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5568) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5599) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 5599) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5568, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5568),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          523);
        v395 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5568),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v396 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v395, (const char (*)[57])byte_1A1782E0);
        v397 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v396,
                 (const unsigned int *)(v5 + 96));
        v398 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v397, (const char (*)[12])" config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v398, (const unsigned int *)(v5 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5568));
        *(_DWORD *)(((v5 + 5568) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( std::set<proto::InteractType>::size((const std::set<proto::InteractType> *const)(v5 + 7232)) > 1 )
    {
      __asan_unpoison_stack_memory(v5 + 7408, 392LL);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v5 + 7408);
      __for_range_10 = (std::set<proto::InteractType> *)(v5 + 7232);
      *(_BYTE *)(((v5 + 1312) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1312) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<proto::InteractType>::iterator *)(v5 + 1312) = std::set<proto::InteractType>::begin(__for_range_10);
      *(_BYTE *)(((v5 + 1344) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1344) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<proto::InteractType>::iterator *)(v5 + 1344) = std::set<proto::InteractType>::end(__for_range_10);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<proto::InteractType>::_Self *)(v5 + 1312),
                (const std::_Rb_tree_const_iterator<proto::InteractType>::_Self *)(v5 + 1344)) )
      {
        v399 = (proto::InteractType *)std::_Rb_tree_const_iterator<proto::InteractType>::operator*((const std::_Rb_tree_const_iterator<proto::InteractType> *const)(v5 + 1312));
        v400 = v399;
        if ( *(_BYTE *)(((unsigned __int64)v399 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v399 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v399 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v399);
        }
        v401 = proto::InteractType_Name[abi:cxx11](*v400);
        v402 = std::operator<<<char>(v5 + 7424, v401);
        std::operator<<<std::char_traits<char>>(v402, " ");
        std::_Rb_tree_const_iterator<proto::InteractType>::operator++((std::_Rb_tree_const_iterator<proto::InteractType> *const)(v5 + 1312));
      }
      *(_BYTE *)(((v5 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_DWORD *)(((v5 + 5632) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 5632) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 5663) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 5663) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 5632, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 5632),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        534);
      v403 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 5632),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v404 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v403, (const char (*)[10])"group_id:");
      v405 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v404,
               (const unsigned int *)(v5 + 96));
      v406 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v405, (const char (*)[12])" config_id:");
      v407 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v406,
               (const unsigned int *)(v5 + 176));
      v408 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               v407,
               (const char (*)[32])" has more than 1 interact type:");
      *(_DWORD *)(((v5 + 5696) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 5696) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 5727) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 5727) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 5696, 32LL);
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v5 + 5696, v5 + 7408);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v408, (const std::string *)(v5 + 5696));
      std::string::~string((void *)(v5 + 5696));
      *(_DWORD *)(((v5 + 5696) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5632));
      *(_DWORD *)(((v5 + 5632) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v5 + 7408);
      __asan_poison_stack_memory(v5 + 7408, 392LL);
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.fish_pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.fish_pool_id);
    }
    if ( p_1->second.fish_pool_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&p_1->second.is_persistent >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_1 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&p_1->second.is_persistent >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(&p_1->second.is_persistent);
      }
      if ( !p_1->second.is_persistent )
      {
        *(_DWORD *)(((v5 + 5760) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5760) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5791) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 5791) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5760, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5760),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          541);
        v409 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5760),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v410 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v409, (const char (*)[10])"group_id:");
        v411 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v410,
                 (const unsigned int *)(v5 + 96));
        v412 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v411, (const char (*)[12])" config_id:");
        v413 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v412,
                 (const unsigned int *)(v5 + 176));
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v413, (const char (*)[38])byte_1A178380);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5760));
        *(_DWORD *)(((v5 + 5760) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_1->second.entity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&p_1->second.entity_type);
    }
    if ( p_1->second.entity_type != Worktop && std::optional<WorktopConfig>::has_value(&p_1->second.worktop_config_opt) )
    {
      *(_DWORD *)(((v5 + 5824) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 5824) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 5855) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 5855) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 5824, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 5824),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        550);
      v414 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 5824),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v415 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v414, (const char (*)[10])"group_id:");
      v416 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v415,
               (const unsigned int *)(v5 + 96));
      v417 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v416, (const char (*)[12])" config_id:");
      v418 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v417,
               (const unsigned int *)(v5 + 176));
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v418, (const char (*)[46])byte_1A1783E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5824));
      *(_DWORD *)(((v5 + 5824) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v240 = 3;
LABEL_638:
    std::set<proto::InteractType>::~set((std::set<proto::InteractType> *const)(v5 + 7232));
    if ( v240 == 3 )
    {
      v419 = 3;
    }
    else if ( v240 )
    {
      if ( v240 == 1 )
        v419 = 1;
      else
        v419 = 2;
    }
    else
    {
      v419 = 0;
    }
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
    v420 = ((v5 + 7232) >> 3) + 2147450880;
    *(_DWORD *)v420 = -117901064;
    *(_WORD *)(v420 + 4) = -1800;
    if ( v419 != 3 )
    {
      if ( !v419 )
        break;
      if ( v419 != 1 )
      {
        v421 = 0;
        goto LABEL_651;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 928));
  }
  v421 = 1;
LABEL_651:
  *(_BYTE *)(((v5 + 928) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 960) >> 3) + 0x7FFF8000) = -8;
  if ( v421 == 1 )
  {
    __for_range_11 = &this->region_config_map;
    *(_BYTE *)(((v5 + 1376) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 1376) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v5 + 1376) = std::unordered_map<unsigned int,RegionScriptConfig>::begin(__for_range_11);
    *(_BYTE *)(((v5 + 1408) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 1408) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v5 + 1408) = std::unordered_map<unsigned int,RegionScriptConfig>::end(__for_range_11);
    while ( std::__detail::operator!=<std::pair<unsigned int const,RegionScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v5 + 1376),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v5 + 1408)) )
    {
      p_2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v5 + 1376));
      region_config = &p_2->second;
      if ( !SceneScriptConfig::isPosValid(scene_script_config, &p_2->second.pos) )
      {
        *(_DWORD *)(((v5 + 5888) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 5888) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 5919) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 5919) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 5888, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 5888),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          562);
        v422 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 5888),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v423 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v422, (const char (*)[43])byte_1A178440);
        v424 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v423, &region_config->config_id);
        v425 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v424, (const char (*)[12])", group_id:");
        v426 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v425,
                 &group_script_config->group_id);
        v427 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v426, (const char (*)[12])", scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v427, &scene_script_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5888));
        *(_DWORD *)(((v5 + 5888) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&p_2->second.room_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_2->second.room_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p_2->second.room_id);
      }
      if ( !p_2->second.room_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scene_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_excel_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&scene_excel_config_ptr->type);
        }
        if ( scene_excel_config_ptr->type == SCENE_ROOM )
        {
          *(_DWORD *)(((v5 + 5952) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 5952) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 5983) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 5983) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 5952, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 5952),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            567);
          v428 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 5952),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v429 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v428,
                   (const char (*)[19])"region config_id: ");
          v430 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v429, &region_config->config_id);
          v431 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                   v430,
                   (const char (*)[25])byte_1A1784E0);
          v432 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v431, (const char (*)[11])" group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v432, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 5952));
          *(_DWORD *)(((v5 + 5952) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          break;
        }
      }
      v433 = &config->json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p_2->second.area_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_2->second.area_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v433 = (JsonConfigMgr *)&p_2->second.area_id;
        __asan_report_load4(&p_2->second.area_id);
      }
      v434 = p_2->second.area_id;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
      {
        v433 = (JsonConfigMgr *)(v5 + 80);
        __asan_report_load4(v5 + 80);
      }
      if ( JsonConfigMgr::checkPointInLevel1Area(v433, *(_DWORD *)(v5 + 80), v434, &p_2->second.pos) )
      {
        *(_DWORD *)(((v5 + 6016) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 6016) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 6047) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 6047) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 6016, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 6016),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          573);
        v435 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 6016),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v436 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v435,
                 (const char (*)[19])"region config_id: ");
        v437 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v436, &region_config->config_id);
        v438 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v437, (const char (*)[11])" group_id:");
        v439 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v438,
                 (const unsigned int *)(v5 + 96));
        v440 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v439, (const char (*)[11])" scene_id:");
        v441 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v440,
                 &scene_script_config->scene_id);
        v442 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v441, (const char (*)[16])byte_1A177200);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v442, &p_2->second.area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6016));
        *(_DWORD *)(((v5 + 6016) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_12 = &p_2->second.ability_group_vec;
      *(_BYTE *)(((v5 + 1440) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1440) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::const_iterator *)(v5 + 1440) = std::vector<std::string>::begin(__for_range_12);
      *(_BYTE *)(((v5 + 1472) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1472) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::const_iterator *)(v5 + 1472) = std::vector<std::string>::end(__for_range_12);
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v5 + 1440),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v5 + 1472)) )
      {
        ability_group_name = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v5 + 1440));
        if ( !JsonConfigMgr::findAvatarAbilityGroup(&config->json_config_mgr, ability_group_name) )
        {
          *(_DWORD *)(((v5 + 6080) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6080) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6111) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 6111) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6080, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6080),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            580);
          v443 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6080),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v444 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v443,
                   (const char (*)[19])"region config_id: ");
          v445 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v444, &region_config->config_id);
          v446 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v445, (const char (*)[11])" group_id:");
          v447 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v446,
                   (const unsigned int *)(v5 + 96));
          v448 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v447, (const char (*)[11])" scene_id:");
          v449 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v448,
                   &scene_script_config->scene_id);
          v450 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                   v449,
                   (const char (*)[30])byte_1A178520);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v450, ability_group_name);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6080));
          *(_DWORD *)(((v5 + 6080) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v5 + 1440));
      }
      *(_BYTE *)(((v5 + 1440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1472) >> 3) + 0x7FFF8000) = -8;
      __for_range_13 = &p_2->second.team_ability_group_vec;
      *(_BYTE *)(((v5 + 1504) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1504) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::const_iterator *)(v5 + 1504) = std::vector<std::string>::begin(__for_range_13);
      *(_BYTE *)(((v5 + 1536) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1536) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<std::string>::const_iterator *)(v5 + 1536) = std::vector<std::string>::end(__for_range_13);
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v5 + 1504),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v5 + 1536)) )
      {
        ability_group_name_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v5 + 1504));
        if ( !JsonConfigMgr::findTeamAbilityGroup(&config->json_config_mgr, ability_group_name_0) )
        {
          *(_DWORD *)(((v5 + 6144) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6144) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6175) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 6175) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6144, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6144),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            588);
          v451 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6144),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v452 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                   v451,
                   (const char (*)[19])"region config_id: ");
          v453 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v452, &region_config->config_id);
          v454 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v453, (const char (*)[11])" group_id:");
          v455 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v454,
                   (const unsigned int *)(v5 + 96));
          v456 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v455, (const char (*)[11])" scene_id:");
          v457 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v456,
                   &scene_script_config->scene_id);
          v458 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   v457,
                   (const char (*)[28])byte_1A178560);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v458, ability_group_name_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6144));
          *(_DWORD *)(((v5 + 6144) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v5 + 1504));
      }
      *(_BYTE *)(((v5 + 1504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1536) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v5 + 1376));
    }
    *(_BYTE *)(((v5 + 1376) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 1408) >> 3) + 0x7FFF8000) = -8;
    for ( idx = 0LL; idx < std::vector<SuiteScriptConfig>::size(&this->suite_config_vec); ++idx )
    {
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 4;
      v459 = idx + 1;
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 224);
      *(_DWORD *)(v5 + 224) = v459;
      suite_script_config = std::vector<SuiteScriptConfig>::operator[](&this->suite_config_vec, idx);
      *(_BYTE *)(((v5 + 1568) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1568) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1568) = std::set<unsigned int>::begin(&suite_script_config->monster_config_set);
      *(_BYTE *)(((v5 + 1600) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1600) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1600) = std::set<unsigned int>::end(&suite_script_config->monster_config_set);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1568),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1600)) )
      {
        *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 4;
        v460 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1568));
        v461 = (int *)v460;
        if ( *(_BYTE *)(((unsigned __int64)v460 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v460 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v460 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v460);
        }
        v462 = *v461;
        if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 240);
        *(_DWORD *)(v5 + 240) = v462;
        *(_BYTE *)(((v5 + 1664) >> 3) + 0x7FFF8000) = 0;
        p_monster_config_map = &this->monster_config_map;
        if ( *(_BYTE *)(((v5 + 1664) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 1664) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(p_monster_config_map);
        *(_BYTE *)(((v5 + 1632) >> 3) + 0x7FFF8000) = 0;
        v464 = &this->monster_config_map;
        if ( *(_BYTE *)(((v5 + 1632) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 1632) = std::unordered_map<unsigned int,MonsterScriptConfig>::find(
                                                                                                 v464,
                                                                                                 (const std::unordered_map<unsigned int,MonsterScriptConfig>::key_type *)(v5 + 240));
        v465 = std::__detail::operator==<std::pair<unsigned int const,MonsterScriptConfig>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 1632),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 1664));
        *(_BYTE *)(((v5 + 1632) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 1664) >> 3) + 0x7FFF8000) = -8;
        if ( v465 )
        {
          *(_DWORD *)(((v5 + 6208) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6208) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6239) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 6239) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6208, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6208),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            604);
          v466 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6208),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v467 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                   v466,
                   (const char (*)[44])byte_1A1785A0);
          v468 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v467,
                   (const unsigned int *)(v5 + 240));
          v469 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v468,
                   (const char (*)[13])", group_id: ");
          v470 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v469,
                   (const unsigned int *)(v5 + 96));
          v471 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v470,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v471, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6208));
          *(_DWORD *)(((v5 + 6208) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1568));
      }
      *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1600) >> 3) + 0x7FFF8000) = -8;
      __for_range_15 = &suite_script_config->gadget_config_set;
      *(_BYTE *)(((v5 + 1696) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1696) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1696) = std::set<unsigned int>::begin(__for_range_15);
      *(_BYTE *)(((v5 + 1728) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1728) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1728) = std::set<unsigned int>::end(__for_range_15);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1696),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1728)) )
      {
        *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 4;
        v472 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1696));
        v473 = (int *)v472;
        if ( *(_BYTE *)(((unsigned __int64)v472 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v472 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v472 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v472);
        }
        v474 = *v473;
        if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 256);
        *(_DWORD *)(v5 + 256) = v474;
        *(_BYTE *)(((v5 + 1792) >> 3) + 0x7FFF8000) = 0;
        v475 = &this->gadget_config_map;
        if ( *(_BYTE *)(((v5 + 1792) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 1792) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(v475);
        *(_BYTE *)(((v5 + 1760) >> 3) + 0x7FFF8000) = 0;
        v476 = &this->gadget_config_map;
        if ( *(_BYTE *)(((v5 + 1760) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v5 + 1760) = std::unordered_map<unsigned int,GadgetScriptConfig>::find(
                                                                                                v476,
                                                                                                (const std::unordered_map<unsigned int,GadgetScriptConfig>::key_type *)(v5 + 256));
        v477 = std::__detail::operator==<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 1760),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 1792));
        *(_BYTE *)(((v5 + 1760) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 1792) >> 3) + 0x7FFF8000) = -8;
        if ( v477 )
        {
          *(_DWORD *)(((v5 + 6272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6303) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 6303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            612);
          v478 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6272),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v479 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                   v478,
                   (const char (*)[43])byte_1A178600);
          v480 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v479,
                   (const unsigned int *)(v5 + 256));
          v481 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v480,
                   (const char (*)[13])", group_id: ");
          v482 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v481,
                   (const unsigned int *)(v5 + 96));
          v483 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v482,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v483, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6272));
          *(_DWORD *)(((v5 + 6272) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1696));
      }
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1696) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1728) >> 3) + 0x7FFF8000) = -8;
      __for_range_16 = &suite_script_config->region_config_set;
      *(_BYTE *)(((v5 + 1824) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1824) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1824) = std::set<unsigned int>::begin(__for_range_16);
      *(_BYTE *)(((v5 + 1856) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1856) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1856) = std::set<unsigned int>::end(__for_range_16);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1824),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1856)) )
      {
        *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 4;
        v484 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1824));
        v485 = (int *)v484;
        if ( *(_BYTE *)(((unsigned __int64)v484 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v484 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v484 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v484);
        }
        v486 = *v485;
        if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 272);
        *(_DWORD *)(v5 + 272) = v486;
        *(_BYTE *)(((v5 + 1920) >> 3) + 0x7FFF8000) = 0;
        p_region_config_map = &this->region_config_map;
        if ( *(_BYTE *)(((v5 + 1920) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v5 + 1920) = std::unordered_map<unsigned int,RegionScriptConfig>::end(p_region_config_map);
        *(_BYTE *)(((v5 + 1888) >> 3) + 0x7FFF8000) = 0;
        v488 = &this->region_config_map;
        if ( *(_BYTE *)(((v5 + 1888) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v5 + 1888) = std::unordered_map<unsigned int,RegionScriptConfig>::find(
                                                                                                v488,
                                                                                                (const std::unordered_map<unsigned int,RegionScriptConfig>::key_type *)(v5 + 272));
        v489 = std::__detail::operator==<std::pair<unsigned int const,RegionScriptConfig>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v5 + 1888),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v5 + 1920));
        *(_BYTE *)(((v5 + 1888) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 1920) >> 3) + 0x7FFF8000) = -8;
        if ( v489 )
        {
          *(_DWORD *)(((v5 + 6336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6367) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 6367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            620);
          v490 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6336),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v491 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                   v490,
                   (const char (*)[43])byte_1A178660);
          v492 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v491,
                   (const unsigned int *)(v5 + 272));
          v493 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v492,
                   (const char (*)[13])", group_id: ");
          v494 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v493,
                   (const unsigned int *)(v5 + 96));
          v495 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v494,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v495, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6336));
          *(_DWORD *)(((v5 + 6336) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1824));
      }
      *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1824) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1856) >> 3) + 0x7FFF8000) = -8;
      __for_range_17 = &suite_script_config->npc_config_set;
      *(_BYTE *)(((v5 + 1952) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1952) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1952) = std::set<unsigned int>::begin(__for_range_17);
      *(_BYTE *)(((v5 + 1984) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 1984) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v5 + 1984) = std::set<unsigned int>::end(__for_range_17);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1952),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v5 + 1984)) )
      {
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 4;
        v496 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1952));
        v497 = (int *)v496;
        if ( *(_BYTE *)(((unsigned __int64)v496 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v496 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v496 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v496);
        }
        v498 = *v497;
        if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 288);
        *(_DWORD *)(v5 + 288) = v498;
        *(_BYTE *)(((v5 + 2048) >> 3) + 0x7FFF8000) = 0;
        p_npc_config_map = &this->npc_config_map;
        if ( *(_BYTE *)(((v5 + 2048) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v5 + 2048) = std::unordered_map<unsigned int,NpcScriptConfig>::end(p_npc_config_map);
        *(_BYTE *)(((v5 + 2016) >> 3) + 0x7FFF8000) = 0;
        v500 = &this->npc_config_map;
        if ( *(_BYTE *)(((v5 + 2016) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v5 + 2016) = std::unordered_map<unsigned int,NpcScriptConfig>::find(
                                                                                             v500,
                                                                                             (const std::unordered_map<unsigned int,NpcScriptConfig>::key_type *)(v5 + 288));
        v501 = std::__detail::operator==<std::pair<unsigned int const,NpcScriptConfig>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v5 + 2016),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v5 + 2048));
        *(_BYTE *)(((v5 + 2016) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 2048) >> 3) + 0x7FFF8000) = -8;
        if ( v501 )
        {
          *(_DWORD *)(((v5 + 6400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6431) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 6431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6400),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            628);
          v502 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6400),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v503 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                   v502,
                   (const char (*)[40])byte_1A1786C0);
          v504 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v503,
                   (const unsigned int *)(v5 + 288));
          v505 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v504,
                   (const char (*)[13])", group_id: ");
          v506 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v505,
                   (const unsigned int *)(v5 + 96));
          v507 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v506,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v507, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6400));
          *(_DWORD *)(((v5 + 6400) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v5 + 1952));
      }
      *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1952) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 1984) >> 3) + 0x7FFF8000) = -8;
      __for_range_18 = &suite_script_config->trigger_set;
      *(_BYTE *)(((v5 + 2080) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 2080) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string>::iterator *)(v5 + 2080) = std::set<std::string>::begin(__for_range_18);
      *(_BYTE *)(((v5 + 2112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 2112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string>::iterator *)(v5 + 2112) = std::set<std::string>::end(__for_range_18);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v5 + 2080),
                (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v5 + 2112)) )
      {
        trigger_name = std::_Rb_tree_const_iterator<std::string>::operator*((const std::_Rb_tree_const_iterator<std::string > *const)(v5 + 2080));
        *(_BYTE *)(((v5 + 2176) >> 3) + 0x7FFF8000) = 0;
        p_trigger_config_map = &this->trigger_config_map;
        if ( *(_BYTE *)(((v5 + 2176) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<std::string,TriggerScriptConfig>::const_iterator *)(v5 + 2176) = std::unordered_map<std::string,TriggerScriptConfig>::end(p_trigger_config_map);
        *(_BYTE *)(((v5 + 2144) >> 3) + 0x7FFF8000) = 0;
        v509 = &this->trigger_config_map;
        if ( *(_BYTE *)(((v5 + 2144) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<std::string,TriggerScriptConfig>::const_iterator *)(v5 + 2144) = std::unordered_map<std::string,TriggerScriptConfig>::find(
                                                                                                v509,
                                                                                                trigger_name);
        v510 = std::__detail::operator==<std::pair<std::string const,TriggerScriptConfig>,true>(
                 (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)(v5 + 2144),
                 (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)(v5 + 2176));
        *(_BYTE *)(((v5 + 2144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 2176) >> 3) + 0x7FFF8000) = -8;
        if ( v510 )
        {
          *(_DWORD *)(((v5 + 6464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6495) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 6495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6464),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            636);
          v511 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6464),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v512 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                   v511,
                   (const char (*)[47])byte_1A178720);
          v513 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v512, trigger_name);
          v514 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v513,
                   (const char (*)[13])", group_id: ");
          v515 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v514,
                   (const unsigned int *)(v5 + 96));
          v516 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v515,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v516, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6464));
          *(_DWORD *)(((v5 + 6464) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        std::_Rb_tree_const_iterator<std::string>::operator++((std::_Rb_tree_const_iterator<std::string > *const)(v5 + 2080));
      }
      *(_BYTE *)(((v5 + 2080) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 2112) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_rand_suite);
      }
      if ( this->is_rand_suite )
      {
        if ( *(_BYTE *)(((unsigned __int64)&suite_script_config->ban_refresh >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)suite_script_config - 12) & 7) >= *(_BYTE *)(((unsigned __int64)&suite_script_config->ban_refresh >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&suite_script_config->ban_refresh);
        }
        if ( suite_script_config->ban_refresh )
        {
          if ( *(_BYTE *)(((unsigned __int64)&suite_script_config->rand_weight >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&suite_script_config->rand_weight >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&suite_script_config->rand_weight);
          }
          if ( suite_script_config->rand_weight )
          {
            *(_DWORD *)(((v5 + 6528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 6528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 6559) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 6559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 6528, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 6528),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/group_script_config.cpp",
              "checkGroup",
              643);
            v517 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v5 + 6528),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v518 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                     v517,
                     (const char (*)[63])byte_1A178780);
            v519 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v518,
                     (const unsigned int *)(v5 + 224));
            v520 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v519,
                     (const char (*)[12])",group_id: ");
            v521 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v520,
                     (const unsigned int *)(v5 + 96));
            v522 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                     v521,
                     (const char (*)[13])", scene_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v522,
              (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6528));
            *(_DWORD *)(((v5 + 6528) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->io_type == GROUP_IO_TYPE_DEFAULT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_rand_suite);
      }
      if ( this->is_rand_suite )
        goto LABEL_821;
      if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->init_suite_index);
      }
      if ( this->init_suite_index
        && (init_suite_index = this->init_suite_index,
            init_suite_index <= std::vector<SuiteScriptConfig>::size(&this->suite_config_vec)) )
      {
LABEL_821:
        v524 = 0;
      }
      else
      {
        v524 = 1;
      }
      if ( v524 )
      {
        *(_DWORD *)(((v5 + 6592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 6592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 6623) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 6623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 6592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 6592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          651);
        v525 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 6592),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v526 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v525, (const char (*)[27])byte_1A178820);
        v527 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v526, &this->init_suite_index);
        v528 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v527, (const char (*)[13])", group_id: ");
        v529 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v528,
                 (const unsigned int *)(v5 + 96));
        v530 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v529, (const char (*)[13])", scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v530, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6592));
        *(_DWORD *)(((v5 + 6592) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->end_suite_index);
      }
      if ( this->end_suite_index )
      {
        end_suite_index = this->end_suite_index;
        if ( end_suite_index > std::vector<SuiteScriptConfig>::size(&this->suite_config_vec) )
        {
          *(_DWORD *)(((v5 + 6656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6687) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 6687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            656);
          v533 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6656),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v534 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   v533,
                   (const char (*)[27])byte_1A178860);
          v535 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v534, &this->end_suite_index);
          v536 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v535,
                   (const char (*)[13])", group_id: ");
          v537 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v536,
                   (const unsigned int *)(v5 + 96));
          v538 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v537,
                   (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v538, (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6656));
          *(_DWORD *)(((v5 + 6656) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    if ( GroupScriptConfig::checkTriggerConfig(this) )
    {
      *(_DWORD *)(((v5 + 6720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 6720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 6751) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 6751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 6720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 6720),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        662);
      v539 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 6720),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v540 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               v539,
               (const char (*)[26])"checkTriggerConfig failed");
      v541 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v540, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v541, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6720));
      v4 = -1;
    }
    else if ( GroupScriptConfig::checkVariableConfig(this) )
    {
      *(_DWORD *)(((v5 + 6784) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 6784) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 6815) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 6815) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 6784, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 6784),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "checkGroup",
        667);
      v542 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 6784),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v543 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               v542,
               (const char (*)[27])"checkVariableConfig failed");
      v544 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v543, (const char (*)[11])" group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v544, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6784));
      v4 = -1;
    }
    else
    {
      if ( std::vector<GroupLifeConfig>::empty(&group_script_config->life_cycle_vec) )
        goto LABEL_849;
      v545 = &config->txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 80);
      if ( DungeonExcelConfigMgr::isUsedForMpDungeon(v545, *(_DWORD *)(v5 + 80)) )
        v546 = 1;
      else
LABEL_849:
        v546 = 0;
      if ( v546 )
      {
        *(_DWORD *)(((v5 + 6848) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 6848) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 6879) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 6879) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 6848, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 6848),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "checkGroup",
          673);
        v547 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v5 + 6848),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v548 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v547, (const char (*)[83])byte_1A178920);
        v549 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v548,
                 (const unsigned int *)(v5 + 80));
        v550 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v549, (const char (*)[12])" ,group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v550, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6848));
        v4 = -1;
      }
      else
      {
        if ( has_boss_chest )
          goto LABEL_861;
        if ( *(_BYTE *)(((unsigned __int64)&group_script_config->is_force_unload_nodelay >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)group_script_config - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&group_script_config->is_force_unload_nodelay >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&group_script_config->is_force_unload_nodelay);
        }
        if ( group_script_config->is_force_unload_nodelay )
        {
          *(_DWORD *)(((v5 + 6912) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6912) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 6943) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 6943) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6912, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6912),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            679);
          v551 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6912),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v552 = common::milog::MiLogStream::operator<<<char [106],(char *[106])0>(
                   v551,
                   (const char (*)[106])byte_1A1789E0);
          v553 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v552,
                   (const unsigned int *)(v5 + 80));
          v554 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v553,
                   (const char (*)[13])" ,group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v554, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6912));
          v4 = -1;
        }
        else
        {
LABEL_861:
          __for_range_19 = &group_script_config->group_tag_vec;
          *(_BYTE *)(((v5 + 2208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 2208) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<unsigned int>::const_iterator *)(v5 + 2208) = std::vector<unsigned int>::begin(__for_range_19);
          *(_BYTE *)(((v5 + 2240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 2240) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<unsigned int>::const_iterator *)(v5 + 2240) = std::vector<unsigned int>::end(__for_range_19);
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 2208),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 2240)) )
            {
              v564 = 1;
              goto LABEL_877;
            }
            *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 4;
            v555 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 2208));
            v556 = (int *)v555;
            if ( *(_BYTE *)(((unsigned __int64)v555 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v555 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v555 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v555);
            }
            v557 = *v556;
            if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v5 + 304);
            *(_DWORD *)(v5 + 304) = v557;
            if ( !data::GroupTagExcelConfigMgrBase::findGroupTagExcelConfig(
                    &config->txt_config_mgr.group_tag_config_mgr,
                    *(_DWORD *)(v5 + 304)) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 2208));
          }
          *(_DWORD *)(((v5 + 6976) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 6976) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 7007) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 7007) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 6976, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 6976),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "checkGroup",
            687);
          v558 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v5 + 6976),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v559 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                   v558,
                   (const char (*)[46])"findGroupTagExcelConfig failed, group_tag_id:");
          v560 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v559,
                   (const unsigned int *)(v5 + 304));
          v561 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v560,
                   (const char (*)[13])", scene_id: ");
          v562 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v561,
                   (const unsigned int *)(v5 + 80));
          v563 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v562,
                   (const char (*)[12])" ,group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v563, (const unsigned int *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 6976));
          *(_DWORD *)(((v5 + 6976) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v564 = 0;
LABEL_877:
          *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 2208) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 2240) >> 3) + 0x7FFF8000) = -8;
          if ( v564 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(this);
            }
            if ( this->io_type == GROUP_IO_TYPE_FLOW )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->sub_flow_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_flow_type >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&this->sub_flow_type);
              }
              if ( this->sub_flow_type == GROUP_SUB_FLOW_TYPE_WORLD_QUEST )
              {
                p_quest_config_mgr = &config->txt_config_mgr.quest_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->father_quest_id);
                }
                main_quest_config_ptr = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                                          p_quest_config_mgr,
                                          this->father_quest_id);
                if ( main_quest_config_ptr )
                {
                  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                          &main_quest_config_ptr->flow_min_rewind_order_map,
                          (const unsigned int *)(v5 + 96)) )
                  {
                    *(_DWORD *)(((v5 + 7104) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v5 + 7104) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v5 + 7135) >> 3) + 0x7FFF8000) != 0
                      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 7135) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v5 + 7104, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v5 + 7104),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/group_script_config.cpp",
                      "checkGroup",
                      706);
                    v570 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v5 + 7104),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v571 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                             v570,
                             (const char (*)[37])byte_1A178AE0);
                    v572 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v571,
                             (const unsigned int *)(v5 + 96));
                    v573 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                             v572,
                             (const char (*)[46])byte_1A178BA0);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v573, &this->father_quest_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 7104));
                  }
                }
                else
                {
                  *(_DWORD *)(((v5 + 7040) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v5 + 7040) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v5 + 7071) >> 3) + 0x7FFF8000) != 0
                    && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 7071) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v5 + 7040, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v5 + 7040),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/group_script_config.cpp",
                    "checkGroup",
                    700);
                  v566 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v5 + 7040),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v567 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                           v566,
                           (const char (*)[37])byte_1A178AE0);
                  v568 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v567,
                           (const unsigned int *)(v5 + 96));
                  v569 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                           v568,
                           (const char (*)[43])byte_1A178B40);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v569, &this->father_quest_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 7040));
                }
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->father_quest_id);
                }
                if ( this->father_quest_id
                  && !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                        &config->txt_config_mgr.quest_config_mgr,
                        this->father_quest_id) )
                {
                  *(_DWORD *)(((v5 + 7168) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v5 + 7168) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v5 + 7199) >> 3) + 0x7FFF8000) != 0
                    && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 7199) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v5 + 7168, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v5 + 7168),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/group_script_config.cpp",
                    "checkGroup",
                    714);
                  v574 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v5 + 7168),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v575 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                           v574,
                           (const char (*)[34])byte_1A178C00);
                  v576 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v575,
                           (const unsigned int *)(v5 + 96));
                  v577 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                           v576,
                           (const char (*)[43])byte_1A178B40);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v577, &this->father_quest_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 7168));
                }
              }
            }
            v4 = ret;
          }
        }
      }
    }
  }
LABEL_902:
  if ( v636 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8118) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 288) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v5 >> 3) + 0x7FFF8124) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8340) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862795) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147451172 - (((_DWORD)v7 + 2147451180) & 0xFFFFFFF8) + 548) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v5 >> 3) + 0x7FFF834C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8354) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF835C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8364) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF836C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8374) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF837C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8384) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF83D0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862947) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147451780 - (((_DWORD)v7 + 2147451788) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_7(v5, 7872LL, v636);
  }
  return v4;
};

// Line 722: range 000000000CCD6F8A-000000000CCD96D5
int32_t __cdecl GroupScriptConfig::rewriteGroup(
        GroupScriptConfig *const this,
        HK4EDesignConfig *config,
        const GroupInfoScriptConfig *group_info_config,
        const SceneScriptConfig *scene_script_config)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int first; // ecx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  data::EntityType type; // ecx
  std::unordered_map<unsigned int,MonsterScriptConfig> *p_monster_config_map; // rdx
  const std::unordered_map<unsigned int,MonsterScriptConfig>::key_type *p_monster_config_id; // rcx
  std::unordered_map<unsigned int,MonsterScriptConfig> *v17; // rdx
  bool v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::pointer v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::pointer v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  uint32_t v31; // r15d
  std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::pointer v32; // rdx
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>> *v33; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v34; // rax
  std::map<unsigned int,unsigned int> *v35; // rax
  unsigned int *v36; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v37; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  bool is_across_block; // cl
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>> *p_monster_pool_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>> *v50; // rdx
  bool v51; // al
  int v52; // eax
  unsigned __int64 v53; // rax
  uint64_t tag; // rcx
  uint32_t config_id; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v56; // rax
  uint32_t *v57; // rdx
  std::unordered_map<unsigned int,MonsterScriptConfig>::key_type v58; // ecx
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  int v66; // edx
  int v67; // edx
  int v68; // r15d
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  unsigned __int64 v74; // rdx
  int v75; // edx
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  int v80; // eax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  int32_t ret; // [rsp+30h] [rbp-630h]
  data::VisionLevelType monster_vision_level; // [rsp+34h] [rbp-62Ch]
  uint32_t max_vision_range; // [rsp+38h] [rbp-628h]
  std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+40h] [rbp-620h]
  std::unordered_map<unsigned int,MonsterPoolScriptConfig> *__for_range_0; // [rsp+48h] [rbp-618h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::reference __in; // [rsp+50h] [rbp-610h]
  const std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::key_type *pool_id; // [rsp+58h] [rbp-608h]
  std::map<unsigned int,MonsterScriptConfig> *pool_monster_configs; // [rsp+68h] [rbp-5F8h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::mapped_type *pool_monsters; // [rsp+70h] [rbp-5F0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::reference v97; // [rsp+80h] [rbp-5E0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_script_config; // [rsp+90h] [rbp-5D0h]
  std::unordered_map<unsigned int,PointScriptConfig> *__for_range_2; // [rsp+98h] [rbp-5C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::reference v100; // [rsp+A0h] [rbp-5C0h]
  std::tuple_element<0,std::pair<unsigned int const,PointScriptConfig> >::type *point_config_id; // [rsp+A8h] [rbp-5B8h]
  std::tuple_element<1,const std::pair<unsigned int const,PointScriptConfig> >::type *point_config; // [rsp+B0h] [rbp-5B0h]
  MonsterScriptConfig *new_config; // [rsp+C0h] [rbp-5A0h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+D0h] [rbp-590h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v105; // [rsp+D8h] [rbp-588h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *config_id_0; // [rsp+E0h] [rbp-580h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *follow_config_id; // [rsp+E8h] [rbp-578h]
  std::unordered_map<unsigned int,PointScriptConfig> *__for_range_4; // [rsp+F0h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::reference v109; // [rsp+F8h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,PointScriptConfig> >::type *point_config_id_0; // [rsp+100h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,PointScriptConfig> >::type *point_config_0; // [rsp+108h] [rbp-558h]
  std::unordered_map<long unsigned int,std::vector<unsigned int>>::mapped_type *point_vec; // [rsp+110h] [rbp-550h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::reference p; // [rsp+118h] [rbp-548h]
  data::GadgetExcelConfig *gadget_config_ptr; // [rsp+128h] [rbp-538h]
  char v115[1328]; // [rsp+130h] [rbp-530h] BYREF

  v5 = (unsigned __int64)v115;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1280LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "28 32 4 13 config_id:726 48 8 15 __for_begin:724 80 8 13 __for_end:724 112 8 8 iter:741 144 8 9 "
                        "<unknown> 176 8 15 __for_begin:779 208 8 13 __for_end:779 240 8 8 iter:781 272 8 9 <unknown> 304"
                        " 8 15 __for_begin:789 336 8 13 __for_end:789 368 8 15 __for_begin:792 400 8 13 __for_end:792 432"
                        " 8 15 __for_begin:835 464 8 13 __for_end:835 496 8 15 __for_begin:850 528 8 13 __for_end:850 560"
                        " 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 "
                        "32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 12"
                        "00 48 24 point_to_monster_map:786";
  *(_QWORD *)(v5 + 16) = GroupScriptConfig::rewriteGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862726] = -234881024;
  v7[536862727] = 62194;
  v7[536862727] = -234881024;
  v7[536862728] = 62194;
  v7[536862728] = -234881024;
  v7[536862729] = 62194;
  v7[536862729] = -234881024;
  v7[536862730] = 62194;
  v7[536862730] = -234881024;
  v7[536862731] = 62194;
  v7[536862731] = -234881024;
  v7[536862732] = 62194;
  v7[536862732] = -234881024;
  v7[536862733] = 62194;
  v7[536862733] = -234881024;
  v7[536862734] = 62194;
  v7[536862734] = -234881024;
  v7[536862735] = 62194;
  v7[536862735] = -234881024;
  v7[536862736] = 62194;
  v7[536862736] = -234881024;
  v7[536862737] = 62194;
  v7[536862738] = -219021312;
  v7[536862739] = 62194;
  v7[536862740] = -219021312;
  v7[536862741] = 62194;
  v7[536862742] = -219021312;
  v7[536862743] = 62194;
  v7[536862744] = -219021312;
  v7[536862745] = 62194;
  v7[536862746] = -219021312;
  v7[536862747] = 62194;
  v7[536862748] = -219021312;
  v7[536862749] = 62194;
  v7[536862750] = -219021312;
  v7[536862751] = 62194;
  v7[536862752] = -219021312;
  v7[536862753] = 62194;
  v7[536862754] = -219021312;
  v7[536862755] = 62194;
  v7[536862756] = -219021312;
  v7[536862757] = 62194;
  v7[536862759] = -202116109;
  ret = 0;
  __for_range = &this->gadget_config_map;
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v5 + 48) = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::iterator *)(v5 + 80) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v5 + 80)) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 48));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v5 + 32);
    *(_DWORD *)(v5 + 32) = first;
    p_gadget_config_mgr = &config->txt_config_mgr.gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p->second.gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->second.gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->second.gadget_id);
    }
    gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, p->second.gadget_id);
    if ( gadget_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_config_ptr->type);
      }
      type = gadget_config_ptr->type;
      if ( *(_BYTE *)(((unsigned __int64)&p->second.entity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p->second.entity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&p->second.entity_type);
      }
      p->second.entity_type = type;
      if ( gadget_config_ptr->type != Chest )
        goto LABEL_48;
      if ( *(_BYTE *)(((unsigned __int64)&p->second.boss_chest >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p->second.boss_chest >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p->second.boss_chest);
      }
      if ( !p->second.boss_chest.monster_config_id )
        goto LABEL_48;
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = 0;
      p_monster_config_map = &this->monster_config_map;
      p_monster_config_id = &p->second.boss_chest.monster_config_id;
      if ( *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,MonsterScriptConfig>::iterator *)(v5 + 112) = std::unordered_map<unsigned int,MonsterScriptConfig>::find(
                                                                                        p_monster_config_map,
                                                                                        p_monster_config_id);
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = 0;
      v17 = &this->monster_config_map;
      if ( *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,MonsterScriptConfig>::iterator *)(v5 + 144) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(v17);
      v18 = std::__detail::operator==<std::pair<unsigned int const,MonsterScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 112),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v5 + 144));
      *(_BYTE *)(((v5 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v18 )
      {
        *(_DWORD *)(((v5 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 624) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 655) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 655) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 624, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 624),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "rewriteGroup",
          744);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 624),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v19,
                (const char (*)[19])"gadget config_id: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v21, (const char (*)[33])byte_1A177AE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 624));
        *(_DWORD *)(((v5 + 624) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v22 = 0;
      }
      else
      {
        v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v5 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v23->second.chest_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v23 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->second.chest_config_id >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v23->second.chest_config_id);
        }
        if ( v23->second.chest_config_id )
        {
          *(_DWORD *)(((v5 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 80 + 31) & 7) >= *(_BYTE *)(((v5 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "rewriteGroup",
            750);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])byte_1A178F20);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  &p->second.boss_chest.monster_config_id);
          v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v26, (const char (*)[30])byte_1A178F60);
          v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v5 + 112));
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  &v28->second.chest_config_id);
          v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])byte_1A178FA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 688));
          *(_DWORD *)(((v5 + 688) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v22 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 32);
          v31 = *(_DWORD *)(v5 + 32);
          v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v5 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&v32->second.chest_config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v32 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->second.chest_config_id >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_store4(&v32->second.chest_config_id);
          }
          v32->second.chest_config_id = v31;
          v22 = 1;
        }
      }
      *(_BYTE *)(((v5 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v22 == 1 )
      {
LABEL_48:
        if ( *(_BYTE *)(((unsigned __int64)&p->second.explore_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&p->second.explore_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&p->second.explore_config);
        }
        if ( p->second.explore_config.type )
        {
          v33 = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>>::operator[](
                  &config->txt_config_mgr.world_area_config_mgr.area_to_explorable_gadgets_map,
                  &p->second.area_id);
          v34 = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::operator[](
                  v33,
                  (const std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,unsigned int>>>::key_type *)&p->second.explore_config);
          v35 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](v34, &this->group_id);
          v37 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                  v35,
                  (unsigned int *)(v5 + 32),
                  &p->second.explore_config.exp,
                  (unsigned int *)v35,
                  v36);
          if ( !v37.second )
          {
            *(_DWORD *)(((v5 + 752) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 752) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 783) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 16 + 31) & 7) >= *(_BYTE *)(((v5 + 783) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 752, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 752),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/group_script_config.cpp",
              "rewriteGroup",
              760);
            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v5 + 752),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v40 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v39,
                    (const char (*)[40])"duplicate explore point chest! area_id:");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &p->second.area_id);
            v42 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, (const char (*)[11])" group_id:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &this->group_id);
            v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v43,
                    (const char (*)[12])" config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v5 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 752));
            *(_DWORD *)(((v5 + 752) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 560),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "rewriteGroup",
        731);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 560),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v10, (const char (*)[27])byte_1A177720);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &p->second.gadget_id);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 560));
      *(_DWORD *)(((v5 + 560) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v5 + 48));
  }
  *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( group_info_config )
  {
    if ( *(char *)(((unsigned __int64)&group_info_config->is_across_block >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&group_info_config->is_across_block);
    is_across_block = group_info_config->is_across_block;
    if ( *(char *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_across_block);
    this->is_across_block = is_across_block;
    if ( this->is_across_block )
    {
      *(_DWORD *)(((v5 + 816) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 816) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 847) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 847) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 816, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 816),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group_script_config.cpp",
        "rewriteGroup",
        769);
      v46 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v5 + 816),
              (const char (*)[34])"group is_across_block, group id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &this->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 816));
      *(_DWORD *)(((v5 + 816) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &this->monster_pool_map;
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,MonsterPoolScriptConfig>::iterator *)(v5 + 176) = std::unordered_map<unsigned int,MonsterPoolScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,MonsterPoolScriptConfig>::iterator *)(v5 + 208) = std::unordered_map<unsigned int,MonsterPoolScriptConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterPoolScriptConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterPoolScriptConfig>,false> *)(v5 + 176),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterPoolScriptConfig>,false> *)(v5 + 208)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false> *const)(v5 + 176));
      pool_id = std::get<0ul,unsigned int const,MonsterPoolScriptConfig>(__in);
      std::get<1ul,unsigned int const,MonsterPoolScriptConfig>(__in);
      *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = 0;
      p_monster_pool_map = &scene_script_config->monster_pool_map;
      if ( *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v5 + 240) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::find(p_monster_pool_map, pool_id);
      *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = 0;
      v50 = &scene_script_config->monster_pool_map;
      if ( *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v5 + 272) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::end(v50);
      v51 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v5 + 240),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v5 + 272));
      *(_BYTE *)(((v5 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v51 )
      {
        v52 = 0;
      }
      else
      {
        v53 = ((v5 + 1200) >> 3) + 2147450880;
        *(_DWORD *)v53 = 0;
        *(_WORD *)(v53 + 4) = 0;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 1200));
        pool_monster_configs = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false,false> *const)(v5 + 240))->second;
        pool_monsters = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::operator[](
                          &this->pool_to_monsters_map,
                          pool_id);
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 304) = std::map<unsigned int,MonsterScriptConfig>::begin(pool_monster_configs);
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::map<unsigned int,MonsterScriptConfig>::const_iterator *)(v5 + 336) = std::map<unsigned int,MonsterScriptConfig>::end(pool_monster_configs);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v5 + 304),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v5 + 336)) )
        {
          v97 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v5 + 304));
          std::get<0ul,unsigned int const,MonsterScriptConfig>(v97);
          monster_script_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v97);
          __for_range_2 = &this->point_config_map;
          *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::unordered_map<unsigned int,PointScriptConfig>::iterator *)(v5 + 368) = std::unordered_map<unsigned int,PointScriptConfig>::begin(__for_range_2);
          *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::unordered_map<unsigned int,PointScriptConfig>::iterator *)(v5 + 400) = std::unordered_map<unsigned int,PointScriptConfig>::end(__for_range_2);
          while ( 1 )
          {
            if ( !std::__detail::operator!=<std::pair<unsigned int const,PointScriptConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v5 + 368),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v5 + 400)) )
              goto LABEL_130;
            v100 = std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *const)(v5 + 368));
            point_config_id = std::get<0ul,unsigned int const,PointScriptConfig>(v100);
            point_config = (std::tuple_element<1,const std::pair<unsigned int const,PointScriptConfig> >::type *)std::get<1ul,unsigned int const,PointScriptConfig>(v100);
            if ( !std::unordered_map<unsigned int,MonsterScriptConfig>::count(pool_monsters, point_config_id) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->tag >> 3) + 0x7FFF8000) )
                __asan_report_load8(&monster_script_config->tag);
              tag = monster_script_config->tag;
              if ( *(_BYTE *)(((unsigned __int64)&point_config->tag >> 3) + 0x7FFF8000) )
                __asan_report_load8(&point_config->tag);
              if ( tag == point_config->tag )
                break;
            }
            std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *const)(v5 + 368));
          }
          new_config = std::unordered_map<unsigned int,MonsterScriptConfig>::operator[](pool_monsters, point_config_id);
          MonsterScriptConfig::operator=(new_config, monster_script_config);
          if ( *(char *)(((unsigned __int64)&new_config->pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&new_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)new_config + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&new_config->pos.z + 3) >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_store_n(&new_config->pos, 12LL);
          }
          if ( (((unsigned __int8)point_config + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config->pos >> 3)
                                                                     + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_config->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config->pos.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config->pos, 12LL);
          }
          *(_QWORD *)&new_config->pos.x = *(_QWORD *)&point_config->pos.x;
          new_config->pos.z = point_config->pos.z;
          if ( (((unsigned __int8)new_config + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&new_config->rot >> 3)
                                                                    + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&new_config->rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&new_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)new_config + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&new_config->rot.z + 3) >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_store_n(&new_config->rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_config->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_config + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config->rot.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_config->rot, 12LL);
          }
          *(_QWORD *)&new_config->rot.x = *(_QWORD *)&point_config->rot.x;
          new_config->rot.z = point_config->rot.z;
          if ( *(_BYTE *)(((unsigned __int64)new_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)new_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(new_config);
          }
          config_id = new_config->config_id;
          v56 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v5 + 1200),
                  point_config_id);
          v57 = v56;
          if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v56);
          }
          *v57 = config_id;
          if ( *(_BYTE *)(((unsigned __int64)point_config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)point_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(point_config_id);
          }
          v58 = *point_config_id;
          if ( *(_BYTE *)(((unsigned __int64)new_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)new_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(new_config);
          }
          new_config->config_id = v58;
          p_monster_config_mgr = &config->txt_config_mgr.monster_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&new_config->monster_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)new_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_config->monster_id >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&new_config->monster_id);
          }
          if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, new_config->monster_id) )
          {
            monster_vision_level = MonsterScriptConfig::getVisionLevel(monster_script_config, &config->txt_config_mgr);
            if ( *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_vision_range_level);
            }
            max_vision_range = HK4EDesignConfig::findVisionRange(config, this->max_vision_range_level);
            if ( max_vision_range < HK4EDesignConfig::findVisionRange(config, monster_vision_level) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->max_vision_range_level);
              }
              this->max_vision_range_level = monster_vision_level;
            }
LABEL_130:
            v66 = 1;
            goto LABEL_131;
          }
          *(_DWORD *)(((v5 + 944) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 944) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 975) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 80 + 31) & 7) >= *(_BYTE *)(((v5 + 975) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 944, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 944),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "rewriteGroup",
            812);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 944),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  v60,
                  (const char (*)[42])"findMonsterExcelConfig fails. monster_id:");
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  &monster_script_config->monster_id);
          v63 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v62, (const char (*)[11])", pool_id:");
          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, pool_id);
          v65 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v64, (const char (*)[13])", config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &monster_script_config->config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 944));
          *(_DWORD *)(((v5 + 944) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v66 = 0;
LABEL_131:
          *(_BYTE *)(((v5 + 368) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 400) >> 3) + 0x7FFF8000) = -8;
          if ( v66 != 1 )
          {
            v67 = 0;
            goto LABEL_135;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)(v5 + 304));
        }
        v67 = 1;
LABEL_135:
        *(_BYTE *)(((v5 + 304) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 336) >> 3) + 0x7FFF8000) = -8;
        if ( v67 == 1 )
        {
          if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v5 + 1200)) )
          {
            v68 = 1;
          }
          else
          {
            *(_DWORD *)(((v5 + 1008) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v5 + 1008) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v5 + 1039) >> 3) + 0x7FFF8000) != 0
              && (char)((v5 - 16 + 31) & 7) >= *(_BYTE *)(((v5 + 1039) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v5 + 1008, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v5 + 1008),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/group_script_config.cpp",
              "rewriteGroup",
              831);
            v69 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    (common::milog::MiLogStream *const)(v5 + 1008),
                    (const char (*)[23])"[MONSTER POOL] group: ");
            v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &this->group_id);
            v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v70, (const char (*)[11])" pool_id: ");
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, pool_id);
            v73 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v72,
                    (const char (*)[13])" match map: ");
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v73,
              (const std::map<unsigned int,unsigned int> *)(v5 + 1200));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1008));
            *(_DWORD *)(((v5 + 1008) >> 3) + 0x7FFF8000) = -117901064;
            v68 = 2;
          }
        }
        else
        {
          v68 = 0;
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 1200));
        if ( v68 )
        {
          if ( v68 == 2 )
            v52 = 2;
          else
            v52 = 0;
        }
        else
        {
          v52 = 1;
        }
      }
      *(_BYTE *)(((v5 + 240) >> 3) + 0x7FFF8000) = -8;
      v74 = ((v5 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v74 = -117901064;
      *(_WORD *)(v74 + 4) = -1800;
      if ( v52 && v52 != 2 )
      {
        v75 = 0;
        goto LABEL_152;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,MonsterPoolScriptConfig>,false,false> *const)(v5 + 176));
    }
    v75 = 1;
LABEL_152:
    *(_BYTE *)(((v5 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v75 == 1 )
    {
      __for_range_3 = &this->pos_follow_config_id_map;
      *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v5 + 432) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v5 + 464) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 432),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 464)) )
        {
          v80 = 1;
          goto LABEL_169;
        }
        v105 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 432));
        config_id_0 = std::get<0ul,unsigned int const,unsigned int>(v105);
        follow_config_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v105);
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->config_id_set,
                config_id_0) )
        {
          *(_DWORD *)(((v5 + 1072) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 1072) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 1103) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 79) & 7) >= *(_BYTE *)(((v5 + 1103) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 1072, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 1072),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "rewriteGroup",
            839);
          v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 1072),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v77 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v76,
                  (const char (*)[45])"pos_follow src config_id invalid, group id: ");
          v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &this->group_id);
          v79 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v78, (const char (*)[13])", config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, config_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1072));
          *(_DWORD *)(((v5 + 1072) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v80 = 0;
          goto LABEL_169;
        }
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->config_id_set,
                follow_config_id) )
          break;
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 432));
      }
      *(_DWORD *)(((v5 + 1136) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 1136) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 1167) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 1167) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 1136, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 1136),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/group_script_config.cpp",
        "rewriteGroup",
        844);
      v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 1136),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v82 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              v81,
              (const char (*)[48])"pos_follow target config_id invalid, group id: ");
      v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, &this->group_id);
      v84 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v83, (const char (*)[13])", config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, follow_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 1136));
      *(_DWORD *)(((v5 + 1136) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v80 = 0;
LABEL_169:
      *(_BYTE *)(((v5 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 464) >> 3) + 0x7FFF8000) = -8;
      if ( v80 == 1 )
      {
        __for_range_4 = &this->point_config_map;
        *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 496) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,PointScriptConfig>::iterator *)(v5 + 496) = std::unordered_map<unsigned int,PointScriptConfig>::begin(__for_range_4);
        *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 528) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::unordered_map<unsigned int,PointScriptConfig>::iterator *)(v5 + 528) = std::unordered_map<unsigned int,PointScriptConfig>::end(__for_range_4);
        while ( std::__detail::operator!=<std::pair<unsigned int const,PointScriptConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v5 + 496),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v5 + 528)) )
        {
          v109 = std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *const)(v5 + 496));
          point_config_id_0 = std::get<0ul,unsigned int const,PointScriptConfig>(v109);
          point_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,PointScriptConfig> >::type *)std::get<1ul,unsigned int const,PointScriptConfig>(v109);
          point_vec = std::unordered_map<unsigned long,std::vector<unsigned int>>::operator[](
                        &this->tag_to_point_map,
                        &point_config_0->tag);
          std::vector<unsigned int>::push_back(point_vec, point_config_id_0);
          std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *const)(v5 + 496));
        }
        v4 = ret;
      }
    }
  }
  else
  {
    *(_DWORD *)(((v5 + 880) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 880) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 911) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 113) & 7) >= *(_BYTE *)(((v5 + 911) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 880, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 880),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group_script_config.cpp",
      "rewriteGroup",
      774);
    v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 880),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v48 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v47,
            (const char (*)[38])"group_info_config is null, group id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->group_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 880));
    v4 = -1;
  }
  if ( v115 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1280LL, v115);
  }
  return v4;
};

// Line 860: range 000000000CCD96D6-000000000CCD9E7D
int32_t __cdecl GroupScriptConfig::checkTriggerConfig(const GroupScriptConfig *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::EventType *v5; // rax
  int *v6; // rdx
  int v7; // eax
  char v8; // al
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  int32_t result; // eax
  std::unordered_map<std::string,TriggerScriptConfig> *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true>::reference v21; // [rsp+20h] [rbp-190h]
  std::tuple_element<0,std::pair<const std::string,TriggerScriptConfig> >::type *name; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,const std::pair<const std::string,TriggerScriptConfig> >::type *trigger_config; // [rsp+30h] [rbp-180h]
  const std::vector<data::EventType> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v25[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 13 config_id:861 64 8 15 __for_begin:862 96 8 13 __for_end:862 128 8 15 __for_begin:864 1"
                        "60 8 13 __for_end:864 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::checkTriggerConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  __for_range = &this->trigger_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,TriggerScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,TriggerScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,TriggerScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,TriggerScriptConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,TriggerScriptConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true> *)(v2 + 96)) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<std::string const,TriggerScriptConfig>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true> *const)(v2 + 64));
    name = std::get<0ul,std::string const,TriggerScriptConfig>(v21);
    trigger_config = (std::tuple_element<1,const std::pair<const std::string,TriggerScriptConfig> >::type *)std::get<1ul,std::string const,TriggerScriptConfig>(v21);
    __for_range_0 = &trigger_config->event_vec;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::EventType>::const_iterator *)(v2 + 128) = std::vector<data::EventType>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::EventType>::const_iterator *)(v2 + 160) = std::vector<data::EventType>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::EventType const*,std::vector<data::EventType>>(
              (const __gnu_cxx::__normal_iterator<const data::EventType*,std::vector<data::EventType> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::EventType*,std::vector<data::EventType> > *)(v2 + 160)) )
      {
        v13 = 1;
        goto LABEL_42;
      }
      v5 = (data::EventType *)__gnu_cxx::__normal_iterator<data::EventType const*,std::vector<data::EventType>>::operator*((const __gnu_cxx::__normal_iterator<const data::EventType*,std::vector<data::EventType> > *const)(v2 + 128));
      v6 = (int *)v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      v7 = *v6;
      if ( *v6 == 34 )
        break;
      if ( v7 > 34 )
        goto LABEL_40;
      if ( v7 > 5 )
      {
        if ( v7 != 12 )
          goto LABEL_40;
        goto LABEL_26;
      }
      if ( v7 >= 4 && !GroupScriptConfig::isRegionSourceNameValid(this, &trigger_config->source_name) )
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
          "./src/group_script_config.cpp",
          "checkTriggerConfig",
          881);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, name);
        v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v15, (const char (*)[23])byte_1A179440);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &trigger_config->source_name);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v13 = 0;
        goto LABEL_42;
      }
LABEL_40:
      __gnu_cxx::__normal_iterator<data::EventType const*,std::vector<data::EventType>>::operator++((__gnu_cxx::__normal_iterator<const data::EventType*,std::vector<data::EventType> > *const)(v2 + 128));
    }
    if ( common::tools::StringUtils::strToNum<unsigned int>(&trigger_config->source_name, (unsigned int *)(v2 + 48), 1) )
      goto LABEL_30;
LABEL_26:
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    if ( *(_DWORD *)(v2 + 48) )
      v8 = 0;
    else
LABEL_30:
      v8 = 1;
    if ( !v8 )
      goto LABEL_40;
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
      "./src/group_script_config.cpp",
      "checkTriggerConfig",
      873);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, name);
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])byte_1A179400);
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &trigger_config->source_name);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1A117C40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v1 = -1;
    v13 = 0;
LABEL_42:
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v18 = 0;
      goto LABEL_46;
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,TriggerScriptConfig>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true> *const)(v2 + 64));
  }
  v18 = 1;
LABEL_46:
  if ( v18 == 1 )
    v1 = 0;
  result = v1;
  if ( v25 == (char *)v2 )
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

// Line 895: range 000000000CCD9E7E-000000000CCDA289
bool __cdecl GroupScriptConfig::isRegionSourceNameValid(
        const GroupScriptConfig *const this,
        const std::string *source_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  char v13[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 entity_type:901 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::isRegionSourceNameValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  if ( (unsigned __int8)std::string::empty(source_name) )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::StringUtils::strToNum<int>(source_name, (int *)(v2 + 48), 1) )
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
        "./src/group_script_config.cpp",
        "isRegionSourceNameValid",
        904);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 64),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])byte_1A179500);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, source_name);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])byte_1A179540);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
      result = 0;
    }
    else
    {
      v9 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(v2 + 48);
      if ( !proto::ProtEntityType_IsValid(*(_DWORD *)(v2 + 48)) )
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
          "./src/group_script_config.cpp",
          "isRegionSourceNameValid",
          909);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1A179500);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, source_name);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        result = 0;
      }
      else
      {
        result = 1;
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
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

// Line 917: range 000000000CCDA28A-000000000CCDAC69
__int64 __fastcall GroupScriptConfig::isDropTagValid(
        const GroupScriptConfig *const this,
        HK4EDesignConfig *config,
        proto::ProtEntityType entity_type,
        const std::string *drop_tag,
        bool is_oneoff,
        uint32_t config_id,
        uint32_t group_id)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  data::ItemLimitType MonsterDropTagItemLimitType; // edx
  data::ItemLimitType ChestDropTagItemLimitType; // edx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  ItemLimitExcelConfigMgr *p_item_limit_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  const std::string *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  const char *v35; // rax
  const data::OutputControlLimitExcelConfig *output_control_limit_config_ptr; // [rsp+38h] [rbp-1B8h]
  char v41[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v7 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(384LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "9 32 4 19 item_limit_type:929 48 4 15 entity_type:916 64 4 13 config_id:916 80 4 12 group_id:916"
                        " 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = GroupScriptConfig::isDropTagValid;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862725] = -218959118;
  v9[536862727] = -218959118;
  v9[536862729] = -218959118;
  v9[536862731] = -202116109;
  *(_DWORD *)(v7 + 48) = entity_type;
  *(_DWORD *)(v7 + 64) = config_id;
  *(_DWORD *)(v7 + 80) = group_id;
  if ( (unsigned __int8)std::string::empty(drop_tag) )
  {
    result = 1LL;
    goto LABEL_49;
  }
  if ( !DropExcelConfigMgr::findChestDropConfig(&config->txt_config_mgr.drop_config_mgr, 1u, drop_tag)
    && !DropExcelConfigMgr::findMonsterDropConfig(&config->txt_config_mgr.drop_config_mgr, 1u, drop_tag) )
  {
    if ( *(char *)(((v7 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 - 97) & 7) >= *(_BYTE *)(((v7 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group_script_config.cpp",
      "isDropTagValid",
      925);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v7 + 128),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v12,
            (const char (*)[34])"findDropTagConfig fail, drop_tag:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, drop_tag);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 128));
    result = 0LL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v7 + 32);
  *(_DWORD *)(v7 + 32) = 0;
  if ( *(_DWORD *)(v7 + 48) == 2 )
  {
    MonsterDropTagItemLimitType = DropExcelConfigMgr::findMonsterDropTagItemLimitType(
                                    &config->txt_config_mgr.drop_config_mgr,
                                    drop_tag);
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v7 + 32);
    *(_DWORD *)(v7 + 32) = MonsterDropTagItemLimitType;
LABEL_27:
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v7 + 32);
    if ( *(_DWORD *)(v7 + 32) )
    {
      p_item_limit_config_mgr = &config->txt_config_mgr.item_limit_config_mgr;
      if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v7 + 32);
      output_control_limit_config_ptr = data::ItemLimitExcelConfigMgrBase::findOutputControlLimitExcelConfig(
                                          p_item_limit_config_mgr,
                                          (data::ItemLimitType)*(_DWORD *)(v7 + 32));
      if ( output_control_limit_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&output_control_limit_config_ptr->is_need_oneoff >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)output_control_limit_config_ptr + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&output_control_limit_config_ptr->is_need_oneoff >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load1(&output_control_limit_config_ptr->is_need_oneoff);
        }
        if ( output_control_limit_config_ptr->is_need_oneoff && !is_oneoff )
        {
          if ( *(char *)(((v7 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v7 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v7 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v7 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "isDropTagValid",
            957);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v7 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v21, (const char (*)[27])byte_1A179780);
          v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" group_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v7 + 80));
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" config_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v7 + 64));
          v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v26,
                  (const char (*)[14])" entity_type:");
          v28 = proto::ProtEntityType_Name[abi:cxx11]((proto::ProtEntityType)*(_DWORD *)(v7 + 48));
          v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, v28);
          v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])" is_oneoff:");
          v31 = common::milog::MiLogStream::operator<<(v30, is_oneoff);
          v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])" drop_tag:");
          v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, drop_tag);
          v34 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v33, (const char (*)[21])byte_1A179840);
          if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v7 + 32);
          v35 = data::enumValToStr((data::ItemLimitType)*(_DWORD *)(v7 + 32));
          if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(_QWORD *)(v7 + 96) = v35;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)(v7 + 96));
          *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 320));
          result = 0LL;
        }
        else
        {
          result = 1LL;
        }
      }
      else
      {
        if ( *(char *)(((v7 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v7 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 + 31) & 7) >= *(_BYTE *)(((v7 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v7 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v7 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "isDropTagValid",
          952);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v7 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v19,
                (const char (*)[57])"findOutputControlLimitExcelConfig fail, item_limit_type:");
        common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
          v20,
          (const data::ItemLimitType *)(v7 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 256));
        result = 1LL;
      }
    }
    else
    {
      result = 1LL;
    }
    goto LABEL_49;
  }
  if ( *(_DWORD *)(v7 + 48) == 4 )
  {
    ChestDropTagItemLimitType = DropExcelConfigMgr::findChestDropTagItemLimitType(
                                  &config->txt_config_mgr.drop_config_mgr,
                                  drop_tag);
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v7 + 32);
    *(_DWORD *)(v7 + 32) = ChestDropTagItemLimitType;
    goto LABEL_27;
  }
  if ( *(char *)(((v7 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 - 33) & 7) >= *(_BYTE *)(((v7 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v7 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/group_script_config.cpp",
    "isDropTagValid",
    940);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v7 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])"entity_type:");
  common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
    v17,
    (const proto::ProtEntityType *)(v7 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 192));
  result = 0LL;
LABEL_49:
  if ( v41 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 971: range 000000000CCDAC6A-000000000CCDAFC9
int32_t __cdecl GroupScriptConfig::checkVariableConfig(const GroupScriptConfig *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<unsigned int,VariableScriptConfig> *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,VariableScriptConfig>,false,false>::reference v10; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,VariableScriptConfig> >::type *config_id; // [rsp+30h] [rbp-D0h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 15 __for_begin:973 64 8 13 __for_end:973 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = GroupScriptConfig::checkVariableConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862724] = -202116109;
  ret = 0;
  __for_range = &this->variable_id_config_map;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,VariableScriptConfig>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,VariableScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,VariableScriptConfig>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,VariableScriptConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,VariableScriptConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,VariableScriptConfig>,false> *)(v1 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,VariableScriptConfig>,false> *)(v1 + 64)) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,VariableScriptConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,VariableScriptConfig>,false,false> *const)(v1 + 32));
    config_id = std::get<0ul,unsigned int const,VariableScriptConfig>(v10);
    std::get<1ul,unsigned int const,VariableScriptConfig>(v10);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &this->garbage_variable_config_id_set,
           config_id) )
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
        "./src/group_script_config.cpp",
        "checkVariableConfig",
        978);
      v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v4,
             (const char (*)[21])"variable config_id: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, config_id);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v6, (const char (*)[26])byte_1A179960);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
      *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,VariableScriptConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,VariableScriptConfig>,false,false> *const)(v1 + 32));
  }
  result = ret;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 986: range 000000000CCDAFCA-000000000CCDB185
const MonsterScriptConfig *__fastcall GroupScriptConfig::findMonsterConfig(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,MonsterScriptConfig> *p_monster_config_map; // rdx
  std::unordered_map<unsigned int,MonsterScriptConfig> *v6; // rdx
  bool v7; // al
  const MonsterScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 config_id:985 64 8 6 it:987 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findMonsterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_monster_config_map = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,MonsterScriptConfig>::find(
                                                                                         p_monster_config_map,
                                                                                         (const std::unordered_map<unsigned int,MonsterScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,MonsterScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,MonsterScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 994: range 000000000CCDB186-000000000CCDB3CA
const MonsterScriptConfig *__cdecl GroupScriptConfig::findMonsterConfigByMonsterId(
        const GroupScriptConfig *const this,
        uint32_t monster_id)
{
  const MonsterScriptConfig *v2; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t *p_monster_id; // rax
  int v7; // eax
  const MonsterScriptConfig *result; // rax
  std::unordered_map<unsigned int,MonsterScriptConfig> *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::reference v10; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false>::__node_type *)"2 32 8 15 __for_begin:995 64 8 13 __for_end:995";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false>::__node_type *)GroupScriptConfig::findMonsterConfigByMonsterId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->monster_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_cur = std::unordered_map<unsigned int,MonsterScriptConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_cur = std::unordered_map<unsigned int,MonsterScriptConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MonsterScriptConfig>,false>(v3 + 4, v3 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,MonsterScriptConfig>(v10);
    monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v10);
    p_monster_id = &monster_config->monster_id;
    if ( *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_monster_id);
    }
    if ( monster_id == monster_config->monster_id )
    {
      v2 = monster_config;
      v7 = 0;
      goto LABEL_16;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator++(v3 + 4);
  }
  v7 = 1;
LABEL_16:
  if ( v7 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MonsterScriptConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1006: range 000000000CCDB3CC-000000000CCDB587
const NpcScriptConfig *__fastcall GroupScriptConfig::findNpcConfig(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,NpcScriptConfig> *p_npc_config_map; // rdx
  std::unordered_map<unsigned int,NpcScriptConfig> *v6; // rdx
  bool v7; // al
  const NpcScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1005 64 8 7 it:1007 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findNpcConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_npc_config_map = &this->npc_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,NpcScriptConfig>::find(
                                                                                     p_npc_config_map,
                                                                                     (const std::unordered_map<unsigned int,NpcScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->npc_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,NpcScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,NpcScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,NpcScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1014: range 000000000CCDB588-000000000CCDB7CC
const NpcScriptConfig *__cdecl GroupScriptConfig::findNpcConfigByNpcId(
        const GroupScriptConfig *const this,
        uint32_t npc_id)
{
  const NpcScriptConfig *v2; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t *p_npc_id; // rax
  int v7; // eax
  const NpcScriptConfig *result; // rax
  std::unordered_map<unsigned int,NpcScriptConfig> *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::reference v10; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *npc_config; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false>::__node_type *)"2 32 8 16 __for_begin:1015 64 8 14 __for_end:1015";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false>::__node_type *)GroupScriptConfig::findNpcConfigByNpcId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->npc_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_cur = std::unordered_map<unsigned int,NpcScriptConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_cur = std::unordered_map<unsigned int,NpcScriptConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,NpcScriptConfig>,false>(v3 + 4, v3 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,NpcScriptConfig>(v10);
    npc_config = (std::tuple_element<1,const std::pair<unsigned int const,NpcScriptConfig> >::type *)std::get<1ul,unsigned int const,NpcScriptConfig>(v10);
    p_npc_id = &npc_config->npc_id;
    if ( *(_BYTE *)(((unsigned __int64)p_npc_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_npc_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_npc_id);
    }
    if ( npc_id == npc_config->npc_id )
    {
      v2 = npc_config;
      v7 = 0;
      goto LABEL_16;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,NpcScriptConfig>,false,false>::operator++(v3 + 4);
  }
  v7 = 1;
LABEL_16:
  if ( v7 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,NpcScriptConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1026: range 000000000CCDB7CE-000000000CCDB989
const GadgetScriptConfig *__fastcall GroupScriptConfig::findGadgetConfig(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,GadgetScriptConfig> *p_gadget_config_map; // rdx
  std::unordered_map<unsigned int,GadgetScriptConfig> *v6; // rdx
  bool v7; // al
  const GadgetScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1025 64 8 7 it:1027 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findGadgetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_gadget_config_map = &this->gadget_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,GadgetScriptConfig>::find(
                                                                                        p_gadget_config_map,
                                                                                        (const std::unordered_map<unsigned int,GadgetScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->gadget_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,GadgetScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1034: range 000000000CCDB98A-000000000CCDBB4B
const RegionScriptConfig *__fastcall GroupScriptConfig::findRegionConfig(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,RegionScriptConfig> *p_region_config_map; // rdx
  std::unordered_map<unsigned int,RegionScriptConfig> *v6; // rdx
  bool v7; // al
  const RegionScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1033 64 8 7 it:1035 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findRegionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_region_config_map = &this->region_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,RegionScriptConfig>::find(
                                                                                        p_region_config_map,
                                                                                        (const std::unordered_map<unsigned int,RegionScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->region_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,RegionScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,RegionScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,RegionScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RegionScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,RegionScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1042: range 000000000CCDBB4C-000000000CCDBCEE
const TriggerScriptConfig *__cdecl GroupScriptConfig::findTriggerConfig(
        const GroupScriptConfig *const this,
        const std::string *trigger_name)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,TriggerScriptConfig> *p_trigger_config_map; // rdx
  std::unordered_map<std::string,TriggerScriptConfig> *v6; // rdx
  bool v7; // al
  const TriggerScriptConfig *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,TriggerScriptConfig>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true>::__node_type *)"2 32 8 7 it:1043 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true>::__node_type *)GroupScriptConfig::findTriggerConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_trigger_config_map = &this->trigger_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_cur = std::unordered_map<std::string,TriggerScriptConfig>::find(p_trigger_config_map, trigger_name)._M_cur;
  v6 = &this->trigger_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_cur = std::unordered_map<std::string,TriggerScriptConfig>::end(v6)._M_cur;
  v7 = std::__detail::operator!=<std::pair<std::string const,TriggerScriptConfig>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,TriggerScriptConfig>,false,true>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,TriggerScriptConfig>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1050: range 000000000CCDBCF0-000000000CCDBEC4
const TriggerScriptConfig *__fastcall GroupScriptConfig::findTriggerConfigByConfigId(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::string> *p_trigger_config_id_name_map; // rdx
  std::unordered_map<unsigned int,std::string> *v6; // rdx
  bool v7; // al
  const TriggerScriptConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1049 64 8 7 it:1051 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findTriggerConfigByConfigId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_trigger_config_id_name_map = &this->trigger_config_id_name_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                                 p_trigger_config_id_name_map,
                                                                                 (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 48));
  v6 = &this->trigger_config_id_name_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::string>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v2 + 64));
    result = GroupScriptConfig::findTriggerConfig(this, &v9->second);
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

// Line 1057: range 000000000CCDBEC6-000000000CCDC087
const PointScriptConfig *__fastcall GroupScriptConfig::findPointConfig(
        const GroupScriptConfig *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,PointScriptConfig> *p_point_config_map; // rdx
  std::unordered_map<unsigned int,PointScriptConfig> *v6; // rdx
  bool v7; // al
  const PointScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1056 64 8 7 it:1058 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findPointConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_point_config_map = &this->point_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,PointScriptConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,PointScriptConfig>::find(
                                                                                       p_point_config_map,
                                                                                       (const std::unordered_map<unsigned int,PointScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->point_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,PointScriptConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,PointScriptConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,PointScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1065: range 000000000CCDC088-000000000CCDC59B
bool __fastcall GroupScriptConfig::isInitConfigId(
        const GroupScriptConfig *const this,
        proto::ProtEntityType entity_type,
        uint32_t suite_index,
        uint32_t config_id,
        uint32_t group_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  std::vector<SuiteScriptConfig>::size_type v9; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const SuiteScriptConfig *suite_script_config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 16 entity_type:1064 48 4 16 suite_index:1064 64 4 14 config_id:1064 80 4 13 group_id:1064"
                        " 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = GroupScriptConfig::isInitConfigId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862724] = -218959118;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 32) = entity_type;
  *(_DWORD *)(v5 + 48) = suite_index;
  *(_DWORD *)(v5 + 64) = config_id;
  *(_DWORD *)(v5 + 80) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->init_suite_index);
  }
  if ( !this->init_suite_index || !*(_DWORD *)(v5 + 48) )
  {
    result = 0;
    goto LABEL_26;
  }
  v9 = *(unsigned int *)(v5 + 48);
  if ( v9 <= std::vector<SuiteScriptConfig>::size(&this->suite_config_vec) )
  {
    suite_script_config = std::vector<SuiteScriptConfig>::operator[](
                            &this->suite_config_vec,
                            (unsigned int)(*(_DWORD *)(v5 + 48) - 1));
    v13 = *(_DWORD *)(v5 + 32);
    if ( v13 == 5 )
    {
      result = std::set<unsigned int>::count(
                 &suite_script_config->region_config_set,
                 (const std::set<unsigned int>::key_type *)(v5 + 64)) != 0;
    }
    else
    {
      if ( v13 > 5 )
        goto LABEL_31;
      switch ( v13 )
      {
        case 4:
          result = std::set<unsigned int>::count(
                     &suite_script_config->gadget_config_set,
                     (const std::set<unsigned int>::key_type *)(v5 + 64)) != 0;
          break;
        case 2:
          result = std::set<unsigned int>::count(
                     &suite_script_config->monster_config_set,
                     (const std::set<unsigned int>::key_type *)(v5 + 64)) != 0;
          break;
        case 3:
          result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     &suite_script_config->npc_config_set,
                     (const unsigned int *)(v5 + 64));
          break;
        default:
LABEL_31:
          if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 160, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 160),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "isInitConfigId",
            1087);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v14,
                  (const char (*)[21])"invalid entity_type:");
          common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
            v15,
            (const proto::ProtEntityType *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
          result = 0;
          break;
      }
    }
  }
  else
  {
    if ( *(char *)(((v5 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group_script_config.cpp",
      "isInitConfigId",
      1072);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            (common::milog::MiLogStream *const)(v5 + 96),
            (const char (*)[21])"invalid suite_index:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
    result = 0;
  }
LABEL_26:
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1093: range 000000000CCDC59C-000000000CCDCB69
bool __fastcall GroupScriptConfig::isDiskInitConfigId(
        const GroupScriptConfig *const this,
        proto::ProtEntityType entity_type,
        uint32_t suite_index,
        uint32_t config_id,
        uint32_t group_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  std::map<unsigned int,SuiteDiskScriptConfig> *p_suite_disk_config_map; // rdx
  std::map<unsigned int,SuiteDiskScriptConfig> *v10; // rdx
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  SuiteDiskScriptConfig *suite_disk_script_config; // [rsp+28h] [rbp-148h]
  char v22[320]; // [rsp+30h] [rbp-140h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 16 entity_type:1092 48 4 16 suite_index:1092 64 4 14 config_id:1092 80 4 13 group_id:1092"
                        " 96 8 9 iter:1098 128 8 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = GroupScriptConfig::isDiskInitConfigId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862726] = -218959118;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 32) = entity_type;
  *(_DWORD *)(v5 + 48) = suite_index;
  *(_DWORD *)(v5 + 64) = config_id;
  *(_DWORD *)(v5 + 80) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->init_suite_index);
  }
  if ( !this->init_suite_index || !*(_DWORD *)(v5 + 48) )
  {
    result = 0;
    goto LABEL_30;
  }
  p_suite_disk_config_map = &this->suite_disk_config_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,SuiteDiskScriptConfig>::const_iterator *)(v5 + 96) = std::map<unsigned int,SuiteDiskScriptConfig>::find(
                                                                                 p_suite_disk_config_map,
                                                                                 (const std::map<unsigned int,SuiteDiskScriptConfig>::key_type *)(v5 + 48));
  v10 = &this->suite_disk_config_map;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,SuiteDiskScriptConfig>::const_iterator *)(v5 + 128) = std::map<unsigned int,SuiteDiskScriptConfig>::end(v10);
  v11 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> >::_Self *)(v5 + 96),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> >::_Self *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group_script_config.cpp",
      "isDiskInitConfigId",
      1101);
    v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            (common::milog::MiLogStream *const)(v5 + 160),
            (const char (*)[21])"invalid suite_index:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
    result = 0;
  }
  else
  {
    suite_disk_script_config = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> > *const)(v5 + 96))->second;
    v15 = *(_DWORD *)(v5 + 32);
    if ( v15 == 5 )
    {
      result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                 &suite_disk_script_config->region_config_set,
                 (const unsigned int *)(v5 + 64));
    }
    else
    {
      if ( v15 > 5 )
        goto LABEL_27;
      switch ( v15 )
      {
        case 4:
          result = common::tools::MiscUtils::isContains<std::map<unsigned int,SuiteDiskGadgetConfig> const,unsigned int>(
                     &suite_disk_script_config->gadget_config_map,
                     (const unsigned int *)(v5 + 64));
          break;
        case 2:
          result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     &suite_disk_script_config->monster_config_set,
                     (const unsigned int *)(v5 + 64));
          break;
        case 3:
          result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     &suite_disk_script_config->npc_config_set,
                     (const unsigned int *)(v5 + 64));
          break;
        default:
LABEL_27:
          *(_DWORD *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/group_script_config.cpp",
            "isDiskInitConfigId",
            1116);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v16,
                  (const char (*)[21])"invalid entity_type:");
          common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
            v17,
            (const proto::ProtEntityType *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 224));
          result = 0;
          break;
      }
    }
  }
LABEL_30:
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1122: range 000000000CCDCB6A-000000000CCDD2B4
uint32_t __cdecl GroupScriptConfig::randSuiteIndex(
        const GroupScriptConfig *const this,
        uint32_t exclude_suite_index,
        bool is_force_random)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t init_suite_index; // r14d
  uint32_t rand_weight; // r14d
  uint32_t v8; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  uint32_t *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  uint32_t result; // eax
  uint32_t i; // [rsp+14h] [rbp-15Ch]
  const SuiteScriptConfig *suite_script_config; // [rsp+18h] [rbp-158h]
  char v16[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 16 suite_index:1132 64 4 9 <unknown> 80 32 9 <unknown> 144 32 9 <unknown> 208 48 15 weight_map:1133";
  *(_QWORD *)(v3 + 16) = GroupScriptConfig::randSuiteIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->io_type )
  {
    if ( *(char *)(((v3 + 80) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 80, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 80),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group_script_config.cpp",
      "randSuiteIndex",
      1125);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      (common::milog::MiLogStream *const)(v3 + 80),
      (const char (*)[42])" flow group does not support random suite");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 80));
    *(_DWORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->init_suite_index);
    }
    init_suite_index = this->init_suite_index;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_rand_suite);
    }
    if ( !this->is_rand_suite && !is_force_random )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->init_suite_index);
      }
      init_suite_index = this->init_suite_index;
    }
    else
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48);
      *(_DWORD *)(v3 + 48) = 0;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
      for ( i = 0; i < std::vector<SuiteScriptConfig>::size(&this->suite_config_vec); ++i )
      {
        suite_script_config = std::vector<SuiteScriptConfig>::operator[](&this->suite_config_vec, i);
        if ( exclude_suite_index != i + 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&suite_script_config->rand_weight >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&suite_script_config->rand_weight >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&suite_script_config->rand_weight);
          }
          rand_weight = suite_script_config->rand_weight;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v8 = i + 1;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = v8;
          v9 = std::map<unsigned int,unsigned int>::operator[](
                 (std::map<unsigned int,unsigned int> *const)(v3 + 208),
                 (std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v9);
          }
          *v10 = rand_weight;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        }
      }
      if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
             (const std::map<unsigned int,unsigned int> *)(v3 + 208),
             (unsigned int *)(v3 + 48),
             0) )
      {
        *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 144, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 144),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/group_script_config.cpp",
          "randSuiteIndex",
          1144);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 144),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v11,
          (const char (*)[22])"weightSelectOne fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
        *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      init_suite_index = *(_DWORD *)(v3 + 48);
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
    }
  }
  result = init_suite_index;
  if ( v16 == (char *)v3 )
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

// Line 1150: range 000000000CCDD2B6-000000000CCDD521
std::vector<SuiteScriptConfig>::const_reference __fastcall GroupScriptConfig::getSuiteConfig(
        const GroupScriptConfig *const this,
        uint32_t suite_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<SuiteScriptConfig>::size_type v5; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<SuiteScriptConfig>::const_reference result; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 suite_index:1149 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::getSuiteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = suite_index;
  if ( !*(_DWORD *)(v2 + 48)
    || (v5 = *(unsigned int *)(v2 + 48), v5 > std::vector<SuiteScriptConfig>::size(&this->suite_config_vec)) )
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
      "./src/group_script_config.cpp",
      "getSuiteConfig",
      1153);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[21])"invalid suite_index:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  else
  {
    result = std::vector<SuiteScriptConfig>::operator[](
               &this->suite_config_vec,
               (unsigned int)(*(_DWORD *)(v2 + 48) - 1));
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

// Line 1160: range 000000000CCDD522-000000000CCDD6E3
const SuiteDiskScriptConfig *__fastcall GroupScriptConfig::getSuiteDiskConfig(
        const GroupScriptConfig *const this,
        uint32_t suite_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,SuiteDiskScriptConfig> *p_suite_disk_config_map; // rdx
  std::map<unsigned int,SuiteDiskScriptConfig> *v6; // rdx
  bool v7; // al
  const SuiteDiskScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 suite_index:1159 64 8 9 iter:1161 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::getSuiteDiskConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = suite_index;
  p_suite_disk_config_map = &this->suite_disk_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,SuiteDiskScriptConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,SuiteDiskScriptConfig>::find(
                                                                                 p_suite_disk_config_map,
                                                                                 (const std::map<unsigned int,SuiteDiskScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->suite_disk_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,SuiteDiskScriptConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,SuiteDiskScriptConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskScriptConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1171: range 000000000CCDD6E4-000000000CCDD8A5
const std::vector<unsigned int> *__fastcall GroupScriptConfig::findGatherPointVec(
        const GroupScriptConfig *const this,
        uint32_t gadget_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_gather_point_list_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gadget_id:1170 64 8 9 iter:1172 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findGatherPointVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gadget_id;
  p_gather_point_list_map = &this->gather_point_list_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_gather_point_list_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->gather_point_list_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 1182: range 000000000CCDD8A6-000000000CCDD968
bool __cdecl GroupScriptConfig::isGobackGroupConfig(const GroupScriptConfig *const this, uint32_t cur_suite_index)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_rand_suite);
  }
  if ( this->is_rand_suite )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_suite_index);
  }
  return this->end_suite_index && cur_suite_index != this->end_suite_index;
};

// Line 1188: range 000000000CCDD96A-000000000CCDDA1A
bool __cdecl GroupScriptConfig::isRemoteVision(const GroupScriptConfig *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_across_block);
  if ( this->is_across_block )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_vision_range_level);
  }
  return this->max_vision_range_level == VISION_LEVEL_REMOTE || this->max_vision_range_level == VISION_LEVEL_SUPER;
};

// Line 1193: range 000000000CCDDA1C-000000000CCDDAF3
bool __fastcall GroupScriptConfig::isGarbageConfigId(const GroupScriptConfig *const this, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 config_id:1192";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::isGarbageConfigId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = config_id;
  result = std::unordered_set<unsigned int>::count(
             &this->garbage_config_id_set,
             (const std::unordered_set<unsigned int>::key_type *)(v2 + 32)) != 0;
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

// Line 1198: range 000000000CCDDAF4-000000000CCDDBCB
bool __fastcall GroupScriptConfig::isGarbageVariableConfigId(const GroupScriptConfig *const this, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 config_id:1197";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::isGarbageVariableConfigId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = config_id;
  result = std::unordered_set<unsigned int>::count(
             &this->garbage_variable_config_id_set,
             (const std::unordered_set<unsigned int>::key_type *)(v2 + 32)) != 0;
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

// Line 1203: range 000000000CCDDBCC-000000000CCDDD90
const std::vector<unsigned int> *__fastcall GroupScriptConfig::findPointVecByTag(
        const GroupScriptConfig *const this,
        uint64_t tag)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<long unsigned int,std::vector<unsigned int>> *p_tag_to_point_map; // rdx
  std::unordered_map<long unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 iter:1204 64 8 9 <unknown> 96 8 8 tag:1202";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::findPointVecByTag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_QWORD *)(v2 + 96) = tag;
  p_tag_to_point_map = &this->tag_to_point_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<long unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned long,std::vector<unsigned int>>::find(
                                                                                                    p_tag_to_point_map,
                                                                                                    (const std::unordered_map<long unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 96));
  v6 = &this->tag_to_point_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<long unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned long,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned long const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned long const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 32))->second;
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

// Line 1213: range 000000000CCDDD92-000000000CCDDFAF
const std::unordered_map<unsigned int,MonsterScriptConfig> *__fastcall GroupScriptConfig::queryMonstersConfigByPoolId(
        const GroupScriptConfig *const this,
        uint32_t monster_pool_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>> *p_pool_to_monsters_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>> *v6; // rdx
  bool v7; // al
  const std::unordered_map<unsigned int,MonsterScriptConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 monster_pool_id:1212 64 8 9 iter:1215 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GroupScriptConfig::queryMonstersConfigByPoolId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_pool_id;
  if ( !(_BYTE)`guard variable for'GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)::EMPTY_MAP
    && __cxa_guard_acquire(&`guard variable for'GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)::EMPTY_MAP) )
  {
    std::unordered_map<unsigned int,MonsterScriptConfig>::unordered_map((std::unordered_map<unsigned int,MonsterScriptConfig> *const)&GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)const::EMPTY_MAP);
    __cxa_guard_release(&`guard variable for'GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)::EMPTY_MAP);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<unsigned int,MonsterScriptConfig>::~unordered_map,
      (void *)&GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)const::EMPTY_MAP,
      &_dso_handle);
  }
  p_pool_to_monsters_map = &this->pool_to_monsters_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::find(p_pool_to_monsters_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::key_type *)(v2 + 48));
  v6 = &this->pool_to_monsters_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,MonsterScriptConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MonsterScriptConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,MonsterScriptConfig> >,false,false> *const)(v2 + 64))->second;
  else
    result = &GroupScriptConfig::queryMonstersConfigByPoolId(unsigned int)const::EMPTY_MAP;
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

// Line 1224: range 000000000CCDDFB0-000000000CCDE58A
int32_t __cdecl SuiteDiskGadgetConfig::parsePlatformInfo(
        SuiteDiskGadgetConfig *const this,
        luabind::adl::object *platform_obj)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  proto::MovingPlatformType v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char *v11; // [rsp+0h] [rbp-160h]
  SuiteDiskGadgetConfig *thisa; // [rsp+18h] [rbp-148h]
  const char (*v13)[11]; // [rsp+20h] [rbp-140h]
  bool *v14; // [rsp+28h] [rbp-138h]
  int32_t ret; // [rsp+2Ch] [rbp-134h]
  char v16[33][9]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 4 18 tmp_move_type:1225 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = SuiteDiskGadgetConfig::parsePlatformInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "move_type",
    (const std::allocator<char> *)(v2 + 32));
  ret = ScriptUtil::getTableValue<int,char const(&)[9],unsigned int &,char const(&)[12],unsigned int &,char const(&)[11],bool &>(
          &ScriptUtil::no_exception_instance,
          platform_obj,
          (const std::string *)(v2 + 64),
          (int *)(v2 + 48),
          (const char (*)[9])"route_id",
          &this->route_id,
          (const char (*)[12])"route_index",
          &this->route_index,
          (const char (*)[11])"is_started",
          &this->is_started,
          v16,
          &this->route_id,
          (const char (*)[12])platform_obj,
          &this->state,
          v13,
          v14);
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ret )
  {
    result = ret;
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    if ( !proto::MovingPlatformType_IsValid(*(_DWORD *)(v2 + 48)) )
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
        "./src/group_script_config.cpp",
        "parsePlatformInfo",
        1234);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v6,
             (const char (*)[20])" invalid move type:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v8 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->move_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->move_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->move_type);
      }
      thisa->move_type = v8;
      if ( thisa->move_type == MOVING_PLATFORM_USE_CONFIG )
      {
        result = 0;
      }
      else
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
          "./src/group_script_config.cpp",
          "parsePlatformInfo",
          1240);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v9,
                (const char (*)[33])" unsupported platform move type:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        result = -1;
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 1247: range 000000000CCDE58C-000000000CCDE8AD
data::VisionLevelType __cdecl GadgetScriptConfig::getVisionLevel(
        const GadgetScriptConfig *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::VisionLevelType result; // eax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  const data::GadgetExcelConfig *gadget_excel_config_ptr; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetScriptConfig::getVisionLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_override_vision_level);
  if ( this->is_override_vision_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->vision_level);
    }
    result = this->vision_level;
  }
  else
  {
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->gadget_id);
    }
    gadget_excel_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                p_gadget_config_mgr,
                                this->gadget_id);
    if ( gadget_excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_excel_config_ptr->vision_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_excel_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_excel_config_ptr->vision_level >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_excel_config_ptr->vision_level);
      }
      result = gadget_excel_config_ptr->vision_level;
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
        "./src/group_script_config.cpp",
        "getVisionLevel",
        1255);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             (common::milog::MiLogStream *const)(v2 + 32),
             (const char (*)[39])"findGadgetExcelConfig fail. gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
      result = VISION_LEVEL_NORMAL;
    }
  }
  if ( v9 == (char *)v2 )
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

// Line 1262: range 000000000CCDE8AE-000000000CCDEBCC
data::VisionLevelType __cdecl MonsterScriptConfig::getVisionLevel(
        const MonsterScriptConfig *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::VisionLevelType result; // eax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  const data::MonsterExcelConfig *monster_excel_config_ptr; // [rsp+18h] [rbp-88h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterScriptConfig::getVisionLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_override_vision_level);
  }
  if ( this->is_override_vision_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->vision_level);
    }
    result = this->vision_level;
  }
  else
  {
    p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->monster_id);
    }
    monster_excel_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                                 p_monster_config_mgr,
                                 this->monster_id);
    if ( monster_excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->vision_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->vision_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_excel_config_ptr->vision_level);
      }
      result = monster_excel_config_ptr->vision_level;
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
        "./src/group_script_config.cpp",
        "getVisionLevel",
        1270);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             (common::milog::MiLogStream *const)(v2 + 32),
             (const char (*)[41])"findMonsterExcelConfig fail. monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->monster_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
      result = VISION_LEVEL_NORMAL;
    }
  }
  if ( v9 == (char *)v2 )
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
