// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp

// Line 37: range 000000001512301E-00000000151238BA
int32_t __cdecl FleurFairMultistagePlay::initByParamTable(
        FleurFairMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Player *v5; // rax
  FleurFairActivity *v6; // rax
  std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const std::set<unsigned int> *TeamUidSet; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  Player *v14; // rcx
  int32_t result; // eax
  Scene *scene; // [rsp+10h] [rbp-150h]
  int32_t v17; // [rsp+1Ch] [rbp-144h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  FleurFairDungeonPlayerInfo *player_info; // [rsp+48h] [rbp-118h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-110h] BYREF
  char v23[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 6 uid:81 64 16 13 player_ptr:39 96 16 15 activity_ptr:55 128 16 20 dungeon_scene_ptr:73 1"
                        "60 16 13 player_ptr:83";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::initByParamTable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &)#1},void,void>(
      &p_func,
      (FleurFairMultistagePlay::initByParamTable::<lambda(Player&)>)__PAIR128__(v2 + 64, (unsigned __int64)this));
    Scene::foreachPlayer(scene, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "initByParamTable",
      51);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[35])"[FLEUR_FAIR] player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v17 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::getActivityComp(v5);
    PlayerActivityComp::findOpenningActivity<FleurFairActivity>((PlayerActivityComp *const)(v2 + 96));
    if ( std::operator==<FleurFairActivity>(0LL, (const std::shared_ptr<FleurFairActivity> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "initByParamTable",
        58);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&p_func,
        (const char (*)[37])"[FLEUR_FAIR] activity_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v17 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( FleurFairActivity::initDungeonParam(v6, &this->dungeon_param_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
          "initByParamTable",
          64);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)&p_func,
          (const char (*)[37])"[FLEUR_FAIR] initDungeonParam failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v17 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::unordered_map<std::string,int>::operator=(
          &this->gallery_temp_value_map,
          &v7->gm_dungeon_gallery_temp_value_map);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
          "initByParamTable",
          70);
        v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)&p_func,
               (const char (*)[43])"[FLEUR_FAIR] gallery_temp_value_map size: ");
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<std::string,int>::size(&this->gallery_temp_value_map);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v8,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        toPtr<DungeonScene,Scene>((Scene *)(v2 + 128));
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
            "initByParamTable",
            76);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)&p_func,
            (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
          v17 = -1;
        }
        else
        {
          v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          TeamUidSet = DungeonScene::getTeamUidSet(v9);
          std::set<unsigned int>::operator=(&this->team_uid_set_, TeamUidSet);
          __for_range = &this->player_uid_set_;
          __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = *v11;
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Scene::findPlayer((const Scene *const)(v2 + 160), (__int64)this->scene_, *(_DWORD *)(v2 + 48));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_func,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
                "initByParamTable",
                86);
              v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&p_func,
                      (const char (*)[42])"[FLEUR_FAIR] player_ptr is nullptr, uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
              v17 = -1;
              v13 = 0;
            }
            else
            {
              player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                              &this->player_info_map_,
                              (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v2 + 48));
              v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              FleurFairMultistagePlay::initPlayerInfo(this, v14, player_info);
              v13 = 1;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
            if ( v13 != 1 )
              goto LABEL_32;
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          v17 = 0;
        }
LABEL_32:
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
      }
    }
    std::shared_ptr<FleurFairActivity>::~shared_ptr((std::shared_ptr<FleurFairActivity> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v17;
  if ( v23 == (char *)v2 )
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

// Line 42: range 0000000015122FAC-000000001512301D
ForeachPolicy __cdecl FleurFairMultistagePlay::initByParamTable(luabind::adl::object const&)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::initByParamTable::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<Player> __r; // [rsp+10h] [rbp-10h] BYREF

  toPtr<Player,Player>((Player *)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::shared_ptr<Player>::operator=(__closure->__player_ptr, &__r);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  return 1;
};

// Line 97: range 00000000151238BC-0000000015123965
int32_t __cdecl FleurFairMultistagePlay::initStage(
        FleurFairMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
    return FleurFairMultistagePlay::initPreviewStage(this, param_table);
  if ( stage_type > MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
    return SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
  if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY )
    return FleurFairMultistagePlay::initGalleryStage(this, param_table);
  if ( stage_type != MULTISTAGE_STAGE_FLEUR_FAIR_BOSS )
    return SceneMultistagePlay::initStage(this, stage_type, duration, stage_name, param_table);
  return FleurFairMultistagePlay::initBossStage(this, param_table);
};

// Line 127: range 0000000015123966-0000000015123C09
int32_t __cdecl FleurFairMultistagePlay::toClient(
        const FleurFairMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::InBattleFleurFairInfo *fleur_fair_info; // [rsp+28h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v8; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *ability_group_id; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "toClient",
      130);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v11,
      (const char (*)[50])"[FLEUR_FAIR] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    fleur_fair_info = proto::MultistagePlayInfo::mutable_fleur_fair_info(info);
    __for_range = &this->dungeon_param_.ability_group_id_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->dungeon_param_.ability_group_id_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->dungeon_param_.ability_group_id_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,unsigned int>(v8);
      ability_group_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v8);
      if ( *(_BYTE *)(((unsigned __int64)ability_group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ability_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_group_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleFleurFairInfo::add_ability_group_id_list(fleur_fair_info, *ability_group_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v3 = proto::InBattleFleurFairInfo::mutable_gallery_id_list(fleur_fair_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->dungeon_param_.gallery_id_vec, v3);
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleFleurFairInfo::set_preview_stage_index(fleur_fair_info, this->preview_stage_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->preview_display_duration_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_display_duration_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleFleurFairInfo::set_preview_display_duration(fleur_fair_info, this->preview_display_duration_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InBattleFleurFairInfo::set_gallery_stage_index(fleur_fair_info, this->gallery_stage_index_);
    return 0;
  }
};

// Line 148: range 0000000015123C0A-0000000015123CD1
void __cdecl FleurFairMultistagePlay::onStageStart(FleurFairMultistagePlay *const this)
{
  data::MultistageStageType stage_type; // eax
  std::string v2; // [rsp+10h] [rbp-20h] BYREF

  FleurFairMultistagePlay::createStageTransaction[abi:cxx11](&v2, this);
  std::string::operator=(&this->stage_transaction_, &v2);
  std::string::~string(&v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    FleurFairMultistagePlay::onPreviewStageStart(this);
  }
  else if ( stage_type <= MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY )
    {
      FleurFairMultistagePlay::onGalleryStageStart(this);
    }
    else if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_BOSS )
    {
      FleurFairMultistagePlay::onBossStageStart(this);
    }
  }
};

// Line 173: range 0000000015123CD2-0000000015123D89
void __cdecl FleurFairMultistagePlay::onStageEnd(FleurFairMultistagePlay *const this, bool is_succ)
{
  data::MultistageStageType stage_type; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    FleurFairMultistagePlay::onPreviewStageEnd(this, is_succ);
  }
  else if ( stage_type <= MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY )
    {
      FleurFairMultistagePlay::onGalleryStageEnd(this, is_succ);
    }
    else if ( stage_type == MULTISTAGE_STAGE_FLEUR_FAIR_BOSS )
    {
      FleurFairMultistagePlay::onBossStageEnd(this, is_succ);
    }
  }
  std::string::clear(&this->stage_transaction_);
};

// Line 199: range 0000000015123D8A-0000000015123E60
void __cdecl FleurFairMultistagePlay::onStageEndByTimer(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // rax
  bool is_succ; // [rsp+1Fh] [rbp-1h]

  is_succ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_FLEUR_FAIR_BOSS )
    is_succ = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 11);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(FleurFairMultistagePlay *const, bool))v1)(this, is_succ);
  SceneMultistagePlay::notifyStageEnd(this);
  SceneMultistagePlay::notifyLuaStageEndEvent(this, is_succ);
};

// Line 211: range 00000000151241A2-00000000151242C6
void __cdecl FleurFairMultistagePlay::onEnd(FleurFairMultistagePlay *const this, bool is_succ)
{
  common::milog::MiLogStream *v2; // rax
  Scene *scene; // rbx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-40h] BYREF
  FleurFairMultistagePlay::onEnd::<lambda(Player&)> v5; // 0:rsi.8,8:dl.1

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onEnd",
    213);
  v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v4,
         (const char (*)[30])"[FLEUR_FAIR] onEnd, is_succ: ");
  common::milog::MiLogStream::operator<<(v2, is_succ);
  common::milog::MiLogStream::~MiLogStream(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  v5.__is_succ = is_succ;
  v5.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onEnd(bool)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v4,
    v5);
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v4);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v4);
};

// Line 215: range 0000000015123E62-00000000151241A1
ForeachPolicy __cdecl FleurFairMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 *v5; // rdx
  PlayerEventComp *EventComp; // r14
  ForeachPolicy result; // eax
  Player *const playera; // [rsp+0h] [rbp-C0h]
  bool __args_0[8]; // [rsp+10h] [rbp-B0h] BYREF
  const FleurFairDungeonPlayerInfo *player_info; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<FleurFairDungeonFinishEvent> __r; // [rsp+20h] [rbp-A0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:220 64 16 13 event_ptr:222";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FleurFairMultistagePlay::delAbilityGroup(__closure->__this, player);
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                  &__closure->__this->player_info_map_,
                  (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v2 + 48));
  *(_QWORD *)__args_0 = std::vector<std::string>::size(&player_info->ability_group_vec);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64 *)std::unordered_map<unsigned int,std::map<std::string,int>>::operator[](
                             &__closure->__this->uid_value_map_,
                             (const std::unordered_map<unsigned int,std::map<std::string,int>>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::tools::perf::make_shared<FleurFairDungeonFinishEvent,bool const&,unsigned int &,unsigned int &,unsigned int const&,std::vector<unsigned int> &,std::map<std::string,int> &,unsigned long>(
    (const bool *)&__r,
    (unsigned int *)&__closure->__is_succ,
    &__closure->__this->gallery_stage_cost_time_,
    &__closure->__this->boss_stage_cost_time_,
    (std::vector<unsigned int> *)&player_info->min_energy,
    (std::map<std::string,int> *)&__closure->__this->dungeon_param_.gallery_id_vec,
    v5,
    __args_0,
    (unsigned int *)player,
    (unsigned int *)__closure,
    *(const unsigned int **)__args_0,
    (std::vector<unsigned int> *)player_info,
    (std::map<std::string,int> *)__r._M_ptr,
    (unsigned __int64 *)__r._M_refcount._M_pi);
  std::shared_ptr<BaseEvent>::shared_ptr<FleurFairDungeonFinishEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v2 + 64),
    &__r);
  std::shared_ptr<FleurFairDungeonFinishEvent>::~shared_ptr(&__r);
  EventComp = Player::getEventComp(playera);
  std::shared_ptr<BaseEvent>::shared_ptr(
    (std::shared_ptr<BaseEvent> *const)&__r,
    (const std::shared_ptr<BaseEvent> *)(v2 + 64));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 64));
  result = FOREACH_CONTINUE;
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
  return result;
};

// Line 231: range 00000000151242C8-0000000015124409
void __cdecl FleurFairMultistagePlay::onPostEnterScene(FleurFairMultistagePlay *const this, Player *player)
{
  unsigned int *v2; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v3; // rax
  unsigned int value; // [rsp+14h] [rbp-1Ch] BYREF
  FleurFairDungeonPlayerInfo *player_info; // [rsp+18h] [rbp-18h]

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    value = Player::getUid(player);
    player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                    &this->player_info_map_,
                    &value);
    FleurFairMultistagePlay::initPlayerInfo(this, player, player_info);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    value = Player::getUid(player);
    v3 = std::unordered_set<unsigned int>::emplace<unsigned int>(&this->preview_enter_uid_set_, &value, v2);
    if ( v3.second )
      FleurFairMultistagePlay::tryNotifyGroupAllPlayerEnter(this);
  }
  FleurFairMultistagePlay::notifyPlayerEnergy(this, player);
  SceneMultistagePlay::notifyPlayerStage(this, player);
};

// Line 250: range 000000001512440A-00000000151244E7
void __cdecl FleurFairMultistagePlay::onLeaveScene(FleurFairMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onLeaveScene",
    252);
  v2 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v4,
         (const char (*)[33])"[FLEUR_FAIR] onLeaveScene, uid: ");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  FleurFairMultistagePlay::delAbilityGroup(this, player);
  val = Player::getUid(player);
  std::set<unsigned int>::erase(&this->team_uid_set_, &val);
};

// Line 259: range 00000000151244E8-000000001512488B
void __fastcall FleurFairMultistagePlay::onMonsterHurt(
        FleurFairMultistagePlay *const this,
        const Entity *monster,
        Creature *attacker,
        float final_damage)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::unordered_map<unsigned int,float>::mapped_type *v18; // rax
  FleurFairDungeonPlayerInfo *player_info; // [rsp+20h] [rbp-F0h]
  std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::mapped_type *monster_hurt_map; // [rsp+28h] [rbp-E8h]
  std::enable_shared_from_this<Entity> v21; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 7 uid:266 48 4 12 group_id:267 64 4 13 config_id:268 80 4 16 final_damage:258 96 16 23 at"
                        "tacker_avatar_ptr:260";
  *(_QWORD *)(v4 + 16) = FleurFairMultistagePlay::onMonsterHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(float *)(v4 + 80) = final_damage;
  std::enable_shared_from_this<Entity>::shared_from_this(&v21);
  std::dynamic_pointer_cast<Avatar,Entity>((const std::shared_ptr<Entity> *)(v4 + 96));
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)&v21);
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    *(_DWORD *)(v4 + 32) = Avatar::getUid(v7);
    *(_DWORD *)(v4 + 48) = Entity::getGroupId(monster);
    *(_DWORD *)(v4 + 64) = Entity::getConfigId(monster);
    player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                    &this->player_info_map_,
                    (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v4 + 32));
    monster_hurt_map = std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::operator[](
                         &player_info->group_stat_map,
                         (const std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::key_type *)(v4 + 48));
    v8 = (unsigned __int64)std::unordered_map<unsigned int,float>::operator[](
                             &monster_hurt_map->monster_hurt_map,
                             (const std::unordered_map<unsigned int,float>::key_type *)(v4 + 64));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load4();
    *(float *)v8 = *(float *)(v4 + 80) + *(float *)v8;
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onMonsterHurt",
      273);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v22,
           (const char (*)[33])"[FLEUR_FAIR] onMonsterHurt uid: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" ,group_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" ,config_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" ,add_damage: ");
    v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v4 + 80));
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" ,cur_damage: ");
    v18 = std::unordered_map<unsigned int,float>::operator[](
            &monster_hurt_map->monster_hurt_map,
            (const std::unordered_map<unsigned int,float>::key_type *)(v4 + 64));
    common::milog::MiLogStream::operator<<<float,(float *)0>(v17, v18);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
  if ( v23 == (char *)v4 )
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
};

// Line 279: range 000000001512488C-00000000151252DE
void __fastcall FleurFairMultistagePlay::onDungeonSettle(
        FleurFairMultistagePlay *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  DungeonScene *v13; // rax
  char v14; // al
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v16; // r14
  PlayerItemComp *v17; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t gallery_stage_cost_time; // ecx
  uint32_t Uid; // eax
  google::protobuf::uint32 PlayerEnergy; // eax
  proto::FleurFairPlayerStatInfo *v24; // rax
  unsigned int val; // [rsp+20h] [rbp-1E0h] BYREF
  uint32_t reward_token_num; // [rsp+24h] [rbp-1DCh]
  uint32_t last_token_num; // [rsp+28h] [rbp-1D8h]
  uint32_t reward_id; // [rsp+2Ch] [rbp-1D4h]
  uint32_t cur_token_num; // [rsp+34h] [rbp-1CCh]
  std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::iterator __for_begin; // [rsp+38h] [rbp-1C8h] BYREF
  std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  std::vector<proto::FleurFairPlayerStatInfo>::const_iterator __for_begin_0; // [rsp+48h] [rbp-1B8h] BYREF
  std::vector<proto::FleurFairPlayerStatInfo>::const_iterator __for_end_0; // [rsp+50h] [rbp-1B0h] BYREF
  proto::FleurFairBossSettleInfo *boss_settle_info; // [rsp+58h] [rbp-1A8h]
  std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>> *__for_range; // [rsp+60h] [rbp-1A0h]
  const std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo> > *v40; // [rsp+68h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo> > >::type *stat_id; // [rsp+70h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo> > >::type *player_stat_info_vec; // [rsp+78h] [rbp-188h]
  const std::vector<proto::FleurFairPlayerStatInfo> *__for_range_0; // [rsp+80h] [rbp-180h]
  const proto::FleurFairPlayerStatInfo *player_stat_info; // [rsp+88h] [rbp-178h]
  common::milog::MiLogStream v45; // [rsp+90h] [rbp-170h] BYREF
  char v46[336]; // [rsp+B0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 10 result:278 64 4 12 use_time:278 80 16 21 dungeon_scene_ptr:289 112 16 16 activity_ptr:"
                        "296 144 24 10 reason:314 208 40 10 notify:332";
  *(_QWORD *)(v4 + 16) = FleurFairMultistagePlay::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = result;
  *(_DWORD *)(v4 + 64) = use_time;
  common::milog::MiLogStream::create(
    &v45,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onDungeonSettle",
    281);
  v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v45,
         (const char (*)[36])"[FLEUR_FAIR] onDungeonSettle, uid: ");
  val = Player::getUid(player);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" ,result: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" ,use_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v45);
  if ( *(_DWORD *)(v4 + 48) != 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v4 + 80));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "onDungeonSettle",
        292);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v45,
        (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v45);
LABEL_43:
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 80));
      goto LABEL_44;
    }
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<FleurFairActivity>((PlayerActivityComp *const)(v4 + 112));
    if ( !std::operator==<FleurFairActivity>(0LL, (const std::shared_ptr<FleurFairActivity> *)(v4 + 112)) )
    {
      v12 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      last_token_num = FleurFairActivity::getToken(v12);
      reward_token_num = 0;
      if ( *(_DWORD *)(v4 + 48) == 1 )
      {
        v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( !DungeonScene::isMpDungeonMode(v13) )
          goto LABEL_16;
        if ( *(char *)(((unsigned __int64)&this->is_player_stat_info_map_generated_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_player_stat_info_map_generated_);
        if ( !this->is_player_stat_info_map_generated_ )
          v14 = 1;
        else
LABEL_16:
          v14 = 0;
        if ( v14 )
          FleurFairMultistagePlay::generatePlayerStatInfoMap(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.success_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.success_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        reward_id = this->dungeon_param_.success_reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v4 + 144),
          ACTION_REASON_FLEUR_FAIR_DUNGEON_REWARD,
          ITEM_LIMTT_ACTIVITY_FLEUR_FAIR_REWARD);
        ItemComp = Player::getItemComp(player);
        if ( PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v4 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
            "onDungeonSettle",
            318);
          v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v45,
                  (const char (*)[44])"[FLEUR_FAIR] checkGrantReward failed, uid: ");
          val = Player::getUid(player);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          goto LABEL_42;
        }
        v17 = Player::getItemComp(player);
        PlayerItemComp::grantReward(v17, reward_id, (const ActionReason *)(v4 + 144), 0LL);
        ActivityComp = Player::getActivityComp(player);
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.schedule_id >> 3)
                                                               + 0x7FFF8000) )
        {
          ActivityComp = (PlayerActivityComp *)&this->dungeon_param_.schedule_id;
          __asan_report_load4();
        }
        schedule_id = this->dungeon_param_.schedule_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_param_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->dungeon_param_ >> 3) + 0x7FFF8000) <= 3 )
        {
          ActivityComp = (PlayerActivityComp *)&this->dungeon_param_;
          __asan_report_load4();
        }
        PlayerActivityComp::logGetActivityReward(ActivityComp, this->dungeon_param_.activity_id, schedule_id, reward_id);
        v20 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        cur_token_num = FleurFairActivity::getToken(v20);
        if ( cur_token_num > last_token_num )
          reward_token_num = cur_token_num - last_token_num;
      }
      proto::FleurFairStageSettleNotify::FleurFairStageSettleNotify((proto::FleurFairStageSettleNotify *const)(v4 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::FleurFairStageSettleNotify::set_stage_type(
        (proto::FleurFairStageSettleNotify *const)(v4 + 208),
        this->stage_type_);
      boss_settle_info = proto::FleurFairStageSettleNotify::mutable_boss_settle_info((proto::FleurFairStageSettleNotify *const)(v4 + 208));
      proto::FleurFairBossSettleInfo::set_is_success(boss_settle_info, *(_DWORD *)(v4 + 48) == 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gallery_stage_cost_time = this->gallery_stage_cost_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::FleurFairBossSettleInfo::set_cost_time(
        boss_settle_info,
        gallery_stage_cost_time + this->boss_stage_cost_time_);
      Uid = Player::getUid(player);
      PlayerEnergy = FleurFairMultistagePlay::getPlayerEnergy(this, Uid);
      proto::FleurFairBossSettleInfo::set_energy(boss_settle_info, PlayerEnergy);
      __for_range = &this->player_stat_info_map_;
      __for_begin._M_node = std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::begin(&this->player_stat_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v40 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo>>>::operator*(&__for_begin);
        stat_id = std::get<0ul,unsigned int const,std::vector<proto::FleurFairPlayerStatInfo>>(v40);
        player_stat_info_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo> > >::type *)std::get<1ul,unsigned int const,std::vector<proto::FleurFairPlayerStatInfo>>(v40);
        __for_range_0 = player_stat_info_vec;
        __for_begin_0._M_current = std::vector<proto::FleurFairPlayerStatInfo>::begin(player_stat_info_vec)._M_current;
        __for_end_0._M_current = std::vector<proto::FleurFairPlayerStatInfo>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<proto::FleurFairPlayerStatInfo const*,std::vector<proto::FleurFairPlayerStatInfo>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          player_stat_info = __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo const*,std::vector<proto::FleurFairPlayerStatInfo>>::operator*(&__for_begin_0);
          v24 = proto::FleurFairBossSettleInfo::add_stat_info_list(boss_settle_info);
          proto::FleurFairPlayerStatInfo::operator=(v24, player_stat_info);
          __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo const*,std::vector<proto::FleurFairPlayerStatInfo>>::operator++(&__for_begin_0);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<proto::FleurFairPlayerStatInfo>>>::operator++(&__for_begin);
      }
      proto::FleurFairBossSettleInfo::set_reward_token_num(boss_settle_info, reward_token_num);
      Player::sendProto(player, (const google::protobuf::Message *)(v4 + 208));
      proto::FleurFairStageSettleNotify::~FleurFairStageSettleNotify((proto::FleurFairStageSettleNotify *const)(v4 + 208));
    }
LABEL_42:
    std::shared_ptr<FleurFairActivity>::~shared_ptr((std::shared_ptr<FleurFairActivity> *const)(v4 + 112));
    goto LABEL_43;
  }
LABEL_44:
  if ( v46 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
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
};

// Line 350: range 00000000151252E0-000000001512544F
void __cdecl FleurFairMultistagePlay::initPlayerInfo(
        FleurFairMultistagePlay *const this,
        Player *player,
        FleurFairDungeonPlayerInfo *player_info)
{
  common::milog::MiLogStream *v3; // rbx
  __int64 v4; // rsi
  uint32_t initial_energy; // ecx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  bool v9; // dl
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "initPlayerInfo",
    351);
  v3 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v12,
         (const char (*)[34])"[FLEUR_FAIR] initPlayerInfo uid: ");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v12);
  v4 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.initial_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.initial_energy >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  initial_energy = this->dungeon_param_.initial_energy;
  v6 = *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(player_info, v4, (_BYTE)player_info);
  }
  player_info->energy = initial_energy;
  v7 = this->dungeon_param_.initial_energy;
  v8 = *(_BYTE *)(((unsigned __int64)&player_info->min_energy >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v8 != 0;
  v9 = v8 != 0 && (char)((((_BYTE)player_info + 4) & 7) + 3) >= v8;
  if ( v9 )
    __asan_report_store4(&player_info->min_energy, v4, v9);
  player_info->min_energy = v7;
};

// Line 357: range 0000000015125450-0000000015125685
int32_t __cdecl FleurFairMultistagePlay::initPreviewStage(
        FleurFairMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  bool v2; // bl
  bool v4; // bl
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string name; // [rsp+20h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "preview_stage_index", &__a);
  v2 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         &this->preview_stage_index_) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "initPreviewStage",
      360);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[56])"[FLEUR_FAIR] initPreviewStage, preview_stage_index miss");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, "preview_display_duration", &__a);
    v4 = ScriptUtil::getTableValue<unsigned int>(
           &ScriptUtil::no_exception_instance,
           param_table,
           &name,
           &this->preview_display_duration_) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "initPreviewStage",
        366);
      common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[61])"[FLEUR_FAIR] initPreviewStage, preview_display_duration miss");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 374: range 0000000015125686-00000000151258E3
int32_t __cdecl FleurFairMultistagePlay::initGalleryStage(
        FleurFairMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  bool v2; // bl
  std::vector<unsigned int>::size_type v4; // rcx
  char v5; // al
  common::milog::MiLogStream *v6; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string name; // [rsp+20h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "gallery_stage_index", &__a);
  v2 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         &this->gallery_stage_index_) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "initGalleryStage",
      377);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[63])"[FLEUR_FAIR] initGalleryStage failed, gallery_stage_index miss");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->gallery_stage_index_ )
      goto LABEL_9;
    v4 = std::vector<unsigned int>::size(&this->dungeon_param_.gallery_id_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v4 >= this->gallery_stage_index_ )
      v5 = 0;
    else
LABEL_9:
      v5 = 1;
    if ( v5 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "initGalleryStage",
        383);
      v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[68])"[FLEUR_FAIR] initGalleryStage failed, gallery_stage_index invalid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_stage_index_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 391: range 00000000151258E4-0000000015125906
int32_t __cdecl FleurFairMultistagePlay::initBossStage(
        FleurFairMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer(this);
  return 0;
};

// Line 397: range 0000000015125972-0000000015125AD1
void __cdecl FleurFairMultistagePlay::onPreviewStageStart(FleurFairMultistagePlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  Scene *scene; // rbx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onPreviewStageStart",
    399);
  v1 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
         &v3,
         (const char (*)[56])"[FLEUR_FAIR] onPreviewStageStart preview_stage_index_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->preview_stage_index_);
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->preview_stage_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onPreviewStageStart(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v3,
      (FleurFairMultistagePlay::onPreviewStageStart::<lambda(Player&)>)this);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v3);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v3);
    FleurFairMultistagePlay::tryNotifyGroupAllPlayerEnter(this);
  }
};

// Line 405: range 0000000015125908-0000000015125971
ForeachPolicy __cdecl FleurFairMultistagePlay::onPreviewStageStart(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onPreviewStageStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::unordered_set<unsigned int> *p_preview_enter_uid_set; // rbx
  std::unordered_set<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_preview_enter_uid_set = &__closure->__this->preview_enter_uid_set_;
  __x[0] = Player::getUid(player);
  std::unordered_set<unsigned int>::insert(p_preview_enter_uid_set, __x);
  return 0;
};

// Line 416: range 0000000015126026-0000000015126446
void __cdecl FleurFairMultistagePlay::onGalleryStageStart(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Scene *scene; // r14
  FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> p___f; // [rsp+10h] [rbp-110h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 14 gallery_id:417 64 16 21 dungeon_scene_ptr:422 96 32 12 log_func:429";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::onGalleryStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 48) = FleurFairMultistagePlay::getGalleryIdByGalleryStageIndex(this, this->gallery_stage_index_);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onGalleryStageStart",
    419);
  v4 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
         &v9,
         (const char (*)[56])"[FLEUR_FAIR] onGalleryStageStart gallery_stage_index_: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_stage_index_);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onGalleryStageStart",
      425);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v9,
      (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    *(_QWORD *)(v1 + 96) = this;
    *(_DWORD *)(v1 + 104) = *(_DWORD *)(v1 + 48);
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v1 + 112),
      (const std::shared_ptr<DungeonScene> *)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::Player(
      &p___f,
      (const FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *)(v1 + 96));
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v9,
      &p___f);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v9);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
    FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::~Player(&p___f);
    FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::~Player((FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *const)(v1 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  if ( v10 == (char *)v1 )
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
};

// Line 429: range 0000000015125AD2-0000000015125F10
ForeachPolicy __cdecl FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  DungeonScene *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_gallery_stage_index; // rdi
  const std::string *v13; // rax
  char v14; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r15
  FleurFairMultistagePlay *v18; // r14
  uint32_t Uid; // eax
  google::protobuf::uint32 PlayerEnergy; // eax
  ForeachPolicy result; // eax
  std::string v22; // [rsp+0h] [rbp-F0h]
  char *v23; // [rsp+8h] [rbp-E8h]
  Player *playera; // [rsp+10h] [rbp-E0h]
  FleurFairMultistagePlay **p_this; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v28; // [rsp+40h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)__closure;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v29;
  v22._M_string_length = (std::string::size_type)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:431 64 16 11 log_ptr:432";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v28, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC53u, v22);
  std::string::~string(&v28);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this + 16);
  DungeonId = DungeonScene::getDungeonId(v7);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_dungeon_id(v6, DungeonId);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this + 16);
  v11 = DungeonScene::getTransaction[abi:cxx11](v10);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_dungeon_transaction(v9, v11);
  p_gallery_stage_index = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
  {
    p_gallery_stage_index = (std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)p_this;
    __asan_report_load8();
  }
  v13 = (const std::string *)*p_this;
  v14 = *(_BYTE *)(((unsigned __int64)&(*p_this)->gallery_stage_index_ >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    p_gallery_stage_index = (std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&(*p_this)->gallery_stage_index_;
    v13 = (const std::string *)__asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_stage_index(
    p_gallery_stage_index,
    v13[19]._anon_0._M_allocated_capacity);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(p_this + 1) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(p_this + 1) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_gallery_id(v15, *((_DWORD *)p_this + 2));
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_transaction(v16, &(*p_this)->stage_transaction_);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v18 = *p_this;
  Uid = Player::getUid(playera);
  PlayerEnergy = FleurFairMultistagePlay::getPlayerEnergy(v18, Uid);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart::set_energy(v17, PlayerEnergy);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart> *)(v2 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStart> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = FOREACH_CONTINUE;
  if ( v23 == (char *)v2 )
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

// Line 429: range 000000001515F9B0-000000001515FAA2
void __cdecl FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *const this,
        FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  uint32_t gallery_id; // ecx
  char v4; // al
  FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_id = a2->__gallery_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__gallery_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__gallery_id, a2, (_BYTE)this + 8);
  }
  this->__gallery_id = gallery_id;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v5->__dungeon_scene_ptr);
};

// Line 429: range 0000000015125F32-0000000015126024
void __cdecl FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *const this,
        const FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  uint32_t gallery_id; // ecx
  char v4; // al
  const FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_id = a2->__gallery_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__gallery_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->__gallery_id, a2, (_BYTE)this + 8);
  }
  this->__gallery_id = gallery_id;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v5->__dungeon_scene_ptr);
};

// Line 429: range 0000000015125F12-0000000015125F30
void __cdecl FleurFairMultistagePlay::onGalleryStageStart(void)::{lambda(Player &)#1}::~Player(
        FleurFairMultistagePlay::onGalleryStageStart::<lambda(Player&)> *const this)
{
  std::shared_ptr<DungeonScene>::~shared_ptr(&this->__dungeon_scene_ptr);
};

// Line 446: range 0000000015126864-0000000015126BDB
void __cdecl FleurFairMultistagePlay::onBossStageStart(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Scene *scene; // r14
  FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> p___f; // [rsp+10h] [rbp-F0h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-D0h] BYREF
  char v7[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 21 dungeon_scene_ptr:452 64 24 12 log_func:459";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::onBossStageStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onBossStageStart",
    448);
  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
    &v6,
    (const char (*)[30])"[FLEUR_FAIR] onBossStageStart");
  common::milog::MiLogStream::~MiLogStream(&v6);
  FleurFairMultistagePlay::addAbilityGroupToAllPlayer(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v1 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onBossStageStart",
      455);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v6,
      (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    *(_QWORD *)(v1 + 64) = this;
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v1 + 72),
      (const std::shared_ptr<DungeonScene> *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::Player(
      &p___f,
      (const FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *)(v1 + 64));
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v6,
      &p___f);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v6);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v6);
    FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::~Player(&p___f);
    FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::~Player((FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *const)(v1 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 459: range 0000000015126448-00000000151267C4
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  DungeonScene *v10; // rax
  const std::string *v11; // rax
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStart *M_string_length; // rdi
  __int64 v13; // rax
  char v14; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  ForeachPolicy result; // eax
  std::string playera; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  playera._M_string_length = (std::string::size_type)__closure;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:461 64 16 11 log_ptr:462";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC55u, playera);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 8));
  DungeonId = DungeonScene::getDungeonId(v7);
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStart::set_dungeon_id(v6, DungeonId);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 8));
  v11 = DungeonScene::getTransaction[abi:cxx11](v10);
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStart::set_dungeon_transaction(v9, v11);
  M_string_length = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
  {
    M_string_length = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStart *)playera._M_string_length;
    __asan_report_load8();
  }
  v13 = *(_QWORD *)playera._M_string_length;
  v14 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)playera._M_string_length + 360LL) >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    M_string_length = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStart *)(*(_QWORD *)playera._M_string_length
                                                                               + 360LL);
    v13 = __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStart::set_dungeon_section_id(
    M_string_length,
    *(_DWORD *)(v13 + 360));
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStart::set_transaction(
    v15,
    (const std::string *)(*(_QWORD *)playera._M_string_length + 640LL));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart> *)(v2 + 64));
  Player::printStatLog((Player *const)playera._M_dataplus._M_p, (MessagePtr *)&playera._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStart> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = FOREACH_CONTINUE;
  if ( v20 == (char *)v2 )
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

// Line 459: range 000000001515FC60-000000001515FCDD
void __cdecl FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *const this,
        FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &a2->__dungeon_scene_ptr);
};

// Line 459: range 00000000151267E6-0000000015126863
void __cdecl FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *const this,
        const FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &a2->__dungeon_scene_ptr);
};

// Line 459: range 00000000151267C6-00000000151267E4
void __cdecl FleurFairMultistagePlay::onBossStageStart(void)::{lambda(Player &)#1}::~Player(
        FleurFairMultistagePlay::onBossStageStart::<lambda(Player&)> *const this)
{
  std::shared_ptr<DungeonScene>::~shared_ptr(&this->__dungeon_scene_ptr);
};

// Line 474: range 0000000015126BDC-0000000015126C87
void __cdecl FleurFairMultistagePlay::onPreviewStageEnd(FleurFairMultistagePlay *const this, bool is_succ)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onPreviewStageEnd",
    476);
  v2 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
         &v3,
         (const char (*)[54])"[FLEUR_FAIR] onPreviewStageEnd preview_stage_index_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->preview_stage_index_);
  common::milog::MiLogStream::~MiLogStream(&v3);
  std::unordered_set<unsigned int>::clear(&this->preview_enter_uid_set_);
};

// Line 482: range 00000000151277B8-0000000015127DA0
void __cdecl FleurFairMultistagePlay::onGalleryStageEnd(FleurFairMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Scene *scene; // r14
  uint32_t stage_cost_time; // [rsp+10h] [rbp-170h]
  uint32_t stage_end_scene_time; // [rsp+14h] [rbp-16Ch]
  const std::vector<unsigned int> *stat_id_vec_ptr; // [rsp+18h] [rbp-168h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-160h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-150h] BYREF
  FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> p___f; // [rsp+50h] [rbp-130h] BYREF
  char v16[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:483 64 16 21 dungeon_scene_ptr:487 96 56 15 settle_func:502";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onGalleryStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = FleurFairMultistagePlay::getGalleryIdByGalleryStageIndex(this, this->gallery_stage_index_);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onGalleryStageEnd",
    485);
  v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
         &v14,
         (const char (*)[54])"[FLEUR_FAIR] onGalleryStageEnd gallery_stage_index_: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_stage_index_);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onGalleryStageEnd",
      490);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v14,
      (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
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
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->gallery_stage_cost_time_ += stage_cost_time;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    stat_id_vec_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairBuffEnergyStatIdVec(
                        &v8->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                        *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v13);
    *(_QWORD *)(v2 + 96) = this;
    *(_BYTE *)(v2 + 104) = is_succ;
    *(_QWORD *)(v2 + 112) = stat_id_vec_ptr;
    *(_DWORD *)(v2 + 120) = *(_DWORD *)(v2 + 48);
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v2 + 128),
      (const std::shared_ptr<DungeonScene> *)(v2 + 64));
    *(_DWORD *)(v2 + 144) = stage_cost_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::Player(
      &p___f,
      (const FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *)(v2 + 96));
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v14,
      &p___f);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v14);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v14);
    FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::~Player(&p___f);
    FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::~Player((FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const)(v2 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 502: range 0000000015126C88-000000001512755F
ForeachPolicy __cdecl FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 this; // rax
  char v6; // dl
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  FleurFairMultistagePlay *v9; // r14
  uint32_t Uid; // eax
  char *v11; // rsi
  int *v12; // rax
  int32_t *v13; // rdx
  char v14; // cl
  FleurFairMultistagePlay *v15; // r14
  uint32_t v16; // eax
  google::protobuf::uint32 PlayerEnergy; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  DungeonScene *v23; // rax
  const std::string *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_gallery_stage_index; // rdi
  const std::string *v26; // rax
  char v27; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r15
  FleurFairMultistagePlay *v32; // r14
  uint32_t v33; // eax
  google::protobuf::uint32 v34; // eax
  ForeachPolicy result; // eax
  std::string v36; // [rsp+0h] [rbp-190h]
  char *v37; // [rsp+8h] [rbp-188h]
  Player *playera; // [rsp+10h] [rbp-180h]
  FleurFairMultistagePlay **p_this; // [rsp+18h] [rbp-178h]
  int32_t value; // [rsp+2Ch] [rbp-164h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  proto::FleurFairGallerySettleInfo *gallery_settle_info; // [rsp+40h] [rbp-150h]
  google::protobuf::Map<unsigned int,int> *energy_stat_map; // [rsp+48h] [rbp-148h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  const data::FleurFairBuffEnergyStatExcelConfig *energy_stat_config_ptr; // [rsp+58h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v48; // [rsp+70h] [rbp-120h] BYREF
  std::string v49; // [rsp+80h] [rbp-110h] BYREF
  char v50[240]; // [rsp+A0h] [rbp-F0h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)__closure;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v50;
  v36._M_string_length = (std::string::size_type)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:527 64 4 11 stat_id:511 80 16 11 log_ptr:528 112 40 10 notify:504";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::FleurFairStageSettleNotify::FleurFairStageSettleNotify((proto::FleurFairStageSettleNotify *const)(v2 + 112));
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  v6 = *(_BYTE *)(((unsigned __int64)&__closure->__this->stage_type_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
    this = __asan_report_load4();
  proto::FleurFairStageSettleNotify::set_stage_type(
    (proto::FleurFairStageSettleNotify *const)(v2 + 112),
    *(_DWORD *)(this + 144));
  gallery_settle_info = proto::FleurFairStageSettleNotify::mutable_gallery_settle_info((proto::FleurFairStageSettleNotify *const)(v2 + 112));
  if ( *(char *)(((unsigned __int64)&__closure->__is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_succ);
  proto::FleurFairGallerySettleInfo::set_is_success(gallery_settle_info, __closure->__is_succ);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( __closure->__stat_id_vec_ptr )
  {
    energy_stat_map = proto::FleurFairGallerySettleInfo::mutable_energy_stat_map(gallery_settle_info);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __for_range = __closure->__stat_id_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = *v7;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
      energy_stat_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairBuffEnergyStatExcelConfig(
                                 &v8->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                                 *(_DWORD *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v48);
      if ( energy_stat_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = __closure->__this;
        Uid = Player::getUid((const Player *const)v36._anon_0._M_allocated_capacity);
        value = SceneMultistagePlay::getPlayUidValue(v9, &energy_stat_config_ptr->stat_param, Uid);
        if ( value )
        {
          v11 = (char *)(v2 + 64);
          v12 = google::protobuf::Map<unsigned int,int>::operator[](
                  energy_stat_map,
                  (const google::protobuf::Map<unsigned int,int>::key_type *)(v2 + 64));
          v13 = v12;
          v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
          {
            LOBYTE(v11) = v14 != 0;
            __asan_report_store4(v12, v11, (_BYTE)v12);
          }
          *v13 = value;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = __closure->__this;
  v16 = Player::getUid((const Player *const)v36._anon_0._M_allocated_capacity);
  PlayerEnergy = FleurFairMultistagePlay::getPlayerEnergy(v15, v16);
  proto::FleurFairGallerySettleInfo::set_energy(gallery_settle_info, PlayerEnergy);
  Player::sendProto((Player *const)v36._anon_0._M_allocated_capacity, (const google::protobuf::Message *)(v2 + 112));
  BasicComp = Player::getBasicComp((Player *const)v36._anon_0._M_allocated_capacity);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v49, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC54u, v36);
  std::string::~string(&v49);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop>();
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this + 32);
  DungeonId = DungeonScene::getDungeonId(v20);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_dungeon_id(v19, DungeonId);
  v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this + 32);
  v24 = DungeonScene::getTransaction[abi:cxx11](v23);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_dungeon_transaction(v22, v24);
  p_gallery_stage_index = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
  {
    p_gallery_stage_index = (std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)p_this;
    __asan_report_load8();
  }
  v26 = (const std::string *)*p_this;
  v27 = *(_BYTE *)(((unsigned __int64)&(*p_this)->gallery_stage_index_ >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    p_gallery_stage_index = (std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&(*p_this)->gallery_stage_index_;
    v26 = (const std::string *)__asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_stage_index(
    p_gallery_stage_index,
    v26[19]._anon_0._M_allocated_capacity);
  v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)(p_this + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(p_this + 3) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_gallery_id(v28, *((_DWORD *)p_this + 6));
  v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_transaction(v29, &(*p_this)->stage_transaction_);
  v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)(p_this + 6) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(p_this + 6) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_cost_time(v30, *((_DWORD *)p_this + 12));
  v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)p_this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v32 = *p_this;
  v33 = Player::getUid(playera);
  v34 = FleurFairMultistagePlay::getPlayerEnergy(v32, v33);
  proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop::set_energy(v31, v34);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v48, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop> *)(v2 + 80));
  Player::printStatLog(playera, &p_body_ptr, &v48, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v48);
  std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonGalleryStageStop> *const)(v2 + 80));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  proto::FleurFairStageSettleNotify::~FleurFairStageSettleNotify((proto::FleurFairStageSettleNotify *const)(v2 + 112));
  result = FOREACH_CONTINUE;
  if ( v37 == (char *)v2 )
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

// Line 502: range 000000001515FE9A-00000000151600D1
void __cdecl FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const this,
        FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  bool is_succ; // cl
  char v4; // al
  const std::vector<unsigned int> *stat_id_vec_ptr; // rdx
  uint32_t gallery_id; // ecx
  char v7; // al
  std::shared_ptr<DungeonScene> *p_dungeon_scene_ptr; // rsi
  uint32_t stage_cost_time; // ecx
  char v10; // al
  FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(char *)(((unsigned __int64)&a2->__is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_succ);
  is_succ = a2->__is_succ;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__is_succ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v4 != 0;
  if ( v4 < 0 )
    __asan_report_store1(&this->__is_succ, a2, &this->__is_succ);
  this->__is_succ = is_succ;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stat_id_vec_ptr = v11->__stat_id_vec_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__stat_id_vec_ptr, a2);
  this->__stat_id_vec_ptr = stat_id_vec_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->__gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_id = v11->__gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(a2) = v7 != 0;
    __asan_report_store4(&this->__gallery_id, a2, (_BYTE)this + 24);
  }
  this->__gallery_id = gallery_id;
  p_dungeon_scene_ptr = &v11->__dungeon_scene_ptr;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v11->__dungeon_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v11->__stage_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->__stage_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_cost_time = v11->__stage_cost_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->__stage_cost_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_dungeon_scene_ptr) = v10 != 0;
    __asan_report_store4(&this->__stage_cost_time, p_dungeon_scene_ptr, (_BYTE)this + 48);
  }
  this->__stage_cost_time = stage_cost_time;
};

// Line 502: range 0000000015127580-00000000151277B7
void __cdecl FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const this,
        const FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  bool is_succ; // cl
  char v4; // al
  const std::vector<unsigned int> *stat_id_vec_ptr; // rdx
  uint32_t gallery_id; // ecx
  char v7; // al
  std::shared_ptr<DungeonScene> *p_dungeon_scene_ptr; // rsi
  uint32_t stage_cost_time; // ecx
  char v10; // al
  const FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(char *)(((unsigned __int64)&a2->__is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_succ);
  is_succ = a2->__is_succ;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__is_succ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v4 != 0;
  if ( v4 < 0 )
    __asan_report_store1(&this->__is_succ, a2, &this->__is_succ);
  this->__is_succ = is_succ;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stat_id_vec_ptr = v11->__stat_id_vec_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->__stat_id_vec_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__stat_id_vec_ptr, a2);
  this->__stat_id_vec_ptr = stat_id_vec_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&v11->__gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->__gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gallery_id = v11->__gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->__gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(a2) = v7 != 0;
    __asan_report_store4(&this->__gallery_id, a2, (_BYTE)this + 24);
  }
  this->__gallery_id = gallery_id;
  p_dungeon_scene_ptr = &v11->__dungeon_scene_ptr;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v11->__dungeon_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v11->__stage_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->__stage_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_cost_time = v11->__stage_cost_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->__stage_cost_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_dungeon_scene_ptr) = v10 != 0;
    __asan_report_store4(&this->__stage_cost_time, p_dungeon_scene_ptr, (_BYTE)this + 48);
  }
  this->__stage_cost_time = stage_cost_time;
};

// Line 502: range 0000000015127560-000000001512757E
void __cdecl FleurFairMultistagePlay::onGalleryStageEnd(bool)::{lambda(Player &)#1}::~Player(
        FleurFairMultistagePlay::onGalleryStageEnd::<lambda(Player&)> *const this)
{
  std::shared_ptr<DungeonScene>::~shared_ptr(&this->__dungeon_scene_ptr);
};

// Line 544: range 0000000015128310-000000001512877E
// local variable allocation has failed, the output may be wrong!
void __cdecl FleurFairMultistagePlay::onBossStageEnd(FleurFairMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  uint32_t v7; // ecx
  char v8; // al
  Scene *scene; // r14
  bool is_succa; // [rsp+4h] [rbp-10Ch]
  uint32_t stage_end_scene_time; // [rsp+1Ch] [rbp-F4h]
  FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> p___f; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+60h] [rbp-B0h] BYREF

  is_succa = is_succ;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 dungeon_scene_ptr:554 64 32 12 log_func:561";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onBossStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "onBossStageEnd",
    546);
  v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v13,
         (const char (*)[38])"[FLEUR_FAIR] onBossStageEnd is_succ: ");
  *(_QWORD *)&is_succ = is_succ;
  common::milog::MiLogStream::operator<<(v5, is_succ);
  common::milog::MiLogStream::~MiLogStream(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stage_end_scene_time = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( stage_end_scene_time > this->stage_begin_scene_time_ )
  {
    v7 = stage_end_scene_time - this->stage_begin_scene_time_;
    v8 = *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(&this->boss_stage_cost_time_, v6, (_BYTE)this + 120);
    }
    this->boss_stage_cost_time_ = v7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onBossStageEnd",
      557);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v13,
      (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    *(_QWORD *)(v2 + 64) = this;
    *(_BYTE *)(v2 + 72) = is_succa;
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v2 + 80),
      (const std::shared_ptr<DungeonScene> *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::Player(
      &p___f,
      (const FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *)(v2 + 64));
    std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v13,
      &p___f);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v13);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v13);
    FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::~Player(&p___f);
    FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::~Player((FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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
};

// Line 561: range 0000000015127DA2-00000000151281FB
// local variable allocation has failed, the output may be wrong!
ForeachPolicy __cdecl FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  DungeonScene *v10; // rax
  const std::string *v11; // rax
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *M_string_length; // rdi
  __int64 v13; // rax
  char v14; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  ForeachPolicy result; // eax
  std::string playera; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  playera._M_string_length = (std::string::size_type)__closure;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:563 64 16 11 log_ptr:564";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDBEu, playera);
  std::string::~string(&v23);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 16));
  DungeonId = DungeonScene::getDungeonId(v7);
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_dungeon_id(v6, DungeonId);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(playera._M_string_length + 16));
  v11 = DungeonScene::getTransaction[abi:cxx11](v10);
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_dungeon_transaction(v9, v11);
  M_string_length = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
  {
    M_string_length = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *)playera._M_string_length;
    __asan_report_load8();
  }
  v13 = *(_QWORD *)playera._M_string_length;
  v14 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)playera._M_string_length + 360LL) >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    M_string_length = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *)(*(_QWORD *)playera._M_string_length
                                                                              + 360LL);
    v13 = __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_dungeon_section_id(M_string_length, *(_DWORD *)(v13 + 360));
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_transaction(
    v15,
    (const std::string *)(*(_QWORD *)playera._M_string_length + 640LL));
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(char *)(((playera._M_string_length + 8) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(playera._M_string_length + 8);
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_is_succ(v16, *(_BYTE *)(playera._M_string_length + 8));
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((playera._M_string_length >> 3) + 0x7FFF8000) )
  {
    v17 = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *)playera._M_string_length;
    __asan_report_load8();
  }
  v18 = *(_QWORD *)playera._M_string_length;
  v19 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)playera._M_string_length + 632LL) >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    v17 = (proto_log::PlayerLogBodyFleurFairDungeonBossStageStop *)(*(_QWORD *)playera._M_string_length + 632LL);
    v18 = __asan_report_load4();
  }
  proto_log::PlayerLogBodyFleurFairDungeonBossStageStop::set_cost_time(v17, *(_DWORD *)(v18 + 632));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop> *)(v2 + 64));
  Player::printStatLog((Player *const)playera._M_dataplus._M_p, (MessagePtr *)&playera._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&playera._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFleurFairDungeonBossStageStop> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = FOREACH_CONTINUE;
  if ( v24 == (char *)v2 )
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

// Line 561: range 000000001516028E-0000000015160381
void __cdecl FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *const this,
        FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  bool is_succ; // cl
  char v4; // al
  FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(char *)(((unsigned __int64)&a2->__is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_succ);
  is_succ = a2->__is_succ;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__is_succ >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->__is_succ, a2, &this->__is_succ);
  }
  this->__is_succ = is_succ;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v5->__dungeon_scene_ptr);
};

// Line 561: range 000000001512821C-000000001512830F
void __cdecl FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::Player(
        FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *const this,
        const FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *a2)
{
  FleurFairMultistagePlay *v2; // rdx
  bool is_succ; // cl
  char v4; // al
  const FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->__this = v2;
  if ( *(char *)(((unsigned __int64)&a2->__is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->__is_succ);
  is_succ = a2->__is_succ;
  v4 = *(_BYTE *)(((unsigned __int64)&this->__is_succ >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->__is_succ, a2, &this->__is_succ);
  }
  this->__is_succ = is_succ;
  std::shared_ptr<DungeonScene>::shared_ptr(&this->__dungeon_scene_ptr, &v5->__dungeon_scene_ptr);
};

// Line 561: range 00000000151281FC-000000001512821A
void __cdecl FleurFairMultistagePlay::onBossStageEnd(bool)::{lambda(Player &)#1}::~Player(
        FleurFairMultistagePlay::onBossStageEnd::<lambda(Player&)> *const this)
{
  std::shared_ptr<DungeonScene>::~shared_ptr(&this->__dungeon_scene_ptr);
};

// Line 579: range 0000000015128780-00000000151288B8
void __fastcall FleurFairMultistagePlay::addPlayerEnergy(
        FleurFairMultistagePlay *const this,
        uint32_t uid,
        uint32_t add_energy)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  SelectType new_energy; // [rsp+1Ch] [rbp-64h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:578";
  *(_QWORD *)(v3 + 16) = FleurFairMultistagePlay::addPlayerEnergy;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  v6 = (unsigned __int64)std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                           &this->player_info_map_,
                           (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) <= 3 )
    v6 = __asan_report_load4();
  new_energy = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)v6, add_energy);
  FleurFairMultistagePlay::setPlayerEnergy(this, *(_DWORD *)(v3 + 32), new_energy);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 586: range 00000000151288BA-00000000151289F8
void __fastcall FleurFairMultistagePlay::subPlayerEnergy(
        FleurFairMultistagePlay *const this,
        uint32_t uid,
        uint32_t sub_energy)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  uint32_t new_energy; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:585";
  *(_QWORD *)(v3 + 16) = FleurFairMultistagePlay::subPlayerEnergy;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  v6 = (unsigned __int64)std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                           &this->player_info_map_,
                           (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v3 + 32));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) <= 3 )
    v6 = __asan_report_load4();
  new_energy = 0;
  if ( *(_DWORD *)v6 >= sub_energy )
    new_energy = *(_DWORD *)v6 - sub_energy;
  FleurFairMultistagePlay::setPlayerEnergy(this, *(_DWORD *)(v3 + 32), new_energy);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 597: range 00000000151289FA-0000000015128D60
void __fastcall FleurFairMultistagePlay::setPlayerEnergy(
        FleurFairMultistagePlay *const this,
        uint32_t uid,
        uint32_t energy)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  uint32_t v10; // ecx
  char v11; // al
  Player *v12; // rax
  FleurFairDungeonPlayerInfo *player_info; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:596 48 4 10 energy:596 64 16 14 player_ptr:614";
  *(_QWORD *)(v3 + 16) = FleurFairMultistagePlay::setPlayerEnergy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = energy;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "setPlayerEnergy",
    599);
  v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v15,
         (const char (*)[36])"[FLEUR_FAIR] setPlayerEnergy, uid: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" ,energy: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.energy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_param_.energy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->dungeon_param_.energy_limit < *(_DWORD *)(v3 + 48) )
    *(_DWORD *)(v3 + 48) = this->dungeon_param_.energy_limit;
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                  &this->player_info_map_,
                  (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v3 + 32));
  v9 = (((_BYTE)player_info + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&player_info->min_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->min_energy >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( player_info->min_energy > *(_DWORD *)(v3 + 48) )
    player_info->min_energy = *(_DWORD *)(v3 + 48);
  v10 = *(_DWORD *)(v3 + 48);
  v11 = *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(player_info, v9, (_BYTE)player_info);
  }
  player_info->energy = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 32));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    FleurFairMultistagePlay::notifyPlayerEnergy(this, v12);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v16 == (char *)v3 )
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

// Line 623: range 0000000015128D62-0000000015128EEB
__int64 __fastcall FleurFairMultistagePlay::getPlayerEnergy(FleurFairMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  __int64 v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FleurFairDungeonPlayerInfo>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:622 64 8 8 iter:624";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::getPlayerEnergy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::find(
                                                                                          &this->player_info_map_,
                                                                                          (const std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::end(&this->player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,FleurFairDungeonPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FleurFairDungeonPlayerInfo>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,FleurFairDungeonPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FleurFairDungeonPlayerInfo>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = __asan_report_load4();
    }
    result = *(unsigned int *)(v6 + 8);
  }
  if ( v8 == (char *)v2 )
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

// Line 634: range 0000000015128EEC-000000001512904C
void __cdecl FleurFairMultistagePlay::notifyPlayerEnergy(FleurFairMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // edx
  google::protobuf::uint32 PlayerEnergy; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:635";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::notifyPlayerEnergy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::FleurFairBuffEnergyNotify::FleurFairBuffEnergyNotify((proto::FleurFairBuffEnergyNotify *const)(v2 + 32));
  Uid = Player::getUid(player);
  PlayerEnergy = FleurFairMultistagePlay::getPlayerEnergy(this, Uid);
  proto::FleurFairBuffEnergyNotify::set_energy((proto::FleurFairBuffEnergyNotify *const)(v2 + 32), PlayerEnergy);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::FleurFairBuffEnergyNotify::~FleurFairBuffEnergyNotify((proto::FleurFairBuffEnergyNotify *const)(v2 + 32));
  if ( v7 == (char *)v2 )
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

// Line 641: range 000000001512904E-00000000151290EA
uint32_t __cdecl FleurFairMultistagePlay::getGalleryIdByGalleryStageIndex(
        FleurFairMultistagePlay *const this,
        uint32_t gallery_stage_index)
{
  uint32_t *v3; // rdx

  if ( !gallery_stage_index )
    return 0;
  if ( std::vector<unsigned int>::size(&this->dungeon_param_.gallery_id_vec) < gallery_stage_index )
    return 0;
  v3 = std::vector<unsigned int>::operator[](&this->dungeon_param_.gallery_id_vec, gallery_stage_index - 1);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return *v3;
};

// Line 656: range 00000000151294EA-00000000151296AE
void __cdecl FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // r13
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-90h] BYREF
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 func:660";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "prepareAbilityGroupToAllPlayer",
    658);
  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
    &v5,
    (const char (*)[44])"[FLEUR_FAIR] prepareAbilityGroupToAllPlayer");
  common::milog::MiLogStream::~MiLogStream(&v5);
  *(_QWORD *)(v1 + 32) = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer(void)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v5,
    *(FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer::<lambda(Player&)> *)(v1 + 32));
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v5);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v5);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 660: range 00000000151290EC-00000000151294E9
ForeachPolicy __cdecl FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::prepareAbilityGroupToAllPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo> *p_player_info_map; // rbx
  uint32_t energy; // ecx
  ActivityAbilityGroupExcelConfigMgr *p_activity_ability_group_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type __k; // [rsp+1Ch] [rbp-84h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  FleurFairDungeonPlayerInfo *player_info; // [rsp+30h] [rbp-70h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *energy_grade; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *ability_group_id; // [rsp+50h] [rbp-50h]
  const data::ActivityAbilityGroupRuleConfig *ability_group_config_ptr; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_player_info_map = &__closure->__this->player_info_map_;
  __k = Player::getUid(player);
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](p_player_info_map, &__k);
  std::vector<std::string>::clear(&player_info->ability_group_vec);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = &__closure->__this->dungeon_param_.ability_group_id_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    energy_grade = std::get<0ul,unsigned int const,unsigned int>(v19);
    ability_group_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    energy = player_info->energy;
    if ( *(_BYTE *)(((unsigned __int64)energy_grade >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)energy_grade & 7) + 3) >= *(_BYTE *)(((unsigned __int64)energy_grade >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( energy >= *energy_grade )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_activity_ability_group_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_ability_group_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)ability_group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ability_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_group_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ability_group_config_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                                   p_activity_ability_group_config_mgr,
                                   *ability_group_id);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( ability_group_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
          "operator()",
          674);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v24,
               (const char (*)[39])"[FLEUR_FAIR] prepareAbilityGroup uid: ");
        __k = Player::getUid(player);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &__k);
        v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" ,energy: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &player_info->energy);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v9,
                (const char (*)[17])" ,energy_grade: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, energy_grade);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v11,
                (const char (*)[23])" ,ability_group_name: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v12,
          &ability_group_config_ptr->ability_group_name);
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::vector<std::string>::push_back(
          &player_info->ability_group_vec,
          &ability_group_config_ptr->ability_group_name);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
          "operator()",
          671);
        v5 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
               &v24,
               (const char (*)[73])"[FLEUR_FAIR] findAbilityGroupRuleConfigByIndex failed, ability_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, ability_group_id);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 685: range 00000000151297FE-00000000151299C2
void __cdecl FleurFairMultistagePlay::addAbilityGroupToAllPlayer(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *scene; // r13
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-90h] BYREF
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 func:689";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::addAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
    "addAbilityGroupToAllPlayer",
    687);
  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
    &v5,
    (const char (*)[40])"[FLEUR_FAIR] addAbilityGroupToAllPlayer");
  common::milog::MiLogStream::~MiLogStream(&v5);
  *(_QWORD *)(v1 + 32) = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::addAbilityGroupToAllPlayer(void)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v5,
    *(FleurFairMultistagePlay::addAbilityGroupToAllPlayer::<lambda(Player&)> *)(v1 + 32));
  Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v5);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v5);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 689: range 00000000151296B0-00000000151297FD
ForeachPolicy __cdecl FleurFairMultistagePlay::addAbilityGroupToAllPlayer(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::addAbilityGroupToAllPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo> *p_player_info_map; // rbx
  common::milog::MiLogStream *v3; // rbx
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v5; // rax
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  const FleurFairDungeonPlayerInfo *player_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_player_info_map = &__closure->__this->player_info_map_;
  __k = Player::getUid(player);
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](p_player_info_map, &__k);
  if ( !std::vector<std::string>::empty(&player_info->ability_group_vec) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "operator()",
      694);
    v3 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v9,
           (const char (*)[36])"[FLEUR_FAIR] addAbilityGroup, uid: ");
    __k = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &__k);
    common::milog::MiLogStream::~MiLogStream(&v9);
    AbilityGroupComp = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &player_info->ability_group_vec, 0);
    v5 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v5);
  }
  return 0;
};

// Line 705: range 00000000151299C4-0000000015129AE4
void __cdecl FleurFairMultistagePlay::delAbilityGroup(FleurFairMultistagePlay *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v4; // rax
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  const FleurFairDungeonPlayerInfo *player_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  __k = Player::getUid(player);
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](&this->player_info_map_, &__k);
  if ( !std::vector<std::string>::empty(&player_info->ability_group_vec) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "delAbilityGroup",
      709);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"[FLEUR_FAIR] delAbilityGroup, uid: ");
    __k = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &__k);
    common::milog::MiLogStream::~MiLogStream(&v7);
    AbilityGroupComp = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &player_info->ability_group_vec);
    v4 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v4);
  }
};

// Line 716: range 0000000015129AE6-0000000015129CBC
std::vector<unsigned int> *__cdecl FleurFairMultistagePlay::getDungeonStatIdVec(
        std::vector<unsigned int> *retstr,
        FleurFairMultistagePlay *const this)
{
  uint32_t *p_gallery_id; // rbx
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v4; // rax
  std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+28h] [rbp-58h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+30h] [rbp-50h] BYREF
  const std::vector<unsigned int> *gallery_id_vec; // [rsp+38h] [rbp-48h]
  const std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig> *__for_range; // [rsp+40h] [rbp-40h]
  const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> *v13; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *stat_id; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *excel_config; // [rsp+58h] [rbp-28h]
  std::shared_ptr<Config> v16[2]; // [rsp+60h] [rbp-20h] BYREF

  gallery_id_vec = &this->dungeon_param_.gallery_id_vec;
  std::vector<unsigned int>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v16);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v16)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr.fleur_fair_dungeon_stat_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(v16);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::FleurFairDungeonStatExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator*(&__for_begin);
    stat_id = std::get<0ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonStatExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !excel_config->gallery_id
      || (__rhs._M_current = std::vector<unsigned int>::end(gallery_id_vec)._M_current,
          p_gallery_id = &excel_config->gallery_id,
          M_current = std::vector<unsigned int>::end(gallery_id_vec)._M_current,
          v4._M_current = std::vector<unsigned int>::begin(gallery_id_vec)._M_current,
          __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                               v4,
                               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                               p_gallery_id)._M_current,
          __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs)) )
    {
      std::vector<unsigned int>::push_back(retstr, stat_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonStatExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 731: range 0000000015129CBE-0000000015129D31
bool __cdecl FleurFairMultistagePlay::isValueMeetByOrderingType(
        int32_t value,
        int32_t target_value,
        data::OrderingType ordering_type)
{
  bool result; // al

  switch ( ordering_type )
  {
    case Less_0:
      result = value < target_value;
      break;
    case Equal_0:
      result = value == target_value;
      break;
    case Greater_1:
      result = value > target_value;
      break;
    case LessOrEqual:
      result = value <= target_value;
      break;
    case GreaterOrEqual:
      result = value >= target_value;
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 763: range 0000000015129D32-000000001512A103
__int64 __fastcall FleurFairMultistagePlay::onFinishGalleryStageByUid(
        FleurFairMultistagePlay *const this,
        uint32_t uid,
        bool is_last_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:762 64 16 14 player_ptr:770 96 24 10 notify:779";
  *(_QWORD *)(v3 + 16) = FleurFairMultistagePlay::onFinishGalleryStageByUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "onFinishGalleryStageByUid",
        773);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v13,
             (const char (*)[42])"[FLEUR_FAIR] player_ptr is nullptr, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v7 = -1;
    }
    else
    {
      if ( !is_last_player )
      {
        proto::FleurFairFinishGalleryStageNotify::FleurFairFinishGalleryStageNotify((proto::FleurFairFinishGalleryStageNotify *const)(v3 + 96));
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::sendProto(v9, (const google::protobuf::Message *)(v3 + 96));
        proto::FleurFairFinishGalleryStageNotify::~FleurFairFinishGalleryStageNotify((proto::FleurFairFinishGalleryStageNotify *const)(v3 + 96));
      }
      v7 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "onFinishGalleryStageByUid",
      766);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v13,
           (const char (*)[46])"[FLEUR_FAIR] stage type invalid, stage_type: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_type_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v7 = -1;
  }
  result = v7;
  if ( v14 == (char *)v3 )
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

// Line 787: range 000000001512A104-000000001512A1FF
void __cdecl FleurFairMultistagePlay::fillFleurFairPlayerStatInfo(
        FleurFairMultistagePlay *const this,
        Player *player,
        uint32_t stat_id,
        int32_t value,
        proto::FleurFairPlayerStatInfo *player_stat_info)
{
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rbx
  proto::ProfilePicture *v7; // rax
  PlayerBasicComp *v8; // rax
  const std::string *v9; // rdx
  std::string v13; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  proto::FleurFairPlayerStatInfo::set_uid(player_stat_info, Uid);
  proto::FleurFairPlayerStatInfo::set_stat_id(player_stat_info, stat_id);
  proto::FleurFairPlayerStatInfo::set_param(player_stat_info, value);
  BasicComp = Player::getBasicComp(player);
  v7 = proto::FleurFairPlayerStatInfo::mutable_profile_picture(player_stat_info);
  PlayerBasicComp::getProfilePictureToClient(BasicComp, v7);
  v8 = Player::getBasicComp(player);
  v9 = PlayerBasicComp::getNickName[abi:cxx11](v8);
  proto::FleurFairPlayerStatInfo::set_nick_name(player_stat_info, v9);
  Player::getOnlineId[abi:cxx11](&v13, player);
  proto::FleurFairPlayerStatInfo::set_online_id(player_stat_info, &v13);
  std::string::~string(&v13);
};

// Line 797: range 000000001512A200-000000001512A43F
int32_t __cdecl FleurFairMultistagePlay::getGalleryTempValue(
        FleurFairMultistagePlay *const this,
        const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,int>,true> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 value:803 64 8 8 iter:798";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::getGalleryTempValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(std::unordered_map<std::string,int>::iterator *)(v2 + 64) = std::unordered_map<std::string,int>::find(
                                                                  &this->gallery_temp_value_map,
                                                                  key);
  __y._M_cur = std::unordered_map<std::string,int>::end(&this->gallery_temp_value_map)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,int>,true> *)(v2 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = (__int64)std::__detail::_Node_iterator<std::pair<std::string const,int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,int>,false,true> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v6 + 32);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "getGalleryTempValue",
      805);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v11,
           (const char (*)[40])"[FLEUR_FAIR] getGalleryTempValue, key: ");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, key);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" ,value: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = *(_DWORD *)(v2 + 48);
  }
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
  return result;
};

// Line 811: range 000000001512A440-000000001512AB37
void __cdecl FleurFairMultistagePlay::tryNotifyGroupAllPlayerEnter(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  DungeonScene *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 v9; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  data::MultistageStageType stage_type; // r14d
  __int64 v14; // rax
  char v15; // dl
  bool v16; // dl
  Group *v17; // rax
  bool is_all_enter; // [rsp+17h] [rbp-109h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 7 uid:832 64 16 21 dungeon_scene_ptr:818 96 16 13 group_ptr:849 128 16 13 event_ptr:852";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::tryNotifyGroupAllPlayerEnter;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<DungeonScene,Scene>((Scene *)(v1 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "tryNotifyGroupAllPlayerEnter",
        821);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v22,
        (const char (*)[42])"[FLEUR_FAIR] dungeon_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( DungeonScene::isMpDungeonMode(v5) )
      {
        is_all_enter = 1;
        __for_range = &this->team_uid_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->team_uid_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(&this->team_uid_set_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v6;
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                  &this->preview_enter_uid_set_,
                  (const unsigned int *)(v1 + 48)) )
          {
            is_all_enter = 0;
            break;
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        if ( is_all_enter )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
            "tryNotifyGroupAllPlayerEnter",
            847);
          v7 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                 &v22,
                 (const char (*)[67])"[FLEUR_FAIR] notify group all player enter, preview_stage_index_: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->preview_stage_index_);
          common::milog::MiLogStream::~MiLogStream(&v22);
          SceneMultistagePlay::getGroupPtr((SceneMultistagePlay *const)(v1 + 96));
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 96)) )
          {
            EventUtil::createEvent((data::EventType)(v1 + 128));
            if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 128)) )
            {
              v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              std::string::operator=(&v8->source_name, &this->current_stage_name_);
              v9 = (((_BYTE)this + 84) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              play_index = this->play_index_;
              v11 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              v12 = *(_BYTE *)(((unsigned __int64)&v11->param1 >> 3) + 0x7FFF8000);
              if ( v12 != 0 && (char)((((_BYTE)v11 + 44) & 7) + 3) >= v12 )
              {
                LOBYTE(v9) = v12 != 0;
                __asan_report_store4(&v11->param1, v9, (_BYTE)v11);
              }
              v11->param1 = play_index;
              if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              stage_type = this->stage_type_;
              v14 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              v15 = *(_BYTE *)(((unsigned __int64)(v14 + 48) >> 3) + 0x7FFF8000);
              LOBYTE(v9) = v15 != 0;
              v16 = v15 != 0 && v15 <= 3;
              if ( v16 )
                v14 = __asan_report_store4(v14 + 48, v9, v16);
              *(_DWORD *)(v14 + 48) = stage_type;
              v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Group::handleEvent(v17, (EventPtr *)(v1 + 128));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 128));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 96));
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
      "tryNotifyGroupAllPlayerEnter",
      814);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v22,
           (const char (*)[35])"[FLEUR_FAIR] stage_type_ invalid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = this->stage_type_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v1 )
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
};

// Line 864: range 000000001512AB38-000000001512ADF2
std::string *__cdecl FleurFairMultistagePlay::createStageTransaction[abi:cxx11](
        std::string *retstr,
        FleurFairMultistagePlay *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  time_t Now; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v12[560]; // [rsp+10h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 6 ss:866";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::createStageTransaction[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v5 = data::enumValToStr(this->stage_type_);
  v6 = std::operator<<<std::char_traits<char>>(v2 + 64, v5);
  v7 = std::operator<<<std::char_traits<char>>(v6, "-");
  Now = common::tools::TimeUtils::getNow();
  v9 = std::ostream::operator<<(v7, Now);
  v10 = std::operator<<<std::char_traits<char>>(v9, "-");
  std::ostream::operator<<(v10, ++FleurFairMultistagePlay::createStageTransaction[abi:cxx11](void)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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
  return retstr;
};

// Line 872: range 000000001512B742-000000001512C236
void __cdecl FleurFairMultistagePlay::generatePlayerStatInfoMap(FleurFairMultistagePlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  data::FleurFairDungeonStatType stat_type; // eax
  Scene *scene; // r14
  Scene *v13; // r14
  proto::FleurFairPlayerStatInfo *M_current; // r14
  std::vector<proto::FleurFairPlayerStatInfo>::iterator v15; // rax
  FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(const auto:24&, const auto:25&)> v16; // dl
  const std::vector<proto::FleurFairPlayerStatInfo>::value_type *v17; // rax
  proto::FleurFairPlayerStatInfo *v18; // r14
  std::vector<proto::FleurFairPlayerStatInfo>::iterator v19; // rax
  FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(const auto:26&, const auto:27&)> v20; // dl
  std::vector<proto::FleurFairPlayerStatInfo> *v21; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-2D0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-2C8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Self __y; // [rsp+20h] [rbp-2C0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-2B8h]
  const data::FleurFairDungeonStatExcelConfig *stat_config_ptr; // [rsp+30h] [rbp-2B0h]
  const std::any *stat_param; // [rsp+38h] [rbp-2A8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-2A0h] BYREF
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-290h] BYREF
  std::shared_ptr<Config> v30; // [rsp+60h] [rbp-280h] BYREF
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-270h] BYREF
  char v32[592]; // [rsp+90h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 4 11 stat_id:874 48 8 19 stat_param_iter:883 80 8 12 min_iter:956 112 24 15 stat_id_vec:873"
                        " 176 24 37 preprocessed_player_stat_info_vec:890 240 24 24 player_stat_info_vec:942 304 32 8 fun"
                        "c:913 368 40 24 group_variable_param:895 448 64 22 monster_hurt_param:912";
  *(_QWORD *)(v1 + 16) = FleurFairMultistagePlay::generatePlayerStatInfoMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -219021312;
  v3[536862731] = 62194;
  v3[536862732] = -234881024;
  v3[536862733] = -218959118;
  v3[536862736] = -202116109;
  FleurFairMultistagePlay::getDungeonStatIdVec((std::vector<unsigned int> *)(v1 + 112), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 112);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 112))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 112))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    stat_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairDungeonStatExcelConfig(
                        &v5->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                        *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( !stat_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "generatePlayerStatInfoMap",
        879);
      v6 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             (common::milog::MiLogStream *const)(v1 + 304),
             (const char (*)[67])"[FLEUR_FAIR] findFleurFairDungeonStatExcelConfig failed, stat_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 304));
      goto LABEL_37;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    *(std::map<unsigned int,std::any>::const_iterator *)(v1 + 48) = std::map<unsigned int,std::any>::find(
                                                                      &v7->design_config.txt_config_mgr.activity_fleur_fair_config_mgr.dungeon_stat_param_map,
                                                                      (const std::map<unsigned int,std::any>::key_type *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    __y._M_node = std::map<unsigned int,std::any>::end(&v8->design_config.txt_config_mgr.activity_fleur_fair_config_mgr.dungeon_stat_param_map)._M_node;
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Self *)(v1 + 48),
           &__y);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.cpp",
        "generatePlayerStatInfoMap",
        886);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v31,
              (const char (*)[39])"[FLEUR_FAIR] param not found, stat_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v31);
      goto LABEL_37;
    }
    stat_param = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> > *const)(v1 + 48))->second;
    std::vector<proto::FleurFairPlayerStatInfo>::vector((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stat_type = stat_config_ptr->stat_type;
    if ( stat_type == FLEUR_FAIR_DUNGEON_STAT_GROUP_VARIABLE )
    {
      tryAnyCast<FleurFairDungeonStatGroupVariableParam>(
        (FleurFairDungeonStatGroupVariableParam *)(v1 + 368),
        stat_param);
      *(_QWORD *)(v1 + 304) = this;
      *(_QWORD *)(v1 + 312) = v1 + 176;
      *(_QWORD *)(v1 + 320) = v1 + 368;
      *(_QWORD *)(v1 + 328) = stat_config_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v31,
        *(FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(Player&)> *)(v1 + 304));
      Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v31);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v31);
      FleurFairDungeonStatGroupVariableParam::~FleurFairDungeonStatGroupVariableParam((FleurFairDungeonStatGroupVariableParam *const)(v1 + 368));
    }
    else if ( stat_type == FLEUR_FAIR_DUNGEON_STAT_MONSTER_HURT )
    {
      tryAnyCast<FleurFairDungeonStatMonsterHurtParam>((FleurFairDungeonStatMonsterHurtParam *)(v1 + 448), stat_param);
      *(_QWORD *)(v1 + 304) = this;
      *(_QWORD *)(v1 + 312) = v1 + 176;
      *(_QWORD *)(v1 + 320) = v1 + 448;
      *(_QWORD *)(v1 + 328) = stat_config_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = this->scene_;
      std::function<ForeachPolicy ()(Player &)>::function<FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#2},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v31,
        *(FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(Player&)>_0 *)(v1 + 304));
      Scene::foreachPlayer(v13, (std::function<ForeachPolicy(Player&)> *)&v31);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v31);
      FleurFairDungeonStatMonsterHurtParam::~FleurFairDungeonStatMonsterHurtParam((FleurFairDungeonStatMonsterHurtParam *const)(v1 + 448));
    }
    if ( !std::vector<proto::FleurFairPlayerStatInfo>::empty((const std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176)) )
    {
      std::vector<proto::FleurFairPlayerStatInfo>::vector((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 240));
      if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_method >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stat_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_method >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( stat_config_ptr->stat_method == FLEUR_FAIR_DUNGEON_STAT_METHOD_MAXIMUM )
      {
        M_current = std::vector<proto::FleurFairPlayerStatInfo>::end((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
        v15._M_current = std::vector<proto::FleurFairPlayerStatInfo>::begin((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
        *(__gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)(v1 + 80) = std::max_element___gnu_cxx::__normal_iterator_proto::FleurFairPlayerStatInfo__std::vector_proto::FleurFairPlayerStatInfo____FleurFairMultistagePlay::generatePlayerStatInfoMap__::_lambda_const_auto_24__const_auto_25_____(v15, (__gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> >)M_current, v16);
        __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Base_ptr)std::vector<proto::FleurFairPlayerStatInfo>::end((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
        if ( __gnu_cxx::operator!=<proto::FleurFairPlayerStatInfo *,std::vector<proto::FleurFairPlayerStatInfo>>(
               (const __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)(v1 + 80),
               (const __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)&__y) )
        {
          goto LABEL_28;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_method >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stat_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stat_config_ptr->stat_method >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( stat_config_ptr->stat_method == FLEUR_FAIR_DUNGEON_STAT_METHOD_MINIMUM )
        {
          v18 = std::vector<proto::FleurFairPlayerStatInfo>::end((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
          v19._M_current = std::vector<proto::FleurFairPlayerStatInfo>::begin((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
          *(__gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)(v1 + 80) = std::min_element___gnu_cxx::__normal_iterator_proto::FleurFairPlayerStatInfo__std::vector_proto::FleurFairPlayerStatInfo____FleurFairMultistagePlay::generatePlayerStatInfoMap__::_lambda_const_auto_26__const_auto_27_____(v19, (__gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> >)v18, v20);
          __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::any> >::_Base_ptr)std::vector<proto::FleurFairPlayerStatInfo>::end((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176))._M_current;
          if ( __gnu_cxx::operator!=<proto::FleurFairPlayerStatInfo *,std::vector<proto::FleurFairPlayerStatInfo>>(
                 (const __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)(v1 + 80),
                 (const __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *)&__y) )
          {
LABEL_28:
            v17 = __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo *,std::vector<proto::FleurFairPlayerStatInfo>>::operator*((const __gnu_cxx::__normal_iterator<proto::FleurFairPlayerStatInfo*,std::vector<proto::FleurFairPlayerStatInfo> > *const)(v1 + 80));
            std::vector<proto::FleurFairPlayerStatInfo>::push_back(
              (std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 240),
              v17);
          }
        }
        else
        {
          std::vector<proto::FleurFairPlayerStatInfo>::operator=(
            (std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 240),
            (const std::vector<proto::FleurFairPlayerStatInfo> *)(v1 + 176));
        }
      }
      v21 = std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::operator[](
              &this->player_stat_info_map_,
              (const std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::key_type *)(v1 + 32));
      std::vector<proto::FleurFairPlayerStatInfo>::operator=(
        v21,
        (const std::vector<proto::FleurFairPlayerStatInfo> *)(v1 + 240));
      std::vector<proto::FleurFairPlayerStatInfo>::~vector((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 240));
    }
    std::vector<proto::FleurFairPlayerStatInfo>::~vector((std::vector<proto::FleurFairPlayerStatInfo> *const)(v1 + 176));
LABEL_37:
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_player_stat_info_map_generated_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_player_stat_info_map_generated_,
      &__for_end,
      &this->is_player_stat_info_map_generated_);
  this->is_player_stat_info_map_generated_ = 1;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 112));
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 896: range 000000001512ADF4-000000001512B17F
ForeachPolicy __cdecl FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#1}::operator()(
        const FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  FleurFairMultistagePlay *this; // r14
  uint32_t Uid; // ecx
  __int64 stat_config_ptr; // rax
  data::OrderingType v8; // esi
  __int64 group_variable_param; // rax
  FleurFairMultistagePlay *p_stat_config_ptr; // rdi
  __int64 v11; // rax
  ForeachPolicy result; // eax
  int32_t value; // [rsp+1Ch] [rbp-B4h]
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 20 player_stat_info:901";
  *(_QWORD *)(v2 + 16) = FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_variable_param >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = SceneMultistagePlay::getPlayUidValue(this, &__closure->__group_variable_param->variable_name, Uid);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_config_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stat_config_ptr = (__int64)__closure->__stat_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)(stat_config_ptr + 48) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(stat_config_ptr + 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    stat_config_ptr = __asan_report_load4();
  }
  v8 = *(_DWORD *)(stat_config_ptr + 48);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__group_variable_param >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_variable_param = (__int64)__closure->__group_variable_param;
  if ( *(_BYTE *)(((unsigned __int64)(group_variable_param + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(group_variable_param + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    group_variable_param = __asan_report_load4();
  }
  if ( FleurFairMultistagePlay::isValueMeetByOrderingType(value, *(_DWORD *)(group_variable_param + 32), v8) )
  {
    proto::FleurFairPlayerStatInfo::FleurFairPlayerStatInfo((proto::FleurFairPlayerStatInfo *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_stat_config_ptr = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_config_ptr >> 3) + 0x7FFF8000) )
    {
      p_stat_config_ptr = (FleurFairMultistagePlay *)&__closure->__stat_config_ptr;
      __asan_report_load8();
    }
    v11 = (__int64)__closure->__stat_config_ptr;
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_stat_config_ptr = (FleurFairMultistagePlay *)(v11 + 8);
      v11 = __asan_report_load4();
    }
    FleurFairMultistagePlay::fillFleurFairPlayerStatInfo(
      p_stat_config_ptr,
      player,
      *(_DWORD *)(v11 + 8),
      value,
      (proto::FleurFairPlayerStatInfo *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__preprocessed_player_stat_info_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::vector<proto::FleurFairPlayerStatInfo>::push_back(
      __closure->__preprocessed_player_stat_info_vec,
      (const std::vector<proto::FleurFairPlayerStatInfo>::value_type *)(v2 + 32));
    proto::FleurFairPlayerStatInfo::~FleurFairPlayerStatInfo((proto::FleurFairPlayerStatInfo *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 913: range 000000001512B180-000000001512B741
ForeachPolicy __cdecl FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#2}::operator()(
        const FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  proto::FleurFairPlayerStatInfo *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo> *p_player_info_map; // r14
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rdx
  std::unordered_map<unsigned int,float>::mapped_type *v7; // rdx
  __int64 stat_config_ptr; // rax
  data::OrderingType v9; // ecx
  __int64 monster_hurt_param; // rax
  FleurFairMultistagePlay *this; // rdi
  int32_t v12; // ecx
  __int64 v13; // rax
  ForeachPolicy result; // eax
  float f_value; // [rsp+10h] [rbp-130h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-110h] BYREF
  FleurFairDungeonPlayerInfo *player_info; // [rsp+38h] [rbp-108h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-100h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v23; // [rsp+48h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *group_id; // [rsp+50h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *config_id_set; // [rsp+58h] [rbp-E8h]
  std::unordered_map<unsigned int,float> *monster_hurt_map; // [rsp+60h] [rbp-E0h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-D8h]
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (proto::FleurFairPlayerStatInfo *)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (proto::FleurFairPlayerStatInfo *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "2 48 4 13 config_id:920 64 64 20 player_stat_info:928";
  v2->online_id_.ptr_ = (std::string *)FleurFairMultistagePlay::generatePlayerStatInfoMap(void)::{lambda(Player &)#2}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862724] = -202116109;
  f_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_player_info_map = &__closure->__this->player_info_map_;
  v2->head_image_ = Player::getUid(player);
  player_info = std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::operator[](
                  p_player_info_map,
                  &v2->head_image_);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_hurt_param >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = &__closure->__monster_hurt_param->group_monster_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v23);
    config_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v23);
    monster_hurt_map = (std::unordered_map<unsigned int,float> *)std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::operator[](
                                                                   &player_info->group_stat_map,
                                                                   group_id);
    __for_range_0 = config_id_set;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(config_id_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
    {
      v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v2->head_image_ = *v6;
      v7 = std::unordered_map<unsigned int,float>::operator[](monster_hurt_map, &v2->head_image_);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      f_value = *v7 + f_value;
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_config_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stat_config_ptr = (__int64)__closure->__stat_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)(stat_config_ptr + 48) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(stat_config_ptr + 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    stat_config_ptr = __asan_report_load4();
  }
  v9 = *(_DWORD *)(stat_config_ptr + 48);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_hurt_param >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  monster_hurt_param = (__int64)__closure->__monster_hurt_param;
  if ( *(_BYTE *)(((unsigned __int64)(monster_hurt_param + 56) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(monster_hurt_param + 56) >> 3) + 0x7FFF8000) <= 3 )
  {
    monster_hurt_param = __asan_report_load4();
  }
  if ( FleurFairMultistagePlay::isValueMeetByOrderingType((int)f_value, *(_DWORD *)(monster_hurt_param + 56), v9) )
  {
    proto::FleurFairPlayerStatInfo::FleurFairPlayerStatInfo(v2 + 1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v12 = (int)f_value;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stat_config_ptr >> 3) + 0x7FFF8000) )
    {
      this = (FleurFairMultistagePlay *)&__closure->__stat_config_ptr;
      __asan_report_load8();
    }
    v13 = (__int64)__closure->__stat_config_ptr;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      this = (FleurFairMultistagePlay *)(v13 + 8);
      v13 = __asan_report_load4();
    }
    FleurFairMultistagePlay::fillFleurFairPlayerStatInfo(this, player, *(_DWORD *)(v13 + 8), v12, v2 + 1);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__preprocessed_player_stat_info_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::vector<proto::FleurFairPlayerStatInfo>::push_back(__closure->__preprocessed_player_stat_info_vec, v2 + 1);
    proto::FleurFairPlayerStatInfo::~FleurFairPlayerStatInfo(v2 + 1);
  }
  result = FOREACH_CONTINUE;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 945: range 0000000015155CC0-0000000015155CFA
bool __cdecl FleurFairMultistagePlay::generatePlayerStatInfoMap::_lambda_const_auto_24___const_auto_25___::operator()_proto::FleurFairPlayerStatInfo_proto::FleurFairPlayerStatInfo_(
        const FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(const auto:24&, const auto:25&)> *const __closure,
        const proto::FleurFairPlayerStatInfo *lhs,
        const proto::FleurFairPlayerStatInfo *rhs)
{
  google::protobuf::int32 v3; // ebx

  v3 = proto::FleurFairPlayerStatInfo::param(lhs);
  return v3 < proto::FleurFairPlayerStatInfo::param(rhs);
};

// Line 956: range 00000000151560C2-00000000151560FC
bool __cdecl FleurFairMultistagePlay::generatePlayerStatInfoMap::_lambda_const_auto_26___const_auto_27___::operator()_proto::FleurFairPlayerStatInfo_proto::FleurFairPlayerStatInfo_(
        const FleurFairMultistagePlay::generatePlayerStatInfoMap::<lambda(const auto:26&, const auto:27&)> *const __closure,
        const proto::FleurFairPlayerStatInfo *lhs,
        const proto::FleurFairPlayerStatInfo *rhs)
{
  google::protobuf::int32 v3; // ebx

  v3 = proto::FleurFairPlayerStatInfo::param(lhs);
  return v3 < proto::FleurFairPlayerStatInfo::param(rhs);
};
