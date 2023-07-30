// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExpeditionDataExcelConfig.cpp

// Line 20: range 0000000013ABD9CC-0000000013ABD9DE
int32_t __cdecl ExpeditionDataExcelConfigMgr::rewriteConfig(
        ExpeditionDataExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 26: range 0000000013ABD9E0-0000000013ABEB38
int32_t __cdecl ExpeditionDataExcelConfigMgr::checkConfig(
        ExpeditionDataExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t *p_city_id; // rax
  __int64 city_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // edx
  unsigned __int64 v12; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *p_reward_drop_id; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  _BOOL4 v26; // r15d
  data::ExpeditionOpenCondType type; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int v33; // eax
  JsonConfigMgr *p_json_config_mgr; // rsi
  int para; // ecx
  uint32_t para2; // edx
  bool v37; // r15
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  unsigned __int64 v44; // rax
  int v45; // eax
  data::ExpeditionDataExcelConfigMap *__for_range; // [rsp+20h] [rbp-310h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::reference v49; // [rsp+28h] [rbp-308h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *id; // [rsp+30h] [rbp-300h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *data; // [rsp+38h] [rbp-2F8h]
  const std::vector<data::ExpeditionReward> *__for_range_0; // [rsp+40h] [rbp-2F0h]
  const data::ExpeditionReward *reward; // [rsp+48h] [rbp-2E8h]
  const std::vector<data::ExpeditionOpenCondition> *__for_range_1; // [rsp+50h] [rbp-2E0h]
  const data::ExpeditionOpenCondition *cond; // [rsp+58h] [rbp-2D8h]
  char v56[720]; // [rsp+60h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 8 14 __for_begin:27 80 8 12 __for_end:27 112 8 14 __for_begin:35 144 8 12 __for_end:35 176"
                        " 8 14 __for_begin:48 208 8 12 __for_end:48 240 16 9 <unknown> 272 32 9 <unknown> 336 32 9 <unkno"
                        "wn> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 48 12 htime_set:34";
  *(_QWORD *)(v3 + 16) = ExpeditionDataExcelConfigMgr::checkConfig;
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
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862740] = -202116109;
  __for_range = &txt_config_mgr->expedition_config_mgr.expedition_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v3 + 80)) )
  {
    v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false> *const)(v3 + 48));
    id = std::get<0ul,unsigned int const,data::ExpeditionDataExcelConfig>(v49);
    data = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionDataExcelConfig>(v49);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    p_city_id = &data->city_id;
    if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_city_id);
    }
    city_id = data->city_id;
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, city_id) )
    {
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExpeditionDataExcelConfig.cpp",
        "checkConfig",
        31);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              v9,
              (const char (*)[45])"expedition cannot find scene_id by city_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &data->city_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_66;
    }
    v12 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v12 = 0;
    *(_WORD *)(v12 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 592));
    __for_range_0 = &data->time_reward_vec;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, city_id);
    *(std::vector<data::ExpeditionReward>::const_iterator *)(v3 + 112) = std::vector<data::ExpeditionReward>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, city_id);
    *(std::vector<data::ExpeditionReward>::const_iterator *)(v3 + 144) = std::vector<data::ExpeditionReward>::end(__for_range_0);
    while ( 1 )
    {
      p_reward_drop_id = (std::tuple_element<0,std::pair<unsigned int const,data::ExpeditionDataExcelConfig> >::type *)(v3 + 144);
      if ( !__gnu_cxx::operator!=<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>(
              (const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *)(v3 + 144)) )
      {
        v19 = 1;
        goto LABEL_34;
      }
      reward = __gnu_cxx::__normal_iterator<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *const)(v3 + 112));
      v14 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 592), &reward->htime);
      if ( !v14.second )
      {
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExpeditionDataExcelConfig.cpp",
          "checkConfig",
          39);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v15,
                (const char (*)[17])"duplicate htime:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &reward->htime);
        v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v17,
                (const char (*)[19])" in expedition_id:");
        p_reward_drop_id = id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
        goto LABEL_34;
      }
      if ( *(_BYTE *)(((unsigned __int64)&reward->reward_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward->reward_drop_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&reward->reward_drop_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgr,
                              reward->reward_drop_id,
                              ITEM_LIMIT_EXPEDITION) != 1 )
        break;
      __gnu_cxx::__normal_iterator<data::ExpeditionReward const*,std::vector<data::ExpeditionReward>>::operator++((__gnu_cxx::__normal_iterator<const data::ExpeditionReward*,std::vector<data::ExpeditionReward> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 400, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ExpeditionDataExcelConfig.cpp",
      "checkConfig",
      44);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 400),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            v20,
            (const char (*)[45])"expedition find reward_drop_id fail exp_id: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
    v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" time: ");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &reward->htime);
    v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" drop_id: ");
    p_reward_drop_id = &reward->reward_drop_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &reward->reward_drop_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
    *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v26 = 0;
      goto LABEL_65;
    }
    __for_range_1 = &data->open_condition_vec;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_reward_drop_id);
    *(std::vector<data::ExpeditionOpenCondition>::const_iterator *)(v3 + 176) = std::vector<data::ExpeditionOpenCondition>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_reward_drop_id);
    *(std::vector<data::ExpeditionOpenCondition>::const_iterator *)(v3 + 208) = std::vector<data::ExpeditionOpenCondition>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ExpeditionOpenCondition const*,std::vector<data::ExpeditionOpenCondition>>(
              (const __gnu_cxx::__normal_iterator<const data::ExpeditionOpenCondition*,std::vector<data::ExpeditionOpenCondition> > *)(v3 + 176),
              (const __gnu_cxx::__normal_iterator<const data::ExpeditionOpenCondition*,std::vector<data::ExpeditionOpenCondition> > *)(v3 + 208)) )
      {
        v33 = 1;
        goto LABEL_64;
      }
      cond = __gnu_cxx::__normal_iterator<data::ExpeditionOpenCondition const*,std::vector<data::ExpeditionOpenCondition>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExpeditionOpenCondition*,std::vector<data::ExpeditionOpenCondition> > *const)(v3 + 176));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      if ( type == EXP_OPEN_COND_POINT )
        break;
      if ( type == EXP_OPEN_COND_QUEST )
      {
        p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cond->para);
        }
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, cond->para) )
        {
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ExpeditionDataExcelConfig.cpp",
            "checkConfig",
            55);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 464),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  v29,
                  (const char (*)[62])"expedtion open_cond_quest find quest_config failed quest_id: ");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &cond->para);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v31,
                  (const char (*)[16])" expedition_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v33 = 0;
          goto LABEL_64;
        }
      }
LABEL_62:
      __gnu_cxx::__normal_iterator<data::ExpeditionOpenCondition const*,std::vector<data::ExpeditionOpenCondition>>::operator++((__gnu_cxx::__normal_iterator<const data::ExpeditionOpenCondition*,std::vector<data::ExpeditionOpenCondition> > *const)(v3 + 176));
    }
    *(_WORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&cond->para);
    }
    para = cond->para;
    if ( *(_BYTE *)(((unsigned __int64)&cond->para2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->para2 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->para2);
    }
    para2 = cond->para2;
    if ( *(_WORD *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
      (const JsonConfigMgr *const)(v3 + 240),
      p_json_config_mgr,
      para2,
      para);
    v37 = std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v3 + 240), 0LL);
    std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 240));
    *(_WORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -1800;
    if ( !v37 )
      goto LABEL_62;
    *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 528, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 528),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ExpeditionDataExcelConfig.cpp",
      "checkConfig",
      62);
    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 528),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v39 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v38,
            (const char (*)[31])"findScenePoint fail, scene_id:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &cond->para2);
    v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" point_id:");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &cond->para);
    v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v42, (const char (*)[16])" expedition_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
    *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v33 = 0;
LABEL_64:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    v26 = v33 == 1;
LABEL_65:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 592));
    v11 = v26;
LABEL_66:
    v44 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v44 = -117901064;
    *(_WORD *)(v44 + 4) = -1800;
    if ( !v11 )
    {
      v45 = 0;
      goto LABEL_70;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false> *const)(v3 + 48));
  }
  v45 = 1;
LABEL_70:
  if ( v45 == 1 )
    v2 = 0;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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

// Line 75: range 0000000013ABEB3A-0000000013ABECF5
const data::ExpeditionDataExcelConfig *__fastcall ExpeditionDataExcelConfigMgr::findExpeditionConfigByID(
        const ExpeditionDataExcelConfigMgr *const this,
        __int64 ID)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ExpeditionDataExcelConfigMap *p_expedition_data_excel_config_map; // rdx
  data::ExpeditionDataExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ExpeditionDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 ID:74 64 8 5 it:76 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExpeditionDataExcelConfigMgr::findExpeditionConfigByID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = ID;
  p_expedition_data_excel_config_map = &this->expedition_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, ID);
  *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::find(
                                                                                                     p_expedition_data_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->expedition_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 85: range 0000000013ABECF6-0000000013ABED07
const data::ExpeditionDataExcelConfigMap *__cdecl ExpeditionDataExcelConfigMgr::getAllExpeditionConfig(
        const ExpeditionDataExcelConfigMgr *const this)
{
  return &this->expedition_data_excel_config_map;
};
