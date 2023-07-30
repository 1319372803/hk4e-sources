// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_rand_quest.cpp

// Line 28: range 0000000015C6B2D0-0000000015C6B33A
int32_t __cdecl SceneEncounterRandQuest::fromBin(
        SceneEncounterRandQuest *const this,
        const proto::SceneEncounterCompBin *comp_bin)
{
  int v2; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+18h] [rbp-18h] BYREF
  int32_t idx; // [rsp+1Ch] [rbp-14h]

  for ( idx = 0; ; ++idx )
  {
    v2 = proto::SceneEncounterCompBin::parent_quest_id_list_size(comp_bin);
    if ( idx >= v2 )
      break;
    __x = proto::SceneEncounterCompBin::parent_quest_id_list(comp_bin, idx);
    std::vector<unsigned int>::push_back(&this->saved_parent_quest_id_vec_, &__x);
  }
  return 0;
};

// Line 37: range 0000000015C6B33C-0000000015C6B406
int32_t __cdecl SceneEncounterRandQuest::toBin(
        const SceneEncounterRandQuest *const this,
        proto::SceneEncounterCompBin *comp_bin)
{
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<SceneEncounterRandQuest::RandQuestInfo> *__for_range; // [rsp+20h] [rbp-10h]
  const SceneEncounterRandQuest::RandQuestInfo *info; // [rsp+28h] [rbp-8h]

  __for_range = &this->rand_quest_vec_;
  __for_begin._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::begin(&this->rand_quest_vec_)._M_current;
  __for_end._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::end(&this->rand_quest_vec_)._M_current;
  while ( __gnu_cxx::operator!=<SceneEncounterRandQuest::RandQuestInfo const*,std::vector<SceneEncounterRandQuest::RandQuestInfo>>(
            &__for_begin,
            &__for_end) )
  {
    info = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo const*,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneEncounterCompBin::add_parent_quest_id_list(comp_bin, info->parent_quest_id);
    __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo const*,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 47: range 0000000015C6B408-0000000015C6B7A9
void __cdecl SceneEncounterRandQuest::clearSavedParentQuestId(SceneEncounterRandQuest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 parent_quest_id:54 64 16 13 player_ptr:48";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandQuest::clearSavedParentQuestId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v1 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "clearSavedParentQuestId",
      51);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    __for_range = &this->saved_parent_quest_id_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->saved_parent_quest_id_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->saved_parent_quest_id_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v4;
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      QuestComp = Player::getQuestComp(v5);
      PlayerQuestComp::tryFailAndRemoveRandomParentQuest(QuestComp, *(_DWORD *)(v1 + 48), 0);
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "clearSavedParentQuestId",
        57);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v15,
             (const char (*)[25])"removeRandomParentQuest ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" owner_uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::clear(&this->saved_parent_quest_id_vec_);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v16 == (char *)v1 )
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

// Line 63: range 0000000015C6B7AA-0000000015C6B825
uint32_t __cdecl SceneEncounterRandQuest::getRemainSlotNum(const SceneEncounterRandQuest *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t max_num; // [rsp+18h] [rbp-18h]
  uint32_t cur_num; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  max_num = ConstValueExcelConfigMgr::getRandTaskQuestNum(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  cur_num = std::vector<SceneEncounterRandQuest::RandQuestInfo>::size(&this->rand_quest_vec_);
  if ( cur_num < max_num )
    return max_num - cur_num;
  else
    return 0;
};

// Line 74: range 0000000015C6B826-0000000015C6C0CF
void __cdecl SceneEncounterRandQuest::onEnterEnvZone(
        SceneEncounterRandQuest *const this,
        Player *player,
        const data::ConfigEnvironmentZone *zone_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerQuestComp *QuestComp; // rax
  PlayerQuestComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  SceneEncounterComp *EncounterComp; // rax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  SceneEncounterComp *v19; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t RandTaskQuestCD; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::string v29; // [rsp+0h] [rbp-150h]
  const data::ConfigEnvironmentZone *zone_configa; // [rsp+8h] [rbp-148h]
  Player *playera; // [rsp+10h] [rbp-140h]
  SceneEncounterRandQuest *thisa; // [rsp+18h] [rbp-138h]
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  uint32_t entrance_id; // [rsp+30h] [rbp-120h]
  uint32_t max_num; // [rsp+34h] [rbp-11Ch]
  uint32_t size; // [rsp+38h] [rbp-118h]
  uint32_t select; // [rsp+3Ch] [rbp-114h]
  std::shared_ptr<Config> v38; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<Config> v39; // [rsp+50h] [rbp-100h] BYREF
  std::string v40; // [rsp+60h] [rbp-F0h] BYREF
  char v41[208]; // [rsp+80h] [rbp-D0h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v29._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v29._M_string_length = (std::string::size_type)zone_config;
  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 holder:75 48 4 12 owner_uid:77 64 16 20 parent_quest_ptr:105 96 24 8 info:102";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandQuest::onEnterEnvZone;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v40, this->world_scene_);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x837u, v29);
  std::string::~string(&v40);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Scene::getOwnerUid((const Scene *const)thisa->world_scene_);
  if ( Player::getUid(playera) == *(_DWORD *)(v3 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
    max_num = ConstValueExcelConfigMgr::getRandTaskQuestNum(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( std::vector<SceneEncounterRandQuest::RandQuestInfo>::size(&thisa->rand_quest_vec_) < max_num )
    {
      entrance_id = 0;
      if ( !std::vector<unsigned int>::empty(&zone_configa->random_quest_entrance_id_list) )
      {
        size = std::vector<unsigned int>::size(&zone_configa->random_quest_entrance_id_list);
        select = common::tools::RandomUtils::rand<int>(0, size - 1);
        if ( select < size )
        {
          v10 = (uint32_t *)std::vector<unsigned int>::operator[](&zone_configa->random_quest_entrance_id_list, select);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          entrance_id = *v10;
        }
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        entrance_id = ConstValueExcelConfigMgr::getRandTaskQuestEntrance(&v11->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      SceneEncounterRandQuest::RandQuestInfo::RandQuestInfo((SceneEncounterRandQuest::RandQuestInfo *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)zone_configa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&zone_configa->level >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 96) = zone_configa->level;
      QuestComp = Player::getQuestComp(playera);
      *(_DWORD *)(v3 + 100) = PlayerQuestComp::tryAcceptRandomQuest(QuestComp, entrance_id, 1);
      v13 = Player::getQuestComp(playera);
      PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v3 + 64), (__int64)v13, *(_DWORD *)(v3 + 100));
      if ( std::operator==<ParentQuest>(0LL, (const std::shared_ptr<ParentQuest> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_encounter_rand_quest.cpp",
          "onEnterEnvZone",
          108);
        v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)&v40,
                (const char (*)[29])"tryAcceptRandomQuest fails: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 100));
        v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EncounterComp = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
        SceneEncounterComp::updateNextRefreshTime(EncounterComp, 0x1Eu);
      }
      else
      {
        v18 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        *(_DWORD *)(v3 + 104) = ParentQuest::getParentTemplateId(v18);
        std::vector<SceneEncounterRandQuest::RandQuestInfo>::push_back(
          &thisa->rand_quest_vec_,
          (const std::vector<SceneEncounterRandQuest::RandQuestInfo>::value_type *)(v3 + 96));
        if ( std::vector<SceneEncounterRandQuest::RandQuestInfo>::size(&thisa->rand_quest_vec_) < max_num )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->world_scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = PlayerWorldScene::getEncounterComp(thisa->world_scene_);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v39);
          v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
          RandTaskQuestCD = ConstValueExcelConfigMgr::getRandTaskQuestCD(&v20->design_config.txt_config_mgr.const_value_config_mgr);
          SceneEncounterComp::updateNextRefreshTime(v19, RandTaskQuestCD);
          std::shared_ptr<Config>::~shared_ptr(&v39);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_encounter_rand_quest.cpp",
          "onEnterEnvZone",
          121);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                (common::milog::MiLogStream *const)&v40,
                (const char (*)[6])"uid: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" zone_index: ");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &zone_configa->index);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" level: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 96));
        v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v27,
                (const char (*)[19])" parent_quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 100));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
        SceneEncounterRandQuest::logRandTaskGen(thisa, (const SceneEncounterRandQuest::RandQuestInfo *)(v3 + 96));
        SceneEncounterRandQuest::registerObserver(thisa);
      }
      std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "onEnterEnvZone",
      80);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[9])"player: ");
    val = Player::getUid(playera);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])off_259BC220);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  if ( v41 == (char *)v3 )
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
};

// Line 132: range 0000000015C6C0D0-0000000015C6C649
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SceneEncounterRandQuest::clear(SceneEncounterRandQuest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  SceneEncounterComp *EncounterComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t RandTaskQuestCD; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::string v13; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<SceneEncounterRandQuest::RandQuestInfo> *__for_range; // [rsp+30h] [rbp-D0h]
  SceneEncounterRandQuest::RandQuestInfo *info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-C0h] BYREF
  std::string v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 10 holder:133 64 16 14 player_ptr:139";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandQuest::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((v13._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v19, *(PlayerWorldScene *const *)(v13._M_string_length + 8));
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x838u, v13);
  std::string::~string(&v19);
  if ( std::vector<SceneEncounterRandQuest::RandQuestInfo>::empty((const std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(v13._M_string_length + 48)) )
  {
    v4 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v13._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v1 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "clear",
        142);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        (common::milog::MiLogStream *const)&v19,
        (const char (*)[19])"getOwnPlayer fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v19);
      v4 = -1;
    }
    else
    {
      __for_range = (std::vector<SceneEncounterRandQuest::RandQuestInfo> *)(v13._M_string_length + 48);
      __for_begin._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::begin((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(v13._M_string_length + 48))._M_current;
      __for_end._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::end((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(v13._M_string_length + 48))._M_current;
      while ( __gnu_cxx::operator!=<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>(
                &__for_begin,
                &__for_end) )
      {
        info = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator*(&__for_begin);
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        QuestComp = Player::getQuestComp(v5);
        if ( *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerQuestComp::tryFailAndRemoveRandomParentQuest(QuestComp, info->parent_quest_id, 1);
        SceneEncounterRandQuest::logRandTaskFinish(
          (SceneEncounterRandQuest *const)v13._M_string_length,
          info,
          0,
          RemoveRandTaskInfoNotify_FinishReason_CLEAR);
        __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator++(&__for_begin);
      }
      std::vector<SceneEncounterRandQuest::RandQuestInfo>::clear((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(v13._M_string_length + 48));
      if ( *(_BYTE *)(((v13._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EncounterComp = PlayerWorldScene::getEncounterComp(*(PlayerWorldScene *const *)(v13._M_string_length + 8));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      RandTaskQuestCD = ConstValueExcelConfigMgr::getRandTaskQuestCD(&v8->design_config.txt_config_mgr.const_value_config_mgr);
      SceneEncounterComp::updateNextRefreshTime(EncounterComp, RandTaskQuestCD);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "clear",
        155);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)&v19,
              (const char (*)[12])"owner_uid: ");
      if ( *(_BYTE *)(((v13._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&v13._anon_0._M_allocated_capacity + 3) = Scene::getOwnerUid(*(const Scene *const *)(v13._M_string_length + 8));
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              (const unsigned int *)&v13._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v11,
        (const char (*)[31])" clear SceneEncounterRandQuest");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v19);
      if ( std::vector<SceneEncounterRandQuest::RandQuestInfo>::empty((const std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(v13._M_string_length + 48)) )
        SceneEncounterRandQuest::unregisterObserver((SceneEncounterRandQuest *const)v13._M_string_length);
      v4 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  result = v4;
  if ( v20 == (char *)v1 )
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
  return result;
};

// Line 166: range 0000000015C6C8B2-0000000015C6CDE4
void __cdecl SceneEncounterRandQuest::registerObserver(SceneEncounterRandQuest *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *v4; // rsi
  Player *v5; // rax
  std::weak_ptr<PlayerWorldScene> *EventComp; // r14
  Player *v7; // rax
  std::weak_ptr<PlayerWorldScene> *v8; // r14
  PlayerEventComp v9; // [rsp+10h] [rbp-F0h] BYREF

  p_M_start = (unsigned __int64)&v9.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "3 48 1 8 func:180 64 16 14 player_ptr:167 96 16 19 world_scene_ptr:173";
  *(_QWORD *)(p_M_start + 16) = SceneEncounterRandQuest::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(p_M_start + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(p_M_start + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v9.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "registerObserver",
      170);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&v9.event_center_,
      (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<PlayerWorldScene>((PlayerWorldScene *)(p_M_start + 96));
    LOBYTE(v4) = 0;
    if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(p_M_start + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v9.event_center_,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "registerObserver",
        176);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)&v9.event_center_,
        (const char (*)[30])"toThisPtr(world_scene_) fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_);
    }
    else
    {
      if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_observer_) )
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 64));
        EventComp = (std::weak_ptr<PlayerWorldScene> *)Player::getEventComp(v5);
        std::function_void_PlayerWorldScene__const_FinishParentQuestEvent___::function_SceneEncounterRandQuest::registerObserver__::_lambda_auto_23__const_auto_24_____(
          (std::function<void(PlayerWorldScene&,const FinishParentQuestEvent&)> *const)&v9.event_center_,
          0);
        std::weak_ptr<PlayerWorldScene>::weak_ptr<PlayerWorldScene,void>(
          (std::weak_ptr<PlayerWorldScene> *const)&v9._M_weak_this._M_refcount,
          (const std::shared_ptr<PlayerWorldScene> *)(p_M_start + 96));
        PlayerEventComp::registerObserver<PlayerWorldScene,FinishParentQuestEvent>(
          &v9,
          EventComp,
          (EventCallback_175 *)&v9._M_weak_this._M_refcount);
        v4 = &v9;
        std::weak_ptr<Observer>::operator=(&this->finish_observer_, (std::weak_ptr<Observer> *)&v9);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
        std::weak_ptr<PlayerWorldScene>::~weak_ptr((std::weak_ptr<PlayerWorldScene> *const)&v9._M_weak_this._M_refcount);
        std::function<void ()(PlayerWorldScene &,FinishParentQuestEvent const&)>::~function((std::function<void(PlayerWorldScene&,const FinishParentQuestEvent&)> *const)&v9.event_center_);
      }
      if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fail_observer_) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_start + 64));
        v8 = (std::weak_ptr<PlayerWorldScene> *)Player::getEventComp(v7);
        std::function_void_PlayerWorldScene__const_FailParentQuestEvent___::function_SceneEncounterRandQuest::registerObserver__::_lambda_auto_23__const_auto_24_____(
          (std::function<void(PlayerWorldScene&,const FailParentQuestEvent&)> *const)&v9.event_center_,
          (SceneEncounterRandQuest::registerObserver::<lambda(auto:23&, const auto:24&)>)v4);
        std::weak_ptr<PlayerWorldScene>::weak_ptr<PlayerWorldScene,void>(
          (std::weak_ptr<PlayerWorldScene> *const)&v9,
          (const std::shared_ptr<PlayerWorldScene> *)(p_M_start + 96));
        PlayerEventComp::registerObserver<PlayerWorldScene,FailParentQuestEvent>(
          (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
          v8,
          (EventCallback_176 *)&v9);
        std::weak_ptr<Observer>::operator=(
          &this->fail_observer_,
          (std::weak_ptr<Observer> *)&v9._M_weak_this._M_refcount);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
        std::weak_ptr<PlayerWorldScene>::~weak_ptr((std::weak_ptr<PlayerWorldScene> *const)&v9);
        std::function<void ()(PlayerWorldScene &,FailParentQuestEvent const&)>::~function((std::function<void(PlayerWorldScene&,const FailParentQuestEvent&)> *const)&v9.event_center_);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v9.event_center_,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "registerObserver",
        200);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)&v9.event_center_,
        (const char (*)[31])"register parent quest observer");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_);
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(p_M_start + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_start + 64));
  if ( &v9.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 0000000015C6C77E-0000000015C6C8B1
void __cdecl SceneEncounterRandQuest::registerObserver::_lambda_auto_23___const_auto_24___::operator()_PlayerWorldScene_FailParentQuestEvent_(
        const SceneEncounterRandQuest::registerObserver::<lambda(auto:23&, const auto:24&)> *const __closure,
        PlayerWorldScene *world_scene,
        const FailParentQuestEvent *event)
{
  unsigned __int64 v3; // rax
  SceneEncounterComp *EncounterComp; // rax
  bool v5; // dl
  bool is_succ; // [rsp+27h] [rbp-9h]
  SceneEncounterRandQuest *rand_quest_ptr; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_random);
  }
  if ( event->is_random )
  {
    if ( *(_BYTE *)(((unsigned __int64)event >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)(event->_vptr_BaseEvent - 1);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    is_succ = std::type_info::operator==(
                *(const std::type_info *const *)v3,
                (const std::type_info *)&`typeinfo for'FinishParentQuestEvent);
    EncounterComp = PlayerWorldScene::getEncounterComp(world_scene);
    rand_quest_ptr = SceneEncounterComp::findSceneEncounterRandQuest(EncounterComp);
    if ( rand_quest_ptr )
    {
      v5 = is_succ;
      if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneEncounterRandQuest::onParentQuestFinish(rand_quest_ptr, event->parent_quest_id, v5);
    }
  }
};

// Line 180: range 0000000015C6C64A-0000000015C6C77D
void __cdecl SceneEncounterRandQuest::registerObserver::_lambda_auto_23___const_auto_24___::operator()_PlayerWorldScene_FinishParentQuestEvent_(
        const SceneEncounterRandQuest::registerObserver::<lambda(auto:23&, const auto:24&)> *const __closure,
        PlayerWorldScene *world_scene,
        const FinishParentQuestEvent *event)
{
  unsigned __int64 v3; // rax
  SceneEncounterComp *EncounterComp; // rax
  bool v5; // dl
  bool is_succ; // [rsp+27h] [rbp-9h]
  SceneEncounterRandQuest *rand_quest_ptr; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_random);
  }
  if ( event->is_random )
  {
    if ( *(_BYTE *)(((unsigned __int64)event >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)(event->_vptr_BaseEvent - 1);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    is_succ = std::type_info::operator==(
                *(const std::type_info *const *)v3,
                (const std::type_info *)&`typeinfo for'FinishParentQuestEvent);
    EncounterComp = PlayerWorldScene::getEncounterComp(world_scene);
    rand_quest_ptr = SceneEncounterComp::findSceneEncounterRandQuest(EncounterComp);
    if ( rand_quest_ptr )
    {
      v5 = is_succ;
      if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneEncounterRandQuest::onParentQuestFinish(rand_quest_ptr, event->parent_quest_id, v5);
    }
  }
};

// Line 204: range 0000000015C6CDE6-0000000015C6D0BF
void __cdecl SceneEncounterRandQuest::unregisterObserver(SceneEncounterRandQuest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Player *v4; // rax
  PlayerEventComp *EventComp; // rax
  Player *v6; // rax
  PlayerEventComp *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:205";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandQuest::unregisterObserver;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "unregisterObserver",
      208);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v8, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_observer_) )
    {
      v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      EventComp = Player::getEventComp(v4);
      PlayerEventComp::unregisterObserver(EventComp, &this->finish_observer_);
      std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->finish_observer_);
    }
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fail_observer_) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v7 = Player::getEventComp(v6);
      PlayerEventComp::unregisterObserver(v7, &this->fail_observer_);
      std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->fail_observer_);
    }
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "unregisterObserver",
      221);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v8,
      (const char (*)[33])"unregister parent quest observer");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 225: range 0000000015C6D158-0000000015C6DC9C
void __fastcall SceneEncounterRandQuest::onParentQuestFinish(
        SceneEncounterRandQuest *const this,
        __int32 parent_quest_id,
        __int8 is_succ)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneEncounterRandQuest::onParentQuestFinish::<lambda(const SceneEncounterRandQuest::RandQuestInfo&)> v6; // r15d
  SceneEncounterRandQuest::RandQuestInfo *M_current; // r14
  std::vector<SceneEncounterRandQuest::RandQuestInfo>::iterator v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerRandTaskComp *RandTaskComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // r14
  __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> >::pointer v15; // rdx
  Player *v16; // rax
  PlayerItemComp *ItemComp; // r14
  Player *v18; // rax
  PlayerRandTaskComp *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> >::pointer v25; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> >::pointer v27; // rdx
  Player *v28; // r14
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> >::pointer v37; // rax
  const SceneEncounterRandQuest::RandQuestInfo *v38; // rax
  SceneEncounterComp *EncounterComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t RandTaskQuestCD; // eax
  Player *v42; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::string v47; // [rsp+0h] [rbp-1A0h]
  std::string v48; // [rsp+0h] [rbp-1A0h]
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  uint32_t reward_num_max; // [rsp+24h] [rbp-17Ch]
  __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > __rhs; // [rsp+28h] [rbp-178h] BYREF
  std::shared_ptr<google::protobuf::Message> v52; // [rsp+30h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+40h] [rbp-160h] BYREF
  ActionReason reason; // [rsp+50h] [rbp-150h] BYREF
  std::string v55; // [rsp+70h] [rbp-130h] BYREF
  char v56[272]; // [rsp+90h] [rbp-110h] BYREF

  *(&v47._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v47._anon_0._M_allocated_capacity) = parent_quest_id;
  v47._anon_0._M_local_buf[0] = is_succ;
  v3 = (unsigned __int64)v56;
  v47._M_string_length = (std::string::size_type)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 10 holder:226 64 1 10 holder:249 80 4 20 reward_config_id:244 96 4 11 drop_id:245 112 4 1"
                        "9 parent_quest_id:224 128 8 8 iter:234 160 16 14 player_ptr:228 192 16 11 log_ptr:250";
  *(_QWORD *)(v3 + 16) = SceneEncounterRandQuest::onParentQuestFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 112) = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](&v55, this->world_scene_);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x838u, v47);
  std::string::~string(&v55);
  if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v3 + 160));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "onParentQuestFinish",
      231);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&v55,
      (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
  }
  else
  {
    v6.__parent_quest_id = *(_DWORD *)(v3 + 112);
    M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::end((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(*(&v48._anon_0._M_allocated_capacity + 1) + 48))._M_current;
    v8._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::begin((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(*(&v48._anon_0._M_allocated_capacity + 1) + 48))._M_current;
    *(__gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *)(v3 + 128) = std::find_if<__gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>,SceneEncounterRandQuest::onParentQuestFinish(unsigned int,bool)::{lambda(SceneEncounterRandQuest::RandQuestInfo const&)#1}>(v8, (__gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> >)M_current, v6);
    __rhs._M_current = std::vector<SceneEncounterRandQuest::RandQuestInfo>::end((std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(*(&v48._anon_0._M_allocated_capacity + 1) + 48))._M_current;
    if ( !__gnu_cxx::operator==<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>(
            (const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *)(v3 + 128),
            &__rhs) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v52);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
      reward_num_max = ConstValueExcelConfigMgr::getRandTaskRewardMaxNum(&v9->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
      if ( v48._anon_0._M_local_buf[0] )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        RandTaskComp = Player::getRandTaskComp(v10);
        if ( reward_num_max > PlayerRandTaskComp::getRewardNum(RandTaskComp) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v53);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
          *(_DWORD *)(v3 + 80) = ConstValueExcelConfigMgr::getRandTaskQuestRewardId(&v13->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v53);
          p_rand_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.rand_task_config_mgr;
          v15 = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 96) = RandTaskExcelConfigMgr::findDropId(
                                   p_rand_task_config_mgr,
                                   *(_DWORD *)(v3 + 80),
                                   v15->zone_level);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          ItemComp = Player::getItemComp(v16);
          ActionReason::ActionReason(&reason, ACTION_REASON_RAND_TASK_HOST, ITEM_LIMIT_RAND_TASK_DROP);
          PlayerItemComp::grantDropItems(ItemComp, *(_DWORD *)(v3 + 96), 1u, &reason, 0LL);
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v19 = Player::getRandTaskComp(v18);
          PlayerRandTaskComp::updateRewardNum(v19);
          if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlayerWorldScene::getOwnerNextTransNo[abi:cxx11](
            &v55,
            *(PlayerWorldScene *const *)(*(&v48._anon_0._M_allocated_capacity + 1) + 8));
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64), 0x83Cu, v48);
          std::string::~string(&v55);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskReward>();
          v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          Uid = Player::getUid(v21);
          proto_log::PlayerLogBodyRandTaskReward::set_owner_uid(v20, Uid);
          v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          proto_log::PlayerLogBodyRandTaskReward::set_drop_id(v23, *(_DWORD *)(v3 + 96));
          v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v25 = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyRandTaskReward::set_zone_level(v24, v25->zone_level);
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          v27 = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v27->quest_config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v27 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->quest_config_id >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyRandTaskReward::set_quest_template_id(v26, v27->quest_config_id);
          v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v53, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskReward,void>(
            &v52,
            (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward> *)(v3 + 192));
          Player::printStatLog(v28, &v52, &v53, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v52);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_encounter_rand_quest.cpp",
            "onParentQuestFinish",
            256);
          v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                  (common::milog::MiLogStream *const)&v55,
                  (const char (*)[6])"uid: ");
          v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          val = Player::getUid(v30);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
          v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v31,
                  (const char (*)[20])" reward_config_id: ");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v3 + 80));
          v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" drop_id: ");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v3 + 96));
          v36 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v35,
                  (const char (*)[21])" quest_template_id: ");
          v37 = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator->((const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)(v3 + 128));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v37->quest_config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
          std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskReward> *const)(v3 + 192));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64));
        }
      }
      v38 = __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo *,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::operator*((const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)(v3 + 128));
      SceneEncounterRandQuest::logRandTaskFinish(
        *((SceneEncounterRandQuest *const *)&v48._anon_0._M_allocated_capacity + 1),
        v38,
        v48._anon_0._M_local_buf[0],
        RemoveRandTaskInfoNotify_FinishReason_FINISH);
      __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo const*,std::vector<SceneEncounterRandQuest::RandQuestInfo>>::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*>(
        (__gnu_cxx::__normal_iterator<const SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *const)&__rhs,
        (const __gnu_cxx::__normal_iterator<SceneEncounterRandQuest::RandQuestInfo*,std::vector<SceneEncounterRandQuest::RandQuestInfo> > *)(v3 + 128));
      std::vector<SceneEncounterRandQuest::RandQuestInfo>::erase(
        (std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(*(&v48._anon_0._M_allocated_capacity + 1) + 48),
        (std::vector<SceneEncounterRandQuest::RandQuestInfo>::const_iterator)__rhs._M_current);
      if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EncounterComp = PlayerWorldScene::getEncounterComp(*(PlayerWorldScene *const *)(*(&v48._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 8));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v53);
      v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
      RandTaskQuestCD = ConstValueExcelConfigMgr::getRandTaskQuestCD(&v40->design_config.txt_config_mgr.const_value_config_mgr);
      SceneEncounterComp::updateNextRefreshTime(EncounterComp, RandTaskQuestCD);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
      v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      QuestComp = Player::getQuestComp(v42);
      PlayerQuestComp::tryFailAndRemoveRandomParentQuest(QuestComp, *(_DWORD *)(v3 + 112), 0);
      if ( std::vector<SceneEncounterRandQuest::RandQuestInfo>::empty((const std::vector<SceneEncounterRandQuest::RandQuestInfo> *const)(*(&v48._anon_0._M_allocated_capacity + 1) + 48)) )
        SceneEncounterRandQuest::unregisterObserver(*((SceneEncounterRandQuest *const *)&v48._anon_0._M_allocated_capacity
                                                    + 1));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "onParentQuestFinish",
        271);
      v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)&v55,
              (const char (*)[18])"parent_quest_id: ");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v44,
              (const unsigned int *)(v3 + 112));
      v46 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])" is_succ: ");
      common::milog::MiLogStream::operator<<(v46, v48._anon_0._M_local_buf[0]);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v55);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v48._M_string_length == v3 )
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
};

// Line 234: range 0000000015C6D0C0-0000000015C6D156
bool __cdecl SceneEncounterRandQuest::onParentQuestFinish(unsigned int,bool)::{lambda(SceneEncounterRandQuest::RandQuestInfo const&)#1}::operator()(
        const SceneEncounterRandQuest::onParentQuestFinish::<lambda(const SceneEncounterRandQuest::RandQuestInfo&)> *const __closure,
        const SceneEncounterRandQuest::RandQuestInfo *info)
{
  uint32_t parent_quest_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  parent_quest_id = info->parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return parent_quest_id == __closure->__parent_quest_id;
};

// Line 276: range 0000000015C6DC9E-0000000015C6DF20
void __cdecl SceneEncounterRandQuest::forceCleanByGM(SceneEncounterRandQuest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:278";
  *(_QWORD *)(v1 + 16) = SceneEncounterRandQuest::forceCleanByGM;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_SceneEncounterBase + 5);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(SceneEncounterRandQuest *const))v4)(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "forceCleanByGM",
      281);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    QuestComp = Player::getQuestComp(v5);
    if ( PlayerQuestComp::forceClearAllRandomQuestByGM(QuestComp, 1) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_encounter_rand_quest.cpp",
        "forceCleanByGM",
        287);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v7,
        (const char (*)[32])"forceClearAllRandomQuest failed");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 294: range 0000000015C6DF22-0000000015C6E296
void __cdecl SceneEncounterRandQuest::logRandTaskGen(
        SceneEncounterRandQuest *const this,
        const SceneEncounterRandQuest::RandQuestInfo *info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  Player *v7; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:295 64 16 11 log_ptr:301";
  *(_QWORD *)(v2 + 16) = SceneEncounterRandQuest::logRandTaskGen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "logRandTaskGen",
      298);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskGen>();
    v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->parent_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskGen::set_parent_quest_id(v5, info->parent_quest_id);
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&info->quest_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->quest_config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskGen::set_quest_template_id(v6, info->quest_config_id);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskGen,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen> *)(v2 + 64));
    Player::printStatLog(v7, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskGen> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
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

// Line 308: range 0000000015C6E298-0000000015C6E5F7
void __cdecl SceneEncounterRandQuest::logRandTaskFinish(
        SceneEncounterRandQuest *const this,
        const SceneEncounterRandQuest::RandQuestInfo *info,
        bool is_succ,
        proto::RemoveRandTaskInfoNotify::FinishReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 player_ptr:309 64 16 11 log_ptr:315";
  *(_QWORD *)(v4 + 16) = SceneEncounterRandQuest::logRandTaskFinish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v4 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_encounter_rand_quest.cpp",
      "logRandTaskFinish",
      312);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRandTaskFinish>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&info->quest_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->quest_config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyRandTaskFinish::set_quest_template_id(v7, info->quest_config_id);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyRandTaskFinish::set_is_succ(v8, is_succ);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRandTaskFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyRandTaskFinish::set_reason(v9, reason);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish> *)(v4 + 64));
    Player::printStatLog(v10, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRandTaskFinish> *const)(v4 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  if ( v16 == (char *)v4 )
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
};
