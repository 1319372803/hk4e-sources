// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp

// Line 26: range 000000001806FC00-000000001806FCC6
int32_t __cdecl CoinCollectMultistagePlay::toClient(
        const CoinCollectMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  proto::CoinCollectStageInfo *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "toClient",
      29);
    common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
      &v4,
      (const char (*)[65])"[CoinCollectMultistagePlay] SceneMultistagePlay::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    v3 = proto::MultistagePlayInfo::mutable_coin_collect_info(info);
    CoinCollectMultistagePlay::fillPlayerStageInfo(this, v3);
    return 0;
  }
};

// Line 37: range 000000001806FF1C-0000000018070785
int32_t __cdecl CoinCollectMultistagePlay::initByParamMap(
        CoinCollectMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *p_y; // rsi
  __int64 v8; // rax
  uint32_t v9; // ecx
  char v10; // al
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  __int64 level_id; // rsi
  common::milog::MiLogStream *v13; // rax
  uint32_t gallery_id; // ecx
  char v15; // dl
  bool v16; // dl
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *v17; // rsi
  __int64 v18; // rax
  uint32_t v19; // ecx
  char v20; // al
  SceneTransferGuardComp *TransferGuardComp; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-C5h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> __y; // [rsp+20h] [rbp-C0h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-A0h] BYREF
  char v29[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 16 level_id_iter:46 64 8 16 activity_iter:64";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::initByParamMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::set<unsigned int>::empty(&this->player_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "initByParamMap",
      40);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      &v28,
      (const char (*)[48])"[CoinCollectMultistagePlay] player set is empty");
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "initByParamMap",
      43);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v28,
           (const char (*)[37])"[CoinCollectMultistagePlay] uid set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->player_uid_set_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, aLevelId_24[0], &__a);
    *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                                   param_map,
                                                                                   (const std::unordered_map<std::string,unsigned int>::key_type *)&v28);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
    p_y = &__y;
    if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "initByParamMap",
        49);
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        &v28,
        (const char (*)[63])"[CoinCollectMultistagePlay] coincollect param have no level_id");
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = -1;
    }
    else
    {
      v8 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v8 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v8 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = __asan_report_load4();
      }
      v9 = *(_DWORD *)(v8 + 32);
      v10 = *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(p_y) = v10 != 0;
        __asan_report_store4(&this->level_id_, p_y, (_BYTE)this + 96);
      }
      this->level_id_ = v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      level_id = this->level_id_;
      level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                           p_activity_coin_collect_config_mgr,
                           level_id);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        gallery_id = level_config_ptr->gallery_id;
        v15 = *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000);
        LOBYTE(level_id) = v15 != 0;
        v16 = v15 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v15;
        if ( v16 )
          __asan_report_store4(&this->gallery_id_, level_id, v16);
        this->gallery_id_ = gallery_id;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v28, aActivityId_20[0], &__a);
        *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,unsigned int>::find(
                                                                                       param_map,
                                                                                       (const std::unordered_map<std::string,unsigned int>::key_type *)&v28);
        std::string::~string(&v28);
        std::allocator<char>::~allocator(&__a);
        __y._M_cur = std::unordered_map<std::string,unsigned int>::end(param_map)._M_cur;
        v17 = &__y;
        if ( std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
            "initByParamMap",
            67);
          common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            &v28,
            (const char (*)[67])"[CoinCollectMultistagePlay] coin collect param have no activity_id");
          common::milog::MiLogStream::~MiLogStream(&v28);
          result = -1;
        }
        else
        {
          v18 = (__int64)std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) <= 3 )
          {
            v18 = __asan_report_load4();
          }
          v19 = *(_DWORD *)(v18 + 32);
          v20 = *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000);
          if ( v20 != 0 && v20 <= 3 )
          {
            LOBYTE(v17) = v20 != 0;
            __asan_report_store4(&this->activity_id_, v17, (_BYTE)this + 104);
          }
          this->activity_id_ = v19;
          std::function<ForeachPolicy ()(Player &)>::function<CoinCollectMultistagePlay::initByParamMap(std::unordered_map<std::string,unsigned int> const&)::{lambda(Player &)#1},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v28,
            (CoinCollectMultistagePlay::initByParamMap::<lambda(Player&)>)this);
          ret = CoinCollectMultistagePlay::foreachPlayer(this, (std::function<ForeachPolicy(Player&)> *)&v28);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v28);
          if ( ret )
          {
            result = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
            if ( SceneTransferGuardComp::attachTransferGuard(TransferGuardComp) )
              result = -1;
            else
              result = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "initByParamMap",
          58);
        v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v28, (const char (*)[37])off_264AC140);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->level_id_);
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = -1;
      }
    }
  }
  if ( v29 == (char *)v2 )
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

// Line 73: range 000000001806FCC8-000000001806FF1A
ForeachPolicy __cdecl CoinCollectMultistagePlay::initByParamMap(std::unordered_map<std::string,unsigned int> const&)::{lambda(Player &)#1}::operator()(
        const CoinCollectMultistagePlay::initByParamMap::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy v5; // r14d
  const CoinCollectActivity *p_level_id; // rdi
  __int64 this; // rax
  char v8; // dl
  uint32_t ChooseSkillNoByLevelId; // r14d
  std::unordered_map<unsigned int,unsigned int> *p_player_uid_2_choose_skill_no_map; // r15
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  ForeachPolicy result; // eax
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-74h] BYREF
  char v18[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 activity_ptr:76";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::initByParamMap(std::unordered_map<std::string,unsigned int> const&)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 32), 0LL) )
  {
    v5 = FOREACH_BREAK;
  }
  else
  {
    p_level_id = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_level_id = (const CoinCollectActivity *)__closure;
      __asan_report_load8();
    }
    this = (__int64)__closure->__this;
    v8 = *(_BYTE *)(((unsigned __int64)&__closure->__this->level_id_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      p_level_id = (const CoinCollectActivity *)&__closure->__this->level_id_;
      this = __asan_report_load4();
    }
    ChooseSkillNoByLevelId = CoinCollectActivity::getChooseSkillNoByLevelId(p_level_id, *(_DWORD *)(this + 352));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_player_uid_2_choose_skill_no_map = &__closure->__this->player_uid_2_choose_skill_no_map_;
    __k = Player::getUid(player);
    p_k = &__k;
    v12 = std::unordered_map<unsigned int,unsigned int>::operator[](p_player_uid_2_choose_skill_no_map, &__k);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(p_k) = v14 != 0;
      __asan_report_store4(v12, p_k, (_BYTE)v12);
    }
    *v13 = ChooseSkillNoByLevelId;
    v5 = FOREACH_CONTINUE;
  }
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
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

// Line 99: range 0000000018070786-000000001807093E
int32_t __cdecl CoinCollectMultistagePlay::initStage(
        CoinCollectMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  char *val; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned int)(stage_type - 13) > 2 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "initStage",
      108);
    v5 = common::milog::MiLogStream::operator<<<CoinCollectMultistagePlay,(CoinCollectMultistagePlay*)0>(&v18, this);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" stage type: ");
    val = (char *)data::getDescription(stage_type);
    v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not supported.");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
    "initStage",
    113);
  v8 = common::milog::MiLogStream::operator<<<CoinCollectMultistagePlay,(CoinCollectMultistagePlay*)0>(&v18, this);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" init stage: ");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, stage_name);
  v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])off_264AC260);
  val = (char *)data::getDescription(stage_type);
  v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
  v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" with duration: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, duration);
  common::milog::MiLogStream::~MiLogStream(&v18);
  return 0;
};

// Line 118: range 0000000018070AC2-0000000018070BCC
void __cdecl CoinCollectMultistagePlay::onStageStart(CoinCollectMultistagePlay *const this)
{
  data::MultistageStageType stage_type; // eax
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_type = this->stage_type_;
  if ( stage_type == MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::function<ForeachPolicy ()(Player &)>::function<CoinCollectMultistagePlay::onStageStart(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (CoinCollectMultistagePlay::onStageStart::<lambda(Player&)>)this->level_id_);
    CoinCollectMultistagePlay::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  }
  else if ( stage_type == MULTISTAGE_STAGE_COIN_COLLECT_GALLERY )
  {
    CoinCollectMultistagePlay::tryStartCoinCollectGallery(this);
  }
};

// Line 127: range 0000000018070940-0000000018070AC0
ForeachPolicy __cdecl CoinCollectMultistagePlay::onStageStart(void)::{lambda(Player &)#1}::operator()(
        const CoinCollectMultistagePlay::onStageStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  ForeachPolicy result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:129";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onStageStart(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( !std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    CoinCollectActivity::onStartWatchCutScene(v5, __closure->__level_id);
  }
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 155: range 0000000018070DE8-000000001807167D
void __cdecl CoinCollectMultistagePlay::onStageEnd(CoinCollectMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MultistageStageType stage_type; // eax
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t activity_id; // ecx
  uint32_t v10; // ecx
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v13; // rax
  std::allocator<char> __a; // [rsp+23h] [rbp-DDh] BYREF
  int32_t ret; // [rsp+24h] [rbp-DCh]
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 32 is_all_have_watched_cutscene:176 48 4 12 duration:210 64 16 15 param_table:162 96 16 13 group_ptr:218";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onStageEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( is_succ )
  {
    ret = 0;
    luabind::adl::object::object((luabind::adl::object *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stage_type = this->stage_type_;
    if ( stage_type == MULTISTAGE_STAGE_COIN_COLLECT_PREPARE )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 96));
      p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                           p_activity_coin_collect_config_mgr,
                           this->level_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
      if ( level_config_ptr )
      {
        *(_BYTE *)(v2 + 32) = 1;
        std::function<ForeachPolicy ()(Player &)>::function<CoinCollectMultistagePlay::onStageEnd(bool)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v17,
          (CoinCollectMultistagePlay::onStageEnd::<lambda(Player&)>)__PAIR128__((unsigned __int64)this, v2 + 32));
        CoinCollectMultistagePlay::foreachPlayer(this, (std::function<ForeachPolicy(Player&)> *)&v17);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v17);
        if ( *(_BYTE *)(v2 + 32) != 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->cutscene_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_config_ptr->cutscene_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = level_config_ptr->cutscene_time;
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v17, byte_2641E100, &__a);
          ret = SceneMultistagePlay::startStage(
                  this,
                  MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE,
                  (uint32_t *)(v2 + 48),
                  (const std::string *)&v17,
                  (const luabind::adl::object *)(v2 + 64));
          std::string::~string(&v17);
          std::allocator<char>::~allocator(&__a);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          activity_id = this->activity_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = CoinCollectActivity::getGalleryPlayGuaranteedTime(this->gallery_id_, activity_id);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v17, byte_2641E100, &__a);
          ret = SceneMultistagePlay::startStage(
                  this,
                  MULTISTAGE_STAGE_COIN_COLLECT_GALLERY,
                  (uint32_t *)(v2 + 48),
                  (const std::string *)&v17,
                  (const luabind::adl::object *)(v2 + 64));
          std::string::~string(&v17);
          std::allocator<char>::~allocator(&__a);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "onStageEnd",
          171);
        v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v17,
               (const char (*)[39])"[CoinCollectMultistagePlay] level_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->level_id_);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])off_2648B580);
        common::milog::MiLogStream::~MiLogStream(&v17);
        ret = -1;
      }
    }
    else if ( stage_type <= MULTISTAGE_STAGE_COIN_COLLECT_PREPARE )
    {
      if ( stage_type == MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v10 = this->activity_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = CoinCollectActivity::getGalleryPlayGuaranteedTime(this->gallery_id_, v10);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v17, byte_2641E100, &__a);
        ret = SceneMultistagePlay::startStage(
                this,
                MULTISTAGE_STAGE_COIN_COLLECT_GALLERY,
                (uint32_t *)(v2 + 48),
                (const std::string *)&v17,
                (const luabind::adl::object *)(v2 + 64));
        std::string::~string(&v17);
        std::allocator<char>::~allocator(&__a);
      }
      else if ( stage_type == MULTISTAGE_STAGE_COIN_COLLECT_GALLERY )
      {
        std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 96));
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
            "onStageEnd",
            221);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v17,
            (const char (*)[46])"[CoinCollectMultistagePlay] group_ptr nullptr");
          common::milog::MiLogStream::~MiLogStream(&v17);
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          play_index = this->play_index_;
          v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          ret = SceneMultistagePlayComp::endPlay(MultistagePlayComp, v13, play_index, 1);
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
      }
    }
    luabind::adl::object::~object((luabind::adl::object *const)(v2 + 64));
  }
  if ( v18 == (char *)v2 )
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
};

// Line 177: range 0000000018070BCE-0000000018070DE6
ForeachPolicy __cdecl CoinCollectMultistagePlay::onStageEnd(bool)::{lambda(Player &)#1}::operator()(
        const CoinCollectMultistagePlay::onStageEnd::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy v5; // r14d
  const CoinCollectActivity *p_this; // rdi
  __int64 this; // rax
  __int64 v8; // rsi
  bool *is_all_have_watched_cutscene; // rdx
  char v10; // cl
  ForeachPolicy result; // eax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:179";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onStageEnd(bool)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 32), 0LL) )
  {
    v5 = FOREACH_CONTINUE;
  }
  else
  {
    p_this = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    {
      p_this = (const CoinCollectActivity *)&__closure->__this;
      __asan_report_load8();
    }
    this = (__int64)__closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)(this + 352) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(this + 352) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_this = (const CoinCollectActivity *)(this + 352);
      this = __asan_report_load4();
    }
    v8 = *(unsigned int *)(this + 352);
    if ( !CoinCollectActivity::isHaveWatchedCutScene(p_this, v8) )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      is_all_have_watched_cutscene = __closure->__is_all_have_watched_cutscene;
      v10 = *(_BYTE *)(((unsigned __int64)__closure->__is_all_have_watched_cutscene >> 3) + 0x7FFF8000);
      if ( v10 != 0 && ((__int64)__closure->__is_all_have_watched_cutscene & 7) >= v10 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store1(__closure->__is_all_have_watched_cutscene, v8, is_all_have_watched_cutscene);
      }
      *is_all_have_watched_cutscene = 0;
      v5 = FOREACH_BREAK;
    }
    else
    {
      v5 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 239: range 000000001807167E-0000000018071A7C
void __cdecl CoinCollectMultistagePlay::onEnd(CoinCollectMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SceneTransferGuardComp *TransferGuardComp; // rax
  Player *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:246 64 16 16 activity_ptr:253";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  CoinCollectMultistagePlay::unregisterPlayGroup(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TransferGuardComp = Scene::getTransferGuardComp(this->scene_);
  SceneTransferGuardComp::stopTransferGuard(TransferGuardComp, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onEnd",
      249);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v13,
      (const char (*)[46])"[CoinCollectMultistagePlay] owner player null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::getActivityComp(v6);
    PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 64));
    if ( std::operator==<CoinCollectActivity>(0LL, (const std::shared_ptr<CoinCollectActivity> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onEnd",
        256);
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v13,
             (const char (*)[62])"[CoinCollectMultistagePlay] findActivity failed, activity_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v11 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      CoinCollectActivity::onCoinCollectMultiStageEnd(v11);
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onEnd",
        261);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v13,
        (const char (*)[34])"[CoinCollectMultistagePlay] onEnd");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 265: range 0000000018071A7E-0000000018071A88
void __cdecl CoinCollectMultistagePlay::onClear(CoinCollectMultistagePlay *const this)
{
  ;
};

// Line 270: range 0000000018071A8A-0000000018071E09
void __cdecl CoinCollectMultistagePlay::onPostEnterScene(CoinCollectMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  uint32_t ChooseSkillNoByLevelId; // r14d
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 player_uid:271 64 16 16 activity_ptr:282";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onPostEnterScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
          &this->player_uid_2_choose_skill_no_map_,
          (const unsigned int *)(v2 + 48))
    && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->player_uid_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 64));
    if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onPostEnterScene",
        285);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"activity is closed");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v5 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ChooseSkillNoByLevelId = CoinCollectActivity::getChooseSkillNoByLevelId(v5, this->level_id_);
      __k = Player::getUid(player);
      p_k = &__k;
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->player_uid_2_choose_skill_no_map_, &__k);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(p_k) = v10 != 0;
        __asan_report_store4(v8, p_k, (_BYTE)v8);
      }
      *v9 = ChooseSkillNoByLevelId;
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->stage_type_ == MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE )
        SceneMultistagePlay::notifyPlayerStage(this, player);
      else
        SceneMultistagePlay::notifyStage(this);
    }
    std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
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

// Line 301: range 0000000018071E0A-0000000018071E1B
void __cdecl CoinCollectMultistagePlay::onPlayerLeaveWorld(
        CoinCollectMultistagePlay *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  ;
};

// Line 306: range 0000000018071E1C-00000000180723B4
void __fastcall CoinCollectMultistagePlay::onAvatarDie(CoinCollectMultistagePlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerAvatarComp *AvatarComp; // rax
  SceneGalleryComp *GalleryComp; // rdi
  SceneMultistagePlayComp *MultistagePlayComp; // r15
  uint32_t play_index; // r14d
  Group *v13; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:305 64 16 14 player_ptr:312 96 16 13 group_ptr:332";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onAvatarDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  if ( !SceneMultistagePlay::isPlayerInPlay(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onAvatarDie",
      309);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v15,
           (const char (*)[56])"[HideAndSeekMultistagePlay] player is not in play ,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v2 + 64), (__int64)this->scene_, *(_DWORD *)(v2 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onAvatarDie",
        315);
      v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v15, (const char (*)[13])"player uid: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" not in scene");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AvatarComp = Player::getAvatarComp(v8);
      if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) && std::set<unsigned int>::size(&this->player_uid_set_) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->stage_type_ == MULTISTAGE_STAGE_COIN_COLLECT_GALLERY )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          GalleryComp = Scene::getGalleryComp(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
            __asan_report_load4();
          }
          SceneGalleryComp::forceStopAndClearGallery(GalleryComp, this->gallery_id_, 0, GALLERY_STOP_AVATAR_DIE);
        }
        else
        {
          std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 96));
          if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
              "onAvatarDie",
              335);
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v15,
              (const char (*)[46])"[CoinCollectMultistagePlay] group_ptr nullptr");
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MultistagePlayComp = Scene::getMultistagePlayComp(this->scene_);
            if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            play_index = this->play_index_;
            v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            SceneMultistagePlayComp::endPlay(MultistagePlayComp, v13, play_index, 0);
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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
};

// Line 343: range 00000000180723B6-00000000180723C4
void __cdecl CoinCollectMultistagePlay::onPlayerDisconnect(CoinCollectMultistagePlay *const this, Player *player)
{
  ;
};

// Line 348: range 00000000180723C6-0000000018072B7E
__int64 __fastcall CoinCollectMultistagePlay::onPlayerAgreeToPrepare(
        CoinCollectMultistagePlay *const this,
        uint32_t player_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v9; // rax
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::unordered_set<unsigned int>::size_type v13; // r14
  uint32_t SceneTimeSeconds; // ecx
  uint32_t v15; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // ecx
  char v20; // dl
  char *v21; // rsi
  bool v22; // dl
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+18h] [rbp-D8h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  const data::CoinCollectOverallExcelConfig *overall_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 duration:373 64 4 14 player_uid:347";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onPlayerAgreeToPrepare;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = player_uid;
  __y._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->player_uid_set_,
                  (const std::set<unsigned int>::key_type *)(v2 + 64))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onPlayerAgreeToPrepare",
      351);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"player: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" not in multistage");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ != MULTISTAGE_STAGE_COIN_COLLECT_PREPARE )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onPlayerAgreeToPrepare",
      356);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"multistage not in prepare stage: ");
    common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
      v8,
      &this->stage_type_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  v9 = std::unordered_set<unsigned int>::insert(
         &this->prepared_uid_set_,
         (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
  if ( v9.second )
  {
    CoinCollectMultistagePlay::notifyPrepareStageInfo(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    overall_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectOverallExcelConfig(
                           p_activity_coin_collect_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( !overall_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onPlayerAgreeToPrepare",
        368);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v27, (const char (*)[11])"activity: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])off_2648B580);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
      goto LABEL_35;
    }
    v13 = std::unordered_set<unsigned int>::size(&this->prepared_uid_set_);
    if ( v13 == std::set<unsigned int>::size(&this->player_uid_set_) )
    {
      *(_DWORD *)(v2 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( SceneTimeSeconds > this->stage_begin_scene_time_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = Scene::getSceneTimeSeconds(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) += v15 - this->stage_begin_scene_time_;
      }
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->idle_after_prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->idle_after_prepare_time >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) += overall_config_ptr->idle_after_prepare_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->duration_seconds_ > *(_DWORD *)(v2 + 48) )
      {
        SceneMultistagePlay::rewriteStageTime(this, overall_config_ptr->idle_after_prepare_time);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "onPlayerAgreeToPrepare",
          383);
        v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v27,
                (const char (*)[59])"[COINCOLLECT] all players are ready, reduce duration from:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->duration_seconds_);
        v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])" to:");
        v21 = (char *)(v2 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v19 = *(_DWORD *)(v2 + 48);
        v20 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000);
        LOBYTE(v21) = v20 != 0;
        v22 = v20 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v20;
        if ( v22 )
          __asan_report_store4(&this->duration_seconds_, v21, v22);
        this->duration_seconds_ = v19;
        SceneMultistagePlay::notifyStage(this);
      }
    }
  }
  result = 0LL;
LABEL_35:
  if ( v28 == (char *)v2 )
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

// Line 394: range 0000000018072B80-0000000018073020
void __fastcall CoinCollectMultistagePlay::onPlayerChooseSkill(
        CoinCollectMultistagePlay *const this,
        uint32_t player_uid,
        uint32_t level_id,
        uint32_t skill_no)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *p_y; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v14; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v15; // rdx
  char v16; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 14 player_uid:393 48 4 12 level_id:393 64 8 8 iter:406";
  *(_QWORD *)(v4 + 16) = CoinCollectMultistagePlay::onPlayerChooseSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 32) = player_uid;
  *(_DWORD *)(v4 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_COIN_COLLECT_PREPARE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->level_id_ == *(_DWORD *)(v4 + 48) )
    {
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                &this->player_uid_2_choose_skill_no_map_,
                                                                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
      __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_uid_2_choose_skill_no_map_)._M_cur;
      p_y = &__y;
      if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "onPlayerChooseSkill",
          409);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v20, (const char (*)[9])"player: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v13, (const char (*)[31])off_264ACA20);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      else
      {
        v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( skill_no != v14->second )
        {
          v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 64));
          v16 = *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)((((_BYTE)v15 + 4) & 7) + 3) >= v16 )
          {
            LOBYTE(p_y) = v16 != 0;
            __asan_report_store4(&v15->second, p_y, (_BYTE)v15);
          }
          v15->second = skill_no;
          CoinCollectMultistagePlay::notifyPrepareStageInfo(this);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onPlayerChooseSkill",
        403);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v20, (const char (*)[18])off_264AC9A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->level_id_);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", set: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onPlayerChooseSkill",
      397);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v20,
           (const char (*)[34])"multistage not in prepare stage: ");
    common::milog::MiLogStream::operator<<<data::MultistageStageType,(data::MultistageStageType*)0>(
      v7,
      &this->stage_type_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( v21 == (char *)v4 )
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

// Line 421: range 0000000018073022-00000000180732B2
void __fastcall CoinCollectMultistagePlay::onCoinCollectGalleryStop(
        CoinCollectMultistagePlay *const this,
        uint32_t gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 gallery_id:420";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onCoinCollectGalleryStop;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->gallery_id_ == *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_COIN_COLLECT_GALLERY )
    {
      SceneMultistagePlay::endStage(this, 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onCoinCollectGalleryStop",
        429);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v8,
        (const char (*)[24])"is not in gallery stage");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onCoinCollectGalleryStop",
      424);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v8,
           (const char (*)[23])"gallery id not equal: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v6, (const char (*)[4])" - ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
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
};

// Line 436: range 00000000180732B4-0000000018073807
__int64 __fastcall CoinCollectMultistagePlay::onInterruptCoinCollectGallery(
        CoinCollectMultistagePlay *const this,
        uint32_t gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  SceneGalleryComp *GalleryComp; // rax
  BaseGallery *v12; // rax
  SceneGalleryComp *v14; // rax
  __int64 result; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 gallery_id:435 64 16 20 base_gallery_ptr:453";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::onInterruptCoinCollectGallery;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->gallery_id_ == *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->stage_type_ == MULTISTAGE_STAGE_COIN_COLLECT_GALLERY )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                             &v9->design_config.txt_config_mgr.gallery_config_mgr,
                             *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GalleryComp = Scene::getGalleryComp(this->scene_);
        SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 64), (__int64)GalleryComp, *(_DWORD *)(v2 + 48));
        if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 64), 0LL)
          || (v12 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
              !BaseGallery::isStart(v12)) )
        {
          v8 = 524;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->can_interrupt_by_client >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gallery_config_ptr + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->can_interrupt_by_client >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load1(&gallery_config_ptr->can_interrupt_by_client);
          }
          if ( !gallery_config_ptr->can_interrupt_by_client )
          {
            v8 = 526;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v14 = Scene::getGalleryComp(this->scene_);
            v8 = SceneGalleryComp::forceStopAndClearGallery(v14, *(_DWORD *)(v2 + 48), 0, GALLERY_STOP_CLIENT_INTERRUPT);
          }
        }
        std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "onInterruptCoinCollectGallery",
          450);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v17,
                (const char (*)[43])"gallery_config_ptr is nullptr, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "onInterruptCoinCollectGallery",
        444);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v17,
        (const char (*)[24])"is not in gallery stage");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "onInterruptCoinCollectGallery",
      439);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v17,
           (const char (*)[23])"gallery id not equal: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v6, (const char (*)[4])" - ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  result = v8;
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

// Line 466: range 0000000018073808-0000000018073C01
int32_t __cdecl CoinCollectMultistagePlay::foreachPlayer(
        CoinCollectMultistagePlay *const this,
        std::function<ForeachPolicy(Player&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::set<unsigned int>::size_type v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  int v8; // r14d
  Player *v9; // rdx
  int32_t result; // eax
  int player_uid; // [rsp+24h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::vector<std::weak_ptr<Player>> *__for_range_0; // [rsp+40h] [rbp-C0h]
  std::weak_ptr<Player> *player_wtr; // [rsp+48h] [rbp-B8h]
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 player_ptr:482 64 24 14 player_vec:468";
  *(_QWORD *)(v3 + 16) = CoinCollectMultistagePlay::foreachPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Player>>::vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  v6 = std::set<unsigned int>::size(&this->player_uid_set_);
  std::vector<std::weak_ptr<Player>>::reserve((std::vector<std::weak_ptr<Player>> *const)(v3 + 64), v6);
  __for_range = &this->player_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->player_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->player_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    player_uid = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 32), (__int64)this->scene_, player_uid);
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      std::vector<std::weak_ptr<Player>>::emplace_back<std::shared_ptr<Player> &>(
        (std::vector<std::weak_ptr<Player>> *const)(v3 + 64),
        (std::shared_ptr<Player> *)(v3 + 32),
        (std::shared_ptr<Player> *)(v3 + 32));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Player>> *)(v3 + 64);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v3 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::weak_ptr<Player>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_end) )
  {
    player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Player &)>::operator()(p_func, v9) )
      {
        v2 = 1;
        v8 = 1;
      }
      else
      {
        v8 = 2;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    if ( v8 && v8 != 2 )
      goto LABEL_24;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_24:
  std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 496: range 0000000018073C54-0000000018073DD5
void __cdecl CoinCollectMultistagePlay::notifyPrepareStageInfo(CoinCollectMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::CoinCollectStageInfo *v4; // rdx
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-A0h] BYREF
  char v6[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:497";
  *(_QWORD *)(v1 + 16) = CoinCollectMultistagePlay::notifyPrepareStageInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::CoinCollectPrepareStageNotify::CoinCollectPrepareStageNotify((proto::CoinCollectPrepareStageNotify *const)(v1 + 32));
  v4 = proto::CoinCollectPrepareStageNotify::mutable_coin_collect_info((proto::CoinCollectPrepareStageNotify *const)(v1 + 32));
  CoinCollectMultistagePlay::fillPlayerStageInfo(this, v4);
  std::function<ForeachPolicy ()(Player &)>::function<CoinCollectMultistagePlay::notifyPrepareStageInfo(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (CoinCollectMultistagePlay::notifyPrepareStageInfo::<lambda(Player&)>)(v1 + 32));
  CoinCollectMultistagePlay::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  proto::CoinCollectPrepareStageNotify::~CoinCollectPrepareStageNotify((proto::CoinCollectPrepareStageNotify *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 499: range 0000000018073C02-0000000018073C52
ForeachPolicy __cdecl CoinCollectMultistagePlay::notifyPrepareStageInfo(void)::{lambda(Player &)#1}::operator()(
        const CoinCollectMultistagePlay::notifyPrepareStageInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 507: range 0000000018073E5A-00000000180743F6
void __cdecl CoinCollectMultistagePlay::fillPlayerStageInfo(
        const CoinCollectMultistagePlay *const this,
        proto::CoinCollectStageInfo *info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::pair<unsigned int const,unsigned int> *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rdx
  bool v7; // al
  Scene *scene; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v13; // rax
  Player *v14; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_no; // [rsp+38h] [rbp-A8h]
  proto::CoinCollectPlayerInfo *new_player_info; // [rsp+40h] [rbp-A0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-98h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:516";
  *(_QWORD *)(v2 + 16) = CoinCollectMultistagePlay::fillPlayerStageInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectStageInfo::set_play_index(info, this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectStageInfo::set_level_id(info, this->level_id_);
  __for_range = &this->player_uid_2_choose_skill_no_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->player_uid_2_choose_skill_no_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_uid_2_choose_skill_no_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v5 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    __in = *v6;
    uid = std::get<0ul,unsigned int const,unsigned int>(&__in);
    skill_no = std::get<1ul,unsigned int const,unsigned int>(&__in);
    new_player_info = proto::CoinCollectStageInfo::add_player_info_list(info);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CoinCollectPlayerInfo::set_player_uid(new_player_info, *uid);
    if ( *(_BYTE *)(((unsigned __int64)skill_no >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_no & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_no >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CoinCollectPlayerInfo::set_choose_skill_no(new_player_info, *skill_no);
    v7 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &this->prepared_uid_set_,
           uid);
    proto::CoinCollectPlayerInfo::set_is_prepare(new_player_info, v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 32), (__int64)scene, *uid);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "fillPlayerStageInfo",
        519);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v23, (const char (*)[9])"player: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, uid);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])off_264ACD20);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BasicComp = Player::getBasicComp(v11);
      v13 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
      proto::CoinCollectPlayerInfo::set_player_name(new_player_info, v13);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      AvatarComp = Player::getAvatarComp(v14);
      std::function<ForeachPolicy ()(Avatar &)>::function<CoinCollectMultistagePlay::fillPlayerStageInfo(proto::CoinCollectStageInfo &)::{lambda(Avatar &)#1},void,void>(
        (std::function<ForeachPolicy(Avatar&)> *const)&v23,
        (CoinCollectMultistagePlay::fillPlayerStageInfo::<lambda(Avatar&)>)new_player_info);
      PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v23);
      std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v23);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 523: range 0000000018073DD6-0000000018073E58
ForeachPolicy __cdecl CoinCollectMultistagePlay::fillPlayerStageInfo(proto::CoinCollectStageInfo &)const::{lambda(Avatar &)#1}::operator()(
        const CoinCollectMultistagePlay::fillPlayerStageInfo::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  uint32_t AvatarId; // edx
  uint32_t CostumeId; // edx
  proto::CoinCollectTeamAvatarInfo *new_avatar_info; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  new_avatar_info = proto::CoinCollectPlayerInfo::add_avatar_info_list(__closure->__new_player_info);
  AvatarId = Avatar::getAvatarId(avatar);
  proto::CoinCollectTeamAvatarInfo::set_avatar_id(new_avatar_info, AvatarId);
  CostumeId = Avatar::getCostumeId(avatar);
  proto::CoinCollectTeamAvatarInfo::set_costume_id(new_avatar_info, CostumeId);
  return 0;
};

// Line 534: range 00000000180743F8-000000001807491C
int32_t __cdecl CoinCollectMultistagePlay::tryStartCoinCollectGallery(CoinCollectMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  SceneGalleryComp *GalleryComp; // rdi
  std::set<unsigned int> *p_player_uid_set; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  SceneGalleryComp *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  SceneGalleryComp *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-90h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gallery_ptr:541";
  *(_QWORD *)(v1 + 16) = CoinCollectMultistagePlay::tryStartCoinCollectGallery;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(this->scene_);
  p_player_uid_set = &this->player_uid_set_;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
  {
    GalleryComp = (SceneGalleryComp *)&this->gallery_id_;
    __asan_report_load4();
  }
  if ( (unsigned int)SceneGalleryComp::initGallery(GalleryComp, this->gallery_id_, p_player_uid_set) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "tryStartCoinCollectGallery",
      537);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v15,
           (const char (*)[47])"[CoinCollect] gallery init failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Scene::getGalleryComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 32), (__int64)v8, this->gallery_id_);
    if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "tryStartCoinCollectGallery",
        544);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v15,
             (const char (*)[47])"[CoinCollect] gallery init failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( (unsigned int)SceneGalleryComp::startGallery(v10, this->gallery_id_) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "tryStartCoinCollectGallery",
          550);
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v15,
                (const char (*)[48])"[CoinCollect] gallery start failed, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v15);
        v7 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
          "tryStartCoinCollectGallery",
          553);
        v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v15,
                (const char (*)[28])"[CoinCollect] startGallery:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v15);
        v7 = 0;
      }
    }
    std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 32));
  }
  result = v7;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 558: range 000000001807491E-0000000018074CC2
void __cdecl CoinCollectMultistagePlay::unregisterPlayGroup(CoinCollectMultistagePlay *const this)
{
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  SceneBlockGroupComp *BlockGroupComp; // rbx
  unsigned __int64 v4; // rax
  unsigned int (__fastcall *v5)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // r14
  bool v6; // bl
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-7Dh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+14h] [rbp-7Ch] BYREF
  std::vector<unsigned int> v12; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-40h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
  p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                          (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len
                                        + 4)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(p_activity_coin_collect_config_mgr, this->level_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
  if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
    if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v5 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v4;
    if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 6) >> 3)
                  + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 6) >> 3)
                  + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    LODWORD(__l._M_array) = (*(_DWORD **)((char *)&__l._M_array + 4))[6];
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&v12, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l), &__a);
    v6 = v5(BlockGroupComp, &v12, 1LL) != 0;
    std::vector<unsigned int>::~vector(&v12);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
        "unregisterPlayGroup",
        567);
      v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v13,
             (const char (*)[63])"[CoinCollectMultistagePlay] unregisterGroups failed, group_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v7,
             *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 6);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      LODWORD(__l._M_array) = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)&__l);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/coin_collect_multistage_play.cpp",
      "unregisterPlayGroup",
      562);
    v2 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v13,
           (const char (*)[63])"[CoinCollectMultistagePlay] get level config failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
};

// Line 569: range 0000000018095D40-0000000018095D54
void __cdecl GLOBAL__sub_I_merge_merge_scene_transfer_guard_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 569: range 0000000018095656-0000000018095D3F
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *v11; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx
  std::less<proto::EnterReason> __comp; // [rsp+1Eh] [rbp-52h] BYREF
  std::allocator<proto::EnterReason> __a; // [rsp+1Fh] [rbp-51h] BYREF
  std::initializer_list<proto::EnterReason> __l; // [rsp+20h] [rbp-50h] BYREF
  int v41; // [rsp+30h] [rbp-40h]
  int v42; // [rsp+34h] [rbp-3Ch]
  int v43; // [rsp+38h] [rbp-38h]
  int v44; // [rsp+3Ch] [rbp-34h]
  int v45; // [rsp+40h] [rbp-30h]

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_scene_transfer_guard_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      __l._M_array = (std::initializer_list<proto::EnterReason>::iterator)0x3400000001LL;
      __l._M_len = 0x3500000020LL;
      v41 = 51;
      v42 = 21;
      v43 = 83;
      v44 = 58;
      v45 = 91;
      std::allocator<proto::EnterReason>::allocator(&__a);
      std::set<proto::EnterReason>::set(
        (std::set<proto::EnterReason> *const)&SceneTransferGuardComp::WHITE_ENTER_REASON_SET,
        (std::initializer_list<proto::EnterReason>)__PAIR128__(9LL, &__l),
        &__comp,
        &__a);
      std::allocator<proto::EnterReason>::~allocator(&__a);
      v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&SceneTransferGuardComp::WHITE_ENTER_REASON_SET;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<proto::EnterReason>::~set,
        (void *)&SceneTransferGuardComp::WHITE_ENTER_REASON_SET,
        &_dso_handle);
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v11,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v11 = &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v11,
            v19);
        *v17 = 1;
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v11,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v11,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v11,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v11,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
