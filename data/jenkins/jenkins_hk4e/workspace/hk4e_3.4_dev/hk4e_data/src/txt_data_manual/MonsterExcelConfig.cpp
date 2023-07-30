// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MonsterExcelConfig.cpp

// Line 29: range 0000000014601BE8-0000000014601E6B
int32_t __cdecl MonsterExcelConfigMgr::checkConfig(
        MonsterExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MonsterExcelConfigMgr::checkMonsterExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::checkMonsterDescribeExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::checkAnimalDescribeExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::checkCaptureAnimalExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::checkMonsterRelationshipExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::checkMonsterRelOverloadExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "checkConfig",
      37);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 44: range 0000000014601E6C-00000000146020CE
int32_t __cdecl MonsterExcelConfigMgr::rewriteConfig(MonsterExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MonsterExcelConfigMgr::rewriteMonsterExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::rewriteMonsterSpecialNameExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::rewriteCaptureAnimalExcelConfig(this, txt_config_mgr)
    || MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "rewriteConfig",
      51);
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

// Line 60: range 00000000146020D0-00000000146022B2
__int64 __fastcall MonsterExcelConfigMgr::checkMonsterWeather(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_id,
        uint32_t climate_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_exclude_weathers_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v10; // rax
  int v11; // eax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 monster_id:59 48 4 15 climate_type:59 64 8 7 iter:61 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::checkMonsterWeather;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = monster_id;
  *(_DWORD *)(v3 + 48) = climate_type;
  p_exclude_weathers_map = &this->exclude_weathers_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_exclude_weathers_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->exclude_weathers_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 1LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    LOBYTE(v11) = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                    &v10->second,
                    (const unsigned int *)(v3 + 48));
    result = v11 ^ 1u;
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
  return result;
};

// Line 72: range 00000000146022B4-0000000014602475
const std::map<data::FightPropType,float> *__fastcall MonsterExcelConfigMgr::findBaseLevelProp(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>> *p_base_level_prop_map; // rdx
  std::unordered_map<unsigned int,std::map<data::FightPropType,float>> *v6; // rdx
  bool v7; // al
  const std::map<data::FightPropType,float> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 monster_id:71 64 8 7 iter:73 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::findBaseLevelProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_base_level_prop_map = &this->base_level_prop_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::find(p_base_level_prop_map, (const std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::key_type *)(v2 + 48));
  v6 = &this->base_level_prop_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::FightPropType,float>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false,false> *const)(v2 + 64))->second;
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

// Line 82: range 0000000014602476-00000000146072DD
int32_t __cdecl MonsterExcelConfigMgr::rewriteMonsterExcelConfig(
        MonsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MonsterDrop *M_current; // r15
  std::vector<data::MonsterDrop>::iterator v7; // rax
  MonsterExcelConfigMgr::rewriteMonsterExcelConfig::<lambda(auto:33&, auto:34&)> v8; // dl
  unsigned __int64 v9; // rax
  char *v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  _BOOL4 v13; // r15d
  const char *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  const unsigned int *v18; // rsi
  std::set<unsigned int> *v19; // rdi
  int v20; // ecx
  char v21; // al
  int v22; // edx
  unsigned __int64 v23; // rax
  float *v24; // r8
  float *p_hp_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v26; // rax
  float *v27; // r8
  common::milog::MiLogStream *v28; // rax
  const char *v29; // rsi
  common::milog::MiLogStream *v30; // rcx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int v34; // r15d
  float *p_attack_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v36; // rax
  float *v37; // r8
  common::milog::MiLogStream *v38; // rax
  const char *v39; // rsi
  common::milog::MiLogStream *v40; // rcx
  char v41; // al
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  float *p_defense_base; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v45; // rax
  float *v46; // r8
  common::milog::MiLogStream *v47; // rax
  const char *v48; // rsi
  common::milog::MiLogStream *v49; // rcx
  char v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  float *p_critical; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v54; // rax
  float *v55; // r8
  common::milog::MiLogStream *v56; // rax
  const char *v57; // rsi
  common::milog::MiLogStream *v58; // rcx
  char v59; // al
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  float *p_anti_critical; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v63; // rax
  float *v64; // r8
  common::milog::MiLogStream *v65; // rax
  const char *v66; // rsi
  common::milog::MiLogStream *v67; // rcx
  char v68; // al
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  float *p_critical_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v72; // rax
  float *v73; // r8
  common::milog::MiLogStream *v74; // rax
  const char *v75; // rsi
  common::milog::MiLogStream *v76; // rcx
  char v77; // al
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  float *p_fire_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v81; // rax
  float *v82; // r8
  common::milog::MiLogStream *v83; // rax
  const char *v84; // rsi
  common::milog::MiLogStream *v85; // rcx
  char v86; // al
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  float *p_fire_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v90; // rax
  float *v91; // r8
  common::milog::MiLogStream *v92; // rax
  const char *v93; // rsi
  common::milog::MiLogStream *v94; // rcx
  char v95; // al
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  float *p_grass_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v99; // rax
  float *v100; // r8
  common::milog::MiLogStream *v101; // rax
  const char *v102; // rsi
  common::milog::MiLogStream *v103; // rcx
  char v104; // al
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  float *p_grass_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v108; // rax
  float *v109; // r8
  common::milog::MiLogStream *v110; // rax
  const char *v111; // rsi
  common::milog::MiLogStream *v112; // rcx
  char v113; // al
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  float *p_water_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v117; // rax
  float *v118; // r8
  common::milog::MiLogStream *v119; // rax
  const char *v120; // rsi
  common::milog::MiLogStream *v121; // rcx
  char v122; // al
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  float *p_water_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v126; // rax
  float *v127; // r8
  common::milog::MiLogStream *v128; // rax
  const char *v129; // rsi
  common::milog::MiLogStream *v130; // rcx
  char v131; // al
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  float *p_elec_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v135; // rax
  float *v136; // r8
  common::milog::MiLogStream *v137; // rax
  const char *v138; // rsi
  common::milog::MiLogStream *v139; // rcx
  char v140; // al
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  float *p_elec_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v144; // rax
  float *v145; // r8
  common::milog::MiLogStream *v146; // rax
  const char *v147; // rsi
  common::milog::MiLogStream *v148; // rcx
  char v149; // al
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  float *p_wind_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v153; // rax
  float *v154; // r8
  common::milog::MiLogStream *v155; // rax
  const char *v156; // rsi
  common::milog::MiLogStream *v157; // rcx
  char v158; // al
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  float *p_wind_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v162; // rax
  float *v163; // r8
  common::milog::MiLogStream *v164; // rax
  const char *v165; // rsi
  common::milog::MiLogStream *v166; // rcx
  char v167; // al
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  float *p_ice_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v171; // rax
  float *v172; // r8
  common::milog::MiLogStream *v173; // rax
  const char *v174; // rsi
  common::milog::MiLogStream *v175; // rcx
  char v176; // al
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  float *p_ice_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v180; // rax
  float *v181; // r8
  common::milog::MiLogStream *v182; // rax
  const char *v183; // rsi
  common::milog::MiLogStream *v184; // rcx
  char v185; // al
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  float *p_rock_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v189; // rax
  float *v190; // r8
  common::milog::MiLogStream *v191; // rax
  const char *v192; // rsi
  common::milog::MiLogStream *v193; // rcx
  char v194; // al
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  float *p_rock_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v198; // rax
  float *v199; // r8
  common::milog::MiLogStream *v200; // rax
  const char *v201; // rsi
  common::milog::MiLogStream *v202; // rcx
  char v203; // al
  common::milog::MiLogStream *v204; // rax
  common::milog::MiLogStream *v205; // rax
  float *p_element_mastery; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v207; // rax
  float *v208; // r8
  common::milog::MiLogStream *v209; // rax
  const char *v210; // rsi
  common::milog::MiLogStream *v211; // rcx
  char v212; // al
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  float *p_physical_sub_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v216; // rax
  float *v217; // r8
  common::milog::MiLogStream *v218; // rax
  const char *v219; // rsi
  common::milog::MiLogStream *v220; // rcx
  char v221; // al
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // rax
  float *p_physical_add_hurt; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >,bool> v225; // rax
  common::milog::MiLogStream *v226; // rax
  const char *v227; // rsi
  common::milog::MiLogStream *v228; // rcx
  char v229; // al
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // rax
  std::map<data::FightPropType,float> *v232; // rdx
  const unsigned int *v233; // rcx
  std::map<data::FightPropType,float> *v234; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::FightPropType,float> >,false,false>,bool> v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rdx
  std::set<unsigned int> *v238; // rdx
  unsigned __int64 v239; // rax
  unsigned __int64 v240; // rax
  int v241; // eax
  data::MonsterExcelConfigMap *__for_range; // [rsp+20h] [rbp-B60h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-B58h]
  const unsigned int *monster_id; // [rsp+30h] [rbp-B50h]
  std::tuple_element<1,std::pair<unsigned int const,data::MonsterExcelConfig> >::type *monster_excel_config; // [rsp+38h] [rbp-B48h]
  std::vector<std::string> *__for_range_0; // [rsp+40h] [rbp-B40h]
  const std::string *weather_str; // [rsp+48h] [rbp-B38h]
  char v250[2864]; // [rsp+50h] [rbp-B30h] BYREF

  v3 = (unsigned __int64)v250;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2816LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "82 32 1 9 <unknown> 48 4 16 climate_type:101 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> "
                        "112 4 9 <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 "
                        "9 <unknown> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unk"
                        "nown> 288 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> "
                        "368 4 9 <unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 "
                        "9 <unknown> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unk"
                        "nown> 544 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> "
                        "624 4 9 <unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 "
                        "9 <unknown> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unk"
                        "nown> 800 4 9 <unknown> 816 8 14 __for_begin:83 848 8 12 __for_end:83 880 8 14 __for_begin:99 91"
                        "2 8 12 __for_end:99 944 24 18 weather_str_vec:92 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32"
                        " 9 <unknown> 1200 32 9 <unknown> 1264 32 9 <unknown> 1328 32 9 <unknown> 1392 32 9 <unknown> 145"
                        "6 32 9 <unknown> 1520 32 9 <unknown> 1584 32 9 <unknown> 1648 32 9 <unknown> 1712 32 9 <unknown>"
                        " 1776 32 9 <unknown> 1840 32 9 <unknown> 1904 32 9 <unknown> 1968 32 9 <unknown> 2032 32 9 <unkn"
                        "own> 2096 32 9 <unknown> 2160 32 9 <unknown> 2224 32 9 <unknown> 2288 32 9 <unknown> 2352 32 9 <"
                        "unknown> 2416 32 9 <unknown> 2480 32 9 <unknown> 2544 32 9 <unknown> 2608 32 9 <unknown> 2672 32"
                        " 9 <unknown> 2736 48 17 base_prop_map:111";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::rewriteMonsterExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -234556924;
  v5[536862728] = -234556924;
  v5[536862729] = -234556924;
  v5[536862730] = -234556924;
  v5[536862731] = -234556924;
  v5[536862732] = -234556924;
  v5[536862733] = -234556924;
  v5[536862734] = -234556924;
  v5[536862735] = -234556924;
  v5[536862736] = -234556924;
  v5[536862737] = -234556924;
  v5[536862738] = -234556924;
  v5[536862739] = -234556924;
  v5[536862740] = -234556924;
  v5[536862741] = -234556924;
  v5[536862742] = -234556924;
  v5[536862743] = -234556924;
  v5[536862744] = -234556924;
  v5[536862745] = 61956;
  v5[536862745] = -234881024;
  v5[536862746] = 62194;
  v5[536862746] = -234881024;
  v5[536862747] = 62194;
  v5[536862747] = -234881024;
  v5[536862748] = 62194;
  v5[536862748] = -234881024;
  v5[536862749] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862754] = -219021312;
  v5[536862755] = 62194;
  v5[536862756] = -219021312;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862762] = -219021312;
  v5[536862763] = 62194;
  v5[536862764] = -219021312;
  v5[536862765] = 62194;
  v5[536862766] = -219021312;
  v5[536862767] = 62194;
  v5[536862768] = -219021312;
  v5[536862769] = 62194;
  v5[536862770] = -219021312;
  v5[536862771] = 62194;
  v5[536862772] = -219021312;
  v5[536862773] = 62194;
  v5[536862774] = -219021312;
  v5[536862775] = 62194;
  v5[536862776] = -219021312;
  v5[536862777] = 62194;
  v5[536862778] = -219021312;
  v5[536862779] = 62194;
  v5[536862780] = -219021312;
  v5[536862781] = 62194;
  v5[536862782] = -219021312;
  v5[536862783] = 62194;
  v5[536862784] = -219021312;
  v5[536862785] = 62194;
  v5[536862786] = -219021312;
  v5[536862787] = 62194;
  v5[536862788] = -219021312;
  v5[536862789] = 62194;
  v5[536862790] = -219021312;
  v5[536862791] = 62194;
  v5[536862792] = -219021312;
  v5[536862793] = 62194;
  v5[536862794] = -219021312;
  v5[536862795] = 62194;
  v5[536862796] = -219021312;
  v5[536862797] = 62194;
  v5[536862798] = -219021312;
  v5[536862799] = 62194;
  v5[536862800] = -219021312;
  v5[536862801] = 62194;
  v5[536862802] = -219021312;
  v5[536862803] = 62194;
  v5[536862804] = -219021312;
  v5[536862805] = 62194;
  v5[536862807] = -202116109;
  __for_range = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 816, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::iterator *)(v3 + 816) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 848, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::iterator *)(v3 + 848) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v3 + 816),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v3 + 848)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v3 + 816));
    monster_id = std::get<0ul,unsigned int const,data::MonsterExcelConfig>(__in);
    monster_excel_config = std::get<1ul,unsigned int const,data::MonsterExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::MonsterDrop,unsigned int data::MonsterDrop::*>(
      &monster_excel_config->hp_drops,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::FightPropGrowConfig,data::FightPropType data::FightPropGrowConfig::*>(
      &monster_excel_config->prop_grow_curves,
      (data::FightPropType *)8);
    M_current = std::vector<data::MonsterDrop>::end(&monster_excel_config->hp_drops)._M_current;
    v7._M_current = std::vector<data::MonsterDrop>::begin(&monster_excel_config->hp_drops)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::MonsterDrop__std::vector_data::MonsterDrop____MonsterExcelConfigMgr::rewriteMonsterExcelConfig_TxtConfigMgr__::_lambda_auto_33__auto_34_____(
      v7,
      (__gnu_cxx::__normal_iterator<data::MonsterDrop*,std::vector<data::MonsterDrop> >)M_current,
      v8);
    v9 = ((v3 + 944) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 944));
    *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 1008),
      ",",
      (const std::allocator<char> *)(v3 + 32));
    v10 = (char *)(v3 + 1008);
    LOBYTE(M_current) = common::tools::StringUtils::split(
                          &monster_excel_config->exclude_weathers,
                          (const std::string *)(v3 + 1008),
                          (std::vector<std::string> *)(v3 + 944),
                          0) != 0;
    std::string::~string((void *)(v3 + 1008));
    *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 32);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( (_BYTE)M_current )
    {
      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1072) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1072, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1072),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "rewriteMonsterExcelConfig",
        95);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1072),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v11,
              (const char (*)[34])"split weathers fails, monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, monster_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1072));
      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    else
    {
      __for_range_0 = (std::vector<std::string> *)(v3 + 944);
      *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 880, v10);
      *(std::vector<std::string>::iterator *)(v3 + 880) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 912, v10);
      *(std::vector<std::string>::iterator *)(v3 + 912) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 880),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 912)) )
      {
        weather_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 880));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, v3 + 912);
        *(_DWORD *)(v3 + 48) = 0;
        v14 = (const char *)std::string::c_str(weather_str);
        if ( (unsigned int)data::enumStrToVal(v14, v3 + 48) )
        {
          *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1136) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1136, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1136),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MonsterExcelConfig.cpp",
            "rewriteMonsterExcelConfig",
            104);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1136),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  v15,
                  (const char (*)[34])"parse weathers fails, monster_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, monster_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1136));
          *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v18 = monster_id;
          v19 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->exclude_weathers_map_,
                  monster_id);
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          {
            v19 = (std::set<unsigned int> *)(v3 + 48);
            __asan_report_load4(v3 + 48);
          }
          v20 = *(_DWORD *)(v3 + 48);
          v21 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v21 != 0 && v21 <= 3 )
          {
            v19 = (std::set<unsigned int> *)(v3 + 64);
            LOBYTE(v18) = v21 != 0;
            __asan_report_store4(v3 + 64, v18);
          }
          *(_DWORD *)(v3 + 64) = v20;
          std::set<unsigned int>::insert(v19, (std::set<unsigned int>::value_type *)(v3 + 64));
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          v17 = 1;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v17 != 1 )
        {
          v22 = 0;
          goto LABEL_35;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 880));
      }
      v22 = 1;
LABEL_35:
      *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = -8;
      if ( v22 == 1 )
      {
        v23 = ((v3 + 2736) >> 3) + 2147450880;
        *(_DWORD *)v23 = 0;
        *(_WORD *)(v23 + 4) = 0;
        std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v3 + 2736));
        p_hp_base = &monster_excel_config->hp_base;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80, p_hp_base);
        *(_DWORD *)(v3 + 80) = 1;
        v26 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                (std::map<data::FightPropType,float> *const)(v3 + 2736),
                (data::FightPropType *)(v3 + 80),
                p_hp_base,
                (data::FightPropType *)(v3 + 80),
                v24);
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v26.second )
        {
          *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1200) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1200, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1200),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MonsterExcelConfig.cpp",
            "rewriteMonsterExcelConfig",
            120);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1200),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = "duplicate prop_type:";
          v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v28,
                  (const char (*)[21])"duplicate prop_type:");
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
          v31 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
          if ( v31 != 0 && v31 <= 3 )
          {
            LOBYTE(v29) = v31 != 0;
            __asan_report_store4(v3 + 96, v29);
          }
          *(_DWORD *)(v3 + 96) = 1;
          v32 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                  v30,
                  (const data::FightPropType *)(v3 + 96));
          v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" value:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v33, &monster_excel_config->hp_base);
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1200));
          *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v34 = 0;
        }
        else
        {
          p_attack_base = &monster_excel_config->attack_base;
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 112, p_attack_base);
          *(_DWORD *)(v3 + 112) = 4;
          v36 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                  (std::map<data::FightPropType,float> *const)(v3 + 2736),
                  (data::FightPropType *)(v3 + 112),
                  p_attack_base,
                  (data::FightPropType *)(v3 + 112),
                  v27);
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !v36.second )
          {
            *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1264) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1264, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1264),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MonsterExcelConfig.cpp",
              "rewriteMonsterExcelConfig",
              121);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1264),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = "duplicate prop_type:";
            v40 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v38,
                    (const char (*)[21])"duplicate prop_type:");
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
            v41 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
            if ( v41 != 0 && v41 <= 3 )
            {
              LOBYTE(v39) = v41 != 0;
              __asan_report_store4(v3 + 128, v39);
            }
            *(_DWORD *)(v3 + 128) = 4;
            v42 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                    v40,
                    (const data::FightPropType *)(v3 + 128));
            v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])" value:");
            common::milog::MiLogStream::operator<<<float,(float *)0>(v43, &monster_excel_config->attack_base);
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1264));
            *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v34 = 0;
          }
          else
          {
            p_defense_base = &monster_excel_config->defense_base;
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 144, p_defense_base);
            *(_DWORD *)(v3 + 144) = 7;
            v45 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                    (std::map<data::FightPropType,float> *const)(v3 + 2736),
                    (data::FightPropType *)(v3 + 144),
                    p_defense_base,
                    (data::FightPropType *)(v3 + 144),
                    v37);
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( !v45.second )
            {
              *(_DWORD *)(((v3 + 1328) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1328) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1328, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1328),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MonsterExcelConfig.cpp",
                "rewriteMonsterExcelConfig",
                122);
              v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1328),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v48 = "duplicate prop_type:";
              v49 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v47,
                      (const char (*)[21])"duplicate prop_type:");
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
              v50 = *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000);
              if ( v50 != 0 && v50 <= 3 )
              {
                LOBYTE(v48) = v50 != 0;
                __asan_report_store4(v3 + 160, v48);
              }
              *(_DWORD *)(v3 + 160) = 7;
              v51 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                      v49,
                      (const data::FightPropType *)(v3 + 160));
              v52 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v51, (const char (*)[8])" value:");
              common::milog::MiLogStream::operator<<<float,(float *)0>(v52, &monster_excel_config->defense_base);
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1328));
              *(_DWORD *)(((v3 + 1328) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v34 = 0;
            }
            else
            {
              p_critical = &monster_excel_config->critical;
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 176, p_critical);
              *(_DWORD *)(v3 + 176) = 20;
              v54 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                      (std::map<data::FightPropType,float> *const)(v3 + 2736),
                      (data::FightPropType *)(v3 + 176),
                      p_critical,
                      (data::FightPropType *)(v3 + 176),
                      v46);
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( !v54.second )
              {
                *(_DWORD *)(((v3 + 1392) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1392) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1392, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1392),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                  "rewriteMonsterExcelConfig",
                  123);
                v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1392),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v57 = "duplicate prop_type:";
                v58 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v56,
                        (const char (*)[21])"duplicate prop_type:");
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
                v59 = *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000);
                if ( v59 != 0 && v59 <= 3 )
                {
                  LOBYTE(v57) = v59 != 0;
                  __asan_report_store4(v3 + 192, v57);
                }
                *(_DWORD *)(v3 + 192) = 20;
                v60 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                        v58,
                        (const data::FightPropType *)(v3 + 192));
                v61 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v60, (const char (*)[8])" value:");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v61, &monster_excel_config->critical);
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1392));
                *(_DWORD *)(((v3 + 1392) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v34 = 0;
              }
              else
              {
                p_anti_critical = &monster_excel_config->anti_critical;
                *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 208, p_anti_critical);
                *(_DWORD *)(v3 + 208) = 21;
                v63 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                        (std::map<data::FightPropType,float> *const)(v3 + 2736),
                        (data::FightPropType *)(v3 + 208),
                        p_anti_critical,
                        (data::FightPropType *)(v3 + 208),
                        v55);
                *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( !v63.second )
                {
                  *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1456) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1487) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1487) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1456, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1456),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/MonsterExcelConfig.cpp",
                    "rewriteMonsterExcelConfig",
                    124);
                  v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1456),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v66 = "duplicate prop_type:";
                  v67 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v65,
                          (const char (*)[21])"duplicate prop_type:");
                  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 4;
                  v68 = *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000);
                  if ( v68 != 0 && v68 <= 3 )
                  {
                    LOBYTE(v66) = v68 != 0;
                    __asan_report_store4(v3 + 224, v66);
                  }
                  *(_DWORD *)(v3 + 224) = 21;
                  v69 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                          v67,
                          (const data::FightPropType *)(v3 + 224));
                  v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])" value:");
                  common::milog::MiLogStream::operator<<<float,(float *)0>(v70, &monster_excel_config->anti_critical);
                  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1456));
                  *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v34 = 0;
                }
                else
                {
                  p_critical_hurt = &monster_excel_config->critical_hurt;
                  *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 240, p_critical_hurt);
                  }
                  *(_DWORD *)(v3 + 240) = 22;
                  v72 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                          (std::map<data::FightPropType,float> *const)(v3 + 2736),
                          (data::FightPropType *)(v3 + 240),
                          p_critical_hurt,
                          (data::FightPropType *)(v3 + 240),
                          v64);
                  *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( !v72.second )
                  {
                    *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1520) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1520, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1520),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/MonsterExcelConfig.cpp",
                      "rewriteMonsterExcelConfig",
                      125);
                    v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1520),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v75 = "duplicate prop_type:";
                    v76 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v74,
                            (const char (*)[21])"duplicate prop_type:");
                    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 4;
                    v77 = *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000);
                    if ( v77 != 0 && v77 <= 3 )
                    {
                      LOBYTE(v75) = v77 != 0;
                      __asan_report_store4(v3 + 256, v75);
                    }
                    *(_DWORD *)(v3 + 256) = 22;
                    v78 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                            v76,
                            (const data::FightPropType *)(v3 + 256));
                    v79 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v78,
                            (const char (*)[8])" value:");
                    common::milog::MiLogStream::operator<<<float,(float *)0>(v79, &monster_excel_config->critical_hurt);
                    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1520));
                    *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v34 = 0;
                  }
                  else
                  {
                    p_fire_sub_hurt = &monster_excel_config->fire_sub_hurt;
                    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 272, p_fire_sub_hurt);
                    }
                    *(_DWORD *)(v3 + 272) = 50;
                    v81 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                            (std::map<data::FightPropType,float> *const)(v3 + 2736),
                            (data::FightPropType *)(v3 + 272),
                            p_fire_sub_hurt,
                            (data::FightPropType *)(v3 + 272),
                            v73);
                    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
                    if ( !v81.second )
                    {
                      *(_DWORD *)(((v3 + 1584) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1584) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1584, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1584),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/MonsterExcelConfig.cpp",
                        "rewriteMonsterExcelConfig",
                        126);
                      v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1584),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v84 = "duplicate prop_type:";
                      v85 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                              v83,
                              (const char (*)[21])"duplicate prop_type:");
                      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 4;
                      v86 = *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000);
                      if ( v86 != 0 && v86 <= 3 )
                      {
                        LOBYTE(v84) = v86 != 0;
                        __asan_report_store4(v3 + 288, v84);
                      }
                      *(_DWORD *)(v3 + 288) = 50;
                      v87 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                              v85,
                              (const data::FightPropType *)(v3 + 288));
                      v88 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v87,
                              (const char (*)[8])" value:");
                      common::milog::MiLogStream::operator<<<float,(float *)0>(
                        v88,
                        &monster_excel_config->fire_sub_hurt);
                      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1584));
                      *(_DWORD *)(((v3 + 1584) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v34 = 0;
                    }
                    else
                    {
                      p_fire_add_hurt = &monster_excel_config->fire_add_hurt;
                      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v3 + 304, p_fire_add_hurt);
                      }
                      *(_DWORD *)(v3 + 304) = 40;
                      v90 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                              (std::map<data::FightPropType,float> *const)(v3 + 2736),
                              (data::FightPropType *)(v3 + 304),
                              p_fire_add_hurt,
                              (data::FightPropType *)(v3 + 304),
                              v82);
                      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
                      if ( !v90.second )
                      {
                        *(_DWORD *)(((v3 + 1648) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1648) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1648, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1648),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/MonsterExcelConfig.cpp",
                          "rewriteMonsterExcelConfig",
                          127);
                        v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1648),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v93 = "duplicate prop_type:";
                        v94 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                v92,
                                (const char (*)[21])"duplicate prop_type:");
                        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 4;
                        v95 = *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000);
                        if ( v95 != 0 && v95 <= 3 )
                        {
                          LOBYTE(v93) = v95 != 0;
                          __asan_report_store4(v3 + 320, v93);
                        }
                        *(_DWORD *)(v3 + 320) = 40;
                        v96 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                v94,
                                (const data::FightPropType *)(v3 + 320));
                        v97 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                v96,
                                (const char (*)[8])" value:");
                        common::milog::MiLogStream::operator<<<float,(float *)0>(
                          v97,
                          &monster_excel_config->fire_add_hurt);
                        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1648));
                        *(_DWORD *)(((v3 + 1648) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v34 = 0;
                      }
                      else
                      {
                        p_grass_sub_hurt = &monster_excel_config->grass_sub_hurt;
                        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 4;
                        if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v3 + 336, p_grass_sub_hurt);
                        }
                        *(_DWORD *)(v3 + 336) = 53;
                        v99 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                (data::FightPropType *)(v3 + 336),
                                p_grass_sub_hurt,
                                (data::FightPropType *)(v3 + 336),
                                v91);
                        *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
                        if ( !v99.second )
                        {
                          *(_DWORD *)(((v3 + 1712) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 1712) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 1743) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1743) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 1712, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 1712),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/MonsterExcelConfig.cpp",
                            "rewriteMonsterExcelConfig",
                            128);
                          v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 1712),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v102 = "duplicate prop_type:";
                          v103 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                   v101,
                                   (const char (*)[21])"duplicate prop_type:");
                          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 4;
                          v104 = *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000);
                          if ( v104 != 0 && v104 <= 3 )
                          {
                            LOBYTE(v102) = v104 != 0;
                            __asan_report_store4(v3 + 352, v102);
                          }
                          *(_DWORD *)(v3 + 352) = 53;
                          v105 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                   v103,
                                   (const data::FightPropType *)(v3 + 352));
                          v106 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                   v105,
                                   (const char (*)[8])" value:");
                          common::milog::MiLogStream::operator<<<float,(float *)0>(
                            v106,
                            &monster_excel_config->grass_sub_hurt);
                          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1712));
                          *(_DWORD *)(((v3 + 1712) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v34 = 0;
                        }
                        else
                        {
                          p_grass_add_hurt = &monster_excel_config->grass_add_hurt;
                          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 4;
                          if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(v3 + 368, p_grass_add_hurt);
                          }
                          *(_DWORD *)(v3 + 368) = 43;
                          v108 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                   (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                   (data::FightPropType *)(v3 + 368),
                                   p_grass_add_hurt,
                                   (data::FightPropType *)(v3 + 368),
                                   v100);
                          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
                          if ( !v108.second )
                          {
                            *(_DWORD *)(((v3 + 1776) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 1776) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 1807) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1807) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 1776, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 1776),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/MonsterExcelConfig.cpp",
                              "rewriteMonsterExcelConfig",
                              129);
                            v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 1776),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v111 = "duplicate prop_type:";
                            v112 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                     v110,
                                     (const char (*)[21])"duplicate prop_type:");
                            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 4;
                            v113 = *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000);
                            if ( v113 != 0 && v113 <= 3 )
                            {
                              LOBYTE(v111) = v113 != 0;
                              __asan_report_store4(v3 + 384, v111);
                            }
                            *(_DWORD *)(v3 + 384) = 43;
                            v114 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                     v112,
                                     (const data::FightPropType *)(v3 + 384));
                            v115 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                     v114,
                                     (const char (*)[8])" value:");
                            common::milog::MiLogStream::operator<<<float,(float *)0>(
                              v115,
                              &monster_excel_config->grass_add_hurt);
                            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1776));
                            *(_DWORD *)(((v3 + 1776) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v34 = 0;
                          }
                          else
                          {
                            p_water_sub_hurt = &monster_excel_config->water_sub_hurt;
                            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 4;
                            if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_store4(v3 + 400, p_water_sub_hurt);
                            }
                            *(_DWORD *)(v3 + 400) = 52;
                            v117 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                     (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                     (data::FightPropType *)(v3 + 400),
                                     p_water_sub_hurt,
                                     (data::FightPropType *)(v3 + 400),
                                     v109);
                            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                            if ( !v117.second )
                            {
                              *(_DWORD *)(((v3 + 1840) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 1840) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 1871) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1871) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 1840, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 1840),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                "rewriteMonsterExcelConfig",
                                130);
                              v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 1840),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v120 = "duplicate prop_type:";
                              v121 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                       v119,
                                       (const char (*)[21])"duplicate prop_type:");
                              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 4;
                              v122 = *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000);
                              if ( v122 != 0 && v122 <= 3 )
                              {
                                LOBYTE(v120) = v122 != 0;
                                __asan_report_store4(v3 + 416, v120);
                              }
                              *(_DWORD *)(v3 + 416) = 52;
                              v123 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                       v121,
                                       (const data::FightPropType *)(v3 + 416));
                              v124 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                       v123,
                                       (const char (*)[8])" value:");
                              common::milog::MiLogStream::operator<<<float,(float *)0>(
                                v124,
                                &monster_excel_config->water_sub_hurt);
                              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1840));
                              *(_DWORD *)(((v3 + 1840) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v34 = 0;
                            }
                            else
                            {
                              p_water_add_hurt = &monster_excel_config->water_add_hurt;
                              *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 4;
                              if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_store4(v3 + 432, p_water_add_hurt);
                              }
                              *(_DWORD *)(v3 + 432) = 42;
                              v126 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                       (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                       (data::FightPropType *)(v3 + 432),
                                       p_water_add_hurt,
                                       (data::FightPropType *)(v3 + 432),
                                       v118);
                              *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                              if ( !v126.second )
                              {
                                *(_DWORD *)(((v3 + 1904) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 1904) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 1935) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1935) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 1904, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 1904),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                  "rewriteMonsterExcelConfig",
                                  131);
                                v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v3 + 1904),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v129 = "duplicate prop_type:";
                                v130 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                         v128,
                                         (const char (*)[21])"duplicate prop_type:");
                                *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 4;
                                v131 = *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000);
                                if ( v131 != 0 && v131 <= 3 )
                                {
                                  LOBYTE(v129) = v131 != 0;
                                  __asan_report_store4(v3 + 448, v129);
                                }
                                *(_DWORD *)(v3 + 448) = 42;
                                v132 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                         v130,
                                         (const data::FightPropType *)(v3 + 448));
                                v133 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                         v132,
                                         (const char (*)[8])" value:");
                                common::milog::MiLogStream::operator<<<float,(float *)0>(
                                  v133,
                                  &monster_excel_config->water_add_hurt);
                                *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1904));
                                *(_DWORD *)(((v3 + 1904) >> 3) + 0x7FFF8000) = -117901064;
                                v2 = -1;
                                v34 = 0;
                              }
                              else
                              {
                                p_elec_sub_hurt = &monster_excel_config->elec_sub_hurt;
                                *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 4;
                                if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) != 0
                                  && *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) <= 3 )
                                {
                                  __asan_report_store4(v3 + 464, p_elec_sub_hurt);
                                }
                                *(_DWORD *)(v3 + 464) = 51;
                                v135 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                         (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                         (data::FightPropType *)(v3 + 464),
                                         p_elec_sub_hurt,
                                         (data::FightPropType *)(v3 + 464),
                                         v127);
                                *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
                                if ( !v135.second )
                                {
                                  *(_DWORD *)(((v3 + 1968) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v3 + 1968) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v3 + 1999) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1999) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v3 + 1968, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v3 + 1968),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                    "rewriteMonsterExcelConfig",
                                    132);
                                  v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v3 + 1968),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  v138 = "duplicate prop_type:";
                                  v139 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                           v137,
                                           (const char (*)[21])"duplicate prop_type:");
                                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 4;
                                  v140 = *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000);
                                  if ( v140 != 0 && v140 <= 3 )
                                  {
                                    LOBYTE(v138) = v140 != 0;
                                    __asan_report_store4(v3 + 480, v138);
                                  }
                                  *(_DWORD *)(v3 + 480) = 51;
                                  v141 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                           v139,
                                           (const data::FightPropType *)(v3 + 480));
                                  v142 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                           v141,
                                           (const char (*)[8])" value:");
                                  common::milog::MiLogStream::operator<<<float,(float *)0>(
                                    v142,
                                    &monster_excel_config->elec_sub_hurt);
                                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1968));
                                  *(_DWORD *)(((v3 + 1968) >> 3) + 0x7FFF8000) = -117901064;
                                  v2 = -1;
                                  v34 = 0;
                                }
                                else
                                {
                                  p_elec_add_hurt = &monster_excel_config->elec_add_hurt;
                                  *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 4;
                                  if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) != 0
                                    && *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) <= 3 )
                                  {
                                    __asan_report_store4(v3 + 496, p_elec_add_hurt);
                                  }
                                  *(_DWORD *)(v3 + 496) = 41;
                                  v144 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                           (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                           (data::FightPropType *)(v3 + 496),
                                           p_elec_add_hurt,
                                           (data::FightPropType *)(v3 + 496),
                                           v136);
                                  *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v144.second )
                                  {
                                    *(_DWORD *)(((v3 + 2032) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v3 + 2032) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v3 + 2063) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2063) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v3 + 2032, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v3 + 2032),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                      "rewriteMonsterExcelConfig",
                                      133);
                                    v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v3 + 2032),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    v147 = "duplicate prop_type:";
                                    v148 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                             v146,
                                             (const char (*)[21])"duplicate prop_type:");
                                    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 4;
                                    v149 = *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000);
                                    if ( v149 != 0 && v149 <= 3 )
                                    {
                                      LOBYTE(v147) = v149 != 0;
                                      __asan_report_store4(v3 + 512, v147);
                                    }
                                    *(_DWORD *)(v3 + 512) = 41;
                                    v150 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                             v148,
                                             (const data::FightPropType *)(v3 + 512));
                                    v151 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                             v150,
                                             (const char (*)[8])" value:");
                                    common::milog::MiLogStream::operator<<<float,(float *)0>(
                                      v151,
                                      &monster_excel_config->elec_add_hurt);
                                    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2032));
                                    *(_DWORD *)(((v3 + 2032) >> 3) + 0x7FFF8000) = -117901064;
                                    v2 = -1;
                                    v34 = 0;
                                  }
                                  else
                                  {
                                    p_wind_sub_hurt = &monster_excel_config->wind_sub_hurt;
                                    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 4;
                                    if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) != 0
                                      && *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) <= 3 )
                                    {
                                      __asan_report_store4(v3 + 528, p_wind_sub_hurt);
                                    }
                                    *(_DWORD *)(v3 + 528) = 54;
                                    v153 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                             (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                             (data::FightPropType *)(v3 + 528),
                                             p_wind_sub_hurt,
                                             (data::FightPropType *)(v3 + 528),
                                             v145);
                                    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
                                    if ( !v153.second )
                                    {
                                      *(_DWORD *)(((v3 + 2096) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v3 + 2096) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 2127) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2127) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 2096, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 2096),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                        "rewriteMonsterExcelConfig",
                                        134);
                                      v155 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                               (common::milog::MiLogStream *const)(v3 + 2096),
                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                      v156 = "duplicate prop_type:";
                                      v157 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                               v155,
                                               (const char (*)[21])"duplicate prop_type:");
                                      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 4;
                                      v158 = *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000);
                                      if ( v158 != 0 && v158 <= 3 )
                                      {
                                        LOBYTE(v156) = v158 != 0;
                                        __asan_report_store4(v3 + 544, v156);
                                      }
                                      *(_DWORD *)(v3 + 544) = 54;
                                      v159 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                               v157,
                                               (const data::FightPropType *)(v3 + 544));
                                      v160 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                               v159,
                                               (const char (*)[8])" value:");
                                      common::milog::MiLogStream::operator<<<float,(float *)0>(
                                        v160,
                                        &monster_excel_config->wind_sub_hurt);
                                      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2096));
                                      *(_DWORD *)(((v3 + 2096) >> 3) + 0x7FFF8000) = -117901064;
                                      v2 = -1;
                                      v34 = 0;
                                    }
                                    else
                                    {
                                      p_wind_add_hurt = &monster_excel_config->wind_add_hurt;
                                      *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 4;
                                      if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0
                                        && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
                                      {
                                        __asan_report_store4(v3 + 560, p_wind_add_hurt);
                                      }
                                      *(_DWORD *)(v3 + 560) = 44;
                                      v162 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                               (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                               (data::FightPropType *)(v3 + 560),
                                               p_wind_add_hurt,
                                               (data::FightPropType *)(v3 + 560),
                                               v154);
                                      *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
                                      if ( !v162.second )
                                      {
                                        *(_DWORD *)(((v3 + 2160) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v3 + 2160) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v3 + 2191) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2191) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v3 + 2160, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v3 + 2160),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                          "rewriteMonsterExcelConfig",
                                          135);
                                        v164 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                 (common::milog::MiLogStream *const)(v3 + 2160),
                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                        v165 = "duplicate prop_type:";
                                        v166 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                 v164,
                                                 (const char (*)[21])"duplicate prop_type:");
                                        *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 4;
                                        v167 = *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000);
                                        if ( v167 != 0 && v167 <= 3 )
                                        {
                                          LOBYTE(v165) = v167 != 0;
                                          __asan_report_store4(v3 + 576, v165);
                                        }
                                        *(_DWORD *)(v3 + 576) = 44;
                                        v168 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                 v166,
                                                 (const data::FightPropType *)(v3 + 576));
                                        v169 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                 v168,
                                                 (const char (*)[8])" value:");
                                        common::milog::MiLogStream::operator<<<float,(float *)0>(
                                          v169,
                                          &monster_excel_config->wind_add_hurt);
                                        *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2160));
                                        *(_DWORD *)(((v3 + 2160) >> 3) + 0x7FFF8000) = -117901064;
                                        v2 = -1;
                                        v34 = 0;
                                      }
                                      else
                                      {
                                        p_ice_sub_hurt = &monster_excel_config->ice_sub_hurt;
                                        *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 4;
                                        if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) != 0
                                          && *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) <= 3 )
                                        {
                                          __asan_report_store4(v3 + 592, p_ice_sub_hurt);
                                        }
                                        *(_DWORD *)(v3 + 592) = 56;
                                        v171 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                 (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                 (data::FightPropType *)(v3 + 592),
                                                 p_ice_sub_hurt,
                                                 (data::FightPropType *)(v3 + 592),
                                                 v163);
                                        *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
                                        if ( !v171.second )
                                        {
                                          *(_DWORD *)(((v3 + 2224) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v3 + 2224) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v3 + 2255) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 2255) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v3 + 2224, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v3 + 2224),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                            "rewriteMonsterExcelConfig",
                                            136);
                                          v173 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                   (common::milog::MiLogStream *const)(v3 + 2224),
                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                          v174 = "duplicate prop_type:";
                                          v175 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                   v173,
                                                   (const char (*)[21])"duplicate prop_type:");
                                          *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 4;
                                          v176 = *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000);
                                          if ( v176 != 0 && v176 <= 3 )
                                          {
                                            LOBYTE(v174) = v176 != 0;
                                            __asan_report_store4(v3 + 608, v174);
                                          }
                                          *(_DWORD *)(v3 + 608) = 56;
                                          v177 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                   v175,
                                                   (const data::FightPropType *)(v3 + 608));
                                          v178 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                   v177,
                                                   (const char (*)[8])" value:");
                                          common::milog::MiLogStream::operator<<<float,(float *)0>(
                                            v178,
                                            &monster_excel_config->ice_sub_hurt);
                                          *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2224));
                                          *(_DWORD *)(((v3 + 2224) >> 3) + 0x7FFF8000) = -117901064;
                                          v2 = -1;
                                          v34 = 0;
                                        }
                                        else
                                        {
                                          p_ice_add_hurt = &monster_excel_config->ice_add_hurt;
                                          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 4;
                                          if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) != 0
                                            && *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) <= 3 )
                                          {
                                            __asan_report_store4(v3 + 624, p_ice_add_hurt);
                                          }
                                          *(_DWORD *)(v3 + 624) = 46;
                                          v180 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                   (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                   (data::FightPropType *)(v3 + 624),
                                                   p_ice_add_hurt,
                                                   (data::FightPropType *)(v3 + 624),
                                                   v172);
                                          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
                                          if ( !v180.second )
                                          {
                                            *(_DWORD *)(((v3 + 2288) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v3 + 2288) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v3 + 2319) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2319) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v3 + 2288, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v3 + 2288),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                              "rewriteMonsterExcelConfig",
                                              137);
                                            v182 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                     (common::milog::MiLogStream *const)(v3 + 2288),
                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                            v183 = "duplicate prop_type:";
                                            v184 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                     v182,
                                                     (const char (*)[21])"duplicate prop_type:");
                                            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 4;
                                            v185 = *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000);
                                            if ( v185 != 0 && v185 <= 3 )
                                            {
                                              LOBYTE(v183) = v185 != 0;
                                              __asan_report_store4(v3 + 640, v183);
                                            }
                                            *(_DWORD *)(v3 + 640) = 46;
                                            v186 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                     v184,
                                                     (const data::FightPropType *)(v3 + 640));
                                            v187 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                     v186,
                                                     (const char (*)[8])" value:");
                                            common::milog::MiLogStream::operator<<<float,(float *)0>(
                                              v187,
                                              &monster_excel_config->ice_add_hurt);
                                            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2288));
                                            *(_DWORD *)(((v3 + 2288) >> 3) + 0x7FFF8000) = -117901064;
                                            v2 = -1;
                                            v34 = 0;
                                          }
                                          else
                                          {
                                            p_rock_sub_hurt = &monster_excel_config->rock_sub_hurt;
                                            *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = 4;
                                            if ( *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) != 0
                                              && *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) <= 3 )
                                            {
                                              __asan_report_store4(v3 + 656, p_rock_sub_hurt);
                                            }
                                            *(_DWORD *)(v3 + 656) = 55;
                                            v189 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                     (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                     (data::FightPropType *)(v3 + 656),
                                                     p_rock_sub_hurt,
                                                     (data::FightPropType *)(v3 + 656),
                                                     v181);
                                            *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = -8;
                                            if ( !v189.second )
                                            {
                                              *(_DWORD *)(((v3 + 2352) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v3 + 2352) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v3 + 2383) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2383) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v3 + 2352, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v3 + 2352),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                "rewriteMonsterExcelConfig",
                                                138);
                                              v191 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                       (common::milog::MiLogStream *const)(v3 + 2352),
                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                              v192 = "duplicate prop_type:";
                                              v193 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                       v191,
                                                       (const char (*)[21])"duplicate prop_type:");
                                              *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 4;
                                              v194 = *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000);
                                              if ( v194 != 0 && v194 <= 3 )
                                              {
                                                LOBYTE(v192) = v194 != 0;
                                                __asan_report_store4(v3 + 672, v192);
                                              }
                                              *(_DWORD *)(v3 + 672) = 55;
                                              v195 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                       v193,
                                                       (const data::FightPropType *)(v3 + 672));
                                              v196 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                       v195,
                                                       (const char (*)[8])" value:");
                                              common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                v196,
                                                &monster_excel_config->rock_sub_hurt);
                                              *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2352));
                                              *(_DWORD *)(((v3 + 2352) >> 3) + 0x7FFF8000) = -117901064;
                                              v2 = -1;
                                              v34 = 0;
                                            }
                                            else
                                            {
                                              p_rock_add_hurt = &monster_excel_config->rock_add_hurt;
                                              *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = 4;
                                              if ( *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) != 0
                                                && *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) <= 3 )
                                              {
                                                __asan_report_store4(v3 + 688, p_rock_add_hurt);
                                              }
                                              *(_DWORD *)(v3 + 688) = 45;
                                              v198 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                       (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                       (data::FightPropType *)(v3 + 688),
                                                       p_rock_add_hurt,
                                                       (data::FightPropType *)(v3 + 688),
                                                       v190);
                                              *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = -8;
                                              if ( !v198.second )
                                              {
                                                *(_DWORD *)(((v3 + 2416) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v3 + 2416) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v3 + 2447) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2447) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v3 + 2416, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v3 + 2416),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                  "rewriteMonsterExcelConfig",
                                                  139);
                                                v200 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                         (common::milog::MiLogStream *const)(v3 + 2416),
                                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                                v201 = "duplicate prop_type:";
                                                v202 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                         v200,
                                                         (const char (*)[21])"duplicate prop_type:");
                                                *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 4;
                                                v203 = *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000);
                                                if ( v203 != 0 && v203 <= 3 )
                                                {
                                                  LOBYTE(v201) = v203 != 0;
                                                  __asan_report_store4(v3 + 704, v201);
                                                }
                                                *(_DWORD *)(v3 + 704) = 45;
                                                v204 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                         v202,
                                                         (const data::FightPropType *)(v3 + 704));
                                                v205 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                         v204,
                                                         (const char (*)[8])" value:");
                                                common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                  v205,
                                                  &monster_excel_config->rock_add_hurt);
                                                *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2416));
                                                *(_DWORD *)(((v3 + 2416) >> 3) + 0x7FFF8000) = -117901064;
                                                v2 = -1;
                                                v34 = 0;
                                              }
                                              else
                                              {
                                                p_element_mastery = &monster_excel_config->element_mastery;
                                                *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = 4;
                                                if ( *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) != 0
                                                  && *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) <= 3 )
                                                {
                                                  __asan_report_store4(v3 + 720, p_element_mastery);
                                                }
                                                *(_DWORD *)(v3 + 720) = 28;
                                                v207 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                         (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                         (data::FightPropType *)(v3 + 720),
                                                         p_element_mastery,
                                                         (data::FightPropType *)(v3 + 720),
                                                         v199);
                                                *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = -8;
                                                if ( !v207.second )
                                                {
                                                  *(_DWORD *)(((v3 + 2480) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v3 + 2480) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v3 + 2511) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 2511) >> 3)
                                                                                              + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v3 + 2480, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v3 + 2480),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                    "rewriteMonsterExcelConfig",
                                                    140);
                                                  v209 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                           (common::milog::MiLogStream *const)(v3 + 2480),
                                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                                  v210 = "duplicate prop_type:";
                                                  v211 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                           v209,
                                                           (const char (*)[21])"duplicate prop_type:");
                                                  *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 4;
                                                  v212 = *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000);
                                                  if ( v212 != 0 && v212 <= 3 )
                                                  {
                                                    LOBYTE(v210) = v212 != 0;
                                                    __asan_report_store4(v3 + 736, v210);
                                                  }
                                                  *(_DWORD *)(v3 + 736) = 28;
                                                  v213 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                           v211,
                                                           (const data::FightPropType *)(v3 + 736));
                                                  v214 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                           v213,
                                                           (const char (*)[8])" value:");
                                                  common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                    v214,
                                                    &monster_excel_config->element_mastery);
                                                  *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2480));
                                                  *(_DWORD *)(((v3 + 2480) >> 3) + 0x7FFF8000) = -117901064;
                                                  v2 = -1;
                                                  v34 = 0;
                                                }
                                                else
                                                {
                                                  p_physical_sub_hurt = &monster_excel_config->physical_sub_hurt;
                                                  *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = 4;
                                                  if ( *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) != 0
                                                    && *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) <= 3 )
                                                  {
                                                    __asan_report_store4(v3 + 752, p_physical_sub_hurt);
                                                  }
                                                  *(_DWORD *)(v3 + 752) = 29;
                                                  v216 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                           (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                           (data::FightPropType *)(v3 + 752),
                                                           p_physical_sub_hurt,
                                                           (data::FightPropType *)(v3 + 752),
                                                           v208);
                                                  *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = -8;
                                                  if ( !v216.second )
                                                  {
                                                    *(_DWORD *)(((v3 + 2544) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v3 + 2544) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v3 + 2575) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2575) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v3 + 2544, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v3 + 2544),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                      "rewriteMonsterExcelConfig",
                                                      141);
                                                    v218 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                             (common::milog::MiLogStream *const)(v3 + 2544),
                                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                                    v219 = "duplicate prop_type:";
                                                    v220 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                             v218,
                                                             (const char (*)[21])"duplicate prop_type:");
                                                    *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 4;
                                                    v221 = *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000);
                                                    if ( v221 != 0 && v221 <= 3 )
                                                    {
                                                      LOBYTE(v219) = v221 != 0;
                                                      __asan_report_store4(v3 + 768, v219);
                                                    }
                                                    *(_DWORD *)(v3 + 768) = 29;
                                                    v222 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                             v220,
                                                             (const data::FightPropType *)(v3 + 768));
                                                    v223 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                             v222,
                                                             (const char (*)[8])" value:");
                                                    common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                      v223,
                                                      &monster_excel_config->physical_sub_hurt);
                                                    *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2544));
                                                    *(_DWORD *)(((v3 + 2544) >> 3) + 0x7FFF8000) = -117901064;
                                                    v2 = -1;
                                                    v34 = 0;
                                                  }
                                                  else
                                                  {
                                                    p_physical_add_hurt = &monster_excel_config->physical_add_hurt;
                                                    *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = 4;
                                                    if ( *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) != 0
                                                      && *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) <= 3 )
                                                    {
                                                      __asan_report_store4(v3 + 784, p_physical_add_hurt);
                                                    }
                                                    *(_DWORD *)(v3 + 784) = 30;
                                                    v225 = std::map<data::FightPropType,float>::emplace<data::FightPropType,float &>(
                                                             (std::map<data::FightPropType,float> *const)(v3 + 2736),
                                                             (data::FightPropType *)(v3 + 784),
                                                             p_physical_add_hurt,
                                                             (data::FightPropType *)(v3 + 784),
                                                             v217);
                                                    *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = -8;
                                                    if ( !v225.second )
                                                    {
                                                      *(_DWORD *)(((v3 + 2608) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v3 + 2608) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v3 + 2639) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2639) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v3 + 2608, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v3 + 2608),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                        "rewriteMonsterExcelConfig",
                                                        142);
                                                      v226 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                               (common::milog::MiLogStream *const)(v3 + 2608),
                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                      v227 = "duplicate prop_type:";
                                                      v228 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                               v226,
                                                               (const char (*)[21])"duplicate prop_type:");
                                                      *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 4;
                                                      v229 = *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000);
                                                      if ( v229 != 0 && v229 <= 3 )
                                                      {
                                                        LOBYTE(v227) = v229 != 0;
                                                        __asan_report_store4(v3 + 800, v227);
                                                      }
                                                      *(_DWORD *)(v3 + 800) = 30;
                                                      v230 = common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
                                                               v228,
                                                               (const data::FightPropType *)(v3 + 800));
                                                      v231 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                                               v230,
                                                               (const char (*)[8])" value:");
                                                      common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                        v231,
                                                        &monster_excel_config->physical_add_hurt);
                                                      *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2608));
                                                      *(_DWORD *)(((v3 + 2608) >> 3) + 0x7FFF8000) = -117901064;
                                                      v2 = -1;
                                                      v34 = 0;
                                                    }
                                                    else
                                                    {
                                                      v232 = std::move<std::map<data::FightPropType,float> &>((std::map<data::FightPropType,float> *)(v3 + 2736));
                                                      v235 = std::unordered_map<unsigned int,std::map<data::FightPropType,float>>::emplace<unsigned int const&,std::map<data::FightPropType,float>>(
                                                               &this->base_level_prop_map_,
                                                               monster_id,
                                                               v232,
                                                               v233,
                                                               v234);
                                                      if ( !v235.second )
                                                      {
                                                        *(_DWORD *)(((v3 + 2672) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v3 + 2672) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v3 + 2703) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2703) >> 3)
                                                                                                + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v3 + 2672, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v3 + 2672),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_manual/MonsterExcelConfig.cpp",
                                                          "rewriteMonsterExcelConfig",
                                                          148);
                                                        v236 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                 (common::milog::MiLogStream *const)(v3 + 2672),
                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                        v237 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                                                 v236,
                                                                 (const char (*)[22])"duplicate monster_id:");
                                                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                          v237,
                                                          monster_id);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2672));
                                                        *(_DWORD *)(((v3 + 2672) >> 3) + 0x7FFF8000) = -117901064;
                                                        v2 = -1;
                                                        v34 = 0;
                                                      }
                                                      else
                                                      {
                                                        v238 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                                                 &this->describe_id_to_monster_id_set_map_,
                                                                 &monster_excel_config->describe_id);
                                                        std::set<unsigned int>::insert(v238, monster_id);
                                                        v34 = 1;
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
        std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v3 + 2736));
        v13 = v34 == 1;
      }
      else
      {
        v13 = 0;
      }
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 944));
    v239 = ((v3 + 944) >> 3) + 2147450880;
    *(_WORD *)v239 = -1800;
    *(_BYTE *)(v239 + 2) = -8;
    v240 = ((v3 + 2736) >> 3) + 2147450880;
    *(_DWORD *)v240 = -117901064;
    *(_WORD *)(v240 + 4) = -1800;
    if ( !v13 )
    {
      v241 = 0;
      goto LABEL_231;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v3 + 816));
  }
  v241 = 1;
LABEL_231:
  if ( v241 == 1 )
    v2 = 0;
  if ( v250 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8158) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 352) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2816LL, v250);
  }
  return v2;
};

// Line 87: range 0000000014727F68-000000001472800B
bool __cdecl MonsterExcelConfigMgr::rewriteMonsterExcelConfig::_lambda_auto_33___auto_34___::operator()_data::MonsterDrop_data::MonsterDrop_(
        const MonsterExcelConfigMgr::rewriteMonsterExcelConfig::<lambda(auto:33&, auto:34&)> *const __closure,
        data::MonsterDrop *left,
        data::MonsterDrop *right)
{
  float hp_percent; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&left->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)left + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&left->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&left->hp_percent);
  }
  hp_percent = left->hp_percent;
  if ( *(_BYTE *)(((unsigned __int64)&right->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->hp_percent);
  }
  return right->hp_percent > hp_percent;
};

// Line 160: range 00000000146072DE-000000001460977F
int32_t __cdecl MonsterExcelConfigMgr::checkMonsterExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *kill_drop_id; // rsi
  const std::set<unsigned int> *p_equip_drop_set; // rdx
  const std::set<unsigned int> *v9; // rdx
  const std::set<unsigned int>::key_type *p_drop_id; // rcx
  __int64 v11; // rsi
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  _BOOL4 v23; // edx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const char *v30; // rsi
  unsigned int *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // edx
  unsigned __int64 v42; // rax
  char *v43; // rsi
  unsigned int *v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  int v48; // eax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // edx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  int v60; // r15d
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  std::pair<std::__detail::_Node_iterator<std::string,true,true>,bool> v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  int v72; // edx
  int v73; // r15d
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  const MonsterExcelConfigMgr *v80; // rdx
  char v81; // al
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rdx
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  __int64 v87; // rsi
  uint32_t MonsterTypeId; // edx
  char v89; // al
  __int64 v90; // rsi
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rdx
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  const data::FightPropGrowConfig *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r15
  __int64 v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  unsigned __int64 v104; // rax
  int v105; // eax
  int32_t ret; // [rsp+2Ch] [rbp-644h]
  JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-638h]
  MaterialExcelConfigMgr *material_config_mgr; // [rsp+40h] [rbp-630h]
  data::MonsterExcelConfigMap *__for_range; // [rsp+48h] [rbp-628h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::reference v112; // [rsp+50h] [rbp-620h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterExcelConfig> >::type *monster_id; // [rsp+58h] [rbp-618h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterExcelConfig> >::type *monster_excel_config; // [rsp+60h] [rbp-610h]
  const std::vector<data::MonsterDrop> *__for_range_0; // [rsp+68h] [rbp-608h]
  const data::MonsterDrop *monster_drop; // [rsp+70h] [rbp-600h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-5F8h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+80h] [rbp-5F0h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+88h] [rbp-5E8h]
  data::ConfigEquipment *attach_to; // [rsp+90h] [rbp-5E0h]
  const std::vector<data::FightPropGrowConfig> *__for_range_3; // [rsp+98h] [rbp-5D8h]
  char v122[1488]; // [rsp+A0h] [rbp-5D0h] BYREF

  v3 = (unsigned __int64)v122;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1440LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "31 48 4 12 affix_id:185 64 4 12 equip_id:194 80 4 24 monster_main_type_id:240 96 8 15 __for_begi"
                        "n:165 128 8 13 __for_end:165 160 8 15 __for_begin:167 192 8 13 __for_end:167 224 8 9 <unknown> 2"
                        "56 8 9 <unknown> 288 8 15 __for_begin:185 320 8 13 __for_end:185 352 8 15 __for_begin:194 384 8 "
                        "13 __for_end:194 416 8 15 __for_begin:247 448 8 13 __for_end:247 480 8 9 <unknown> 512 16 21 con"
                        "fig_gadget_ptr:206 544 16 15 grow_config:247 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unk"
                        "nown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unk"
                        "nown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 56 17"
                        " attach_to_set:193";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::checkMonsterExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
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
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -219021312;
  v5[536862737] = -219021312;
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
  v5[536862763] = -218103808;
  v5[536862764] = -202116109;
  ret = 0;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  material_config_mgr = &txt_config_mgr->material_config_mgr;
  __for_range = &this->monster_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MonsterExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MonsterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterExcelConfig>,false> *)(v3 + 128)) )
      break;
    v112 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v3 + 96));
    monster_id = std::get<0ul,unsigned int const,data::MonsterExcelConfig>(v112);
    monster_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterExcelConfig>(v112);
    __for_range_0 = &monster_excel_config->hp_drops;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::MonsterDrop>::const_iterator *)(v3 + 160) = std::vector<data::MonsterDrop>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<data::MonsterDrop>::const_iterator *)(v3 + 192) = std::vector<data::MonsterDrop>::end(__for_range_0);
    while ( 1 )
    {
      kill_drop_id = (const char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<data::MonsterDrop const*,std::vector<data::MonsterDrop>>(
              (const __gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > *)(v3 + 192)) )
      {
        v17 = 1;
        goto LABEL_32;
      }
      monster_drop = __gnu_cxx::__normal_iterator<data::MonsterDrop const*,std::vector<data::MonsterDrop>>::operator*((const __gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > *const)(v3 + 160));
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      p_equip_drop_set = &material_config_mgr->equip_drop_set;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, kill_drop_id);
      *(std::set<unsigned int>::iterator *)(v3 + 256) = std::set<unsigned int>::end(p_equip_drop_set);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v9 = &material_config_mgr->equip_drop_set;
      p_drop_id = &monster_drop->drop_id;
      v11 = *(unsigned __int8 *)(((v3 + 224) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 )
        __asan_report_store8(v3 + 224, v11);
      *(std::set<unsigned int>::const_iterator *)(v3 + 224) = std::set<unsigned int>::find(v9, p_drop_id);
      v12 = std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 224),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 256));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
      {
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkMonsterExcelConfig",
          171);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v13, (const char (*)[56])byte_1ADC0860);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &monster_drop->drop_id);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", monster_id:");
        kill_drop_id = (const char *)monster_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, monster_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
        goto LABEL_32;
      }
      if ( *(_BYTE *)(((unsigned __int64)&monster_drop->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_drop->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_drop->drop_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgr,
                              monster_drop->drop_id,
                              ITEM_LIMIT_MONSTER_EXCEL_DROP) != 1 )
        break;
      __gnu_cxx::__normal_iterator<data::MonsterDrop const*,std::vector<data::MonsterDrop>>::operator++((__gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "checkMonsterExcelConfig",
      176);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 640),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])"mosnter_id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, monster_id);
    v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v20, (const char (*)[20])byte_1ADC0940);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &monster_drop->drop_id);
    kill_drop_id = byte_1AD7AF20;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AD7AF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
    *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config->kill_drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_excel_config->kill_drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_excel_config->kill_drop_id);
      }
      if ( monster_excel_config->kill_drop_id
        && (kill_drop_id = (const char *)monster_excel_config->kill_drop_id,
            (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                               txt_config_mgr,
                               (uint32_t)kill_drop_id,
                               ITEM_LIMIT_MONSTER_EXCEL_DROP) ^ 1) )
      {
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkMonsterExcelConfig",
          182);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])"mosnter_id: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, monster_id);
        v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_1ADC0980);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &monster_excel_config->kill_drop_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
        *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v23 = 0;
      }
      else
      {
        __for_range_1 = &monster_excel_config->affix;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, kill_drop_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, kill_drop_id);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v30 = (const char *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
          {
            v41 = 1;
            goto LABEL_64;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
          v32 = (int *)v31;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          v33 = *v32;
          v34 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v34 != 0 && v34 <= 3 )
          {
            LOBYTE(v30) = v34 != 0;
            __asan_report_store4(v3 + 48, v30);
          }
          *(_DWORD *)(v3 + 48) = v33;
          if ( *(_DWORD *)(v3 + 48)
            && !data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(this, *(unsigned int *)(v3 + 48)) )
          {
            break;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
        }
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkMonsterExcelConfig",
          189);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v36, (const char (*)[13])"mosnter_id: ");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, monster_id);
        v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v38, (const char (*)[19])byte_1ADC09C0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 48));
        v30 = byte_1AD7AF20;
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v40, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
LABEL_64:
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v41 == 1 )
        {
          v42 = ((v3 + 1344) >> 3) + 2147450880;
          *(_DWORD *)v42 = 0;
          *(_WORD *)(v42 + 4) = 0;
          *(_BYTE *)(v42 + 6) = 0;
          std::unordered_set<std::string>::unordered_set((std::unordered_set<std::string> *const)(v3 + 1344));
          __for_range_2 = &monster_excel_config->equips;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 352, v30);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 384, v30);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            v43 = (char *)(v3 + 384);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
              break;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v44 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
            v45 = (int *)v44;
            if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v44);
            }
            v46 = *v45;
            v47 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v47 != 0 && v47 <= 3 )
            {
              LOBYTE(v43) = v47 != 0;
              __asan_report_store4(v3 + 64, v43);
            }
            *(_DWORD *)(v3 + 64) = v46;
            if ( *(_DWORD *)(v3 + 64) )
            {
              p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 64);
              gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                    p_gadget_config_mgr,
                                    *(unsigned int *)(v3 + 64));
              if ( !gadget_config_ptr )
                goto LABEL_84;
              if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&gadget_config_ptr->type);
              }
              if ( gadget_config_ptr->type == MonsterEquip )
              {
                *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 64);
                v55 = *(_DWORD *)(v3 + 64);
                if ( *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) )
                  __asan_report_store16();
                JsonConfigMgr::findGadgetConfig(
                  (const JsonConfigMgr *const)(v3 + 512),
                  (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigGadget>> *)json_config_mgr,
                  v55);
                if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v3 + 512), 0LL) )
                {
                  *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
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
                    "./src/txt_data_manual/MonsterExcelConfig.cpp",
                    "checkMonsterExcelConfig",
                    209);
                  v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 896),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v57 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          v56,
                          (const char (*)[37])byte_1ADC0A40);
                  v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v57,
                          (const unsigned int *)(v3 + 64));
                  v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v58,
                          (const char (*)[14])", monster_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, monster_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
                  *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v60 = 0;
                }
                else
                {
                  attach_to = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 512))->equipment;
                  if ( (unsigned __int8)std::string::empty() )
                  {
                    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 960, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 960),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/MonsterExcelConfig.cpp",
                      "checkMonsterExcelConfig",
                      215);
                    v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 960),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v62 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            v61,
                            (const char (*)[34])byte_1ADC0AA0);
                    v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v62,
                            (const unsigned int *)(v3 + 64));
                    v64 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v63,
                            (const char (*)[14])", monster_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, monster_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
                    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v60 = 0;
                  }
                  else
                  {
                    v65 = std::unordered_set<std::string>::insert(
                            (std::unordered_set<std::string> *const)(v3 + 1344),
                            &attach_to->attach_to);
                    if ( !v65.second )
                    {
                      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1024, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1024),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/MonsterExcelConfig.cpp",
                        "checkMonsterExcelConfig",
                        220);
                      v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1024),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v67 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              v66,
                              (const char (*)[29])byte_1ADC0B00);
                      v68 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                              v67,
                              &attach_to->attach_to);
                      v69 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v68,
                              (const char (*)[13])", gadget_id:");
                      v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v69,
                              (const unsigned int *)(v3 + 64));
                      v71 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v70,
                              (const char (*)[14])", monster_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, monster_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
                      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v60 = 0;
                    }
                    else
                    {
                      v60 = 1;
                    }
                  }
                }
                std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 512));
                if ( v60 == 1 )
                  v48 = 2;
                else
                  v48 = 1;
              }
              else
              {
LABEL_84:
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
                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                  "checkMonsterExcelConfig",
                  203);
                v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 832),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v50,
                        (const char (*)[13])"mosnter_id: ");
                v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, monster_id);
                v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v52,
                        (const char (*)[16])byte_1ADC0A00);
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v53,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v54, (const char (*)[7])byte_1AD7AF20);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
                *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v48 = 1;
              }
            }
            else
            {
              v48 = 0;
            }
            *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -1800;
            if ( v48 && v48 != 2 )
            {
              v72 = 0;
              goto LABEL_112;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
          }
          v72 = 1;
LABEL_112:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
          if ( v72 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config->mp_prop_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_excel_config - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_excel_config->mp_prop_id >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&monster_excel_config->mp_prop_id);
            }
            if ( monster_excel_config->mp_prop_id
              && !data::CombatTemplateExcelConfigMgrBase::findEntityMultiPlayerExcelConfig(
                    &txt_config_mgr->combat_template_config_mgr,
                    monster_excel_config->mp_prop_id) )
            {
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
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
                "./src/txt_data_manual/MonsterExcelConfig.cpp",
                "checkMonsterExcelConfig",
                226);
              v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v76 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v75,
                      (const char (*)[10])byte_1ADC0B80);
              v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, monster_id);
              v78 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v77,
                      (const char (*)[31])byte_1ADC0BC0);
              v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v78,
                      &monster_excel_config->mp_prop_id);
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v79, (const char (*)[10])byte_1AD76A80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v73 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config->describe_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&monster_excel_config->describe_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&monster_excel_config->describe_id);
              }
              if ( !monster_excel_config->describe_id
                || data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(
                     this,
                     monster_excel_config->describe_id) )
              {
                goto LABEL_132;
              }
              v80 = this;
              if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config->describe_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&monster_excel_config->describe_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&monster_excel_config->describe_id);
              }
              if ( data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(
                     v80,
                     monster_excel_config->describe_id) )
              {
LABEL_132:
                v81 = 0;
              }
              else
              {
                v81 = 1;
              }
              if ( v81 )
              {
                *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
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
                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                  "checkMonsterExcelConfig",
                  235);
                v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1152),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v82,
                        (const char (*)[10])byte_1ADC0B80);
                v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, monster_id);
                v85 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v84,
                        (const char (*)[19])byte_1ADC0C00);
                v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v85,
                        &monster_excel_config->describe_id);
                common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v86, (const char (*)[10])byte_1AD76A80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
                *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((unsigned __int64)monster_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)monster_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_id >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(monster_id);
              }
              v87 = *monster_id;
              MonsterTypeId = MonsterExcelConfigMgr::getMonsterTypeId(this, v87);
              v89 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
              if ( v89 != 0 && v89 <= 3 )
              {
                LOBYTE(v87) = v89 != 0;
                __asan_report_store4(v3 + 80, v87);
              }
              *(_DWORD *)(v3 + 80) = MonsterTypeId;
              v90 = *(unsigned int *)(v3 + 80);
              if ( !data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(this, v90) )
              {
                *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1216, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1216),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/MonsterExcelConfig.cpp",
                  "checkMonsterExcelConfig",
                  243);
                v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1216),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v92 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v91,
                        (const char (*)[10])byte_1ADC0B80);
                v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, monster_id);
                v94 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v93,
                        (const char (*)[21])byte_1ADC0C40);
                v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v94,
                        (const unsigned int *)(v3 + 80));
                v90 = (__int64)byte_1ADC0C80;
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v95, (const char (*)[33])byte_1ADC0C80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
                *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              __for_range_3 = &monster_excel_config->prop_grow_curves;
              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 416, v90);
              *(std::vector<data::FightPropGrowConfig>::const_iterator *)(v3 + 416) = std::vector<data::FightPropGrowConfig>::begin(__for_range_3);
              *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 448, v90);
              *(std::vector<data::FightPropGrowConfig>::const_iterator *)(v3 + 448) = std::vector<data::FightPropGrowConfig>::end(__for_range_3);
              while ( __gnu_cxx::operator!=<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>(
                        (const __gnu_cxx::__normal_iterator<const data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v3 + 416),
                        (const __gnu_cxx::__normal_iterator<const data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *)(v3 + 448)) )
              {
                *(_WORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
                v96 = __gnu_cxx::__normal_iterator<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v3 + 416));
                data::FightPropGrowConfig::FightPropGrowConfig((data::FightPropGrowConfig *const)(v3 + 544), v96);
                if ( !common::tools::MiscUtils::isContains<data::FightPropType>(
                        &MonsterExcelConfigMgr::curve_config_fight_prop_vec,
                        (const data::FightPropType *)(v3 + 552)) )
                {
                  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1280, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1280),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/MonsterExcelConfig.cpp",
                    "checkMonsterExcelConfig",
                    251);
                  v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1280),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v98 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v97,
                          (const char (*)[10])byte_1ADC0B80);
                  v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, monster_id);
                  v100 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                           v99,
                           (const char (*)[22])byte_1ADC0CE0);
                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v3 + 552);
                  }
                  v101 = (__int64)data::enumValToStr((data::FightPropType)*(_DWORD *)(v3 + 552), (__int64)byte_1ADC0CE0);
                  if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
                    v101 = __asan_report_store8(v3 + 480, byte_1ADC0CE0);
                  *(_QWORD *)(v3 + 480) = v101;
                  v102 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                           v100,
                           (const char *const *)(v3 + 480));
                  v103 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                           v102,
                           (const char (*)[27])byte_1ADC0D20);
                  common::milog::MiLogStream::operator<<<data::FightPropType>(
                    v103,
                    &MonsterExcelConfigMgr::curve_config_fight_prop_vec);
                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
                  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                data::FightPropGrowConfig::~FightPropGrowConfig((data::FightPropGrowConfig *const)(v3 + 544));
                __gnu_cxx::__normal_iterator<data::FightPropGrowConfig const*,std::vector<data::FightPropGrowConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::FightPropGrowConfig*,std::vector<data::FightPropGrowConfig> > *const)(v3 + 416));
              }
              *(_WORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -1800;
              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
              v73 = 1;
            }
          }
          else
          {
            v73 = 0;
          }
          std::unordered_set<std::string>::~unordered_set((std::unordered_set<std::string> *const)(v3 + 1344));
          v23 = v73 == 1;
        }
        else
        {
          v23 = 0;
        }
      }
    }
    else
    {
      v23 = 0;
    }
    v104 = ((v3 + 1344) >> 3) + 2147450880;
    *(_DWORD *)v104 = -117901064;
    *(_WORD *)(v104 + 4) = -1800;
    *(_BYTE *)(v104 + 6) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( !v23 )
    {
      v105 = 0;
      goto LABEL_166;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterExcelConfig>,false,false> *const)(v3 + 96));
  }
  v105 = 1;
LABEL_166:
  if ( v105 == 1 )
    v2 = ret;
  if ( v122 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1440LL, v122);
  }
  return v2;
};

// Line 260: range 00000000146097E0-000000001460A6C2
int32_t __cdecl MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig(
        MonsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 StringHash; // rsi
  std::string *v7; // r8
  std::unordered_map<unsigned int,std::string> *p_monster_tag_hash_map; // rcx
  std::string *p_tag_str; // rdx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *v10; // rax
  unsigned int *v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  std::unordered_map<unsigned int,std::string> *v14; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v15; // rax
  char v16; // dl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v23; // rax
  _BOOL4 v24; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  __int64 v29; // rsi
  std::string *v30; // r8
  unsigned int *v31; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  __int64 monster_rarity; // rsi
  data::ItemLimitType v37; // ecx
  data::ItemLimitType *v38; // r8
  char v39; // dl
  std::unordered_map<std::string,data::ItemLimitType> *p_drop_tag_item_limit_type_map; // rcx
  data::ItemLimitType *p_item_limit_type; // rdx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *v42; // rax
  char v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdx
  std::unordered_map<std::string,data::ItemLimitType> *v46; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>::pointer v47; // rax
  data::ItemLimitType second; // ecx
  char v49; // dl
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // edx
  int v56; // eax
  int32_t result; // eax
  char v58; // [rsp+Fh] [rbp-2A1h]
  data::MonsterRelationshipExcelConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-288h]
  const unsigned int *monster_id; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,std::pair<unsigned int const,data::MonsterRelationshipExcelConfig> >::type *excel_config; // [rsp+38h] [rbp-278h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *iter; // [rsp+40h] [rbp-270h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> >::type *succ; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *iter_0; // [rsp+50h] [rbp-260h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *inserted; // [rsp+58h] [rbp-258h]
  char v67[592]; // [rsp+60h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 41 get_item_limit_type_by_monster_rarity:261 64 4 20 monster_tag_hash:284 80 4 24 monste"
                        "r_sub_tag_hash:296 96 8 15 __for_begin:282 128 8 13 __for_end:282 160 8 9 <unknown> 192 8 9 <unk"
                        "nown> 224 16 9 <unknown> 256 16 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unkn"
                        "own> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v3 + 96));
    monster_id = std::get<0ul,unsigned int const,data::MonsterRelationshipExcelConfig>(__in);
    excel_config = std::get<1ul,unsigned int const,data::MonsterRelationshipExcelConfig>(__in);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    StringHash = (unsigned int)getStringHash(&excel_config->tag_str);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64, StringHash);
    *(_DWORD *)(v3 + 64) = StringHash;
    *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    p_monster_tag_hash_map = &this->monster_tag_hash_map;
    p_tag_str = &excel_config->tag_str;
    if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v3 + 224) = std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string&>(p_monster_tag_hash_map, (unsigned int *)(v3 + 64), p_tag_str, (unsigned int *)p_monster_tag_hash_map, v7);
    iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v3 + 224));
    v10 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> *)(v3 + 224));
    succ = v10;
    v58 = 0;
    v12 = (unsigned __int8)v10 & 7;
    v13 = (*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000));
    if ( (_BYTE)v13 )
      __asan_report_load1(v10, v12, v13);
    if ( *succ )
      goto LABEL_22;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v14 = &this->monster_tag_hash_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v12);
    *(std::unordered_map<unsigned int,std::string>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::string>::end(v14);
    v58 = 1;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
           iter,
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v3 + 160))
      && (v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->(iter),
          std::operator!=<char>(&v15->second, &excel_config->tag_str)) )
    {
      v16 = 1;
    }
    else
    {
LABEL_22:
      v16 = 0;
    }
    if ( v58 )
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "rewriteMonsterRelationshpExcelConfig",
        288);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])byte_1ADC0B80);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, monster_id);
      v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])byte_1ADC0F20);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &excel_config->tag_str);
      v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])" ");
      v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->(iter);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &v23->second);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v24 = 0;
    }
    else
    {
      v25 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
              &this->monster_tag_map,
              monster_id,
              (unsigned int *)(v3 + 64),
              (const unsigned int *)&this->monster_tag_map,
              v11);
      if ( !v25.second )
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "rewriteMonsterRelationshpExcelConfig",
          293);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])byte_1ADC0B80);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, monster_id);
        common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v28, (const char (*)[52])byte_1ADC0F60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v29 = (unsigned int)getStringHash(&excel_config->monster_tag_str);
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80, v29);
        *(_DWORD *)(v3 + 80) = v29;
        std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string&>(
          &this->monster_sub_tag_hash_map,
          (unsigned int *)(v3 + 80),
          &excel_config->monster_tag_str,
          (unsigned int *)&this->monster_sub_tag_hash_map,
          v30);
        v32 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                &this->monster_sub_tag_map,
                monster_id,
                (unsigned int *)(v3 + 80),
                (const unsigned int *)&this->monster_sub_tag_map,
                v31);
        if ( !v32.second )
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/MonsterExcelConfig.cpp",
            "rewriteMonsterRelationshpExcelConfig",
            301);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v33, (const char (*)[18])byte_1ADC0FC0);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, monster_id);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v35, (const char (*)[45])byte_1ADC1000);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v24 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->monster_rarity >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config->monster_rarity);
          }
          monster_rarity = (unsigned int)excel_config->monster_rarity;
          v37 = MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig(TxtConfigMgr &)::{lambda(data::MonsterRarityType)#1}::operator()(
                  (const MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig::<lambda(data::MonsterRarityType)> *const)(v3 + 48),
                  (data::MonsterRarityType)monster_rarity);
          v39 = *(_BYTE *)(((unsigned __int64)&excel_config->item_limit_type >> 3) + 0x7FFF8000);
          if ( v39 != 0 && (char)((((_BYTE)excel_config + 52) & 7) + 3) >= v39 )
          {
            LOBYTE(monster_rarity) = v39 != 0;
            __asan_report_store4(&excel_config->item_limit_type, monster_rarity);
          }
          excel_config->item_limit_type = v37;
          *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          p_drop_tag_item_limit_type_map = &this->drop_tag_item_limit_type_map_;
          p_item_limit_type = &excel_config->item_limit_type;
          if ( *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *(std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 256) = std::unordered_map<std::string,data::ItemLimitType>::emplace<std::string&,data::ItemLimitType&>(p_drop_tag_item_limit_type_map, &excel_config->tag_str, p_item_limit_type, (std::string *)p_drop_tag_item_limit_type_map, v38);
          iter_0 = std::get<0ul,std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 256));
          v42 = std::get<1ul,std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 256));
          inserted = v42;
          v43 = 0;
          v44 = (unsigned __int8)v42 & 7;
          v45 = (*(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000));
          if ( (_BYTE)v45 )
            __asan_report_load1(v42, v44, v45);
          if ( *inserted )
            goto LABEL_57;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          v46 = &this->drop_tag_item_limit_type_map_;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v44);
          *(std::unordered_map<std::string,data::ItemLimitType>::iterator *)(v3 + 192) = std::unordered_map<std::string,data::ItemLimitType>::end(v46);
          v43 = 1;
          if ( !std::__detail::operator!=<std::pair<std::string const,data::ItemLimitType>,true>(
                  iter_0,
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true> *)(v3 + 192)) )
            goto LABEL_57;
          v47 = std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>::operator->(iter_0);
          if ( *(_BYTE *)(((unsigned __int64)&v47->second >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v47->second >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v47->second);
          }
          second = v47->second;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->item_limit_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)excel_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->item_limit_type >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&excel_config->item_limit_type);
          }
          if ( second != excel_config->item_limit_type )
            v49 = 1;
          else
LABEL_57:
            v49 = 0;
          if ( v43 )
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( v49 )
          {
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
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
              "./src/txt_data_manual/MonsterExcelConfig.cpp",
              "rewriteMonsterRelationshpExcelConfig",
              309);
            v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v51 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    v50,
                    (const char (*)[10])byte_1ADC0B80);
            v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, monster_id);
            v53 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v52, (const char (*)[9])" tagStr:");
            v54 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, &excel_config->tag_str);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v54, (const char (*)[20])byte_1ADC10A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v55 = 0;
          }
          else
          {
            v55 = 1;
          }
          *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -1800;
          v24 = v55 == 1;
        }
      }
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( !v24 )
    {
      v56 = 0;
      goto LABEL_70;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v3 + 96));
  }
  v56 = 1;
LABEL_70:
  if ( v56 == 1 )
    v2 = 0;
  result = v2;
  if ( v67 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 261: range 0000000014609780-00000000146097DF
data::ItemLimitType __cdecl MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig(TxtConfigMgr &)::{lambda(data::MonsterRarityType)#1}::operator()(
        const MonsterExcelConfigMgr::rewriteMonsterRelationshpExcelConfig::<lambda(data::MonsterRarityType)> *const __closure,
        data::MonsterRarityType rarity_type)
{
  data::ItemLimitType result; // eax

  switch ( rarity_type )
  {
    case MONSTER_RARITY_SMALL_MONSTER:
      result = ITEM_LIMIT_SMALL_MONSTER_DIE;
      break;
    case MONSTER_RARITY_ELITE_MONSTER:
      result = ITEM_LIMIT_ELITE_MONSTER_DIE;
      break;
    case MONSTER_RARITY_BOSS_MONSTER:
      result = ITEM_LIMIT_BOSS_MONSTER_DIE;
      break;
    case MONSTER_RARITY_BIG_BOSS_MONSTER:
      result = ITEM_LIMIT_BIG_BOSS_MONSTER_DIE;
      break;
    case MONSTER_RARITY_SMALL_ENV_ANIMAL:
      result = ITEM_LIMIT_SMALL_ENV_ANIMAL_DIE;
      break;
    default:
      result = ITEM_LIMIT_NONE;
      break;
  }
  return result;
};

// Line 318: range 000000001460A6C4-000000001460AA95
int32_t __cdecl MonsterExcelConfigMgr::checkMonsterRelationshipExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const MonsterExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::MonsterRelationshipExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterRelationshipExcelConfig> >::type *monster_main_type_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterRelationshipExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:320 64 8 13 __for_end:320 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::checkMonsterRelationshipExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->monster_relationship_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MonsterRelationshipExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_21;
    }
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v3 + 32));
    monster_main_type_id = std::get<0ul,unsigned int const,data::MonsterRelationshipExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterRelationshipExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterRelationshipExcelConfig>(v13);
    if ( *(char *)(((unsigned __int64)&excel_config->is_poly_drop >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&excel_config->is_poly_drop, v3 + 64, &excel_config->is_poly_drop);
    if ( excel_config->is_poly_drop )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)monster_main_type_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)monster_main_type_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_main_type_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(monster_main_type_id);
      }
      if ( !data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig(v6, *monster_main_type_id) )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelationshipExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/MonsterExcelConfig.cpp",
    "checkMonsterRelationshipExcelConfig",
    326);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])byte_1ADC11A0);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, monster_main_type_id);
  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v9, (const char (*)[51])byte_1ADC11E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_21:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 335: range 000000001460AA96-000000001460ACC5
int32_t __cdecl MonsterExcelConfigMgr::rewriteMonsterSpecialNameExcelConfig(
        MonsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::MonsterSpecialNameExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:336 64 8 13 __for_end:336";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>::__node_type *)MonsterExcelConfigMgr::rewriteMonsterSpecialNameExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->monster_special_name_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::MonsterSpecialNameExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::MonsterSpecialNameExcelConfig>(v8);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterSpecialNameExcelConfig>(v8);
    std::set<unsigned int>::insert(&this->special_name_lab_id_set_, &excel_config->special_name_lab_id);
    v5 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->special_name_map_,
           &excel_config->special_name_lab_id);
    std::vector<unsigned int>::push_back(v5, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterSpecialNameExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 345: range 000000001460ACC6-000000001460B313
int32_t __cdecl MonsterExcelConfigMgr::checkMonsterDescribeExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MonsterTitleExcelConfigMap *p_monster_title_excel_config_map; // rdx
  data::MonsterTitleExcelConfigMap *v7; // rdx
  const std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::key_type *p_title_id; // rcx
  __int64 v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  data::MonsterDescribeExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>::reference v24; // [rsp+18h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterDescribeExcelConfig> >::type *id; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDescribeExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-158h]
  char v27[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:346 64 8 13 __for_end:346 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::checkMonsterDescribeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->monster_describe_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MonsterDescribeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false> *)(v3 + 64)) )
    {
      v16 = 1;
      goto LABEL_24;
    }
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::MonsterDescribeExcelConfig>(v24);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterDescribeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterDescribeExcelConfig>(v24);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_monster_title_excel_config_map = &this->monster_title_excel_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 64);
    *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::end(p_monster_title_excel_config_map);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->monster_title_excel_config_map;
    p_title_id = &excel_config->title_id;
    v9 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 )
      __asan_report_store8(v3 + 96, v9);
    *(std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MonsterTitleExcelConfig>::find(
                                                                                                     v7,
                                                                                                     p_title_id);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterTitleExcelConfig>,false> *)(v3 + 128));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkMonsterDescribeExcelConfig",
        350);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])byte_1ADC1340);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1ADC1380);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &excel_config->title_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])byte_1ADC13C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v16 = 0;
      goto LABEL_24;
    }
    if ( !std::set<unsigned int>::count(&this->special_name_lab_id_set_, &excel_config->special_name_lab_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterDescribeExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/MonsterExcelConfig.cpp",
    "checkMonsterDescribeExcelConfig",
    356);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v17, (const char (*)[21])byte_1ADC1340);
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
  v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])byte_1ADC1400);
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &excel_config->special_name_lab_id);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])byte_1ADC13C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v16 = 0;
LABEL_24:
  if ( v16 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 365: range 000000001460B314-000000001460B6B5
int32_t __cdecl MonsterExcelConfigMgr::checkAnimalDescribeExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const MonsterExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::AnimalDescribeExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::AnimalDescribeExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:367 64 8 13 __for_end:367 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::checkAnimalDescribeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->animal_describe_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AnimalDescribeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::AnimalDescribeExcelConfig>(v12);
    std::get<1ul,unsigned int const,data::AnimalDescribeExcelConfig>(v12);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(v5, *id) )
    {
      ret = -1;
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkAnimalDescribeExcelConfig",
        372);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])byte_1ADC14E0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])byte_1ADC13C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalDescribeExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 380: range 000000001460B716-000000001460BF1B
int32_t __cdecl MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig(
        MonsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __int64 monster_rarity; // rsi
  data::ItemLimitType v8; // ecx
  data::ItemLimitType *v9; // r8
  char v10; // dl
  std::unordered_map<std::string,data::ItemLimitType> *p_drop_tag_item_limit_type_map; // rcx
  data::ItemLimitType *p_item_limit_type; // rdx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *v13; // rax
  char v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  std::unordered_map<std::string,data::ItemLimitType> *v17; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>::pointer v18; // rax
  data::ItemLimitType second; // ecx
  char v20; // dl
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // edx
  int v27; // edx
  int v28; // eax
  int32_t result; // eax
  data::MonsterRelOverloadExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-1A8h]
  const unsigned int *monster_main_type_id; // [rsp+30h] [rbp-1A0h]
  std::vector<data::PolyMonsterDropConfig> *__for_range_0; // [rsp+40h] [rbp-190h]
  data::PolyMonsterDropConfig *poly_drop_config; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *iter; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> >::type *inserted; // [rsp+58h] [rbp-178h]
  char v37[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 41 get_item_limit_type_by_monster_rarity:381 64 8 15 __for_begin:402 96 8 13 __for_end:40"
                        "2 128 8 15 __for_begin:404 160 8 13 __for_end:404 192 8 9 <unknown> 224 16 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219021312;
  v5[536862729] = -202116109;
  __for_range = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v3 + 64));
    monster_main_type_id = std::get<0ul,unsigned int const,data::MonsterRelOverloadExcelConfig>(__in);
    __for_range_0 = &std::get<1ul,unsigned int const,data::MonsterRelOverloadExcelConfig>(__in)->poly_monster_drop_config_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::PolyMonsterDropConfig>::iterator *)(v3 + 128) = std::vector<data::PolyMonsterDropConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::PolyMonsterDropConfig>::iterator *)(v3 + 160) = std::vector<data::PolyMonsterDropConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::PolyMonsterDropConfig *,std::vector<data::PolyMonsterDropConfig>>(
              (const __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *)(v3 + 160)) )
    {
      poly_drop_config = __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig *,std::vector<data::PolyMonsterDropConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&poly_drop_config->monster_rarity >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&poly_drop_config->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&poly_drop_config->monster_rarity);
      }
      monster_rarity = (unsigned int)poly_drop_config->monster_rarity;
      v8 = MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig(TxtConfigMgr &)::{lambda(data::MonsterRarityType)#1}::operator()(
             (const MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig::<lambda(data::MonsterRarityType)> *const)(v3 + 48),
             (data::MonsterRarityType)monster_rarity);
      v10 = *(_BYTE *)(((unsigned __int64)&poly_drop_config->item_limit_type >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((((_BYTE)poly_drop_config + 68) & 7) + 3) >= v10 )
      {
        LOBYTE(monster_rarity) = v10 != 0;
        __asan_report_store4(&poly_drop_config->item_limit_type, monster_rarity);
      }
      poly_drop_config->item_limit_type = v8;
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      p_drop_tag_item_limit_type_map = &this->drop_tag_item_limit_type_map_;
      p_item_limit_type = &poly_drop_config->item_limit_type;
      if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      *(std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 224) = std::unordered_map<std::string,data::ItemLimitType>::emplace<std::string&,data::ItemLimitType&>(p_drop_tag_item_limit_type_map, &poly_drop_config->drop_tag_str, p_item_limit_type, (std::string *)p_drop_tag_item_limit_type_map, v9);
      iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 224));
      v13 = std::get<1ul,std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>,bool> *)(v3 + 224));
      inserted = v13;
      v14 = 0;
      v15 = (unsigned __int8)v13 & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_load1(v13, v15, v16);
      if ( *inserted )
        goto LABEL_34;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      v17 = &this->drop_tag_item_limit_type_map_;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v15);
      *(std::unordered_map<std::string,data::ItemLimitType>::iterator *)(v3 + 192) = std::unordered_map<std::string,data::ItemLimitType>::end(v17);
      v14 = 1;
      if ( !std::__detail::operator!=<std::pair<std::string const,data::ItemLimitType>,true>(
              iter,
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true> *)(v3 + 192)) )
        goto LABEL_34;
      v18 = std::__detail::_Node_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>::operator->(iter);
      if ( *(_BYTE *)(((unsigned __int64)&v18->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v18->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v18->second);
      }
      second = v18->second;
      if ( *(_BYTE *)(((unsigned __int64)&poly_drop_config->item_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)poly_drop_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&poly_drop_config->item_limit_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&poly_drop_config->item_limit_type);
      }
      if ( second != poly_drop_config->item_limit_type )
        v20 = 1;
      else
LABEL_34:
        v20 = 0;
      if ( v14 )
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "rewriteMonsterRelOverloadExcelConfig",
          411);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])byte_1ADC11A0);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, monster_main_type_id);
        v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])byte_1ADC1680);
        v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &poly_drop_config->drop_tag_str);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v25, (const char (*)[20])byte_1ADC10A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
      }
      else
      {
        v26 = 1;
      }
      *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
      if ( v26 != 1 )
      {
        v27 = 0;
        goto LABEL_46;
      }
      __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig *,std::vector<data::PolyMonsterDropConfig>>::operator++((__gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *const)(v3 + 128));
    }
    v27 = 1;
LABEL_46:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v27 != 1 )
    {
      v28 = 0;
      goto LABEL_50;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v3 + 64));
  }
  v28 = 1;
LABEL_50:
  if ( v28 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 381: range 000000001460B6B6-000000001460B715
data::ItemLimitType __cdecl MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig(TxtConfigMgr &)::{lambda(data::MonsterRarityType)#1}::operator()(
        const MonsterExcelConfigMgr::rewriteMonsterRelOverloadExcelConfig::<lambda(data::MonsterRarityType)> *const __closure,
        data::MonsterRarityType rarity_type)
{
  data::ItemLimitType result; // eax

  switch ( rarity_type )
  {
    case MONSTER_RARITY_SMALL_MONSTER:
      result = ITEM_LIMIT_SMALL_MONSTER_DIE;
      break;
    case MONSTER_RARITY_ELITE_MONSTER:
      result = ITEM_LIMIT_ELITE_MONSTER_DIE;
      break;
    case MONSTER_RARITY_BOSS_MONSTER:
      result = ITEM_LIMIT_BOSS_MONSTER_DIE;
      break;
    case MONSTER_RARITY_BIG_BOSS_MONSTER:
      result = ITEM_LIMIT_BIG_BOSS_MONSTER_DIE;
      break;
    case MONSTER_RARITY_SMALL_ENV_ANIMAL:
      result = ITEM_LIMIT_SMALL_ENV_ANIMAL_DIE;
      break;
    default:
      result = ITEM_LIMIT_NONE;
      break;
  }
  return result;
};

// Line 421: range 000000001460BF1C-000000001460CB04
int32_t __cdecl MonsterExcelConfigMgr::checkMonsterRelOverloadExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const MonsterExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char *v11; // rsi
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-25Ch]
  data::MonsterRelOverloadExcelConfigMap *__for_range; // [rsp+18h] [rbp-258h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::reference v29; // [rsp+20h] [rbp-250h]
  std::tuple_element<0,std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig> >::type *monster_main_type_id; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-240h]
  const std::vector<data::PolyMonsterDropConfig> *__for_range_0; // [rsp+38h] [rbp-238h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-228h]
  char v34[544]; // [rsp+50h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 9 param:437 48 8 15 __for_begin:423 80 8 13 __for_end:423 112 8 15 __for_begin:435 144 8"
                        " 13 __for_end:435 176 8 15 __for_begin:437 208 8 13 __for_end:437 240 32 9 <unknown> 304 32 9 <u"
                        "nknown> 368 32 9 <unknown> 432 48 18 temp_param_set:434";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::checkMonsterRelOverloadExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->monster_rel_overload_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MonsterRelOverloadExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false> *)(v2 + 80)) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v2 + 48));
    monster_main_type_id = std::get<0ul,unsigned int const,data::MonsterRelOverloadExcelConfig>(v29);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MonsterRelOverloadExcelConfig>(v29);
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)monster_main_type_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)monster_main_type_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_main_type_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(monster_main_type_id);
    }
    if ( !data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(v5, *monster_main_type_id) )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkMonsterRelOverloadExcelConfig",
        427);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1ADC1820);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, monster_main_type_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1ADC0C80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v9 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->listen_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->listen_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->listen_type);
    }
    if ( excel_config->listen_type == MONSTER_POLY_DROP_GV )
    {
      v10 = ((v2 + 432) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 432));
      __for_range_0 = &excel_config->poly_monster_drop_config_list;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 112, v9);
      *(std::vector<data::PolyMonsterDropConfig>::const_iterator *)(v2 + 112) = std::vector<data::PolyMonsterDropConfig>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, v9);
      *(std::vector<data::PolyMonsterDropConfig>::const_iterator *)(v2 + 144) = std::vector<data::PolyMonsterDropConfig>::end(__for_range_0);
      while ( 1 )
      {
        v11 = (char *)(v2 + 144);
        if ( !__gnu_cxx::operator!=<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *)(v2 + 112),
                (const __gnu_cxx::__normal_iterator<const data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *)(v2 + 144)) )
          break;
        __for_range_1 = &__gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *const)(v2 + 112))->param_list;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 176, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 208, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v12 = (char *)(v2 + 208);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208)) )
            break;
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
          v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 176));
          v14 = (int *)v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          v15 = *v14;
          v16 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
          if ( v16 != 0 && v16 <= 3 )
          {
            LOBYTE(v12) = v16 != 0;
            __asan_report_store4(v2 + 32, v12);
          }
          *(_DWORD *)(v2 + 32) = v15;
          v17 = std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(v2 + 432),
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
          if ( !v17.second )
          {
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 304, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MonsterExcelConfig.cpp",
              "checkMonsterRelOverloadExcelConfig",
              441);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v18,
                    (const char (*)[33])byte_1ADC1820);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, monster_main_type_id);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1ADC1880);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 176));
        }
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::PolyMonsterDropConfig*,std::vector<data::PolyMonsterDropConfig> > *const)(v2 + 112));
      }
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 432));
      v21 = ((v2 + 432) >> 3) + 2147450880;
      *(_DWORD *)v21 = -117901064;
      *(_WORD *)(v21 + 4) = -1800;
    }
    else
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkMonsterRelOverloadExcelConfig",
        450);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])byte_1ADC11A0);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, monster_main_type_id);
      v25 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v24, (const char (*)[37])byte_1ADC18E0);
      common::milog::MiLogStream::operator<<<data::MonsterPolyDropListenType,(data::MonsterPolyDropListenType*)0>(
        v25,
        &excel_config->listen_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterRelOverloadExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 460: range 000000001460CB06-000000001460CD01
__int64 __fastcall MonsterExcelConfigMgr::findMonsterTagHash(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_monster_tag_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 monster_id:459 64 8 8 iter:461 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::findMonsterTagHash;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_monster_tag_map = &this->monster_tag_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_monster_tag_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->monster_tag_map;
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

// Line 470: range 000000001460CD02-000000001460CEFD
__int64 __fastcall MonsterExcelConfigMgr::findMonsterSubTagHash(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_main_type_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_monster_sub_tag_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 24 monster_main_type_id:469 64 8 8 iter:471 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::findMonsterSubTagHash;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_main_type_id;
  p_monster_sub_tag_map = &this->monster_sub_tag_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_main_type_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_monster_sub_tag_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->monster_sub_tag_map;
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

// Line 481: range 000000001460CEFE-000000001460D0D1
data::ItemLimitType __cdecl MonsterExcelConfigMgr::getItemLimitTypeByMonsterDropTag(
        const MonsterExcelConfigMgr *const this,
        const std::string *drop_tag)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,data::ItemLimitType> *p_drop_tag_item_limit_type_map; // rdx
  std::unordered_map<std::string,data::ItemLimitType> *v6; // rdx
  bool v7; // al
  data::ItemLimitType result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true>::pointer v9; // rax
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemLimitType>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)"2 32 8 8 iter:482 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)MonsterExcelConfigMgr::getItemLimitTypeByMonsterDropTag;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_drop_tag_item_limit_type_map = &this->drop_tag_item_limit_type_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], drop_tag);
  v2[4]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::find(p_drop_tag_item_limit_type_map, drop_tag)._M_cur;
  v6 = &this->drop_tag_item_limit_type_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], drop_tag);
  v2[8]._M_cur = std::unordered_map<std::string,data::ItemLimitType>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,data::ItemLimitType>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = ITEM_LIMIT_NONE;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ItemLimitType>,false,true>::operator->(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second);
    }
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemLimitType>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 492: range 000000001460D0D2-000000001460D569
__int64 __fastcall MonsterExcelConfigMgr::getMonsterTypeId(
        const MonsterExcelConfigMgr *const this,
        uint32_t monster_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  bool v8; // r14
  __int64 result; // rax
  char v10[304]; // [rsp+10h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 19 monster_type_id:499 48 4 14 monster_id:491 64 32 18 monster_id_str:493 128 32 9 <unkno"
                        "wn> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::getMonsterTypeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 48) = monster_id;
  v5 = *(unsigned int *)(v2 + 48);
  if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
  {
    v5 = 32LL;
    __asan_report_store_n(v2 + 64, 32LL);
  }
  common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 64), v5);
  if ( (unsigned __int64)std::string::size(v2 + 64) > 5 )
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32, v5);
    *(_DWORD *)(v2 + 32) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    std::string::substr(v2 + 192, v2 + 64, 1LL, 5LL);
    v8 = common::tools::StringUtils::strToNum<unsigned int>(
           (const std::string *)(v2 + 192),
           (unsigned int *)(v2 + 32),
           1) != 0;
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v8 )
    {
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 32);
      v7 = *(_DWORD *)(v2 + 32);
    }
  }
  else
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
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "getMonsterTypeId",
      496);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[26])byte_1ADC1AC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v7 = 0;
  }
  std::string::~string((void *)(v2 + 64));
  result = v7;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 509: range 000000001460D56A-000000001460DB15
__int64 __fastcall MonsterExcelConfigMgr::randSpecialNameId(
        const MonsterExcelConfigMgr *const this,
        __int64 lab_id,
        unsigned __int64 name_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_special_name_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v12; // rax
  __int64 v13; // rsi
  std::vector<unsigned int>::reference v14; // rax
  uint32_t *v15; // rdx
  uint32_t v16; // ecx
  char v17; // dl
  common::milog::MiLogStream *v18; // rax
  __int64 result; // rax
  char v21[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 10 lab_id:508 64 8 8 iter:510 96 8 9 <unknown> 128 24 14 result_vec:517 192 32 9 <unknown"
                        "> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::randSpecialNameId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = lab_id;
  p_special_name_map = &this->special_name_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, lab_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_special_name_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->special_name_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "randSpecialNameId",
      513);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])"can not find lab_id");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v10 = -1;
  }
  else
  {
    v11 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v11 = 0;
    *(_BYTE *)(v11 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    common::tools::RandomUtils::randomSelect<unsigned int>(&v12->second, (std::vector<unsigned int> *)(v3 + 128), 1u);
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 128)) )
    {
      v13 = 0LL;
      v14 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 128), 0LL);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)((name_id >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((name_id & 7) + 3) >= v17 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(name_id, v13);
      }
      *(_DWORD *)name_id = v16;
      v10 = 0;
    }
    else
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "randSpecialNameId",
        525);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v18, (const char (*)[20])"random select error");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v10 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  }
  result = v10;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 533: range 000000001460DB16-000000001460DB7F
uint32_t __cdecl MonsterExcelConfigMgr::getCreatureDescribeId(
        const MonsterExcelConfigMgr *const this,
        uint32_t monster_id)
{
  unsigned int describe_id; // [rsp+1Ch] [rbp-4h]

  if ( data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(this, monster_id) )
    return monster_id;
  describe_id = MonsterExcelConfigMgr::getMonsterTypeId(this, monster_id);
  if ( data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(this, describe_id) )
    return describe_id;
  else
    return 0;
};

// Line 546: range 000000001460DB80-000000001460DBD9
bool __cdecl MonsterExcelConfigMgr::isCreatureDescribeIdExists(
        const MonsterExcelConfigMgr *const this,
        uint32_t describe_id)
{
  return data::MonsterExcelConfigMgrBase::findMonsterDescribeExcelConfig(this, describe_id)
      || data::MonsterExcelConfigMgrBase::findAnimalDescribeExcelConfig(this, describe_id) != 0LL;
};

// Line 562: range 000000001460DBDA-000000001460DD9B
const std::set<unsigned int> *__fastcall MonsterExcelConfigMgr::findMonsterIdSetByDescribeId(
        const MonsterExcelConfigMgr *const this,
        __int64 describe_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_describe_id_to_monster_id_set_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 describe_id:561 64 8 8 iter:563 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::findMonsterIdSetByDescribeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = describe_id;
  p_describe_id_to_monster_id_set_map = &this->describe_id_to_monster_id_set_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, describe_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_describe_id_to_monster_id_set_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->describe_id_to_monster_id_set_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 572: range 000000001460DD9C-000000001460E1D2
int32_t __cdecl MonsterExcelConfigMgr::rewriteCaptureAnimalExcelConfig(
        MonsterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *p_item_id; // rcx
  unsigned int *p_drop_id; // rdx
  __int64 v7; // rsi
  std::pair<unsigned int,unsigned int> *v8; // rax
  int32_t result; // eax
  data::CaptureExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-110h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *monster_id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,data::CaptureExcelConfig> >::type *override_config; // [rsp+30h] [rbp-100h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::mapped_type *tag_drop_map; // [rsp+38h] [rbp-F8h]
  std::vector<data::CaptureTagConfig> *__for_range_0; // [rsp+40h] [rbp-F0h]
  data::CaptureTagConfig *config; // [rsp+48h] [rbp-E8h]
  char v17[224]; // [rsp+50h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:573 64 8 13 __for_end:573 96 8 15 __for_begin:576 128 8 13 __for_end:576 1"
                        "60 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MonsterExcelConfigMgr::rewriteCaptureAnimalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  __for_range = &this->capture_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CaptureExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v2 + 32));
    monster_id = std::get<0ul,unsigned int const,data::CaptureExcelConfig>(__in);
    override_config = std::get<1ul,unsigned int const,data::CaptureExcelConfig>(__in);
    tag_drop_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::operator[](
                     &this->capture_map_,
                     monster_id);
    __for_range_0 = &override_config->capture_tag_config;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, monster_id);
    *(std::vector<data::CaptureTagConfig>::iterator *)(v2 + 96) = std::vector<data::CaptureTagConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, monster_id);
    *(std::vector<data::CaptureTagConfig>::iterator *)(v2 + 128) = std::vector<data::CaptureTagConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::CaptureTagConfig *,std::vector<data::CaptureTagConfig>>(
              (const __gnu_cxx::__normal_iterator<data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *)(v2 + 128)) )
    {
      config = __gnu_cxx::__normal_iterator<data::CaptureTagConfig *,std::vector<data::CaptureTagConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&config->capture_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->capture_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->capture_type);
      }
      if ( config->capture_type )
      {
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        p_item_id = &config->item_id;
        p_drop_id = &config->drop_id;
        v7 = *(unsigned __int8 *)(((v2 + 160) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v7 )
          __asan_report_store8(v2 + 160, v7);
        *(std::pair<unsigned int,unsigned int> *)(v2 + 160) = std::make_pair<unsigned int &,unsigned int &>(
                                                                p_drop_id,
                                                                p_item_id);
        v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
               tag_drop_map,
               &config->capture_type);
        std::pair<unsigned int,unsigned int>::operator=(
          v8,
          (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v2 + 160));
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      }
      __gnu_cxx::__normal_iterator<data::CaptureTagConfig *,std::vector<data::CaptureTagConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 588: range 000000001460E1D4-000000001460FEAF
int32_t __cdecl MonsterExcelConfigMgr::checkCaptureAnimalExcelConfig(
        const MonsterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::tuple_element<0,std::pair<unsigned int const,data::CaptureTagsExcelConfig> >::type *v7; // rsi
  std::unordered_map<unsigned int,data::ItemLimitType>::mapped_type *v8; // rax
  data::ItemLimitType *v9; // rdx
  char v10; // cl
  unsigned __int64 v11; // rax
  char *v12; // rsi
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  _BOOL4 v16; // edx
  unsigned __int64 v17; // rax
  char *v18; // rsi
  const std::unordered_map<unsigned int,data::ItemLimitType>::key_type *p_capture_type; // rdx
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  std::unordered_map<unsigned int,data::ItemLimitType>::mapped_type *v27; // rax
  data::ItemLimitType *v28; // rdx
  char v29; // cl
  uint32_t *v30; // rsi
  const std::unordered_set<unsigned int>::key_type *v31; // rdx
  bool v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  common::milog::MiLogStream *v74; // rax
  unsigned __int64 v75; // rax
  int v76; // edx
  data::ItemLimitType item_limit_type; // [rsp+Ch] [rbp-5A4h]
  int v79; // [rsp+Ch] [rbp-5A4h]
  data::ItemLimitType cur_capture_tag_item_limit_type; // [rsp+2Ch] [rbp-584h]
  data::CaptureTagsExcelConfigMap *__for_range; // [rsp+30h] [rbp-580h]
  data::CaptureExcelConfigMap *__for_range_0; // [rsp+38h] [rbp-578h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::reference v84; // [rsp+40h] [rbp-570h]
  std::tuple_element<0,std::pair<unsigned int const,data::CaptureExcelConfig> >::type *monster_id; // [rsp+48h] [rbp-568h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CaptureExcelConfig> >::type *capture_config; // [rsp+50h] [rbp-560h]
  const std::vector<data::CaptureTagConfig> *__for_range_1; // [rsp+58h] [rbp-558h]
  const data::CaptureTagConfig *tag_config_0; // [rsp+60h] [rbp-550h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>::reference v89; // [rsp+68h] [rbp-548h]
  std::tuple_element<0,std::pair<unsigned int const,data::CaptureTagsExcelConfig> >::type *capture_tag; // [rsp+70h] [rbp-540h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CaptureTagsExcelConfig> >::type *tag_config; // [rsp+78h] [rbp-538h]
  char v92[1328]; // [rsp+80h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 32 8 15 __for_begin:591 64 8 13 __for_end:591 96 8 15 __for_begin:596 128 8 13 __for_end:596 "
                        "160 8 9 <unknown> 192 8 9 <unknown> 224 8 15 __for_begin:605 256 8 13 __for_end:605 288 8 9 <unk"
                        "nown> 320 8 9 <unknown> 352 8 9 <unknown> 384 8 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown"
                        "> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown>"
                        " 864 32 9 <unknown> 928 32 9 <unknown> 992 56 19 global_tags_map:590 1088 56 15 monster_set:595 "
                        "1184 56 31 cur_monster_capture_tag_set:604";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::checkCaptureAnimalExcelConfig;
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
  v5[536862752] = -234881024;
  v5[536862753] = -218959118;
  v5[536862755] = -234881024;
  v5[536862756] = -218959118;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  std::unordered_map<unsigned int,data::ItemLimitType>::unordered_map((std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992));
  __for_range = &this->capture_tags_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CaptureTagsExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false> *)(v3 + 64)) )
      break;
    v89 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false> *const)(v3 + 32));
    capture_tag = std::get<0ul,unsigned int const,data::CaptureTagsExcelConfig>(v89);
    tag_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CaptureTagsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CaptureTagsExcelConfig>(v89);
    if ( *(_BYTE *)(((unsigned __int64)&tag_config->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tag_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tag_config->item_limit_type);
    }
    item_limit_type = tag_config->item_limit_type;
    v7 = capture_tag;
    v8 = std::unordered_map<unsigned int,data::ItemLimitType>::operator[](
           (std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992),
           capture_tag);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7);
    }
    *v9 = item_limit_type;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureTagsExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v11 = ((v3 + 1088) >> 3) + 2147450880;
  *(_DWORD *)v11 = 0;
  *(_WORD *)(v11 + 4) = 0;
  *(_BYTE *)(v11 + 6) = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1088));
  __for_range_0 = &this->capture_excel_config_map;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v6);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,data::CaptureExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CaptureExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v12 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CaptureExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CaptureExcelConfig>,false> *)(v3 + 128)) )
      break;
    v84 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v3 + 96));
    monster_id = std::get<0ul,unsigned int const,data::CaptureExcelConfig>(v84);
    capture_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CaptureExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CaptureExcelConfig>(v84);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v12);
    *(std::unordered_set<unsigned int>::iterator *)(v3 + 192) = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v3 + 1088));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v12);
    *(std::unordered_set<unsigned int>::iterator *)(v3 + 160) = std::unordered_set<unsigned int>::find(
                                                                  (std::unordered_set<unsigned int> *const)(v3 + 1088),
                                                                  monster_id);
    v13 = std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 192));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkCaptureAnimalExcelConfig",
        600);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v14, (const char (*)[22])byte_1ADC1F60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, monster_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
      goto LABEL_105;
    }
    std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 1088), monster_id);
    v17 = ((v3 + 1184) >> 3) + 2147450880;
    *(_DWORD *)v17 = 0;
    *(_WORD *)(v17 + 4) = 0;
    *(_BYTE *)(v17 + 6) = 0;
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1184));
    __for_range_1 = &capture_config->capture_tag_config;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, monster_id);
    *(std::vector<data::CaptureTagConfig>::const_iterator *)(v3 + 224) = std::vector<data::CaptureTagConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, monster_id);
    *(std::vector<data::CaptureTagConfig>::const_iterator *)(v3 + 256) = std::vector<data::CaptureTagConfig>::end(__for_range_1);
    while ( 1 )
    {
      v18 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<data::CaptureTagConfig const*,std::vector<data::CaptureTagConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<const data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *)(v3 + 256)) )
      {
        v26 = 1;
        goto LABEL_97;
      }
      tag_config_0 = __gnu_cxx::__normal_iterator<data::CaptureTagConfig const*,std::vector<data::CaptureTagConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *const)(v3 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->capture_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tag_config_0->capture_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tag_config_0->capture_type);
      }
      if ( tag_config_0->capture_type )
        break;
LABEL_95:
      __gnu_cxx::__normal_iterator<data::CaptureTagConfig const*,std::vector<data::CaptureTagConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::CaptureTagConfig*,std::vector<data::CaptureTagConfig> > *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v18);
    *(std::unordered_map<unsigned int,data::ItemLimitType>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::ItemLimitType>::end((std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992));
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    p_capture_type = &tag_config_0->capture_type;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v18);
    *(std::unordered_map<unsigned int,data::ItemLimitType>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::ItemLimitType>::find(
                                                                                      (std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992),
                                                                                      p_capture_type);
    v20 = std::__detail::operator==<std::pair<unsigned int const,data::ItemLimitType>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemLimitType>,false> *)(v3 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemLimitType>,false> *)(v3 + 320));
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkCaptureAnimalExcelConfig",
        611);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])"monster_id[");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, monster_id);
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v23, (const char (*)[20])byte_1ADC1FE0);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &tag_config_0->capture_type);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v25, (const char (*)[47])byte_1ADC2020);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v26 = 0;
      goto LABEL_97;
    }
    v30 = &tag_config_0->capture_type;
    v27 = std::unordered_map<unsigned int,data::ItemLimitType>::operator[](
            (std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992),
            &tag_config_0->capture_type);
    v28 = v27;
    v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    LOBYTE(v30) = v29 != 0;
    if ( v29 != 0 && (char)(((unsigned __int8)v27 & 7) + 3) >= v29 )
      __asan_report_load4(v27);
    cur_capture_tag_item_limit_type = *v28;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v30);
    *(std::unordered_set<unsigned int>::iterator *)(v3 + 384) = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v3 + 1184));
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    v31 = &tag_config_0->capture_type;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v30);
    *(std::unordered_set<unsigned int>::iterator *)(v3 + 352) = std::unordered_set<unsigned int>::find(
                                                                  (std::unordered_set<unsigned int> *const)(v3 + 1184),
                                                                  v31);
    v32 = std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 352),
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 384));
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v32 )
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkCaptureAnimalExcelConfig",
        617);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])"monster_id[");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, monster_id);
      v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v35, (const char (*)[20])byte_1ADC1FE0);
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &tag_config_0->capture_type);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v37, (const char (*)[26])byte_1ADC2080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v26 = 0;
      goto LABEL_97;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&tag_config_0->drop_id);
    }
    if ( tag_config_0->drop_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tag_config_0->item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&tag_config_0->item_id);
      }
      if ( tag_config_0->item_id )
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkCaptureAnimalExcelConfig",
          622);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v38, (const char (*)[12])"monster_id[");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, monster_id);
        v41 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v40, (const char (*)[20])byte_1ADC1FE0);
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &tag_config_0->capture_type);
        v43 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v42, (const char (*)[26])byte_1ADC20C0);
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &tag_config_0->drop_id);
        v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v44, (const char (*)[14])byte_1ADC2100);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &tag_config_0->item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_97;
      }
    }
    if ( cur_capture_tag_item_limit_type != ITEM_LIMIT_CAPTURE_NONE_DROP )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tag_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&tag_config_0->drop_id);
      }
      if ( !tag_config_0->drop_id )
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkCaptureAnimalExcelConfig",
          630);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])"monster_id[");
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, monster_id);
        v49 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v48, (const char (*)[20])byte_1ADC1FE0);
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &tag_config_0->capture_type);
        common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v50, (const char (*)[82])byte_1ADC2140);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_97;
      }
      p_drop_config_mgr = &txt_config_mgr->drop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tag_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&tag_config_0->drop_id);
      }
      if ( !data::DropExcelConfigMgrBase::findDropExcelConfig(p_drop_config_mgr, tag_config_0->drop_id) )
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkCaptureAnimalExcelConfig",
          636);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v53 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v52, (const char (*)[12])"monster_id[");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, monster_id);
        v55 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v54, (const char (*)[18])byte_1ADC21C0);
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &tag_config_0->capture_type);
        v57 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v56, (const char (*)[10])" drop_id:");
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &tag_config_0->drop_id);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v58, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_97;
      }
LABEL_94:
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v3 + 1184),
        &tag_config_0->capture_type);
      goto LABEL_95;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tag_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag_config_0->drop_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&tag_config_0->drop_id);
    }
    if ( tag_config_0->drop_id )
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
        "./src/txt_data_manual/MonsterExcelConfig.cpp",
        "checkCaptureAnimalExcelConfig",
        645);
      v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v60 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v59, (const char (*)[12])"monster_id[");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, monster_id);
      v62 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v61, (const char (*)[20])byte_1ADC1FE0);
      v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &tag_config_0->capture_type);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v63, (const char (*)[56])byte_1ADC2200);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v26 = 0;
      goto LABEL_97;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tag_config_0->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tag_config_0->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tag_config_0->item_id);
    }
    if ( !tag_config_0->item_id
      || ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, tag_config_0->item_id) )
    {
      goto LABEL_94;
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
      4u,
      "./src/txt_data_manual/MonsterExcelConfig.cpp",
      "checkCaptureAnimalExcelConfig",
      650);
    v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 864),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v66 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v65, (const char (*)[12])"monster_id[");
    v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, monster_id);
    v68 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v67, (const char (*)[18])byte_1ADC21C0);
    v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &tag_config_0->capture_type);
    v70 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v69, (const char (*)[10])" item_id:");
    v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &tag_config_0->item_id);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v71, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
    *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_97:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v26 == 1 )
    {
      if ( std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v3 + 1184)) )
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
          "./src/txt_data_manual/MonsterExcelConfig.cpp",
          "checkCaptureAnimalExcelConfig",
          659);
        v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v73 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v72, (const char (*)[12])"monster_id[");
        v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, monster_id);
        common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v74, (const char (*)[63])byte_1ADC2260);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
        *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v79 = 0;
      }
      else
      {
        v79 = 1;
      }
    }
    else
    {
      v79 = 0;
    }
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1184));
    v16 = v79 == 1;
LABEL_105:
    v75 = ((v3 + 1184) >> 3) + 2147450880;
    *(_DWORD *)v75 = -117901064;
    *(_WORD *)(v75 + 4) = -1800;
    *(_BYTE *)(v75 + 6) = -8;
    if ( !v16 )
    {
      v76 = 0;
      goto LABEL_109;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CaptureExcelConfig>,false,false> *const)(v3 + 96));
  }
  v76 = 1;
LABEL_109:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v76 == 1 )
    v2 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1088));
  std::unordered_map<unsigned int,data::ItemLimitType>::~unordered_map((std::unordered_map<unsigned int,data::ItemLimitType> *const)(v3 + 992));
  if ( v92 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF809C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v92);
  }
  return v2;
};

// Line 668: range 000000001460FEB0-00000000146102BF
__int64 __fastcall MonsterExcelConfigMgr::getCaptureAnimalMonsterDropID(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_id,
        uint32_t capture_tag,
        unsigned __int64 drop_id,
        unsigned __int64 item_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *p_capture_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *v9; // rdx
  bool v10; // al
  __int64 result; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_second; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v13; // rdx
  char *v14; // rsi
  bool v15; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v16; // rdx
  std::pair<unsigned int,unsigned int> *v17; // rax
  uint32_t first; // ecx
  char v19; // dl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v20; // rdx
  unsigned int *v21; // rax
  uint32_t second; // ecx
  char v23; // dl
  char v27[224]; // [rsp+20h] [rbp-E0h] BYREF

  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 14 monster_id:667 48 4 15 capture_tag:667 64 8 8 iter:669 96 8 9 <unknown> 128 8 13 drop_"
                        "iter:674 160 8 9 <unknown>";
  *(_QWORD *)(v5 + 16) = MonsterExcelConfigMgr::getCaptureAnimalMonsterDropID;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -202116352;
  *(_DWORD *)(v5 + 32) = monster_id;
  *(_DWORD *)(v5 + 48) = capture_tag;
  p_capture_map = &this->capture_map_;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(p_capture_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v5 + 32));
  v9 = &this->capture_map_;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, v5 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(v9);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v5 + 64))->second;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v5 + 96);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_second, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v5 + 48));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    v13 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v5 + 64))->second;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v5 + 48);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v5 + 160) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v13);
    v14 = (char *)(v5 + 160);
    v15 = std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v5 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v5 + 160));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v15 )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v5 + 128));
      v17 = &v16->second;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      first = v16->second.first;
      v19 = *(_BYTE *)((drop_id >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((drop_id & 7) + 3) >= v19 )
      {
        LOBYTE(v14) = v19 != 0;
        __asan_report_store4(drop_id, v14);
      }
      *(_DWORD *)drop_id = first;
      v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v5 + 128));
      v21 = &v20->second.second;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      second = v20->second.second;
      v23 = *(_BYTE *)((item_id >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)((item_id & 7) + 3) >= v23 )
      {
        LOBYTE(v14) = v23 != 0;
        __asan_report_store4(item_id, v14);
      }
      *(_DWORD *)item_id = second;
      result = 0LL;
    }
  }
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 685: range 00000000146102C0-0000000014610590
_BOOL8 __fastcall MonsterExcelConfigMgr::isMonsterCaptureExist(
        const MonsterExcelConfigMgr *const this,
        __int64 monster_id,
        uint32_t capture_tag)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *p_capture_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *v7; // rdx
  bool v8; // al
  _BOOL8 result; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_second; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v11; // rdx
  char v13[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 monster_id:684 48 4 15 capture_tag:684 64 8 8 iter:686 96 8 9 <unknown> 128 8 13 drop_"
                        "iter:691 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::isMonsterCaptureExist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = monster_id;
  *(_DWORD *)(v3 + 48) = capture_tag;
  p_capture_map = &this->capture_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(p_capture_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 32));
  v7 = &this->capture_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_second, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v11);
    result = !std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 128),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 160));
  }
  if ( v13 == (char *)v3 )
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

// Line 700: range 0000000014610592-0000000014610A3C
std::set<unsigned int> *__fastcall MonsterExcelConfigMgr::getMonsterTagsSet(
        std::set<unsigned int> *retstr,
        const MonsterExcelConfigMgr *const this,
        uint32_t monster_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *p_capture_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  unsigned __int64 n; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *capture_tag; // [rsp+30h] [rbp-110h]
  char v15[256]; // [rsp+40h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 monster_id:699 64 8 8 iter:702 96 8 9 <unknown> 128 8 15 __for_begin:707 160 8 13 __fo"
                        "r_end:707 192 12 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MonsterExcelConfigMgr::getMonsterTagsSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202177536;
  *(_DWORD *)(v3 + 48) = monster_id;
  std::set<unsigned int>::set(retstr);
  p_capture_map = &this->capture_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(p_capture_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 48));
  v7 = &this->capture_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(v7);
  v8 = (char *)(v3 + 96);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v9 )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v3 + 160)) )
    {
      *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 1024;
      n = (unsigned __int64)std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 128));
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 203) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 11) & 7) >= *(_BYTE *)(((v3 + 203) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 12LL);
      }
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v3 + 192) = *(_QWORD *)n;
      *(_DWORD *)(v3 + 200) = *(_DWORD *)(n + 8);
      capture_tag = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>((const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *)(v3 + 192));
      std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>((const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *)(v3 + 192));
      std::set<unsigned int>::insert(retstr, capture_tag);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v3 + 128));
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return retstr;
};
