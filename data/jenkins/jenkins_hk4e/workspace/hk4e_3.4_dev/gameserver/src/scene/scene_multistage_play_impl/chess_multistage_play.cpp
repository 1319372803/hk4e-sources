// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/chess_multistage_play.cpp

// Line 43: range 000000001806446E-0000000018065A97
int32_t __cdecl ChessMultistagePlay::initByParamTable(
        ChessMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // eax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t chess_map_id; // ecx
  char v12; // al
  bool is_teach_map; // cl
  char v14; // dl
  __int64 v15; // rdx
  bool v16; // r14
  bool v17; // r14
  unsigned __int64 v18; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v20; // rdx
  GameserverService *v21; // rax
  unsigned int GameThreadLocal; // eax
  Player *v23; // rcx
  uint32_t valid_chess_level; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v25; // rdx
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int> *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v31; // rdx
  common::milog::MiLogStream *v32; // rax
  const ActivityChessExcelConfigMgr *v33; // rdx
  __int64 v34; // rsi
  common::milog::MiLogStream *v35; // rax
  uint32_t home_hp; // ecx
  char v37; // al
  Group *v38; // r14
  int32_t max_escapable_monsters; // r15d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-1D1h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1D0h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end_0; // [rsp+38h] [rbp-1C8h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-1C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-1B8h] BYREF
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-1B0h]
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+58h] [rbp-1A8h]
  TowerDefensePlay *tower_defense_comp; // [rsp+60h] [rbp-1A0h]
  const std::set<unsigned int> *team_uid_set; // [rsp+68h] [rbp-198h]
  const std::set<unsigned int> *__for_range; // [rsp+70h] [rbp-190h]
  const std::map<unsigned int,std::vector<unsigned int>> *normal_card_pool_map_ptr; // [rsp+78h] [rbp-188h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+80h] [rbp-180h]
  const std::map<unsigned int,unsigned int> *curse_card_weight_map_ptr; // [rsp+88h] [rbp-178h]
  const std::map<unsigned int,unsigned int> *quality_weight_map_ptr; // [rsp+90h] [rbp-170h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+98h] [rbp-168h]
  std::set<unsigned int> *__for_range_3; // [rsp+A0h] [rbp-160h]
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+A8h] [rbp-158h]
  ChessPlayer *chess_player_ptr; // [rsp+B0h] [rbp-150h]
  const std::pair<unsigned int const,unsigned int> *v60; // [rsp+B8h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *quality_0; // [rsp+C0h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+C8h] [rbp-138h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v63; // [rsp+D0h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *quality; // [rsp+D8h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *card_id_vec; // [rsp+E0h] [rbp-120h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+E8h] [rbp-118h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+F0h] [rbp-110h]
  ChessPlayer *chess_player; // [rsp+F8h] [rbp-108h]
  std::shared_ptr<Config> v69; // [rsp+100h] [rbp-100h] BYREF
  common::milog::MiLogStream v70; // [rsp+110h] [rbp-F0h] BYREF
  char v71[208]; // [rsp+130h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 card_id:115 48 4 7 uid:153 64 16 20 dungeon_scene_ptr:44 96 16 24 ban_card_tag_list_ob"
                        "j:72 128 16 13 group_ptr:172";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::initByParamTable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "initByParamTable",
      47);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v70,
      (const char (*)[34])"[CHESS] dungeon scene is nullptr ");
    common::milog::MiLogStream::~MiLogStream(&v70);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v69);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69)->design_config.txt_config_mgr.activity_chess_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v69);
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v6);
    v8 = DungeonId;
    map_config_ptr = ActivityChessExcelConfigMgr::getMapConfigByDungeonId(config_mgr, DungeonId);
    if ( map_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->chess_map_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&map_config_ptr->chess_map_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      chess_map_id = map_config_ptr->chess_map_id;
      v12 = *(_BYTE *)(((unsigned __int64)&this->chess_map_id_ >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(&this->chess_map_id_, v8, (_BYTE)this + 96);
      }
      this->chess_map_id_ = chess_map_id;
      if ( *(char *)(((unsigned __int64)&map_config_ptr->is_teach_map >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&map_config_ptr->is_teach_map);
      is_teach_map = map_config_ptr->is_teach_map;
      v14 = *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store1(&this->is_teach_, v8, v15);
      this->is_teach_ = is_teach_map;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v70, "rounds", &__a);
      v16 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v70,
              &this->total_round_) != 0;
      std::string::~string(&v70);
      std::allocator<char>::~allocator(&__a);
      if ( v16 )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
          "initByParamTable",
          63);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v70,
          (const char (*)[41])"[CHESS] SCRIPT_UTIL.getTableValue failed");
        common::milog::MiLogStream::~MiLogStream(&v70);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->total_round_ )
        {
          luabind::adl::object::object((luabind::adl::object *const)(v2 + 96));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v70, "ban_card_tag_list", &__a);
          v17 = ScriptUtil::getTableValue(
                  &ScriptUtil::no_exception_instance,
                  param_table,
                  (const std::string *)&v70,
                  (luabind::adl::object *)(v2 + 96)) == 0;
          std::string::~string(&v70);
          std::allocator<char>::~allocator(&__a);
          if ( v17 )
            ScriptUtil::getTableValueAsSet<unsigned int>(
              &ScriptUtil::no_exception_instance,
              (const luabind::adl::object *)(v2 + 96),
              &this->ban_card_tag_set_);
          if ( EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<TowerDefensePlay>(&this->EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>) )
          {
            common::milog::MiLogStream::create(
              &v70,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
              "initByParamTable",
              80);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v70,
              (const char (*)[39])"[CHESS] add tower defense comp failed.");
            common::milog::MiLogStream::~MiLogStream(&v70);
            v5 = -1;
          }
          else
          {
            tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
            if ( *(_BYTE *)(((unsigned __int64)tower_defense_comp >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v18 = (unsigned __int64)(tower_defense_comp->_vptr_DescribalBase + 3);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(TowerDefensePlay *))v18)(tower_defense_comp) )
            {
              common::milog::MiLogStream::create(
                &v70,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                "initByParamTable",
                86);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v70,
                (const char (*)[40])"[CHESS] tower defense comp init failed.");
              common::milog::MiLogStream::~MiLogStream(&v70);
              v5 = -1;
            }
            else
            {
              v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              team_uid_set = DungeonScene::getTeamUidSet(v19);
              __for_range = team_uid_set;
              __for_begin._M_node = std::set<unsigned int>::begin(team_uid_set)._M_node;
              __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v20 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 48) = *v20;
                v21 = ServiceBox::findService<GameserverService>();
                GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v21);
                PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 128), GameThreadLocal + 16);
                if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
                {
                  chess_player = std::unordered_map<unsigned int,ChessPlayer>::operator[](
                                   &this->chess_player_map_,
                                   (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v2 + 48));
                  v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  ChessMultistagePlay::initChessPlayer(this, v23, chess_player);
                  if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  valid_chess_level = this->valid_chess_level_;
                  if ( *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)chess_player + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( valid_chess_level < chess_player->chess_level )
                    this->valid_chess_level_ = chess_player->chess_level;
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
                std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              normal_card_pool_map_ptr = ActivityChessExcelConfigMgr::getNormalCardPoolMapByChessLevel(
                                           config_mgr,
                                           this->valid_chess_level_);
              if ( normal_card_pool_map_ptr )
              {
                __for_range_0 = normal_card_pool_map_ptr;
                __for_begin_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(normal_card_pool_map_ptr)._M_node;
                __for_end_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_node;
                while ( std::operator!=(&__for_begin_0, &__for_end_0) )
                {
                  v63 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
                  quality = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v63);
                  card_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v63);
                  __for_range_1 = card_id_vec;
                  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin(card_id_vec)._M_current;
                  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
                  {
                    v25 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
                    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v2 + 32) = *v25;
                    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                                        config_mgr,
                                        *(_DWORD *)(v2 + 32));
                    if ( !card_config_ptr )
                    {
                      common::milog::MiLogStream::create(
                        &v70,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                        "initByParamTable",
                        120);
                      v26 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                              &v70,
                              (const char (*)[59])"[CHESS] findActivityChessCardExcelConfig failed, card_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v2 + 32));
                      common::milog::MiLogStream::~MiLogStream(&v70);
                      v5 = -1;
                      goto LABEL_95;
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->tag >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&card_config_ptr->tag >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v2 + 48) = card_config_ptr->tag;
                    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                            &this->ban_card_tag_set_,
                            (const unsigned int *)(v2 + 48)) )
                    {
                      v27 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                              &this->active_card_pool_map_,
                              quality);
                      std::vector<unsigned int>::push_back(
                        v27,
                        (const std::vector<unsigned int>::value_type *)(v2 + 32));
                    }
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
                  }
                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                curse_card_weight_map_ptr = ActivityChessExcelConfigMgr::getCurseCardWeightMapByChessLevel(
                                              config_mgr,
                                              this->valid_chess_level_);
                if ( curse_card_weight_map_ptr )
                {
                  std::map<unsigned int,unsigned int>::operator=(
                    &this->curse_card_weight_map_,
                    curse_card_weight_map_ptr);
                  if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  quality_weight_map_ptr = ActivityChessExcelConfigMgr::getQualityWeightMapByChessLevel(
                                             config_mgr,
                                             this->valid_chess_level_);
                  if ( quality_weight_map_ptr )
                  {
                    std::map<unsigned int,unsigned int>::operator=(&this->quality_weight_map_, quality_weight_map_ptr);
                    __for_range_2 = &this->quality_weight_map_;
                    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->quality_weight_map_)._M_node;
                    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
                    while ( std::operator!=(
                              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
                    {
                      v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
                      quality_0 = std::get<0ul,unsigned int const,unsigned int>(v60);
                      weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v60);
                      common::milog::MiLogStream::create(
                        &v70,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                        "initByParamTable",
                        149);
                      v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                              &v70,
                              (const char (*)[18])"[CHESS] quality: ");
                      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, quality_0);
                      v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v29,
                              (const char (*)[11])" ,weight: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, weight);
                      common::milog::MiLogStream::~MiLogStream(&v70);
                      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
                    }
                    __for_range_3 = &this->player_uid_set_;
                    __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
                    __for_end._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
                    while ( std::operator!=(&__for_begin, &__for_end) )
                    {
                      v31 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v2 + 48) = *v31;
                      chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                                           &this->chess_player_map_,
                                           (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v2 + 48));
                      if ( !chess_player_ptr )
                      {
                        common::milog::MiLogStream::create(
                          &v70,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                          "initByParamTable",
                          158);
                        v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                &v70,
                                (const char (*)[40])"[CHESS] find chess player failed, uid: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v32,
                          (const unsigned int *)(v2 + 48));
                        common::milog::MiLogStream::~MiLogStream(&v70);
                        v5 = -1;
                        goto LABEL_95;
                      }
                      ChessMultistagePlay::refreshPlayerCandidateCards(this, chess_player_ptr, 0);
                      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
                    }
                    v33 = config_mgr;
                    if ( *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->valid_chess_level_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    v34 = this->valid_chess_level_;
                    level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                                         v33,
                                         v34);
                    if ( level_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->home_hp >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->home_hp >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      home_hp = level_config_ptr->home_hp;
                      v37 = *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000);
                      if ( v37 != 0 && v37 <= 3 )
                      {
                        LOBYTE(v34) = v37 != 0;
                        __asan_report_store4(&this->max_escapable_monsters_, v34, (_BYTE)this - 32);
                      }
                      this->max_escapable_monsters_ = home_hp;
                      std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 128));
                      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
                      {
                        v38 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                        if ( *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4();
                        }
                        max_escapable_monsters = this->max_escapable_monsters_;
                        std::allocator<char>::allocator(&__a);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)&v70,
                          "max_escapable_monsters",
                          &__a);
                        Group::setVariableValue(v38, (const std::string *)&v70, max_escapable_monsters);
                        std::string::~string(&v70);
                        std::allocator<char>::~allocator(&__a);
                      }
                      v5 = 0;
                      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v70,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                        "initByParamTable",
                        168);
                      v35 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                              &v70,
                              (const char (*)[51])"[CHESS] findActivityChessLevelExcelConfig, level: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v35,
                        &this->valid_chess_level_);
                      common::milog::MiLogStream::~MiLogStream(&v70);
                      v5 = -1;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v70,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                      "initByParamTable",
                      143);
                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v70,
                      (const char (*)[42])"[CHESS] quality_weight_map_ptr is nullptr");
                    common::milog::MiLogStream::~MiLogStream(&v70);
                    v5 = -1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v70,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                    "initByParamTable",
                    134);
                  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v70,
                    (const char (*)[45])"[CHESS] curse_card_weight_map_ptr is nullptr");
                  common::milog::MiLogStream::~MiLogStream(&v70);
                  v5 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v70,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                  "initByParamTable",
                  110);
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v70,
                  (const char (*)[44])"[CHESS] normal_card_pool_map_ptr is nullptr");
                common::milog::MiLogStream::~MiLogStream(&v70);
                v5 = -1;
              }
            }
          }
LABEL_95:
          luabind::adl::object::~object((luabind::adl::object *const)(v2 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v70,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
            "initByParamTable",
            68);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v70,
            (const char (*)[25])"[CHESS] total_round_ = 0");
          common::milog::MiLogStream::~MiLogStream(&v70);
          v5 = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v70,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "initByParamTable",
        55);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v70,
             (const char (*)[53])"[CHESS] getMapConfigByDungeonId failed, dungeon_id: ");
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(_DWORD *)(v2 + 48) = DungeonScene::getDungeonId(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v70);
      v5 = -1;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  result = v5;
  if ( v71 == (char *)v2 )
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

// Line 182: range 0000000018065A98-0000000018065B78
int32_t __cdecl ChessMultistagePlay::initStage(
        ChessMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  char *val; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned int)(stage_type - 7) > 1 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "initStage",
      189);
    v5 = common::milog::MiLogStream::operator<<<ChessMultistagePlay,(ChessMultistagePlay*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" stage type: ");
    val = (char *)data::getDescription(stage_type);
    v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not supported.");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  return 0;
};

// Line 197: range 0000000018065B7A-0000000018065F79
int32_t __cdecl ChessMultistagePlay::toClient(const ChessMultistagePlay *const this, proto::MultistagePlayInfo *info)
{
  uint32_t CurRound; // eax
  proto::ChessPlayerInfo *v4; // rdx
  google::protobuf::RepeatedPtrField<proto::ChessCardInfo> *v5; // rdx
  proto::ChessMysteryInfo *v6; // rdx
  google::protobuf::uint32 *v7; // rdx
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::InBattleChessInfo *chess_info; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::ChessPlayerInfo> *player_info_map; // [rsp+30h] [rbp-60h]
  const std::unordered_map<unsigned int,ChessPlayer> *__for_range; // [rsp+38h] [rbp-58h]
  const std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,ChessPlayer> *v14; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,ChessPlayer> >::type *_; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *chess_player; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "toClient",
      200);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v17,
      (const char (*)[45])"[CHESS] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    chess_info = proto::MultistagePlayInfo::mutable_chess_info(info);
    CurRound = ChessMultistagePlay::getCurRound(this);
    proto::InBattleChessInfo::set_round(chess_info, CurRound);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleChessInfo::set_total_round(chess_info, this->total_round_);
    if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleChessInfo::set_left_monsters(chess_info, this->left_monsters_);
    if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleChessInfo::set_excaped_monsters(chess_info, this->escaped_monsters_);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_escapable_monsters_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleChessInfo::set_max_escapable_monsters(chess_info, this->max_escapable_monsters_);
    player_info_map = proto::InBattleChessInfo::mutable_player_info_map(chess_info);
    __for_range = &this->chess_player_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,ChessPlayer>::begin(&this->chess_player_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,ChessPlayer>::end(&this->chess_player_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,ChessPlayer>,false>(&__for_begin, &__for_end) )
    {
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,ChessPlayer>(v14);
      chess_player = (std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *)std::get<1ul,unsigned int const,ChessPlayer>(v14);
      v4 = google::protobuf::Map<unsigned int,proto::ChessPlayerInfo>::operator[](player_info_map, &chess_player->uid);
      ChessMultistagePlay::fillChessPlayerInfo(this, chess_player, v4);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator++(&__for_begin);
    }
    v5 = proto::InBattleChessInfo::mutable_selected_card_info_list(chess_info);
    ChessMultistagePlay::fillSelectedCardIdList(this, v5);
    v6 = proto::InBattleChessInfo::mutable_mystery_info(chess_info);
    ChessMultistagePlay::fillChessMysteryInfo(this, v6);
    __for_range_0 = &this->ban_card_tag_set_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::set<unsigned int>::begin(&this->ban_card_tag_set_)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v7 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleChessInfo::add_ban_card_tag_list(chess_info, *v7);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    return 0;
  }
};

// Line 231: range 0000000018065F7A-000000001806656B
void __cdecl ChessMultistagePlay::regValueSetters(ChessMultistagePlay *const this)
{
  ChessMultistagePlay **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  std::function<void(unsigned int)> *v3; // rax
  ChessMultistagePlay **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *p_value_setter_map; // rbx
  std::function<void(unsigned int)> *v7; // rax
  ChessMultistagePlay **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v10; // rbx
  std::function<void(unsigned int)> *v11; // rax
  ChessMultistagePlay **v12; // r8
  const std::_Placeholder<1> *v13; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v14; // rbx
  std::function<void(unsigned int)> *v15; // rax
  ChessMultistagePlay **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v18; // rbx
  std::function<void(unsigned int)> *v19; // rax
  ChessMultistagePlay **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::unordered_map<std::string,std::function<void(unsigned int)>> *v22; // rbx
  std::function<void(unsigned int)> *v23; // rax
  __m128i v24; // [rsp+0h] [rbp-D0h] BYREF
  __m128i v25; // [rsp+10h] [rbp-C0h] BYREF
  __m128i v26; // [rsp+20h] [rbp-B0h] BYREF
  ChessMultistagePlay *thisa; // [rsp+38h] [rbp-98h]
  std::allocator<char> __a; // [rsp+47h] [rbp-89h] BYREF
  ChessMultistagePlay *v29; // [rsp+48h] [rbp-88h] BYREF
  void (*__f[2])(ChessMultistagePlay *, unsigned int); // [rsp+50h] [rbp-80h] BYREF
  std::_Bind_helper<false,void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,const std::_Placeholder<1>&>::type v31; // [rsp+60h] [rbp-70h] BYREF
  std::string __k; // [rsp+80h] [rbp-50h] BYREF

  thisa = this;
  v29 = this;
  __f[0] = (void (*)(ChessMultistagePlay *, unsigned int))ChessMultistagePlay::setCurRound;
  __f[1] = 0LL;
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "round", &__a);
  v3 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](&this->value_setter_map_, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v3,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v29 = this;
  v24.m128i_i64[0] = (__int64)ChessMultistagePlay::setTotalRound;
  v24.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v24);
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v4,
    v5);
  p_value_setter_map = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "rounds", &__a);
  v7 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](p_value_setter_map, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v7,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v29 = thisa;
  v25.m128i_i64[0] = (__int64)ChessMultistagePlay::setLeftMonsters;
  v25.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v25);
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v8,
    v9);
  v10 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "left_monsters", &__a);
  v11 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v10, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v11,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v29 = thisa;
  v26.m128i_i64[0] = (__int64)ChessMultistagePlay::setEscapedMonsters;
  v26.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v26);
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v12,
    v13);
  v14 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "escaped_monsters", &__a);
  v15 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v14, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v15,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v29 = thisa;
  __f[0] = (void (*)(ChessMultistagePlay *, unsigned int))ChessMultistagePlay::setMaxEscapableMonsters;
  __f[1] = 0LL;
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v16,
    v17);
  v18 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "max_escapable_monsters", &__a);
  v19 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v18, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v19,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  v29 = thisa;
  __f[0] = (void (*)(ChessMultistagePlay *, unsigned int))ChessMultistagePlay::setStageBonusBuildingPoints;
  __f[1] = 0LL;
  std::bind<void (ChessMultistagePlay::*)(unsigned int),ChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v31,
    __f,
    &v29,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v20,
    v21);
  v22 = &thisa->value_setter_map_;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "stage_bonus_building_points", &__a);
  v23 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](v22, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (ChessMultistagePlay::*)(unsigned int) ()(ChessMultistagePlay*,std::_Placeholder<1>)>>(
    v23,
    &v31);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
};

// Line 241: range 000000001806656C-000000001806671E
void __cdecl ChessMultistagePlay::onStageEnd(ChessMultistagePlay *const this, bool is_succ)
{
  uint32_t v2; // ebx
  std::map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  uint32_t *v5; // rdx
  char v6; // cl
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-1Ch] BYREF
  uint32_t stage_cost_time; // [rsp+18h] [rbp-18h]
  uint32_t stage_end_scene_time; // [rsp+1Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_CHESS_KILL )
  {
    stage_cost_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    stage_end_scene_time = Scene::getSceneTimeSeconds(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( stage_end_scene_time > this->stage_begin_scene_time_ )
      stage_cost_time = stage_end_scene_time - this->stage_begin_scene_time_;
    v2 = stage_cost_time;
    __k = ChessMultistagePlay::getCurRound(this);
    p_k = &__k;
    v4 = std::map<unsigned int,unsigned int>::operator[](&this->kill_stage_cost_time_map_, &__k);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(p_k) = v6 != 0;
      __asan_report_store4(v4, p_k, (_BYTE)v4);
    }
    *v5 = v2;
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->kill_stage_cost_time_ += stage_cost_time;
  }
};

// Line 258: range 0000000018066748-00000000180669E6
void __cdecl ChessMultistagePlay::onEnd(ChessMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *p_play_index; // rdi
  bool v6; // cl
  uint32_t play_index; // edx
  uint32_t group_id; // esi
  TowerDefensePlay *TowerDefenseComp; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(TowerDefensePlay *, std::function<ForeachPolicy(FoundationComp&)> *); // r15
  std::function<ForeachPolicy(FoundationComp&)> v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:259";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::onEnd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    p_play_index = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = is_succ;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      p_play_index = (DungeonScene *)&this->play_index_;
      __asan_report_load4();
    }
    play_index = this->play_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_play_index = (DungeonScene *)&this->group_id_;
      __asan_report_load4();
    }
    group_id = this->group_id_;
    DungeonScene::onMultistagePlayEnd(p_play_index, group_id, play_index, v6);
    TowerDefenseComp = ChessMultistagePlay::getTowerDefenseComp(this);
    if ( *(_BYTE *)(((unsigned __int64)TowerDefenseComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(TowerDefenseComp->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(void (__fastcall **)(TowerDefensePlay *, std::function<ForeachPolicy(FoundationComp&)> *))v10;
    std::function<ForeachPolicy ()(FoundationComp &)>::function<ChessMultistagePlay::onEnd(bool)::{lambda(FoundationComp &)#1},void,void>(
      &v13,
      (ChessMultistagePlay::onEnd::<lambda(FoundationComp&)>)group_id);
    v11(TowerDefenseComp, &v13);
    std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v13);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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

// Line 265: range 0000000018066720-0000000018066747
ForeachPolicy __cdecl ChessMultistagePlay::onEnd(bool)::{lambda(FoundationComp &)#1}::operator()(
        const ChessMultistagePlay::onEnd::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  FoundationComp::setIsPlayEnd(foundation_comp, 1);
  return 0;
};

// Line 274: range 00000000180669E8-0000000018066B87
void __cdecl ChessMultistagePlay::onPlayerEnter(ChessMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned __int64 TowerDefenseComp; // rax
  unsigned __int64 v4; // rdx
  std::unordered_map<unsigned int,ChessPlayer>::key_type key; // [rsp+14h] [rbp-3Ch] BYREF
  ChessPlayer *chess_player_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  key = Player::getUid(player);
  chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                       &this->chess_player_map_,
                       &key);
  if ( chess_player_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->candidate_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chess_player_ptr->candidate_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !chess_player_ptr->candidate_index )
      ChessMultistagePlay::refreshPlayerCandidateCards(this, chess_player_ptr, 0);
    SceneMultistagePlay::notifyStage(this);
    TowerDefenseComp = (unsigned __int64)ChessMultistagePlay::getTowerDefenseComp(this);
    if ( *(_BYTE *)((TowerDefenseComp >> 3) + 0x7FFF8000) )
      TowerDefenseComp = __asan_report_load8();
    v4 = *(_QWORD *)TowerDefenseComp + 120LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      TowerDefenseComp = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Player *))v4)(TowerDefenseComp, player);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "onPlayerEnter",
      278);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v7,
           (const char (*)[40])"[CHESS] find chess player failed, uid: ");
    key = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &key);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 292: range 0000000018066B88-0000000018066DF4
void __cdecl ChessMultistagePlay::onLeaveScene(ChessMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ChessActivity *v6; // rax
  std::unordered_map<unsigned int,ChessPlayer>::key_type key; // [rsp+14h] [rbp-9Ch] BYREF
  ChessPlayer *chess_player_ptr; // [rsp+18h] [rbp-98h]
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 dungeon_scene_ptr:293 64 16 16 activity_ptr:302";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::onLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonResult(v5) == DUNGEON_RESULT_NONE )
    {
      Player::getActivityComp(player);
      PlayerActivityComp::findOpenningActivity<ChessActivity>((PlayerActivityComp *const)(v2 + 64));
      if ( std::operator!=<ChessActivity>(0LL, (const std::shared_ptr<ChessActivity> *)(v2 + 64)) )
      {
        v6 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        ChessActivity::dealPunish(v6);
      }
      key = Player::getUid(player);
      chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                           &this->chess_player_map_,
                           &key);
      if ( chess_player_ptr )
        ChessMultistagePlay::tryUpdateStandbyPool(this, chess_player_ptr);
      std::shared_ptr<ChessActivity>::~shared_ptr((std::shared_ptr<ChessActivity> *const)(v2 + 64));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
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

// Line 318: range 0000000018066DF6-000000001806786F
__int64 __fastcall ChessMultistagePlay::pickCard(
        ChessMultistagePlay *const this,
        Player *player,
        uint32_t card_id,
        uint32_t card_index,
        __m128i a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 result; // rax
  signed int card_cost; // [rsp+24h] [rbp-11Ch]
  uint32_t discount_cost_points; // [rsp+2Ch] [rbp-114h]
  uint32_t cost_points; // [rsp+30h] [rbp-110h]
  int ret; // [rsp+34h] [rbp-10Ch]
  int reta; // [rsp+34h] [rbp-10Ch]
  uint32_t pick_index; // [rsp+38h] [rbp-108h]
  uint32_t curse_pick_index; // [rsp+3Ch] [rbp-104h]
  TowerDefensePlay *tower_defense_comp; // [rsp+40h] [rbp-100h]
  ChessPlayer *chess_player_ptr; // [rsp+48h] [rbp-F8h]
  ChessCandidateCard *candidate_card; // [rsp+50h] [rbp-F0h]
  proto::ChessNormalCardInfo *proto_normal_card_info; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v37; // [rsp+60h] [rbp-E0h] BYREF
  char v38[208]; // [rsp+70h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 uid:320 64 4 17 curse_card_id:385 80 4 11 card_id:317 96 32 20 pick_card_notify:376";
  *(_QWORD *)(v5 + 16) = ChessMultistagePlay::pickCard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 80) = card_id;
  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  *(_DWORD *)(v5 + 48) = Player::getUid(player);
  chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                       &this->chess_player_map_,
                       (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v5 + 48));
  if ( !chess_player_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "pickCard",
      324);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v5 + 96),
           (const char (*)[40])"[CHESS] find chess player failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
    v9 = -1;
    goto LABEL_40;
  }
  if ( card_index >= std::vector<ChessCandidateCard>::size(&chess_player_ptr->candidate_card_vec) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "pickCard",
      331);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v5 + 96),
            (const char (*)[34])"[CHESS] card_index invalid, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
    v9 = -1;
    goto LABEL_40;
  }
  candidate_card = std::vector<ChessCandidateCard>::operator[](&chess_player_ptr->candidate_card_vec, card_index);
  if ( *(_BYTE *)(((unsigned __int64)candidate_card >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)candidate_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)candidate_card >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( candidate_card->card_id != *(_DWORD *)(v5 + 80) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "pickCard",
      339);
    v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v5 + 96),
            (const char (*)[32])"[CHESS] card_id mismatch, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
    v9 = -1;
    goto LABEL_40;
  }
  card_cost = TowerDefensePlay::getCardCost(tower_defense_comp, *(_DWORD *)(v5 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_free >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)candidate_card + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_free >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&candidate_card->is_free);
  }
  if ( candidate_card->is_free )
  {
    card_cost = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    *(float *)a5.m128i_i32 = ConstValueExcelConfigMgr::getChessPickCardDiscountRatio(&v12->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    discount_cost_points = (int)(float)((float)card_cost * COERCE_FLOAT(_mm_cvtsi128_si32(a5)));
    if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)candidate_card + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&candidate_card->is_attach_curse);
    }
    if ( candidate_card->is_attach_curse )
      v13 = discount_cost_points;
    else
      v13 = card_cost;
    cost_points = v13;
    ret = TowerDefensePlay::checkSubBuildingPoints(tower_defense_comp, *(_DWORD *)(v5 + 48), v13);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "pickCard",
        357);
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)(v5 + 96),
              (const char (*)[42])"[CHESS] building_points not enough, uid: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" ,card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
      v9 = ret;
      goto LABEL_40;
    }
    reta = TowerDefensePlay::subBuildingPoints(tower_defense_comp, *(_DWORD *)(v5 + 48), cost_points);
    if ( reta )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "pickCard",
        363);
      v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)(v5 + 96),
              (const char (*)[41])"[CHESS] sub building point failed, uid: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" ,card_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
      v9 = reta;
      goto LABEL_40;
    }
  }
  pick_index = ChessMultistagePlay::getNextPickIndex(this);
  LODWORD(v37._M_ptr) = *(_DWORD *)(v5 + 80);
  HIDWORD(v37._M_ptr) = ChessMultistagePlay::getCurRound(this);
  LODWORD(v37._M_refcount._M_pi) = pick_index;
  HIDWORD(v37._M_refcount._M_pi) = *(_DWORD *)(v5 + 48);
  std::vector<ChessSelectedCard>::push_back(
    &this->selected_card_vec_,
    (std::vector<ChessSelectedCard>::value_type *)&v37);
  TowerDefensePlay::takeCardEffect(tower_defense_comp, player, *(_DWORD *)(v5 + 80), pick_index);
  TowerDefensePlay::onSelectCard(tower_defense_comp, player, *(_DWORD *)(v5 + 80));
  v20 = ((_BYTE)candidate_card + 12) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&candidate_card->is_picked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_picked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&candidate_card->is_picked, v20, v21);
  candidate_card->is_picked = 1;
  proto::ChessPickCardNotify::ChessPickCardNotify((proto::ChessPickCardNotify *const)(v5 + 96));
  proto_normal_card_info = proto::ChessPickCardNotify::mutable_normal_card_info((proto::ChessPickCardNotify *const)(v5 + 96));
  proto::ChessNormalCardInfo::set_card_id(proto_normal_card_info, *(_DWORD *)(v5 + 80));
  proto::ChessNormalCardInfo::set_cost_points(proto_normal_card_info, card_cost);
  if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)candidate_card + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&candidate_card->is_attach_curse);
  }
  proto::ChessNormalCardInfo::set_is_attach_curse(proto_normal_card_info, candidate_card->is_attach_curse);
  if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)candidate_card + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&candidate_card->is_attach_curse);
  }
  if ( candidate_card->is_attach_curse )
  {
    *(_DWORD *)(v5 + 64) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&candidate_card->specified_curse_card_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)candidate_card + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&candidate_card->specified_curse_card_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( candidate_card->specified_curse_card_id )
      *(_DWORD *)(v5 + 64) = candidate_card->specified_curse_card_id;
    else
      common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        &this->curse_card_weight_map_,
        (unsigned int *)(v5 + 64),
        0);
    if ( *(_DWORD *)(v5 + 64) )
    {
      curse_pick_index = ChessMultistagePlay::getNextPickIndex(this);
      LODWORD(v37._M_ptr) = *(_DWORD *)(v5 + 64);
      HIDWORD(v37._M_ptr) = ChessMultistagePlay::getCurRound(this);
      LODWORD(v37._M_refcount._M_pi) = curse_pick_index;
      HIDWORD(v37._M_refcount._M_pi) = *(_DWORD *)(v5 + 48);
      std::vector<ChessSelectedCard>::push_back(
        &this->selected_card_vec_,
        (std::vector<ChessSelectedCard>::value_type *)&v37);
      proto::ChessPickCardNotify::set_curse_card_id((proto::ChessPickCardNotify *const)(v5 + 96), *(_DWORD *)(v5 + 64));
      TowerDefensePlay::takeCardEffect(tower_defense_comp, player, *(_DWORD *)(v5 + 64), curse_pick_index);
      TowerDefensePlay::onSelectCard(tower_defense_comp, player, *(_DWORD *)(v5 + 64));
    }
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v5 + 96));
  ChessMultistagePlay::refreshPlayerCandidateCards(this, chess_player_ptr, 0);
  ChessMultistagePlay::notifyChessPlayerInfo(this, player, chess_player_ptr);
  ChessMultistagePlay::broadcastSelectedCards(this);
  v9 = 0;
  proto::ChessPickCardNotify::~ChessPickCardNotify((proto::ChessPickCardNotify *const)(v5 + 96));
LABEL_40:
  result = v9;
  if ( v38 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 414: range 0000000018067870-0000000018067E59
int32_t __cdecl ChessMultistagePlay::manualRefreshCards(ChessMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  uint32_t free_refresh_count; // ecx
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int ret; // [rsp+14h] [rbp-CCh]
  TowerDefensePlay *tower_defense_comp; // [rsp+18h] [rbp-C8h]
  ChessPlayer *chess_player_ptr; // [rsp+20h] [rbp-C0h]
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:416 64 4 23 refresh_cost_points:438";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::manualRefreshCards;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                       &this->chess_player_map_,
                       (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v2 + 48));
  if ( !chess_player_ptr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "manualRefreshCards",
      420);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"[CHESS] find chess player failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->free_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&chess_player_ptr->free_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  free_refresh_count = chess_player_ptr->free_refresh_count;
  if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->free_refresh_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)chess_player_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player_ptr->free_refresh_limit >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( free_refresh_count >= chess_player_ptr->free_refresh_limit )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_chess_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chess_player_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                         p_activity_chess_config_mgr,
                         chess_player_ptr->chess_level);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( !level_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "manualRefreshCards",
        434);
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v17,
             (const char (*)[51])"[CHESS] findActivityChessLevelExcelConfig, level: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &chess_player_ptr->chess_level);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_cost >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = level_config_ptr->card_cost;
    TowerDefensePlay::procRefreshCost(tower_defense_comp, (uint32_t *)(v2 + 64), *(_DWORD *)(v2 + 48));
    ret = TowerDefensePlay::checkSubBuildingPoints(tower_defense_comp, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "manualRefreshCards",
        443);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v17,
              (const char (*)[42])"[CHESS] building_points not enough, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = ret;
      goto LABEL_23;
    }
    if ( TowerDefensePlay::subBuildingPoints(tower_defense_comp, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "manualRefreshCards",
        449);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v17,
              (const char (*)[41])"[CHESS] sub building point failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
      goto LABEL_23;
    }
  }
  else
  {
    ++chess_player_ptr->free_refresh_count;
  }
  ChessMultistagePlay::refreshPlayerCandidateCards(this, chess_player_ptr, 1);
  ChessMultistagePlay::notifyChessPlayerInfo(this, player, chess_player_ptr);
  result = 0;
LABEL_23:
  if ( v18 == (char *)v2 )
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
  return result;
};

// Line 460: range 0000000018067E5A-000000001806836F
void __cdecl ChessMultistagePlay::initChessPlayer(
        ChessMultistagePlay *const this,
        Player *player,
        ChessPlayer *chess_player)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  uint32_t Uid; // edx
  char v12; // al
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  uint32_t free_card_count; // ecx
  char v17; // dl
  bool v18; // dl
  TowerDefensePlay *TowerDefenseComp; // rcx
  PlayerExhibitionComp *ExhibitionComp; // r14
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t ExhibitionSeriesId; // eax
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 chess_level:468 64 16 16 activity_ptr:461";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::initChessPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChessActivity>((PlayerActivityComp *const)(v3 + 64));
  if ( std::operator==<ChessActivity>(0LL, (const std::shared_ptr<ChessActivity> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "initChessPlayer",
      464);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"[CHESS] findOpenningActivity failed, uid: ");
    *(_DWORD *)(v3 + 48) = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v7 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(_DWORD *)(v3 + 48) = ChessActivity::getLevel(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    v9 = *(unsigned int *)(v3 + 48);
    level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                         &v8->design_config.txt_config_mgr.activity_chess_config_mgr,
                         v9);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( level_config_ptr )
    {
      Uid = Player::getUid(player);
      v12 = *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(chess_player, v9, Uid);
      }
      chess_player->uid = Uid;
      v13 = *(_DWORD *)(v3 + 48);
      v14 = *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v14 != 0;
      v15 = v14 != 0 && (char)((((_BYTE)chess_player + 4) & 7) + 3) >= v14;
      if ( v15 )
        __asan_report_store4(&chess_player->chess_level, v9, v15);
      chess_player->chess_level = v13;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->free_card_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->free_card_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      free_card_count = level_config_ptr->free_card_count;
      v17 = *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_limit >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v17 != 0;
      v18 = v17 != 0 && (char)((((_BYTE)chess_player + 12) & 7) + 3) >= v17;
      if ( v18 )
        __asan_report_store4(&chess_player->free_refresh_limit, v9, v18);
      chess_player->free_refresh_limit = free_card_count;
      if ( *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&chess_player->free_refresh_count, v9, (_BYTE)chess_player + 16);
      }
      chess_player->free_refresh_count = 0;
      TowerDefenseComp = ChessMultistagePlay::getTowerDefenseComp(this);
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->initial_build >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->initial_build >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      TowerDefensePlay::initPlayerInfo(TowerDefenseComp, player, level_config_ptr->initial_build);
      ExhibitionComp = Player::getExhibitionComp(player);
      v21 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      ExhibitionSeriesId = ChessActivity::getExhibitionSeriesId(v21);
      PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(ExhibitionComp, ExhibitionSeriesId);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "initChessPlayer",
        472);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v27,
              (const char (*)[51])"[CHESS] findActivityChessLevelExcelConfig, level: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  std::shared_ptr<ChessActivity>::~shared_ptr((std::shared_ptr<ChessActivity> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
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
};

// Line 487: range 0000000018068370-00000000180686ED
void __cdecl ChessMultistagePlay::fillChessPlayerInfo(
        const ChessMultistagePlay *const this,
        const ChessPlayer *chess_player,
        proto::ChessPlayerInfo *proto_chess_player_info)
{
  google::protobuf::uint32 v3; // eax
  google::protobuf::uint32 BuildingPoints; // edx
  uint32_t RefreshCost; // edx
  uint32_t card_cost; // [rsp+2Ch] [rbp-34h]
  std::vector<ChessCandidateCard>::const_iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::vector<ChessCandidateCard>::const_iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  TowerDefensePlay *tower_defense_comp; // [rsp+40h] [rbp-20h]
  const std::vector<ChessCandidateCard> *__for_range; // [rsp+48h] [rbp-18h]
  const ChessCandidateCard *candidate_card; // [rsp+50h] [rbp-10h]
  proto::ChessNormalCardInfo *proto_card_info; // [rsp+58h] [rbp-8h]

  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  if ( *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessPlayerInfo::set_uid(proto_chess_player_info, chess_player->uid);
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)chess_player + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_limit >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ChessPlayerInfo::set_free_refresh_limit(proto_chess_player_info, chess_player->free_refresh_limit);
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&chess_player->free_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessPlayerInfo::set_free_refresh_count(proto_chess_player_info, chess_player->free_refresh_count);
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessPlayerInfo::set_candidate_index(proto_chess_player_info, chess_player->candidate_index);
  __for_range = &chess_player->candidate_card_vec;
  __for_begin._M_current = std::vector<ChessCandidateCard>::begin(&chess_player->candidate_card_vec)._M_current;
  __for_end._M_current = std::vector<ChessCandidateCard>::end(&chess_player->candidate_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<ChessCandidateCard const*,std::vector<ChessCandidateCard>>(&__for_begin, &__for_end) )
  {
    candidate_card = __gnu_cxx::__normal_iterator<ChessCandidateCard const*,std::vector<ChessCandidateCard>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)candidate_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)candidate_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)candidate_card >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    card_cost = TowerDefensePlay::getCardCost(tower_defense_comp, candidate_card->card_id);
    proto_card_info = proto::ChessPlayerInfo::add_candidate_card_info_list(proto_chess_player_info);
    if ( *(_BYTE *)(((unsigned __int64)candidate_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)candidate_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)candidate_card >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChessNormalCardInfo::set_card_id(proto_card_info, candidate_card->card_id);
    if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_free >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)candidate_card + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_free >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&candidate_card->is_free);
    }
    if ( candidate_card->is_free )
      v3 = 0;
    else
      v3 = card_cost;
    proto::ChessNormalCardInfo::set_cost_points(proto_card_info, v3);
    if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)candidate_card + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_attach_curse >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&candidate_card->is_attach_curse);
    }
    proto::ChessNormalCardInfo::set_is_attach_curse(proto_card_info, candidate_card->is_attach_curse);
    __gnu_cxx::__normal_iterator<ChessCandidateCard const*,std::vector<ChessCandidateCard>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  BuildingPoints = TowerDefensePlay::getBuildingPoints(tower_defense_comp, chess_player->uid);
  proto::ChessPlayerInfo::set_building_points(proto_chess_player_info, BuildingPoints);
  RefreshCost = ChessMultistagePlay::getRefreshCost(this, chess_player);
  proto::ChessPlayerInfo::set_refresh_cost(proto_chess_player_info, RefreshCost);
};

// Line 508: range 00000000180686EE-0000000018069302
void __cdecl ChessMultistagePlay::refreshPlayerCandidateCards(
        ChessMultistagePlay *const this,
        ChessPlayer *chess_player,
        bool is_manual)
{
  __m128i v3; // xmm0
  float v4; // xmm1_4
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::size_type candidate_index; // r14
  char v10; // al
  const std::vector<std::pair<unsigned int,unsigned int>> *v11; // rcx
  const ActivityChessExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  char v18; // al
  unsigned int *v19; // rdx
  std::vector<ChessCandidateCard>::size_type v20; // r14
  bool *p_is_free; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  bool is_force_cursed; // [rsp+27h] [rbp-219h]
  std::vector<unsigned int>::value_type __x; // [rsp+28h] [rbp-218h] BYREF
  uint32_t count; // [rsp+2Ch] [rbp-214h]
  float curse_probability; // [rsp+30h] [rbp-210h]
  unsigned int index; // [rsp+34h] [rbp-20Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-208h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-200h] BYREF
  const std::vector<std::vector<std::pair<unsigned int,unsigned int>>> *card_config_vec; // [rsp+48h] [rbp-1F8h]
  TowerDefensePlay *tower_defense_comp; // [rsp+50h] [rbp-1F0h]
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-1E8h]
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+60h] [rbp-1E0h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+68h] [rbp-1D8h]
  std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-1D0h]
  ChessCandidateCard *candidate_card; // [rsp+78h] [rbp-1C8h]
  std::shared_ptr<Config> v43; // [rsp+80h] [rbp-1C0h] BYREF
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>> v44; // [rsp+90h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v45; // [rsp+B0h] [rbp-190h] BYREF
  char v46[368]; // [rsp+D0h] [rbp-170h] BYREF

  v5 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 4 26 refreshable_card_count:529 48 4 11 quality:537 64 4 11 card_id:539 80 16 18 candidate_"
                        "card:546 112 24 27 non_free_card_index_vec:533 176 24 23 free_card_index_vec:570 240 48 31 modif"
                        "ied_quality_weight_map:531";
  *(_QWORD *)(v5 + 16) = ChessMultistagePlay::refreshPlayerCandidateCards;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862726] = -218959360;
  v7[536862727] = 62194;
  v7[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++chess_player->candidate_index;
  ChessMultistagePlay::tryUpdateStandbyPool(this, chess_player);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  ConstValueExcelConfigMgr::getChessTeachDungeonCardConfigVec(
    &v44,
    &v8->design_config.txt_config_mgr.const_value_config_mgr);
  card_config_vec = &v44;
  std::shared_ptr<Config>::~shared_ptr(&v43);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_teach_);
  }
  if ( !this->is_teach_ )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( chess_player->candidate_index
    && (candidate_index = chess_player->candidate_index,
        candidate_index <= std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::size(card_config_vec)) )
  {
    v10 = 1;
  }
  else
  {
LABEL_14:
    v10 = 0;
  }
  if ( v10 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chess_player->candidate_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v11 = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::operator[](
            card_config_vec,
            chess_player->candidate_index - 1);
    ChessMultistagePlay::refreshSpecifiedPlayerCandidateCards(this, v11, &chess_player->candidate_card_vec);
  }
  else
  {
    tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 80));
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80))->design_config.txt_config_mgr.activity_chess_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
    v12 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chess_player + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                         v12,
                         chess_player->chess_level);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 32) = level_config_ptr->card_count;
      TowerDefensePlay::modifyCandidateCardsNumByEffect(tower_defense_comp, (uint32_t *)(v5 + 32));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 240));
      TowerDefensePlay::modifyQualityWeightMapByEffect(
        tower_defense_comp,
        &this->quality_weight_map_,
        (std::map<unsigned int,unsigned int> *)(v5 + 240));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 112));
      is_force_cursed = TowerDefensePlay::isAllCardsCursed(tower_defense_comp);
      for ( count = 1; count <= *(_DWORD *)(v5 + 32); ++count )
      {
        *(_DWORD *)(v5 + 48) = 0;
        common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
          (const std::map<unsigned int,unsigned int> *)(v5 + 240),
          (unsigned int *)(v5 + 48),
          0);
        v14 = *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v5 + 64) = ChessMultistagePlay::tryFetchCardFromCardPool(this, chess_player->uid, v14);
        card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                            config_mgr,
                            *(_DWORD *)(v5 + 64));
        if ( card_config_ptr )
        {
          *(_DWORD *)(v5 + 80) = 0;
          *(_BYTE *)(v5 + 84) = 0;
          *(_BYTE *)(v5 + 85) = 0;
          *(_DWORD *)(v5 + 88) = 0;
          *(_BYTE *)(v5 + 92) = 0;
          *(_DWORD *)(v5 + 80) = *(_DWORD *)(v5 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( card_config_ptr->cost_points )
          {
            __x = count - 1;
            std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v5 + 112), &__x);
          }
          if ( is_force_cursed )
          {
            *(_BYTE *)(v5 + 84) = 1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_can_attach_curse >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)card_config_ptr - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_can_attach_curse >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load1(&card_config_ptr->is_can_attach_curse);
            }
            if ( card_config_ptr->is_can_attach_curse
              && !std::map<unsigned int,unsigned int>::empty(&this->curse_card_weight_map_) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v43);
              v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
              *(float *)v3.m128i_i32 = ConstValueExcelConfigMgr::getChessCurseCardProb(&v17->design_config.txt_config_mgr.const_value_config_mgr);
              LODWORD(curse_probability) = _mm_cvtsi128_si32(v3);
              std::shared_ptr<Config>::~shared_ptr(&v43);
              v3 = _mm_cvtsi32_si128(LODWORD(curse_probability));
              if ( common::tools::RandomUtils::randomTestProbability(v4) )
                *(_BYTE *)(v5 + 84) = 1;
            }
          }
          std::vector<ChessCandidateCard>::push_back(
            &chess_player->candidate_card_vec,
            (const std::vector<ChessCandidateCard>::value_type *)(v5 + 80));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
            "refreshPlayerCandidateCards",
            543);
          v15 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v45,
                  (const char (*)[59])"[CHESS] findActivityChessCardExcelConfig failed, card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
      }
      if ( !is_manual )
        goto LABEL_53;
      if ( *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( TowerDefensePlay::isTriggerFreeCardOnRefresh(tower_defense_comp, chess_player->uid) )
        v18 = 1;
      else
LABEL_53:
        v18 = 0;
      if ( v18 )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 176));
        common::tools::RandomUtils::randomSelect<unsigned int>(
          (const std::vector<unsigned int> *)(v5 + 112),
          (std::vector<unsigned int> *)(v5 + 176),
          1u);
        __for_range = (std::vector<unsigned int> *)(v5 + 176);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 176))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          index = *v19;
          v20 = index;
          if ( v20 >= std::vector<ChessCandidateCard>::size(&chess_player->candidate_card_vec) )
            break;
          candidate_card = std::vector<ChessCandidateCard>::operator[](&chess_player->candidate_card_vec, index);
          p_is_free = &candidate_card->is_free;
          v22 = ((_BYTE)candidate_card + 5) & 7;
          v23 = (*(_BYTE *)(((unsigned __int64)p_is_free >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)p_is_free >> 3) + 0x7FFF8000));
          if ( (_BYTE)v23 )
            __asan_report_store1(p_is_free, v22, v23);
          candidate_card->is_free = 1;
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
            "refreshPlayerCandidateCards",
            580);
          v24 = common::milog::MiLogStream::operator<<<ChessMultistagePlay,(ChessMultistagePlay*)0>(&v45, this);
          v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" card_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &candidate_card->card_id);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])" triggered free.");
          common::milog::MiLogStream::~MiLogStream(&v45);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 176));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 112));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 240));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "refreshPlayerCandidateCards",
        525);
      v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v45,
              (const char (*)[51])"[CHESS] findActivityChessLevelExcelConfig, level: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &chess_player->chess_level);
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
  }
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::~vector(&v44);
  if ( v46 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 586: range 0000000018069304-0000000018069791
void __cdecl ChessMultistagePlay::refreshSpecifiedPlayerCandidateCards(
        ChessMultistagePlay *const this,
        const std::vector<std::pair<unsigned int,unsigned int>> *card_id_pair_vec,
        std::vector<ChessCandidateCard> *candidate_card_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::map<unsigned int,std::vector<unsigned int>> *p_active_card_pool_map; // rcx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::map<unsigned int,std::vector<unsigned int>>::key_type __k; // [rsp+20h] [rbp-120h] BYREF
  uint32_t curse_card_id; // [rsp+24h] [rbp-11Ch]
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+38h] [rbp-108h] BYREF
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-100h]
  const std::pair<unsigned int,unsigned int> *card_id_pair; // [rsp+48h] [rbp-F8h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+50h] [rbp-F0h]
  std::vector<unsigned int> *active_card_id_vec; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 card_id:589 64 8 8 iter:606 96 16 18 candidate_card:592";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::refreshSpecifiedPlayerCandidateCards;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  __for_range = card_id_pair_vec;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(card_id_pair_vec)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(card_id_pair_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    card_id_pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)card_id_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = card_id_pair->first;
    if ( *(_BYTE *)(((unsigned __int64)&card_id_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_id_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_id_pair->second >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    curse_card_id = card_id_pair->second;
    *(_DWORD *)(v3 + 96) = 0;
    *(_BYTE *)(v3 + 100) = 0;
    *(_BYTE *)(v3 + 101) = 0;
    *(_DWORD *)(v3 + 104) = 0;
    *(_BYTE *)(v3 + 108) = 0;
    *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 48);
    if ( curse_card_id )
    {
      *(_BYTE *)(v3 + 100) = 1;
      *(_DWORD *)(v3 + 104) = curse_card_id;
    }
    *(_BYTE *)(v3 + 101) = 0;
    std::vector<ChessCandidateCard>::push_back(
      candidate_card_vec,
      (const std::vector<ChessCandidateCard>::value_type *)(v3 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( card_config_ptr )
    {
      p_active_card_pool_map = &this->active_card_pool_map_;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __k = card_config_ptr->card_quality_type;
      active_card_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](p_active_card_pool_map, &__k);
      M_current = std::vector<unsigned int>::end(active_card_id_vec)._M_current;
      v9._M_current = std::vector<unsigned int>::begin(active_card_id_vec)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                               v9,
                                                                                               (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                               (const unsigned int *)(v3 + 48));
      __rhs._M_current = std::vector<unsigned int>::end(active_card_id_vec)._M_current;
      if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64),
             &__rhs) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
          "refreshSpecifiedPlayerCandidateCards",
          609);
        v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v22,
                (const char (*)[58])"[CHESS] active_card_id_vec find card_id failed, card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__rhs,
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64));
        std::vector<unsigned int>::erase(
          active_card_id_vec,
          (std::vector<unsigned int>::const_iterator)__rhs._M_current);
      }
    }
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  if ( v23 == (char *)v3 )
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
};

// Line 618: range 0000000018069792-00000000180697C2
void __cdecl ChessMultistagePlay::fillSelectedCardIdList(
        const ChessMultistagePlay *const this,
        google::protobuf::RepeatedPtrField<proto::ChessCardInfo> *card_list)
{
  TowerDefensePlay *TowerDefenseComp; // rdx

  TowerDefenseComp = ChessMultistagePlay::getTowerDefenseComp(this);
  TowerDefensePlay::fillActiveCardInfoList(TowerDefenseComp, card_list);
};

// Line 623: range 00000000180697C4-000000001806A4D6
void __cdecl ChessMultistagePlay::fillChessMysteryInfo(
        const ChessMultistagePlay *const this,
        proto::ChessMysteryInfo *proto_mystery_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DefaultWorldMainSceneId; // eax
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v11; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v12; // rsi
  unsigned int *v13; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v14; // rdx
  char v15; // cl
  google::protobuf::uint32 *v16; // rdx
  std::set<unsigned int> *v17; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v18; // rdx
  common::milog::MiLogStream *v19; // rax
  MonsterScriptConfig *v20; // rax
  google::protobuf::uint32 *v21; // rdx
  uint32_t monster_level; // [rsp+14h] [rbp-2ACh]
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-2A0h] BYREF
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_end_0; // [rsp+28h] [rbp-298h] BYREF
  std::map<unsigned int,std::set<unsigned int>>::iterator __for_begin_1; // [rsp+30h] [rbp-290h] BYREF
  std::map<unsigned int,std::set<unsigned int>>::iterator __for_end_1; // [rsp+38h] [rbp-288h] BYREF
  std::set<unsigned int>::iterator __for_begin_2; // [rsp+40h] [rbp-280h] BYREF
  std::set<unsigned int>::iterator __for_end_2; // [rsp+48h] [rbp-278h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-270h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-268h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+60h] [rbp-260h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_entrance_point_map; // [rsp+68h] [rbp-258h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-250h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-248h]
  google::protobuf::Map<unsigned int,proto::ChessEntranceDetailInfo> *proto_entrance_detail_info_map; // [rsp+80h] [rbp-240h]
  const std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *__for_range_1; // [rsp+88h] [rbp-238h]
  const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > *v38; // [rsp+90h] [rbp-230h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *round; // [rsp+98h] [rbp-228h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *pool_entrance_point_vec; // [rsp+A0h] [rbp-220h]
  proto::ChessEntranceDetailInfo *proto_entrance_detail_info; // [rsp+A8h] [rbp-218h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range_2; // [rsp+B0h] [rbp-210h]
  std::map<unsigned int,std::set<unsigned int>> *__for_range_3; // [rsp+B8h] [rbp-208h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v44; // [rsp+C0h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *entrance_point_id_0; // [rsp+C8h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *pool_id_set; // [rsp+D0h] [rbp-1F0h]
  proto::ChessEntranceInfo *proto_entrance_info; // [rsp+D8h] [rbp-1E8h]
  const std::set<unsigned int> *__for_range_4; // [rsp+E0h] [rbp-1E0h]
  std::map<unsigned int,MonsterScriptConfig> *__for_range_6; // [rsp+E8h] [rbp-1D8h]
  const std::pair<unsigned int const,MonsterScriptConfig> *v50; // [rsp+F0h] [rbp-1D0h]
  std::tuple_element<0,const std::pair<unsigned int const,MonsterScriptConfig> >::type *__0; // [rsp+F8h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config_0; // [rsp+100h] [rbp-1C0h]
  proto::ChessMonsterInfo *proto_monster_info; // [rsp+108h] [rbp-1B8h]
  const std::set<unsigned int> *__for_range_7; // [rsp+110h] [rbp-1B0h]
  const std::map<unsigned int,MonsterScriptConfig> *monster_pool_map_ptr; // [rsp+118h] [rbp-1A8h]
  const std::map<unsigned int,MonsterScriptConfig> *__for_range_5; // [rsp+120h] [rbp-1A0h]
  const std::pair<unsigned int const,MonsterScriptConfig> *v57; // [rsp+128h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,MonsterScriptConfig> >::type *_; // [rsp+130h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+138h] [rbp-188h]
  const std::pair<unsigned int,unsigned int> *v60; // [rsp+140h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *pool_id; // [rsp+148h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *entrance_point_id; // [rsp+150h] [rbp-170h]
  const std::pair<unsigned int const,unsigned int> *v63; // [rsp+158h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *entrance_index; // [rsp+160h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *point_id; // [rsp+168h] [rbp-158h]
  std::shared_ptr<Config> v66; // [rsp+170h] [rbp-150h] BYREF
  std::shared_ptr<Config> v67; // [rsp+180h] [rbp-140h] BYREF
  common::milog::MiLogStream v68; // [rsp+190h] [rbp-130h] BYREF
  char v69[272]; // [rsp+1B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 pool_id:660 64 48 15 pool_id_map:648 144 48 22 monster_config_map:659";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::fillChessMysteryInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v66);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66)->design_config.lua_config_mgr;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v67);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v6->design_config.txt_config_mgr);
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, DefaultWorldMainSceneId);
  std::shared_ptr<Config>::~shared_ptr(&v67);
  std::shared_ptr<Config>::~shared_ptr(&v66);
  if ( scene_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
      p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
    v10 = *p_vptr_DescribalBase + 264LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    monster_level = (*(__int64 (__fastcall **)(Scene *))v10)(scene) + 1;
    proto_entrance_point_map = proto::ChessMysteryInfo::mutable_entrance_point_map(proto_mystery_info);
    __for_range = &this->chess_mystery_.entrance_point_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->chess_mystery_.entrance_point_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->chess_mystery_.entrance_point_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v63 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      entrance_index = std::get<0ul,unsigned int const,unsigned int>(v63);
      point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v63);
      if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = *point_id;
      v12 = entrance_index;
      v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_entrance_point_map, entrance_index);
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12, (_BYTE)v13);
      }
      *v14 = v11;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->chess_mystery_.exit_point_id_vec;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin(&this->chess_mystery_.exit_point_id_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v16 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ChessMysteryInfo::add_exit_point_id_list(proto_mystery_info, *v16);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    proto_entrance_detail_info_map = proto::ChessMysteryInfo::mutable_detail_info_map(proto_mystery_info);
    __for_range_1 = &this->chess_mystery_.pool_entrance_point_map;
    __for_begin_0._M_node = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::begin(&this->chess_mystery_.pool_entrance_point_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v38 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator*(&__for_begin_0);
      round = std::get<0ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v38);
      pool_entrance_point_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v38);
      proto_entrance_detail_info = google::protobuf::Map<unsigned int,proto::ChessEntranceDetailInfo>::operator[](
                                     proto_entrance_detail_info_map,
                                     round);
      std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 64));
      __for_range_2 = pool_entrance_point_vec;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::begin(pool_entrance_point_vec)._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
                (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
      {
        v60 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
        pool_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v60);
        entrance_point_id = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v60);
        v17 = std::map<unsigned int,std::set<unsigned int>>::operator[](
                (std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 64),
                entrance_point_id);
        std::set<unsigned int>::insert(v17, pool_id);
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
      }
      __for_range_3 = (std::map<unsigned int,std::set<unsigned int>> *)(v2 + 64);
      __for_begin_1._M_node = std::map<unsigned int,std::set<unsigned int>>::begin((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 64))._M_node;
      __for_end_1._M_node = std::map<unsigned int,std::set<unsigned int>>::end(__for_range_3)._M_node;
      while ( std::operator!=(&__for_begin_1, &__for_end_1) )
      {
        v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*(&__for_begin_1);
        entrance_point_id_0 = std::get<0ul,unsigned int const,std::set<unsigned int>>(v44);
        pool_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v44);
        proto_entrance_info = proto::ChessEntranceDetailInfo::add_info_list(proto_entrance_detail_info);
        if ( *(_BYTE *)(((unsigned __int64)entrance_point_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)entrance_point_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entrance_point_id_0 >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ChessEntranceInfo::set_entrance_point_id(proto_entrance_info, *entrance_point_id_0);
        std::map<unsigned int,MonsterScriptConfig>::map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 144));
        __for_range_4 = pool_id_set;
        __for_begin_2._M_node = std::set<unsigned int>::begin(pool_id_set)._M_node;
        __for_end_2._M_node = std::set<unsigned int>::end(__for_range_4)._M_node;
        while ( std::operator!=(&__for_begin_2, &__for_end_2) )
        {
          v18 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_2);
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v18;
          monster_pool_map_ptr = SceneScriptConfig::findMonsterPoolByPoolId(
                                   scene_script_config_ptr,
                                   *(_DWORD *)(v2 + 48));
          if ( monster_pool_map_ptr )
          {
            __for_range_5 = monster_pool_map_ptr;
            __for_begin._M_node = std::map<unsigned int,MonsterScriptConfig>::begin(monster_pool_map_ptr)._M_node;
            __for_end._M_node = std::map<unsigned int,MonsterScriptConfig>::end(__for_range_5)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_begin,
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_end) )
            {
              v57 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_begin);
              _ = std::get<0ul,unsigned int const,MonsterScriptConfig>(v57);
              monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v57);
              v20 = std::map<unsigned int,MonsterScriptConfig>::operator[](
                      (std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 144),
                      &monster_config->monster_id);
              MonsterScriptConfig::operator=(v20, monster_config);
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_begin);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
              "fillChessMysteryInfo",
              665);
            v19 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v68,
                    (const char (*)[50])"[CHESS] findMonsterPoolByPoolId failed, pool_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v68);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_2);
        }
        __for_range_6 = (std::map<unsigned int,MonsterScriptConfig> *)(v2 + 144);
        __for_begin_2._M_node = std::map<unsigned int,MonsterScriptConfig>::begin((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 144))._M_node;
        __for_end_2._M_node = std::map<unsigned int,MonsterScriptConfig>::end(__for_range_6)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_begin_2,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)&__for_end_2) )
        {
          v50 = std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_begin_2);
          __0 = std::get<0ul,unsigned int const,MonsterScriptConfig>(v50);
          monster_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v50);
          proto_monster_info = proto::ChessEntranceInfo::add_monster_info_list(proto_entrance_info);
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_0->monster_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_0->monster_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ChessMonsterInfo::set_monster_id(proto_monster_info, monster_config_0->monster_id);
          __for_range_7 = &monster_config_0->affix_set;
          __for_begin._M_node = std::set<unsigned int>::begin(&monster_config_0->affix_set)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(__for_range_7)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
          {
            v21 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::ChessMonsterInfo::add_affix_list(proto_monster_info, *v21);
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
          }
          proto::ChessMonsterInfo::set_level(proto_monster_info, monster_level);
          std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> > *const)&__for_begin_2);
        }
        std::map<unsigned int,MonsterScriptConfig>::~map((std::map<unsigned int,MonsterScriptConfig> *const)(v2 + 144));
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++(&__for_begin_1);
      }
      std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 64));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator++(&__for_begin_0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "fillChessMysteryInfo",
      627);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v68,
      (const char (*)[37])"[CHESS] findSceneScriptConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v68);
  }
  if ( v69 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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
};

// Line 690: range 000000001806A4D8-000000001806A992
__int64 __fastcall ChessMultistagePlay::tryFetchCardFromCardPool(
        ChessMultistagePlay *const this,
        uint32_t uid,
        uint32_t quality)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *v6; // rax
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  int v11; // eax
  std::vector<unsigned int>::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t rand_index; // [rsp+14h] [rbp-FCh]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v22; // [rsp+18h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+20h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int> *active_card_id_vec; // [rsp+30h] [rbp-E0h]
  std::vector<unsigned int> *standby_card_id_vec; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 real_quality:691 64 4 17 fetch_card_id:715 80 4 7 uid:689 96 4 11 quality:689";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::tryFetchCardFromCardPool;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 80) = uid;
  *(_DWORD *)(v3 + 96) = quality;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 96);
  if ( *(_DWORD *)(v3 + 96) == 1 || *(_DWORD *)(v3 + 96) == 2 )
  {
    v6 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->active_card_pool_map_,
           (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 96));
    if ( std::vector<unsigned int>::empty(v6) )
    {
      v7 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
             &this->standby_card_pool_map_,
             (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 96));
      if ( std::vector<unsigned int>::empty(v7) )
        *(_DWORD *)(v3 + 48) = 0;
    }
  }
  active_card_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                         &this->active_card_pool_map_,
                         (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  if ( std::vector<unsigned int>::empty(active_card_id_vec)
    && (standby_card_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                                &this->standby_card_pool_map_,
                                (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48)),
        std::vector<unsigned int>::swap(active_card_id_vec, standby_card_id_vec),
        std::vector<unsigned int>::clear(standby_card_id_vec),
        std::vector<unsigned int>::empty(active_card_id_vec)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "tryFetchCardFromCardPool",
      710);
    v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v27,
           (const char (*)[52])"[CHESS] active_card_id_vec is empty, real_quality: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0LL;
  }
  else
  {
    *(_DWORD *)(v3 + 64) = 0;
    v11 = std::vector<unsigned int>::size(active_card_id_vec);
    rand_index = common::tools::RandomUtils::rand<int>(0, v11 - 1);
    if ( rand_index < std::vector<unsigned int>::size(active_card_id_vec) )
    {
      v12 = std::vector<unsigned int>::operator[](active_card_id_vec, rand_index);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = *v12;
      v22._M_current = std::vector<unsigned int>::begin(active_card_id_vec)._M_current;
      __i._M_current = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(
                         &v22,
                         rand_index)._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__position,
        &__i);
      std::vector<unsigned int>::erase(active_card_id_vec, __position);
    }
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "tryFetchCardFromCardPool",
      723);
    v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v27,
            (const char (*)[40])"[CHESS] tryFetchCardFromCardPool, uid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" ,quality: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 96));
    v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])" ,real_quality: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])" ,fetch_card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = *(unsigned int *)(v3 + 64);
  }
  if ( v28 == (char *)v3 )
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

// Line 730: range 000000001806A994-000000001806AB0E
uint32_t __cdecl ChessMultistagePlay::getSelectedCardCountByType(
        ChessMultistagePlay *const this,
        data::ChessCardType card_type)
{
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  uint32_t count; // [rsp+14h] [rbp-4Ch]
  std::vector<ChessSelectedCard>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<ChessSelectedCard>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<ChessSelectedCard> *__for_range; // [rsp+28h] [rbp-38h]
  const ChessSelectedCard *selected_card; // [rsp+30h] [rbp-30h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v10[2]; // [rsp+40h] [rbp-20h] BYREF

  count = 0;
  __for_range = &this->selected_card_vec_;
  __for_begin._M_current = std::vector<ChessSelectedCard>::begin(&this->selected_card_vec_)._M_current;
  __for_end._M_current = std::vector<ChessSelectedCard>::end(&this->selected_card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<ChessSelectedCard *,std::vector<ChessSelectedCard>>(&__for_begin, &__for_end) )
  {
    selected_card = __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v10);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_chess_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)selected_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)selected_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)selected_card >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        p_activity_chess_config_mgr,
                        selected_card->card_id);
    std::shared_ptr<Config>::~shared_ptr(v10);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( card_type == card_config_ptr->card_type )
        ++count;
    }
    __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator++(&__for_begin);
  }
  return count;
};

// Line 748: range 000000001806AB10-000000001806AC92
uint32_t __cdecl ChessMultistagePlay::getSelectedCardCountByQuality(
        ChessMultistagePlay *const this,
        data::ChessCardQualityType quality)
{
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  uint32_t count; // [rsp+14h] [rbp-4Ch]
  std::vector<ChessSelectedCard>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<ChessSelectedCard>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<ChessSelectedCard> *__for_range; // [rsp+28h] [rbp-38h]
  const ChessSelectedCard *selected_card; // [rsp+30h] [rbp-30h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v10[2]; // [rsp+40h] [rbp-20h] BYREF

  count = 0;
  __for_range = &this->selected_card_vec_;
  __for_begin._M_current = std::vector<ChessSelectedCard>::begin(&this->selected_card_vec_)._M_current;
  __for_end._M_current = std::vector<ChessSelectedCard>::end(&this->selected_card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<ChessSelectedCard *,std::vector<ChessSelectedCard>>(&__for_begin, &__for_end) )
  {
    selected_card = __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v10);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_chess_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)selected_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)selected_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)selected_card >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        p_activity_chess_config_mgr,
                        selected_card->card_id);
    std::shared_ptr<Config>::~shared_ptr(v10);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( quality == card_config_ptr->card_quality_type )
        ++count;
    }
    __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator++(&__for_begin);
  }
  return count;
};

// Line 766: range 000000001806AC94-000000001806ACC1
void __cdecl ChessMultistagePlay::setCurRound(ChessMultistagePlay *const this, uint32_t value)
{
  TowerDefensePlay *TowerDefenseComp; // rax

  TowerDefenseComp = ChessMultistagePlay::getTowerDefenseComp(this);
  TowerDefensePlay::setCurrentRound(TowerDefenseComp, value);
};

// Line 771: range 000000001806ACC2-000000001806AE4E
void __fastcall ChessMultistagePlay::setTotalRound(ChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  char *v6; // rsi
  uint32_t v7; // ecx
  char v8; // al
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 value:770";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setTotalRound;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setTotalRound",
    772);
  v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v9,
         (const char (*)[24])"[CHESS] setTotalRound: ");
  v6 = (char *)(v2 + 32);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  v7 = *(_DWORD *)(v2 + 32);
  v8 = *(_BYTE *)(((unsigned __int64)&this->total_round_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->total_round_, v6, (_BYTE)this - 96);
  }
  this->total_round_ = v7;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 777: range 000000001806AE50-000000001806AFEB
void __fastcall ChessMultistagePlay::setLeftMonsters(ChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  char *v6; // rsi
  uint32_t v7; // ecx
  char v8; // al
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 value:776";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setLeftMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setLeftMonsters",
    778);
  v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v9,
         (const char (*)[26])"[CHESS] setLeftMonsters: ");
  v6 = (char *)(v2 + 32);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  v7 = *(_DWORD *)(v2 + 32);
  v8 = *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->left_monsters_, v6, (_BYTE)this - 40);
  }
  this->left_monsters_ = v7;
  ChessMultistagePlay::broadcastLeftMonsters(this);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 784: range 000000001806AFEC-000000001806B2CB
void __fastcall ChessMultistagePlay::setEscapedMonsters(ChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // edi
  uint32_t v9; // ecx
  char v10; // dl
  bool v11; // dl
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 value:783";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setEscapedMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setEscapedMonsters",
    785);
  v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v14,
         (const char (*)[29])"[CHESS] setEscapedMonsters: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v14);
  v6 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->escaped_monsters_ < *(_DWORD *)(v2 + 32) )
  {
    __k = ChessMultistagePlay::getCurRound(this);
    v7 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](&this->round_escaped_map_, &__k);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load4();
    v6 = *(unsigned int *)v7;
    v8 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3)
                                                          + 0x7FFF8000) )
    {
      v8 = (_DWORD)this + 476;
      v7 = __asan_report_load4();
    }
    *(_DWORD *)v7 = v6 + v8 - this->escaped_monsters_;
  }
  v9 = *(_DWORD *)(v2 + 32);
  v10 = *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v10 != 0;
  v11 = v10 != 0 && (char)((((_BYTE)this - 36) & 7) + 3) >= v10;
  if ( v11 )
    __asan_report_store4(&this->escaped_monsters_, v6, v11);
  this->escaped_monsters_ = v9;
  ChessMultistagePlay::broadcastEscapedMonsters(this);
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 795: range 000000001806B2CC-000000001806B40E
void __fastcall ChessMultistagePlay::setMaxEscapableMonsters(ChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 value:794";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setMaxEscapableMonsters;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setMaxEscapableMonsters",
    796);
  v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v6,
         (const char (*)[34])"[CHESS] setMaxEscapableMonsters: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 802: range 000000001806B410-000000001806B5A4
void __fastcall ChessMultistagePlay::setStageBonusBuildingPoints(ChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  uint32_t v6; // ecx
  char v7; // dl
  char *v8; // rsi
  bool v9; // dl
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 value:801";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setStageBonusBuildingPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = value;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setStageBonusBuildingPoints",
    803);
  v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v10,
         (const char (*)[38])"[CHESS] setStageBonusBuildingPoints: ");
  v8 = (char *)(v2 + 32);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_bonus_building_points_ >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  v9 = v7 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v7;
  if ( v9 )
    __asan_report_store4(&this->stage_bonus_building_points_, v8, v9);
  this->stage_bonus_building_points_ = v6;
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

// Line 808: range 000000001806B5A6-000000001806B725
void __cdecl ChessMultistagePlay::broadcastLeftMonsters(ChessMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:809";
  *(_QWORD *)(v1 + 16) = ChessMultistagePlay::broadcastLeftMonsters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::ChessLeftMonstersNotify::ChessLeftMonstersNotify((proto::ChessLeftMonstersNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessLeftMonstersNotify::set_left_monsters(
    (proto::ChessLeftMonstersNotify *const)(v1 + 32),
    this->left_monsters_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::ChessLeftMonstersNotify::~ChessLeftMonstersNotify((proto::ChessLeftMonstersNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 815: range 000000001806B726-000000001806B8AD
void __cdecl ChessMultistagePlay::broadcastEscapedMonsters(ChessMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:816";
  *(_QWORD *)(v1 + 16) = ChessMultistagePlay::broadcastEscapedMonsters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::ChessEscapedMonstersNotify::ChessEscapedMonstersNotify((proto::ChessEscapedMonstersNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ChessEscapedMonstersNotify::set_excaped_monsters(
    (proto::ChessEscapedMonstersNotify *const)(v1 + 32),
    this->escaped_monsters_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::ChessEscapedMonstersNotify::~ChessEscapedMonstersNotify((proto::ChessEscapedMonstersNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 822: range 000000001806B8AE-000000001806BA0D
void __cdecl ChessMultistagePlay::broadcastSelectedCards(ChessMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedPtrField<proto::ChessCardInfo> *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:823";
  *(_QWORD *)(v1 + 16) = ChessMultistagePlay::broadcastSelectedCards;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::ChessSelectedCardsNotify::ChessSelectedCardsNotify((proto::ChessSelectedCardsNotify *const)(v1 + 48));
  v4 = proto::ChessSelectedCardsNotify::mutable_selected_card_info_list((proto::ChessSelectedCardsNotify *const)(v1 + 48));
  ChessMultistagePlay::fillSelectedCardIdList(this, v4);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 48), 0);
  proto::ChessSelectedCardsNotify::~ChessSelectedCardsNotify((proto::ChessSelectedCardsNotify *const)(v1 + 48));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 829: range 000000001806BA0E-000000001806BB5F
void __cdecl ChessMultistagePlay::notifyChessPlayerInfo(
        const ChessMultistagePlay *const this,
        Player *player,
        const ChessPlayer *chess_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  proto::ChessPlayerInfo *v6; // rdx
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 10 notify:830";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::notifyChessPlayerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::ChessPlayerInfoNotify::ChessPlayerInfoNotify((proto::ChessPlayerInfoNotify *const)(v3 + 32));
  v6 = proto::ChessPlayerInfoNotify::mutable_player_info((proto::ChessPlayerInfoNotify *const)(v3 + 32));
  ChessMultistagePlay::fillChessPlayerInfo(this, chess_player, v6);
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 32));
  proto::ChessPlayerInfoNotify::~ChessPlayerInfoNotify((proto::ChessPlayerInfoNotify *const)(v3 + 32));
  if ( v8 == (char *)v3 )
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
};

// Line 836: range 000000001806BB60-000000001806D4A1
void __cdecl ChessMultistagePlay::onDungeonSettle(
        ChessMultistagePlay *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  PlayerExhibitionComp *ExhibitionComp; // rax
  PlayerExhibitionComp *v14; // rax
  PlayerExhibitionComp *v15; // rax
  PlayerExhibitionComp *v16; // rcx
  PlayerExhibitionComp *v17; // r14
  uint32_t SelectedCardCountByType; // eax
  PlayerExhibitionComp *v19; // r14
  uint32_t v20; // eax
  PlayerExhibitionComp *v21; // r14
  uint32_t TotalObtainedBuildingPoints; // eax
  PlayerExhibitionComp *v23; // r14
  uint32_t SelectedCardCountByQuality; // eax
  PlayerExhibitionComp *v25; // r14
  uint32_t *v26; // rdx
  uint64_t SceneTimeMs; // rax
  PlayerExhibitionComp *v28; // r14
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t ExhibitionSeriesId; // eax
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  ChessActivity *v35; // rax
  int v36; // eax
  PlayerItemComp *ItemComp; // rax
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t Exp; // eax
  uint32_t Uid; // eax
  TowerDefensePlay *v43; // rdx
  unsigned __int64 v44; // rax
  PlayerEventComp *EventComp; // r14
  ChessActivity *v46; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  DungeonScene *v50; // rax
  const std::string *v51; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r14
  google::protobuf::uint32 v54; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // r14
  uint32_t CurRound; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rcx
  unsigned int *v66; // [rsp-8h] [rbp-448h]
  bool *v67; // [rsp+0h] [rbp-440h]
  std::string _0a; // [rsp+0h] [rbp-440h]
  bool *use_timea; // [rsp+8h] [rbp-438h]
  google::protobuf::uint32 use_timeb; // [rsp+8h] [rbp-438h]
  google::protobuf::uint32 resulta; // [rsp+Ch] [rbp-434h]
  Player *playera; // [rsp+10h] [rbp-430h]
  ChessMultistagePlay *thisa; // [rsp+18h] [rbp-428h]
  unsigned int *v74; // [rsp+20h] [rbp-420h]
  unsigned int *v75; // [rsp+28h] [rbp-418h]
  unsigned int *old_chess_level; // [rsp+30h] [rbp-410h]
  std::map<unsigned int,unsigned int> *remain_exp; // [rsp+38h] [rbp-408h]
  uint32_t real_add_exp; // [rsp+3Ch] [rbp-404h]
  std::vector<ExhibitionScoreParam>::iterator __for_begin; // [rsp+40h] [rbp-400h] BYREF
  std::vector<ExhibitionScoreParam>::iterator __for_end; // [rsp+48h] [rbp-3F8h] BYREF
  size_t log_card_num; // [rsp+50h] [rbp-3F0h]
  ChessPlayer *chess_player_ptr; // [rsp+58h] [rbp-3E8h]
  TowerDefensePlay *tower_defense_comp; // [rsp+60h] [rbp-3E0h]
  proto::InBattleChessSettleInfo *chess_settle_info; // [rsp+68h] [rbp-3D8h]
  std::vector<ExhibitionScoreParam> *__for_range; // [rsp+70h] [rbp-3D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+78h] [rbp-3C8h]
  std::vector<ChessSelectedCard> *__for_range_1; // [rsp+80h] [rbp-3C0h]
  const ChessSelectedCard *selected_card; // [rsp+88h] [rbp-3B8h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+90h] [rbp-3B0h]
  std::vector<std::pair<unsigned int,unsigned int>> *pool_entrance_point_vec_ptr; // [rsp+98h] [rbp-3A8h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_3; // [rsp+A0h] [rbp-3A0h]
  const std::pair<unsigned int,unsigned int> *v92; // [rsp+A8h] [rbp-398h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *pool_id; // [rsp+B0h] [rbp-390h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *_; // [rsp+B8h] [rbp-388h]
  const std::pair<unsigned int const,unsigned int> *v95; // [rsp+C0h] [rbp-380h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *round; // [rsp+C8h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+D0h] [rbp-370h]
  proto_log::ChessEscapedMonsterInfo *proto_escaped_monster_info; // [rsp+D8h] [rbp-368h]
  const std::pair<unsigned int const,unsigned int> *v99; // [rsp+E0h] [rbp-360h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+E8h] [rbp-358h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+F0h] [rbp-350h]
  proto_log::ChessGearInfo *proto_gear_info; // [rsp+F8h] [rbp-348h]
  const ExhibitionScoreParam *param; // [rsp+100h] [rbp-340h]
  proto::ExhibitionDisplayInfo *score_info; // [rsp+108h] [rbp-338h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+110h] [rbp-330h] BYREF
  ItemParam item_param; // [rsp+120h] [rbp-320h] BYREF
  common::milog::MiLogStream v107; // [rsp+130h] [rbp-310h] BYREF
  char v108[752]; // [rsp+150h] [rbp-2F0h] BYREF

  HIDWORD(use_timea) = result;
  LODWORD(use_timea) = use_time;
  v4 = (unsigned __int64)v108;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 48 1 11 is_succ:865 64 1 10 holder:933 80 4 14 dungeon_id:850 96 4 11 add_exp:892 112 4 24 co"
                        "st_building_points:923 128 4 15 tower_count:924 144 16 16 activity_ptr:837 176 16 21 dungeon_sce"
                        "ne_ptr:843 208 16 13 event_ptr:926 240 16 11 log_ptr:934 272 24 19 score_param_vec:891 336 24 22"
                        " teach_score_id_vec:893 400 24 10 reason:914 464 40 17 settle_notify:887 544 48 21 quality_count"
                        "_map:925 624 48 16 gear_num_map:943";
  *(_QWORD *)(v4 + 16) = ChessMultistagePlay::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = 62194;
  v6[536862729] = -218959360;
  v6[536862730] = 62194;
  v6[536862731] = -218959360;
  v6[536862732] = 62194;
  v6[536862733] = -218959360;
  v6[536862734] = 62194;
  v6[536862735] = -234881024;
  v6[536862736] = -218959118;
  v6[536862738] = -219021312;
  v6[536862739] = 62194;
  v6[536862741] = -202116109;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChessActivity>((PlayerActivityComp *const)(v4 + 144));
  if ( !std::operator==<ChessActivity>(0LL, (const std::shared_ptr<ChessActivity> *)(v4 + 144)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v4 + 176));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v107,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "onDungeonSettle",
        846);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v107,
        (const char (*)[34])"[CHESS] dungeon scene is nullptr ");
      common::milog::MiLogStream::~MiLogStream(&v107);
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      *(_DWORD *)(v4 + 80) = DungeonScene::getDungeonId(v7);
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      if ( DungeonScene::getDungeonResult(v8) == DUNGEON_RESULT_CANCEL )
      {
        common::milog::MiLogStream::create(
          &v107,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
          "onDungeonSettle",
          853);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v107,
               (const char (*)[30])"[CHESS] dungeon cancel, uid: ");
        *(_DWORD *)(v4 + 128) = Player::getUid(player);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 128));
        v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" ,dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v107);
      }
      else
      {
        *(_DWORD *)(v4 + 128) = Player::getUid(player);
        chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer>>(
                             &this->chess_player_map_,
                             (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v4 + 128));
        if ( chess_player_ptr )
        {
          tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
          *(_BYTE *)(v4 + 48) = HIDWORD(use_timea) == 1;
          HIDWORD(v75) = ChessMultistagePlay::getCurRound(this);
          if ( *(_BYTE *)(v4 + 48) )
          {
            ExhibitionComp = Player::getExhibitionComp(player);
            PlayerExhibitionComp::addReplaceableDataByServer(
              ExhibitionComp,
              EXHIBITION_SERVER_TRIGGER_CHESS_SETTLE_ROUND,
              HIDWORD(v75));
            v14 = Player::getExhibitionComp(player);
            PlayerExhibitionComp::addReplaceableDataByServer(v14, EXHIBITION_SERVER_TRIGGER_CHESS_SUCCESS, 1u);
          }
          else if ( HIDWORD(v75) > 1 )
          {
            v15 = Player::getExhibitionComp(player);
            PlayerExhibitionComp::addReplaceableDataByServer(
              v15,
              EXHIBITION_SERVER_TRIGGER_CHESS_SETTLE_ROUND,
              HIDWORD(v75) - 1);
          }
          v16 = Player::getExhibitionComp(player);
          if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escaped_monsters_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::addReplaceableDataByServer(
            v16,
            EXHIBITION_SERVER_TRIGGER_CHESS_ESCAPED_MONSTERS,
            this->escaped_monsters_);
          v17 = Player::getExhibitionComp(player);
          SelectedCardCountByType = ChessMultistagePlay::getSelectedCardCountByType(this, CHESS_CARD_CURSE);
          PlayerExhibitionComp::addReplaceableDataByServer(
            v17,
            EXHIBITION_SERVER_TRIGGER_CHESS_PICK_CURSE_CARD_COUNT,
            SelectedCardCountByType);
          v19 = Player::getExhibitionComp(player);
          v20 = ChessMultistagePlay::getSelectedCardCountByType(this, CHESS_CARD_CHALLENGE);
          PlayerExhibitionComp::addReplaceableDataByServer(
            v19,
            EXHIBITION_SERVER_TRIGGER_CHESS_PICK_CHALLENGE_CARD_COUNT,
            v20);
          v21 = Player::getExhibitionComp(player);
          TotalObtainedBuildingPoints = TowerDefensePlay::getTotalObtainedBuildingPoints(tower_defense_comp);
          PlayerExhibitionComp::addReplaceableDataByServer(
            v21,
            EXHIBITION_SERVER_TRIGGER_CHESS_OBTAIN_BUILDING_POINTS,
            TotalObtainedBuildingPoints);
          v23 = Player::getExhibitionComp(player);
          SelectedCardCountByQuality = ChessMultistagePlay::getSelectedCardCountByQuality(this, CARD_QUALITY_PERCECT);
          PlayerExhibitionComp::addReplaceableDataByServer(
            v23,
            EXHIBITION_SERVER_TRIGGER_CHESS_PICK_SSR_CARD_COUNT,
            SelectedCardCountByQuality);
          v25 = Player::getExhibitionComp(player);
          v26 = std::map<unsigned int,unsigned int>::operator[](&this->kill_stage_cost_time_map_, &this->total_round_);
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::addReplaceableDataByServer(
            v25,
            EXHIBITION_SERVER_TRIGGER_CHESS_LAST_ROUND_KILL_STAGE_COST_TIME,
            *v26);
          proto::MultistagePlaySettleNotify::MultistagePlaySettleNotify((proto::MultistagePlaySettleNotify *const)(v4 + 464));
          chess_settle_info = proto::MultistagePlaySettleNotify::mutable_chess_settle_info((proto::MultistagePlaySettleNotify *const)(v4 + 464));
          proto::InBattleChessSettleInfo::set_is_success(chess_settle_info, *(_BYTE *)(v4 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
          proto::InBattleChessSettleInfo::set_scene_time_ms(chess_settle_info, SceneTimeMs);
          v28 = Player::getExhibitionComp(player);
          v29 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          ExhibitionSeriesId = ChessActivity::getExhibitionSeriesId(v29);
          PlayerExhibitionComp::getSettleScoreVec(
            (std::vector<ExhibitionScoreParam> *)(v4 + 272),
            v28,
            ExhibitionSeriesId);
          *(_DWORD *)(v4 + 96) = 0;
          v31 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          ChessActivity::getTeachExhibitionScoreIdVec((std::vector<unsigned int> *)(v4 + 336), v31);
          __for_range = (std::vector<ExhibitionScoreParam> *)(v4 + 272);
          __for_begin._M_current = std::vector<ExhibitionScoreParam>::begin((std::vector<ExhibitionScoreParam> *const)(v4 + 272))._M_current;
          __for_end._M_current = std::vector<ExhibitionScoreParam>::end((std::vector<ExhibitionScoreParam> *const)(v4 + 272))._M_current;
          while ( __gnu_cxx::operator!=<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>(
                    &__for_begin,
                    &__for_end) )
          {
            param = __gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&this->is_teach_);
            }
            if ( !this->is_teach_
              || common::tools::MiscUtils::isContains<unsigned int>(
                   (std::vector<unsigned int> *)(v4 + 336),
                   &param->score_id) )
            {
              score_info = proto::InBattleChessSettleInfo::add_score_list(chess_settle_info);
              if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ExhibitionDisplayInfo::set_id(score_info, param->score_id);
              if ( *(_BYTE *)(((unsigned __int64)&param->score_value >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score_value >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ExhibitionDisplayInfo::set_param(score_info, param->score_value);
              if ( *(_BYTE *)(((unsigned __int64)&param->score_param >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score_param >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ExhibitionDisplayInfo::set_detail_param(score_info, param->score_param);
              if ( *(_BYTE *)(((unsigned __int64)&param->score_value >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score_value >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v4 + 96) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 96), param->score_value);
            }
            __gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator++(&__for_begin);
          }
          v33 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          LODWORD(old_chess_level) = ChessActivity::getLevel(v33);
          v34 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          HIDWORD(old_chess_level) = ChessActivity::getExp(v34);
          v35 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          LODWORD(remain_exp) = ChessActivity::getRemainExp(v35);
          if ( (unsigned int)remain_exp < *(_DWORD *)(v4 + 96) )
            v36 = (int)remain_exp;
          else
            v36 = *(_DWORD *)(v4 + 96);
          HIDWORD(remain_exp) = v36;
          ActionReason::ActionReason(
            (ActionReason *const)(v4 + 400),
            ACTION_REASON_CHESS_DUNGEON_REWARD,
            ITEM_LIMIT_ACTIVITY_CHESS_REWARD);
          ItemComp = Player::getItemComp(player);
          item_param.item_id = 129;
          item_param.count = HIDWORD(remain_exp);
          item_param.level = 0;
          item_param.promote_level = 0;
          PlayerItemComp::addItem(ItemComp, &item_param, (const ActionReason *)(v4 + 400), 0LL);
          v38 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          Level = ChessActivity::getLevel(v38);
          proto::InBattleChessSettleInfo::set_chess_level(chess_settle_info, Level);
          v40 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          Exp = ChessActivity::getExp(v40);
          proto::InBattleChessSettleInfo::set_chess_exp(chess_settle_info, Exp);
          proto::InBattleChessSettleInfo::set_old_chess_level(
            chess_settle_info,
            (google::protobuf::uint32)old_chess_level);
          proto::InBattleChessSettleInfo::set_old_chess_exp(chess_settle_info, HIDWORD(old_chess_level));
          Player::sendProto(player, (const google::protobuf::Message *)(v4 + 464));
          Uid = Player::getUid(player);
          *(_DWORD *)(v4 + 112) = TowerDefensePlay::getCostPointsByUid(tower_defense_comp, Uid);
          v43 = tower_defense_comp;
          if ( *(_BYTE *)(((unsigned __int64)tower_defense_comp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v44 = (unsigned __int64)(tower_defense_comp->_vptr_DescribalBase + 5);
          if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
            v44 = __asan_report_load8();
          *(_DWORD *)(v4 + 128) = (*(__int64 (__fastcall **)(TowerDefensePlay *))v44)(v43);
          ChessMultistagePlay::getSelectedCardQualityCountMap((std::map<unsigned int,unsigned int> *)(v4 + 544), this);
          common::tools::perf::make_shared<ChessDungeonSettleEvent,unsigned int &,unsigned int &,bool &,bool &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &,std::map<unsigned int,unsigned int> &>(
            (unsigned int *)(v4 + 208),
            (unsigned int *)(v4 + 80),
            (bool *)&this->chess_map_id_,
            &this->is_teach_,
            (unsigned int *)(v4 + 48),
            (unsigned int *)(v4 + 96),
            &this->kill_monsters_,
            (unsigned int *)(v4 + 112),
            &this->escaped_monsters_,
            (std::map<unsigned int,unsigned int> *)(v4 + 128),
            (unsigned int *)(v4 + 544),
            v66,
            v67,
            use_timea,
            (unsigned int *)player,
            (unsigned int *)this,
            v74,
            v75,
            old_chess_level,
            remain_exp);
          EventComp = Player::getEventComp((Player *const)_0a._anon_0._M_allocated_capacity);
          std::shared_ptr<BaseEvent>::shared_ptr<ChessDungeonSettleEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&item_param,
            (const std::shared_ptr<ChessDungeonSettleEvent> *)(v4 + 208));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&item_param);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&item_param);
          v46 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          ChessActivity::onDungeonSettle(v46, *(_DWORD *)(v4 + 80), *(_BYTE *)(v4 + 48));
          BasicComp = Player::getBasicComp((Player *const)_0a._anon_0._M_allocated_capacity);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v107, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64), 0xDB7u, _0a);
          std::string::~string(&v107);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyChessDungeonSettle>();
          v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          proto_log::PlayerLogBodyChessDungeonSettle::set_dungeon_id(v48, *(_DWORD *)(v4 + 80));
          v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
          v51 = DungeonScene::getTransaction[abi:cxx11](v50);
          proto_log::PlayerLogBodyChessDungeonSettle::set_transaction(v49, v51);
          v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          proto_log::PlayerLogBodyChessDungeonSettle::set_use_time(v52, use_timeb);
          v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          v54 = std::unordered_map<unsigned int,ChessPlayer>::size(&thisa->chess_player_map_);
          proto_log::PlayerLogBodyChessDungeonSettle::set_player_count(v53, v54);
          v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          proto_log::PlayerLogBodyChessDungeonSettle::set_dungeon_settle_type(v55, resulta);
          v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)chess_player_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyChessDungeonSettle::set_chess_level(v56, chess_player_ptr->chess_level);
          v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          proto_log::PlayerLogBodyChessDungeonSettle::set_add_exp(v57, *(_DWORD *)(v4 + 96));
          v58 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          proto_log::PlayerLogBodyChessDungeonSettle::set_real_add_exp(v58, real_add_exp);
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 624));
          TowerDefensePlay::queryTowerNumMap(tower_defense_comp, (std::map<unsigned int,unsigned int> *)(v4 + 624));
          __for_range_0 = (std::map<unsigned int,unsigned int> *)(v4 + 624);
          __for_begin._M_current = (ExhibitionScoreParam *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 624))._M_node;
          __for_end._M_current = (ExhibitionScoreParam *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
          {
            v99 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
            gear_id = std::get<0ul,unsigned int const,unsigned int>(v99);
            num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v99);
            v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
            proto_gear_info = proto_log::PlayerLogBodyChessDungeonSettle::add_gear_info_list(v59);
            if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::ChessGearInfo::set_gear_id(proto_gear_info, *gear_id);
            if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::ChessGearInfo::set_num(proto_gear_info, *num);
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          }
          log_card_num = 0LL;
          __for_range_1 = &thisa->selected_card_vec_;
          __for_begin._M_current = (ExhibitionScoreParam *)std::vector<ChessSelectedCard>::begin(&thisa->selected_card_vec_)._M_current;
          __for_end._M_current = (ExhibitionScoreParam *)std::vector<ChessSelectedCard>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<ChessSelectedCard *,std::vector<ChessSelectedCard>>(
                    (const __gnu_cxx::__normal_iterator<ChessSelectedCard*,std::vector<ChessSelectedCard> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<ChessSelectedCard*,std::vector<ChessSelectedCard> > *)&__for_end) )
          {
            selected_card = __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator*((const __gnu_cxx::__normal_iterator<ChessSelectedCard*,std::vector<ChessSelectedCard> > *const)&__for_begin);
            v60 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
            if ( *(_BYTE *)(((unsigned __int64)selected_card >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)selected_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)selected_card >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyChessDungeonSettle::add_selected_card_id_list(v60, selected_card->card_id);
            if ( ++log_card_num > 0xFF )
            {
              common::milog::MiLogStream::create(
                &v107,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
                "onDungeonSettle",
                958);
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v107,
                (const char (*)[24])" too many cards in log.");
              common::milog::MiLogStream::~MiLogStream(&v107);
              break;
            }
            __gnu_cxx::__normal_iterator<ChessSelectedCard *,std::vector<ChessSelectedCard>>::operator++((__gnu_cxx::__normal_iterator<ChessSelectedCard*,std::vector<ChessSelectedCard> > *const)&__for_begin);
          }
          __for_range_2 = &thisa->round_escaped_map_;
          __for_begin._M_current = (ExhibitionScoreParam *)std::map<unsigned int,unsigned int>::begin(&thisa->round_escaped_map_)._M_node;
          __for_end._M_current = (ExhibitionScoreParam *)std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
          {
            v95 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
            round = std::get<0ul,unsigned int const,unsigned int>(v95);
            num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v95);
            v61 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
            proto_escaped_monster_info = proto_log::PlayerLogBodyChessDungeonSettle::add_escaped_monster_info_list(v61);
            if ( *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::ChessEscapedMonsterInfo::set_round(proto_escaped_monster_info, *round);
            if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::ChessEscapedMonsterInfo::set_escaped_num(proto_escaped_monster_info, *num_0);
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          }
          v62 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          CurRound = ChessMultistagePlay::getCurRound(thisa);
          proto_log::PlayerLogBodyChessDungeonSettle::set_end_round(v62, CurRound);
          pool_entrance_point_vec_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>>(
                                          &thisa->chess_mystery_.pool_entrance_point_map,
                                          &thisa->total_round_);
          if ( pool_entrance_point_vec_ptr )
          {
            __for_range_3 = pool_entrance_point_vec_ptr;
            __for_begin._M_current = (ExhibitionScoreParam *)std::vector<std::pair<unsigned int,unsigned int>>::begin(pool_entrance_point_vec_ptr)._M_current;
            __for_end._M_current = (ExhibitionScoreParam *)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_3)._M_current;
            while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                      (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
            {
              v92 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
              pool_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v92);
              _ = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v92);
              v64 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
              if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto_log::PlayerLogBodyChessDungeonSettle::add_pool_id_list(v64, *pool_id);
              __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
            }
          }
          v65 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 240));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->kill_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->kill_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyChessDungeonSettle::set_kill_stage_cost_time(v65, thisa->kill_stage_cost_time_);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)&item_param,
            0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChessDungeonSettle,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyChessDungeonSettle> *)(v4 + 240));
          Player::printStatLog(playera, &p_body_ptr, (MessagePtr *)&item_param, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&item_param);
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 624));
          std::shared_ptr<proto_log::PlayerLogBodyChessDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChessDungeonSettle> *const)(v4 + 240));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64));
          std::shared_ptr<ChessDungeonSettleEvent>::~shared_ptr((std::shared_ptr<ChessDungeonSettleEvent> *const)(v4 + 208));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 544));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 336));
          std::vector<ExhibitionScoreParam>::~vector((std::vector<ExhibitionScoreParam> *const)(v4 + 272));
          proto::MultistagePlaySettleNotify::~MultistagePlaySettleNotify((proto::MultistagePlaySettleNotify *const)(v4 + 464));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v107,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
            "onDungeonSettle",
            860);
          v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v107,
                  (const char (*)[40])"[CHESS] find chess player failed, uid: ");
          *(_DWORD *)(v4 + 128) = Player::getUid(player);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 128));
          common::milog::MiLogStream::~MiLogStream(&v107);
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 176));
  }
  std::shared_ptr<ChessActivity>::~shared_ptr((std::shared_ptr<ChessActivity> *const)(v4 + 144));
  if ( v108 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 985: range 000000001806D4A2-000000001806D762
void __fastcall ChessMultistagePlay::notifyPlayerInfo(const ChessMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GameserverService *v5; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  common::tools::transcribe_cv_t_33 *player_info_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:984 64 16 14 player_ptr:986";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::notifyPlayerInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  v5 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v5);
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "notifyPlayerInfo",
      989);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v11,
           (const char (*)[32])"[CHESS] player not FOUND. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    player_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer> const>(
                        &this->chess_player_map_,
                        (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v2 + 48));
    if ( player_info_ptr )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      ChessMultistagePlay::notifyChessPlayerInfo(this, v9, player_info_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "notifyPlayerInfo",
        995);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v11,
             (const char (*)[40])"[CHESS] find chess player failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v12 == (char *)v2 )
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

// Line 1002: range 000000001806D764-000000001806DB0E
void __cdecl ChessMultistagePlay::onMonsterDie(
        ChessMultistagePlay *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  uint32_t v7; // edx
  char v8; // al
  uint32_t v9; // edi
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  std::unordered_map<unsigned int,ChessPlayer>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,ChessPlayer>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  TowerDefensePlay *tower_defense_comp; // [rsp+38h] [rbp-B8h]
  std::unordered_map<unsigned int,ChessPlayer> *__for_range; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,ChessPlayer> *__in; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,ChessPlayer> >::type *uid; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,ChessPlayer> >::type *player_info; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-90h] BYREF
  char v25[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 kill_points:1005";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::onMonsterDie;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = 1LL;
  v7 = SAFE_ADD<unsigned int,int>(this->kill_monsters_, 1);
  v8 = *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->kill_monsters_, v6, v7);
  }
  this->kill_monsters_ = v7;
  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  *(_DWORD *)(v3 + 32) = Monster::getKillScore(monster);
  TowerDefensePlay::modifyKillPointsByCards(tower_defense_comp, (uint32_t *)(v3 + 32));
  __for_range = &this->chess_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,ChessPlayer>::begin(&this->chess_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,ChessPlayer>::end(&this->chess_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,ChessPlayer>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,ChessPlayer>(__in);
    player_info = std::get<1ul,unsigned int const,ChessPlayer>(__in);
    v9 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      v9 = (unsigned int)uid;
      __asan_report_load4();
    }
    if ( !TowerDefensePlay::addBuildingPoints(tower_defense_comp, *uid, v9, 0) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "onMonsterDie",
        1011);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v24,
              (const char (*)[18])"[CHESS] monster: ");
      val = Monster::getMonsterId(monster);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v11,
              (const char (*)[20])" was killed. grant ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v13,
              (const char (*)[20])" points for player:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, uid);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator++(&__for_begin);
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1017: range 000000001806DB10-000000001806E123
void __cdecl ChessMultistagePlay::setChessMystery(ChessMultistagePlay *const this, ChessMystery *p_chess_mystery)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator __for_begin_0; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator __for_end_0; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-E0h]
  std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>> *__for_range_1; // [rsp+48h] [rbp-D8h]
  const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > *v22; // [rsp+50h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *round; // [rsp+58h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *pool_entrance_point_vec; // [rsp+60h] [rbp-C0h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range_2; // [rsp+68h] [rbp-B8h]
  const std::pair<unsigned int,unsigned int> *v26; // [rsp+70h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *pool_id; // [rsp+78h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *entrance_point_id; // [rsp+80h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *v29; // [rsp+88h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *entrance_index; // [rsp+90h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *point_id; // [rsp+98h] [rbp-88h]
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-80h] BYREF
  char v33[96]; // [rsp+C0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 exit_point_id:1026";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::setChessMystery;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "setChessMystery",
    1018);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v32, (const char (*)[24])"[CHESS] setChessMystery");
  common::milog::MiLogStream::~MiLogStream(&v32);
  ChessMystery::operator=(&this->chess_mystery_, p_chess_mystery);
  __for_range = &this->chess_mystery_.entrance_point_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->chess_mystery_.entrance_point_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->chess_mystery_.entrance_point_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    entrance_index = std::get<0ul,unsigned int const,unsigned int>(v29);
    point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v29);
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "setChessMystery",
      1024);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v32,
           (const char (*)[45])"[CHESS] entrance_point_map, entrance_index: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, entrance_index);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" ,point_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, point_id);
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->chess_mystery_.exit_point_id_vec;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin(&this->chess_mystery_.exit_point_id_vec)._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v8;
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "setChessMystery",
      1028);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v32,
           (const char (*)[43])"[CHESS] exit_point_id_vec, exit_point_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v32);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  __for_range_1 = &this->chess_mystery_.pool_entrance_point_map;
  __for_begin_0._M_node = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::begin(&this->chess_mystery_.pool_entrance_point_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator*(&__for_begin_0);
    round = std::get<0ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v22);
    pool_entrance_point_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>(v22);
    __for_range_2 = pool_entrance_point_vec;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::begin(pool_entrance_point_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_2)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
    {
      v26 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
      pool_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v26);
      entrance_point_id = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v26);
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
        "setChessMystery",
        1034);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v32,
              (const char (*)[41])"[CHESS] pool_entrance_point_map, round: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, round);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" ,pool_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, pool_id);
      v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v13,
              (const char (*)[22])" ,entrance_point_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, entrance_point_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator++(&__for_begin_0);
  }
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1041: range 000000001806E124-000000001806E47F
std::vector<unsigned int> *__fastcall ChessMultistagePlay::getMonsterPoolIdVecByRound(
        std::vector<unsigned int> *retstr,
        ChessMultistagePlay *const this,
        uint32_t round)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int,unsigned int> *v13; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *pool_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *entrance_index; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 round:1040 64 8 9 iter:1044";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::getMonsterPoolIdVecByRound;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = round;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
    "getMonsterPoolIdVecByRound",
    1042);
  v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v16,
         (const char (*)[44])"[CHESS] getMonsterPoolIdVecByRound, round: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v16);
  std::vector<unsigned int>::vector(retstr);
  *(std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::iterator *)(v3 + 64) = std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::find(&this->chess_mystery_.pool_entrance_point_map, (const std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 48));
  __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::map<unsigned int,std::vector<std::pair<unsigned int,unsigned int>>>::end(&this->chess_mystery_.pool_entrance_point_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "getMonsterPoolIdVecByRound",
      1047);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v16,
           (const char (*)[59])"[CHESS] getMonsterPoolIdVecByRound failed, round invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::pair<unsigned int,unsigned int>> > > *const)(v3 + 64))->second;
    __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin,
              &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
      pool_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v13);
      entrance_index = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v13);
      std::vector<unsigned int>::push_back(retstr, pool_id);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
    }
  }
  if ( v17 == (char *)v3 )
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
  return retstr;
};

// Line 1060: range 000000001806E480-000000001806E4A1
uint32_t __cdecl ChessMultistagePlay::getCurRound(const ChessMultistagePlay *const this)
{
  TowerDefensePlay *TowerDefenseComp; // rax

  TowerDefenseComp = ChessMultistagePlay::getTowerDefenseComp(this);
  return TowerDefensePlay::getCurrentRound(TowerDefenseComp);
};

// Line 1065: range 000000001806E4A2-000000001806E68A
std::map<unsigned int,unsigned int> *__cdecl ChessMultistagePlay::getSelectedCardQualityCountMap(
        std::map<unsigned int,unsigned int> *retstr,
        const ChessMultistagePlay *const this)
{
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  unsigned __int64 v3; // rax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-4Ch] BYREF
  std::vector<ChessSelectedCard>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<ChessSelectedCard>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::vector<ChessSelectedCard> *__for_range; // [rsp+28h] [rbp-38h]
  const ChessSelectedCard *selected_card; // [rsp+30h] [rbp-30h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+40h] [rbp-20h] BYREF

  std::map<unsigned int,unsigned int>::map(retstr);
  __for_range = &this->selected_card_vec_;
  __for_begin._M_current = std::vector<ChessSelectedCard>::begin(&this->selected_card_vec_)._M_current;
  __for_end._M_current = std::vector<ChessSelectedCard>::end(&this->selected_card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<ChessSelectedCard const*,std::vector<ChessSelectedCard>>(&__for_begin, &__for_end) )
  {
    selected_card = __gnu_cxx::__normal_iterator<ChessSelectedCard const*,std::vector<ChessSelectedCard>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.activity_chess_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)selected_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)selected_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)selected_card >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        p_activity_chess_config_mgr,
                        selected_card->card_id);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __k = card_config_ptr->card_quality_type;
      v3 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](retstr, &__k);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load4();
      ++*(_DWORD *)v3;
    }
    __gnu_cxx::__normal_iterator<ChessSelectedCard const*,std::vector<ChessSelectedCard>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1079: range 000000001806E68C-000000001806E955
__int64 __fastcall ChessMultistagePlay::forceCardEffectByGM(
        ChessMultistagePlay *const this,
        Player *player,
        uint32_t card_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t pick_index; // [rsp+2Ch] [rbp-B4h]
  TowerDefensePlay *tower_defense_comp; // [rsp+30h] [rbp-B0h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 card_id:1078";
  *(_QWORD *)(v3 + 16) = ChessMultistagePlay::forceCardEffectByGM;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = card_id;
  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                      &v6->design_config.txt_config_mgr.activity_chess_config_mgr,
                      *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( card_config_ptr )
  {
    pick_index = ChessMultistagePlay::getNextPickIndex(this);
    LODWORD(v13._M_ptr) = *(_DWORD *)(v3 + 32);
    HIDWORD(v13._M_ptr) = ChessMultistagePlay::getCurRound(this);
    LODWORD(v13._M_refcount._M_pi) = pick_index;
    HIDWORD(v13._M_refcount._M_pi) = Player::getUid(player);
    std::vector<ChessSelectedCard>::push_back(
      &this->selected_card_vec_,
      (std::vector<ChessSelectedCard>::value_type *)&v13);
    TowerDefensePlay::takeCardEffect(tower_defense_comp, player, *(_DWORD *)(v3 + 32), pick_index);
    TowerDefensePlay::onSelectCard(tower_defense_comp, player, *(_DWORD *)(v3 + 32));
    ChessMultistagePlay::broadcastSelectedCards(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "forceCardEffectByGM",
      1084);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v14,
           (const char (*)[59])"[CHESS] findActivityChessCardExcelConfig failed, card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
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

// Line 1096: range 000000001806E956-000000001806EC2C
uint32_t __cdecl ChessMultistagePlay::getRefreshCost(
        const ChessMultistagePlay *const this,
        const ChessPlayer *chess_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  TowerDefensePlay *tower_defense_comp; // [rsp+10h] [rbp-A0h]
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 cost:1097";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::getRefreshCost;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = -1;
  tower_defense_comp = ChessMultistagePlay::getTowerDefenseComp(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_chess_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)chess_player + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player->chess_level >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                       p_activity_chess_config_mgr,
                       chess_player->chess_level);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->card_cost >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = level_config_ptr->card_cost;
    if ( *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)chess_player >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    TowerDefensePlay::procRefreshCost(tower_defense_comp, (uint32_t *)(v2 + 32), chess_player->uid);
    result = *(_DWORD *)(v2 + 32);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "getRefreshCost",
      1102);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v11,
           (const char (*)[51])"[CHESS] findActivityChessLevelExcelConfig, level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &chess_player->chess_level);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = *(_DWORD *)(v2 + 32);
  }
  if ( v12 == (char *)v2 )
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

// Line 1111: range 000000001806EC2E-000000001806EE70
void __cdecl ChessMultistagePlay::tryUpdateStandbyPool(ChessMultistagePlay *const this, ChessPlayer *chess_player)
{
  ActivityChessExcelConfigMgr *p_activity_chess_config_mgr; // rcx
  std::map<unsigned int,std::vector<unsigned int>> *p_standby_card_pool_map; // rcx
  std::vector<unsigned int> *v4; // rax
  std::map<unsigned int,std::vector<unsigned int>>::key_type __k; // [rsp+14h] [rbp-4Ch] BYREF
  std::vector<ChessCandidateCard>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<ChessCandidateCard>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<ChessCandidateCard> *__for_range; // [rsp+28h] [rbp-38h]
  const ChessCandidateCard *candidate_card; // [rsp+30h] [rbp-30h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+40h] [rbp-20h] BYREF

  __for_range = &chess_player->candidate_card_vec;
  __for_begin._M_current = std::vector<ChessCandidateCard>::begin(&chess_player->candidate_card_vec)._M_current;
  __for_end._M_current = std::vector<ChessCandidateCard>::end(&chess_player->candidate_card_vec)._M_current;
  while ( __gnu_cxx::operator!=<ChessCandidateCard *,std::vector<ChessCandidateCard>>(&__for_begin, &__for_end) )
  {
    candidate_card = __gnu_cxx::__normal_iterator<ChessCandidateCard *,std::vector<ChessCandidateCard>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    p_activity_chess_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.activity_chess_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)candidate_card >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)candidate_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)candidate_card >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                        p_activity_chess_config_mgr,
                        candidate_card->card_id);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&candidate_card->is_picked >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)candidate_card + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&candidate_card->is_picked >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load1(&candidate_card->is_picked);
      }
      if ( !candidate_card->is_picked )
        goto LABEL_12;
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_remove_on_pick >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)card_config_ptr - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->is_remove_on_pick >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(&card_config_ptr->is_remove_on_pick);
      }
      if ( !card_config_ptr->is_remove_on_pick )
      {
LABEL_12:
        p_standby_card_pool_map = &this->standby_card_pool_map_;
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_quality_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        __k = card_config_ptr->card_quality_type;
        v4 = std::map<unsigned int,std::vector<unsigned int>>::operator[](p_standby_card_pool_map, &__k);
        std::vector<unsigned int>::push_back(v4, &candidate_card->card_id);
      }
    }
    __gnu_cxx::__normal_iterator<ChessCandidateCard *,std::vector<ChessCandidateCard>>::operator++(&__for_begin);
  }
  std::vector<ChessCandidateCard>::clear(&chess_player->candidate_card_vec);
};

// Line 1130: range 000000001806EE72-000000001806EF55
void __cdecl ChessMultistagePlay::notifyAllPlayerInfo(const ChessMultistagePlay *const this)
{
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,ChessPlayer> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,ChessPlayer> *v4; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,ChessPlayer> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *_; // [rsp+38h] [rbp-8h]

  __for_range = &this->chess_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,ChessPlayer>::begin(&this->chess_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,ChessPlayer>::end(&this->chess_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,ChessPlayer>,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,ChessPlayer>(v4);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *)std::get<1ul,unsigned int const,ChessPlayer>(v4);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ChessMultistagePlay::notifyPlayerInfo(this, *uid);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator++(&__for_begin);
  }
};

// Line 1138: range 000000001806EF56-000000001806F114
__int64 __fastcall ChessMultistagePlay::getPlayerChessLevel(const ChessMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::tools::transcribe_cv_t_33 *chess_player_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1137";
  *(_QWORD *)(v2 + 16) = ChessMultistagePlay::getPlayerChessLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  chess_player_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ChessPlayer> const>(
                       &this->chess_player_map_,
                       (const std::unordered_map<unsigned int,ChessPlayer>::key_type *)(v2 + 32));
  if ( chess_player_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chess_player_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_player_ptr->chess_level >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = chess_player_ptr->chess_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/chess_multistage_play.cpp",
      "getPlayerChessLevel",
      1144);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v8,
           (const char (*)[40])"[CHESS] find chess player failed, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 1149: range 000000001806F116-000000001806F15E
TowerDefensePlay *__cdecl ChessMultistagePlay::getTowerDefenseComp(const ChessMultistagePlay *const this)
{
  std::__shared_ptr_access<TowerDefensePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<TowerDefensePlay> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::findComp<TowerDefensePlay>((const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const)v3);
  v1 = std::__shared_ptr_access<TowerDefensePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<TowerDefensePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<TowerDefensePlay>::~shared_ptr(v3);
  return v1;
};

// Line 1154: range 000000001806F160-000000001806FBFF
std::string *__cdecl ChessMultistagePlay::getCardNumByGM[abi:cxx11](
        std::string *retstr,
        const ChessMultistagePlay *const this,
        Player *player,
        uint32_t card_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  const std::pair<unsigned int const,std::vector<unsigned int> > *v9; // rax
  unsigned int *v10; // rdx
  const std::pair<unsigned int const,std::vector<unsigned int> > *v11; // rax
  unsigned int *v12; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-211h] BYREF
  uint32_t pool_num; // [rsp+30h] [rbp-210h]
  uint32_t standby_num; // [rsp+34h] [rbp-20Ch]
  unsigned int pool_card_id_0; // [rsp+38h] [rbp-208h]
  unsigned int pool_card_id; // [rsp+3Ch] [rbp-204h]
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_begin_0; // [rsp+40h] [rbp-200h] BYREF
  std::unordered_map<unsigned int,ChessPlayer>::const_iterator __for_end_0; // [rsp+48h] [rbp-1F8h] BYREF
  std::vector<ChessSelectedCard>::const_iterator __for_begin; // [rsp+50h] [rbp-1F0h] BYREF
  std::vector<ChessSelectedCard>::const_iterator __for_end; // [rsp+58h] [rbp-1E8h] BYREF
  const std::vector<ChessSelectedCard> *__for_range; // [rsp+60h] [rbp-1E0h]
  const std::unordered_map<unsigned int,ChessPlayer> *__for_range_0; // [rsp+68h] [rbp-1D8h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range_2; // [rsp+70h] [rbp-1D0h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range_4; // [rsp+78h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__0; // [rsp+80h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *pool_vec_0; // [rsp+88h] [rbp-1B8h]
  std::vector<unsigned int> *__for_range_5; // [rsp+90h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *_; // [rsp+98h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *pool_vec; // [rsp+A0h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range_3; // [rsp+A8h] [rbp-198h]
  const std::pair<unsigned int const,ChessPlayer> *v43; // [rsp+B0h] [rbp-190h]
  std::tuple_element<0,const std::pair<unsigned int const,ChessPlayer> >::type *uid; // [rsp+B8h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *chess_info; // [rsp+C0h] [rbp-180h]
  const std::vector<ChessCandidateCard> *__for_range_1; // [rsp+C8h] [rbp-178h]
  const ChessCandidateCard *candidate_card; // [rsp+D0h] [rbp-170h]
  const ChessSelectedCard *selected_card; // [rsp+D8h] [rbp-168h]
  std::pair<unsigned int const,std::vector<unsigned int> > __in; // [rsp+E0h] [rbp-160h] BYREF
  char v50[320]; // [rsp+100h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 7 ss:1201 64 32 12 ret_msg:1155 128 48 23 uid_picked_num_map:1160 208 48 21 uid_wait_num_map:1168";
  *(_QWORD *)(v4 + 16) = ChessMultistagePlay::getCardNumByGM[abi:cxx11];
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  std::string::basic_string(v4 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_teach_);
  }
  if ( this->is_teach_ )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, " teach level.", &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
    __for_range = &this->selected_card_vec_;
    __for_begin._M_current = std::vector<ChessSelectedCard>::begin(&this->selected_card_vec_)._M_current;
    __for_end._M_current = std::vector<ChessSelectedCard>::end(&this->selected_card_vec_)._M_current;
    while ( __gnu_cxx::operator!=<ChessSelectedCard const*,std::vector<ChessSelectedCard>>(&__for_begin, &__for_end) )
    {
      selected_card = __gnu_cxx::__normal_iterator<ChessSelectedCard const*,std::vector<ChessSelectedCard>>::operator*(&__for_begin);
      if ( !card_id )
        goto LABEL_14;
      if ( *(_BYTE *)(((unsigned __int64)selected_card >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)selected_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)selected_card >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( card_id == selected_card->card_id )
      {
LABEL_14:
        v7 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                 (std::map<unsigned int,unsigned int> *const)(v4 + 128),
                                 &selected_card->uid);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load4();
        ++*(_DWORD *)v7;
      }
      __gnu_cxx::__normal_iterator<ChessSelectedCard const*,std::vector<ChessSelectedCard>>::operator++(&__for_begin);
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 208));
    __for_range_0 = &this->chess_player_map_;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,ChessPlayer>::begin(&this->chess_player_map_)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,ChessPlayer>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,ChessPlayer>,false>(&__for_begin_0, &__for_end_0) )
    {
      v43 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator*(&__for_begin_0);
      uid = std::get<0ul,unsigned int const,ChessPlayer>(v43);
      chess_info = (std::tuple_element<1,const std::pair<unsigned int const,ChessPlayer> >::type *)std::get<1ul,unsigned int const,ChessPlayer>(v43);
      __for_range_1 = &chess_info->candidate_card_vec;
      __for_begin._M_current = (const ChessSelectedCard *)std::vector<ChessCandidateCard>::begin(&chess_info->candidate_card_vec)._M_current;
      __for_end._M_current = (const ChessSelectedCard *)std::vector<ChessCandidateCard>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<ChessCandidateCard const*,std::vector<ChessCandidateCard>>(
                (const __gnu_cxx::__normal_iterator<const ChessCandidateCard*,std::vector<ChessCandidateCard> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const ChessCandidateCard*,std::vector<ChessCandidateCard> > *)&__for_end) )
      {
        candidate_card = __gnu_cxx::__normal_iterator<ChessCandidateCard const*,std::vector<ChessCandidateCard>>::operator*((const __gnu_cxx::__normal_iterator<const ChessCandidateCard*,std::vector<ChessCandidateCard> > *const)&__for_begin);
        if ( !card_id )
          goto LABEL_26;
        if ( *(_BYTE *)(((unsigned __int64)candidate_card >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)candidate_card & 7) + 3) >= *(_BYTE *)(((unsigned __int64)candidate_card >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( card_id == candidate_card->card_id )
        {
LABEL_26:
          v8 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                   (std::map<unsigned int,unsigned int> *const)(v4 + 208),
                                   uid);
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v8 = __asan_report_load4();
          ++*(_DWORD *)v8;
        }
        __gnu_cxx::__normal_iterator<ChessCandidateCard const*,std::vector<ChessCandidateCard>>::operator++((__gnu_cxx::__normal_iterator<const ChessCandidateCard*,std::vector<ChessCandidateCard> > *const)&__for_begin);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,ChessPlayer>,false,false>::operator++(&__for_begin_0);
    }
    pool_num = 0;
    __for_range_2 = &this->active_card_pool_map_;
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::begin(&this->active_card_pool_map_)._M_node;
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end_0) )
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
      std::pair<unsigned int const,std::vector<unsigned int>>::pair(&__in, v9);
      _ = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&__in);
      pool_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(&__in);
      __for_range_3 = pool_vec;
      __for_begin._M_current = (const ChessSelectedCard *)std::vector<unsigned int>::begin(pool_vec)._M_current;
      __for_end._M_current = (const ChessSelectedCard *)std::vector<unsigned int>::end(__for_range_3)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        pool_card_id = *v10;
        if ( !card_id || pool_card_id == card_id )
          ++pool_num;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&__in);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
    }
    standby_num = 0;
    __for_range_4 = &this->standby_card_pool_map_;
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::begin(&this->standby_card_pool_map_)._M_node;
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ChessPlayer>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_4)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end_0) )
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
      std::pair<unsigned int const,std::vector<unsigned int>>::pair(&__in, v11);
      __0 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&__in);
      pool_vec_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(&__in);
      __for_range_5 = pool_vec_0;
      __for_begin._M_current = (const ChessSelectedCard *)std::vector<unsigned int>::begin(pool_vec_0)._M_current;
      __for_end._M_current = (const ChessSelectedCard *)std::vector<unsigned int>::end(__for_range_5)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        pool_card_id_0 = *v12;
        if ( !card_id || pool_card_id_0 == card_id )
          ++standby_num;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&__in);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
            "card_id: ");
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, card_id);
    v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ", picked: ");
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int,unsigned int>(
            v15,
            (const std::map<unsigned int,unsigned int> *)(v4 + 128));
    v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, ", wait: ");
    v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int,unsigned int>(
            v17,
            (const std::map<unsigned int,unsigned int> *)(v4 + 208));
    v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, ", pool: ");
    v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, pool_num);
    v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, ", standby: ");
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, standby_num);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      retstr,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 208));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
  }
  std::string::~string((void *)(v4 + 64));
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};
