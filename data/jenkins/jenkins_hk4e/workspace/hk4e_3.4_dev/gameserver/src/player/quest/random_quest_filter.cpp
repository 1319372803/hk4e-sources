// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/random_quest_filter.cpp

// Line 27: range 0000000015C902F8-0000000015C90417
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<RandomQuestFilter> __cdecl RandomQuestFilter::create(
        data::RandomQuestFilterType type,
        const std::string *factor_name,
        const std::vector<unsigned int> *param_vec)
{
  const std::string *v3; // rcx
  std::shared_ptr<RandomQuestFilter> result; // rax
  std::shared_ptr<RandomQuestPlayerPosRingFilter> __r; // [rsp+20h] [rbp-10h] BYREF

  if ( (_DWORD)factor_name == 3 )
  {
    common::tools::perf::make_shared<RandomQuestPlayerLevelFilter,std::string const&,std::vector<unsigned int> const&>(
      (const std::string *)&__r,
      param_vec,
      v3,
      param_vec);
    std::shared_ptr<RandomQuestFilter>::shared_ptr<RandomQuestPlayerLevelFilter,void>(
      *(std::shared_ptr<RandomQuestFilter> *const *)&type,
      (std::shared_ptr<RandomQuestPlayerLevelFilter> *)&__r);
    std::shared_ptr<RandomQuestPlayerLevelFilter>::~shared_ptr((std::shared_ptr<RandomQuestPlayerLevelFilter> *const)&__r);
  }
  else
  {
    if ( (int)factor_name > 3 )
    {
LABEL_11:
      std::shared_ptr<RandomQuestFilter>::shared_ptr(*(std::shared_ptr<RandomQuestFilter> *const *)&type, 0LL);
      goto LABEL_12;
    }
    if ( (_DWORD)factor_name == 2 )
    {
      common::tools::perf::make_shared<RandomQuestNpcFilter,std::string const&,std::vector<unsigned int> const&>(
        (const std::string *)&__r,
        param_vec,
        v3,
        param_vec);
      std::shared_ptr<RandomQuestFilter>::shared_ptr<RandomQuestNpcFilter,void>(
        *(std::shared_ptr<RandomQuestFilter> *const *)&type,
        (std::shared_ptr<RandomQuestNpcFilter> *)&__r);
      std::shared_ptr<RandomQuestNpcFilter>::~shared_ptr((std::shared_ptr<RandomQuestNpcFilter> *const)&__r);
    }
    else
    {
      if ( !(_DWORD)factor_name || (_DWORD)factor_name != 1 )
        goto LABEL_11;
      common::tools::perf::make_shared<RandomQuestPlayerPosRingFilter,std::string const&,std::vector<unsigned int> const&>(
        (const std::string *)&__r,
        param_vec,
        v3,
        param_vec);
      std::shared_ptr<RandomQuestFilter>::shared_ptr<RandomQuestPlayerPosRingFilter,void>(
        *(std::shared_ptr<RandomQuestFilter> *const *)&type,
        &__r);
      std::shared_ptr<RandomQuestPlayerPosRingFilter>::~shared_ptr(&__r);
    }
  }
LABEL_12:
  result._M_ptr = *(std::__shared_ptr<RandomQuestFilter,(__gnu_cxx::_Lock_policy)2>::element_type **)&type;
  return result;
};

// Line 51: range 0000000015C90418-0000000015C907AF
__int64 __fastcall RandomQuestFilter::isFactorValid(RandomQuestFilter *const this, Player *player, uint32_t factor_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  std::vector<data::QuestElemSample>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<data::QuestElemSample>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const data::RandomQuestElemPoolExcelConfig *factor_pool_config_ptr; // [rsp+38h] [rbp-A8h]
  const std::vector<data::QuestElemSample> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::QuestElemSample *factor; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-80h] BYREF
  char v19[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 factor_id:50";
  *(_QWORD *)(v3 + 16) = RandomQuestFilter::isFactorValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = factor_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  factor_pool_config_ptr = data::QuestExcelConfigMgrBase::findRandomQuestElemPoolExcelConfig(
                             &v6->design_config.txt_config_mgr.quest_config_mgr,
                             *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( factor_pool_config_ptr )
  {
    __for_range = &factor_pool_config_ptr->sample_list;
    __for_begin._M_current = std::vector<data::QuestElemSample>::begin(&factor_pool_config_ptr->sample_list)._M_current;
    __for_end._M_current = std::vector<data::QuestElemSample>::end(&factor_pool_config_ptr->sample_list)._M_current;
    while ( __gnu_cxx::operator!=<data::QuestElemSample const*,std::vector<data::QuestElemSample>>(
              &__for_begin,
              &__for_end) )
    {
      factor = __gnu_cxx::__normal_iterator<data::QuestElemSample const*,std::vector<data::QuestElemSample>>::operator*(&__for_begin);
      if ( RandomQuestFilter::isFilterFactor(this, &factor->type) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/random_quest_filter.cpp",
          "isFactorValid",
          65);
        v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v18,
               (const char (*)[32])"[RQ_FILTER] check factor value:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &factor->content);
        common::milog::MiLogStream::~MiLogStream(&v18);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v10 = (unsigned __int64)(this->_vptr_RandomQuestFilter + 2);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(this->_vptr_RandomQuestFilter + 2);
        if ( (*(unsigned __int8 (__fastcall **)(RandomQuestFilter *const, Player *, std::string *))v10)(
               this,
               player,
               &factor->content) != 1 )
        {
          result = 0LL;
          goto LABEL_17;
        }
      }
      __gnu_cxx::__normal_iterator<data::QuestElemSample const*,std::vector<data::QuestElemSample>>::operator++(&__for_begin);
    }
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/random_quest_filter.cpp",
      "isFactorValid",
      55);
    v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v18,
           (const char (*)[54])"findRandomQuestElemPoolExcelConfig failed, factor_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
  }
LABEL_17:
  if ( v19 == (char *)v3 )
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

// Line 77: range 0000000015C907B0-0000000015C90D01
bool __cdecl RandomQuestPlayerPosRingFilter::isFactorValueValid(
        RandomQuestPlayerPosRingFilter *const this,
        Player *player,
        const std::string *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<unsigned int>::reference v6; // rax
  signed int *v7; // rdx
  std::vector<unsigned int>::reference v8; // rax
  signed int *v9; // rdx
  bool v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __m128i v12; // xmm0
  Scene *v13; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  bool result; // al
  signed int min_dis; // [rsp+24h] [rbp-ECh]
  signed int max_dis; // [rsp+28h] [rbp-E8h]
  float dis; // [rsp+2Ch] [rbp-E4h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+30h] [rbp-E0h]
  const DummyPointScriptConfig *dummy_point_config_ptr; // [rsp+38h] [rbp-D8h]
  std::string p_name; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 11 cur_pos:103 64 12 11 cur_rot:104 96 16 12 scene_ptr:87";
  *(_QWORD *)(v3 + 16) = RandomQuestPlayerPosRingFilter::isFactorValueValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  min_dis = 0;
  max_dis = -1;
  if ( std::vector<unsigned int>::size(&this->param_vec_) > 1 )
  {
    v6 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v7 = (signed int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    min_dis = *v7;
    v8 = std::vector<unsigned int>::operator[](&this->param_vec_, 1uLL);
    v9 = (signed int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    max_dis = *v9;
  }
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
  {
    v10 = 0;
  }
  else
  {
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    scene_script_config_ptr = Scene::getScriptConfig(v11);
    if ( scene_script_config_ptr )
    {
      std::string::basic_string(&p_name, value);
      dummy_point_config_ptr = SceneScriptConfig::findDummyPointScriptConfig(scene_script_config_ptr, &p_name);
      std::string::~string(&p_name);
      if ( dummy_point_config_ptr )
      {
        Vector3::Vector3((Vector3 *const)(v3 + 32), 0.0, 0.0, 0.0);
        v12 = 0LL;
        Vector3::Vector3((Vector3 *const)(v3 + 64), 0.0, 0.0, 0.0);
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Uid = Player::getUid(player);
        Scene::getPlayerLocation(v13, Uid, (Vector3 *)(v3 + 32), (Vector3 *)(v3 + 64));
        *(float *)v12.m128i_i32 = getPlaneDistance((const Vector3 *)(v3 + 32), &dummy_point_config_ptr->pos);
        dis = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
        if ( (float)min_dis <= dis && dis <= (float)max_dis )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_name,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/random_quest_filter.cpp",
            "isFactorValueValid",
            115);
          v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  (common::milog::MiLogStream *const)&p_name,
                  (const char (*)[18])"[RQ_FILTER]value:");
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, value);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])off_259C6B40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_name);
          v10 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_name,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/random_quest_filter.cpp",
            "isFactorValueValid",
            110);
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  (common::milog::MiLogStream *const)&p_name,
                  (const char (*)[18])"[RQ_FILTER]value:");
          v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, value);
          v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v16,
                  (const char (*)[19])" not ok. cur_pos: ");
          v18 = operator<<(v17, (const Vector3 *)(v3 + 32));
          v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])", dummy:");
          operator<<(v19, &dummy_point_config_ptr->pos);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_name);
          v10 = 0;
        }
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 0;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  result = v10;
  if ( v30 == (char *)v3 )
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

// Line 121: range 0000000015C90D02-0000000015C90F26
bool __cdecl RandomQuestNpcFilter::isFactorValueValid(
        RandomQuestNpcFilter *const this,
        Player *player,
        const std::string *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  bool result; // al
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 npc_id:122";
  *(_QWORD *)(v3 + 16) = RandomQuestNpcFilter::isFactorValueValid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<unsigned int>(value, (unsigned int *)(v3 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/random_quest_filter.cpp",
      "isFactorValueValid",
      125);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v11,
           (const char (*)[20])"npc_id is invalid: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, value);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0;
  }
  else
  {
    QuestComp = Player::getQuestComp(player);
    if ( (unsigned __int8)PlayerQuestComp::isNpcOccupied(QuestComp, *(_DWORD *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/quest/random_quest_filter.cpp",
        "isFactorValueValid",
        130);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])off_259C6BE0);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, value);
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  if ( v12 == (char *)v3 )
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

// Line 137: range 0000000015C90F28-0000000015C9129A
bool __cdecl RandomQuestPlayerLevelFilter::isFactorValueValid(
        RandomQuestPlayerLevelFilter *const this,
        Player *player,
        const std::string *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r14
  common::milog::MiLogStream *v7; // rdx
  bool v8; // r14
  std::vector<unsigned int>::reference v9; // rax
  uint32_t *v10; // rdx
  std::vector<unsigned int>::reference v11; // rax
  uint32_t *v12; // rdx
  PlayerBasicComp *BasicComp; // rax
  bool result; // al
  std::allocator<char> __a; // [rsp+23h] [rbp-BDh] BYREF
  uint32_t low_level; // [rsp+24h] [rbp-BCh]
  uint32_t high_level; // [rsp+28h] [rbp-B8h]
  uint32_t player_level; // [rsp+2Ch] [rbp-B4h]
  std::string sep; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 13 level_vec:138";
  *(_QWORD *)(v3 + 16) = RandomQuestPlayerLevelFilter::isFactorValueValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&sep, ",", &__a);
  v6 = common::tools::StringUtils::splitToList<unsigned int>(value, &sep, (std::vector<unsigned int> *)(v3 + 32), 1) != 0;
  std::string::~string(&sep);
  std::allocator<char>::~allocator(&__a);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/random_quest_filter.cpp",
      "isFactorValueValid",
      141);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           (common::milog::MiLogStream *const)&sep,
           (const char (*)[23])"level vec is invalid: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, value);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
    v8 = 0;
  }
  else
  {
    low_level = 0;
    high_level = 0;
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 32)) > 1 )
    {
      v9 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 0LL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      low_level = *v10;
      v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 1uLL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      high_level = *v12;
    }
    BasicComp = Player::getBasicComp(player);
    player_level = PlayerBasicComp::getLevel(BasicComp);
    v8 = player_level <= high_level && player_level >= low_level;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v8;
  if ( v21 == (char *)v3 )
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
