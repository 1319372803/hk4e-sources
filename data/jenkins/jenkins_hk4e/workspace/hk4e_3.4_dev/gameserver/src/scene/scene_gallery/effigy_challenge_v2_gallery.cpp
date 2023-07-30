// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp

// Line 29: range 00000000179DB8DE-00000000179DBB32
void __cdecl EffigyChallengeV2Gallery::toClient(
        EffigyChallengeV2Gallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  uint32_t challenge_mode_difficulty; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t start_time; // eax
  proto::SceneGalleryEffigyChallengeV2Info *effigy_challenge_info; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  effigy_challenge_info = proto::SceneGalleryInfo::mutable_effigy_challenge_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_mode_difficulty = this->challenge_mode_difficulty_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  if ( challenge_mode_difficulty == ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v3->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    start_time = this->start_time_;
  }
  else
  {
    start_time = 0;
  }
  proto::SceneGalleryEffigyChallengeV2Info::set_scene_start_time(effigy_challenge_info, start_time);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryEffigyChallengeV2Info::set_t_remain_use_time(effigy_challenge_info, this->t_remain_use_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryEffigyChallengeV2Info::set_killed_monster_cnt(effigy_challenge_info, this->killed_monster_cnt_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryEffigyChallengeV2Info::set_total_target_kill_cnt(
    effigy_challenge_info,
    this->total_target_kill_cnt_);
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_violent_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_violent_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryEffigyChallengeV2Info::set_boss_violent_level(effigy_challenge_info, this->boss_violent_level_);
};

// Line 43: range 00000000179DBB34-00000000179DC3F3
int32_t __cdecl EffigyChallengeV2Gallery::updatePlayerScore(
        EffigyChallengeV2Gallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  const luabind::adl::object *v9; // rsi
  uint32_t v10; // ecx
  char v11; // dl
  bool v12; // dl
  const luabind::adl::object *v13; // rsi
  bool v14; // r14
  uint32_t v15; // ecx
  char v16; // al
  Scene *scene; // rcx
  const luabind::adl::object *v18; // rsi
  bool v19; // r14
  uint32_t v20; // ecx
  char v21; // dl
  bool v22; // dl
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int32_t result; // eax
  bool v34; // [rsp+23h] [rbp-EDh]
  bool v35; // [rsp+23h] [rbp-EDh]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-D1h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 17 total_kill_cnt:50 48 4 19 kill_monster_cnt:55 64 4 27 param_boss_violent_level:61 80 4"
                        " 26 param_t_remain_use_time:70 96 16 13 player_ptr:67";
  *(_QWORD *)(v4 + 16) = EffigyChallengeV2Gallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "total_kill_cnt", &__a);
    v9 = param_table;
    v34 = !ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::no_exception_instance,
             param_table,
             (const std::string *)&v37,
             (unsigned int *)(v4 + 32))
       && *(_DWORD *)(v4 + 32);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    if ( v34 )
    {
      v10 = *(_DWORD *)(v4 + 32);
      v11 = *(_BYTE *)(((unsigned __int64)&this->total_target_kill_cnt_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v11 != 0;
      v12 = v11 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v11;
      if ( v12 )
        __asan_report_store4(&this->total_target_kill_cnt_, v9, v12);
      this->total_target_kill_cnt_ = v10;
    }
    *(_DWORD *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "kill_monster_cnt", &__a);
    v35 = !ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::no_exception_instance,
             param_table,
             (const std::string *)&v37,
             (unsigned int *)(v4 + 48))
       && *(_DWORD *)(v4 + 48);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    if ( v35 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->killed_monster_cnt_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->killed_monster_cnt_;
    }
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "violent_level", &__a);
    v13 = param_table;
    v14 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v37,
            (unsigned int *)(v4 + 64)) == 0;
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v4 + 64);
      v16 = *(_BYTE *)(((unsigned __int64)&this->boss_violent_level_ >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(&this->boss_violent_level_, v13, (_BYTE)this + 72);
      }
      this->boss_violent_level_ = v15;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v4 + 96), (__int64)scene, this->effigy_challenge_v2_host_uid_);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 96)) )
    {
      *(_DWORD *)(v4 + 80) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "t_remain_use_time", &__a);
      v18 = param_table;
      v19 = ScriptUtil::getTableValue<unsigned int>(
              &ScriptUtil::no_exception_instance,
              param_table,
              (const std::string *)&v37,
              (unsigned int *)(v4 + 80)) == 0;
      std::string::~string(&v37);
      std::allocator<char>::~allocator(&__a);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v4 + 80);
        v21 = *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000);
        LOBYTE(v18) = v21 != 0;
        v22 = v21 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v21;
        if ( v22 )
          __asan_report_store4(&this->t_remain_use_time_, v18, v22);
        this->t_remain_use_time_ = v20;
      }
    }
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "updatePlayerScore",
      77);
    v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v37,
            (const char (*)[39])"[EFFIGYCHALLENGEV2] t_remain_use_time:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->t_remain_use_time_);
    v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])", killed_cnt: ");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->killed_monster_cnt_);
    v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v26, (const char (*)[19])", total_kill_cnt: ");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->total_target_kill_cnt_);
    v29 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v28,
            (const char (*)[23])", boss_violent_level: ");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->boss_violent_level_);
    v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])", uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->effigy_challenge_v2_host_uid_);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v8 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "updatePlayerScore",
      46);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v37,
           (const char (*)[52])"[EFFIGYCHALLENGEV2] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 80) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v8 = -1;
  }
  result = v8;
  if ( v38 == (char *)v4 )
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
  return result;
};

// Line 84: range 00000000179DC3F4-00000000179DD1D8
void __cdecl EffigyChallengeV2Gallery::onStart(EffigyChallengeV2Gallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  uint32_t v16; // ecx
  char v17; // al
  ActivityEffigyChallengeV2ExcelConfigMgr *v18; // rcx
  __int64 challenge_mode_difficulty; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t skill_use_time_limit; // ecx
  char v24; // dl
  bool v25; // dl
  uint32_t t_remain_use_time; // ecx
  char v27; // dl
  bool v28; // dl
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t PlayerUid; // edx
  char v31; // al
  ActivityEffigyChallengeV2ExcelConfigMgr *v32; // r14
  uint32_t GalleryId; // eax
  uint32_t NormalSkillNo; // ecx
  char v35; // dl
  __int64 v36; // rsi
  bool v37; // dl
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v38; // rdx
  uint32_t challenge_mode_skill_no; // ecx
  char v40; // dl
  bool v41; // dl
  ActivityEffigyChallengeV2ExcelConfigMgr *v42; // rcx
  bool v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+18h] [rbp-148h]
  uint32_t *level_id; // [rsp+20h] [rbp-140h]
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+28h] [rbp-138h]
  const data::EffigyChallengeV2DifficultyExcelConfig *difficulty_config_ptr; // [rsp+30h] [rbp-130h]
  std::pair<bool,unsigned int> __in; // [rsp+38h] [rbp-128h] BYREF
  std::shared_ptr<Config> v53; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v54; // [rsp+50h] [rbp-110h] BYREF
  char v55[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 17 cur_dungeon_id:98 48 16 16 cur_scene_ptr:86 80 16 18 cur_dungeon_ptr:92 112 48 15 context_opt:112";
  *(_QWORD *)(v1 + 16) = EffigyChallengeV2Gallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)(v1 + 48));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "onStart",
      89);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v54,
      (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v54);
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 80));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
        "onStart",
        95);
      v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v54,
             (const char (*)[47])"[GALLERY] dynamic cast to dungeon scene failed");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 32) = Scene::getSceneId(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    else
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      *(_DWORD *)(v1 + 32) = DungeonScene::getDungeonId(v5);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v53);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
      __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
               &v6->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
               *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v53);
      is_exist = std::get<0ul,bool,unsigned int>(&__in);
      level_id = std::get<1ul,bool,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_exist);
      }
      if ( !*is_exist )
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
          "onStart",
          102);
        v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v54, (const char (*)[12])"dungeon id ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])off_262745C0);
        common::milog::MiLogStream::~MiLogStream(&v54);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                             p_activity_effigy_challenge_v2_config_mgr,
                             *level_id);
        std::shared_ptr<Config>::~shared_ptr(&v53);
        if ( level_config_ptr )
        {
          v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
            (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v1 + 112),
            v12);
          if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v1 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
              "onStart",
              115);
            v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v54,
                    (const char (*)[13])off_26274660);
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v1 + 32));
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v14,
              (const char (*)[27])" does not have context opt");
            common::milog::MiLogStream::~MiLogStream(&v54);
          }
          else
          {
            v15 = (unsigned __int64)std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v1 + 112));
            if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v15 >> 3) + 0x7FFF8000) <= 3 )
              v15 = __asan_report_load4();
            v16 = *(_DWORD *)v15;
            v17 = *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000);
            if ( v17 != 0 && v17 <= 3 )
            {
              LOBYTE(v12) = v17 != 0;
              __asan_report_store4(&this->challenge_mode_difficulty_, v12, (_BYTE)this + 56);
            }
            this->challenge_mode_difficulty_ = v16;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v53);
            v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            challenge_mode_difficulty = this->challenge_mode_difficulty_;
            difficulty_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2DifficultyExcelConfig(
                                      v18,
                                      challenge_mode_difficulty);
            std::shared_ptr<Config>::~shared_ptr(&v53);
            if ( difficulty_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->skill_use_time_limit >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->skill_use_time_limit >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              skill_use_time_limit = difficulty_config_ptr->skill_use_time_limit;
              v24 = *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000);
              LOBYTE(challenge_mode_difficulty) = v24 != 0;
              v25 = v24 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v24;
              if ( v25 )
                __asan_report_store4(&this->t_remain_use_time_, challenge_mode_difficulty, v25);
              this->t_remain_use_time_ = skill_use_time_limit;
              t_remain_use_time = this->t_remain_use_time_;
              v27 = *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3) + 0x7FFF8000);
              LOBYTE(challenge_mode_difficulty) = v27 != 0;
              v28 = v27 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v27;
              if ( v28 )
                __asan_report_store4(&this->t_use_time_limit_, challenge_mode_difficulty, v28);
              this->t_use_time_limit_ = t_remain_use_time;
              v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
              PlayerUid = DungeonScene::getCreatePlayerUid(v29);
              v31 = *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000);
              if ( v31 != 0 && v31 <= 3 )
              {
                LOBYTE(challenge_mode_difficulty) = v31 != 0;
                __asan_report_store4(&this->effigy_challenge_v2_host_uid_, challenge_mode_difficulty, PlayerUid);
              }
              this->effigy_challenge_v2_host_uid_ = PlayerUid;
              if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->normal_dungeon_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_config_ptr->normal_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( level_config_ptr->normal_dungeon_id == *(_DWORD *)(v1 + 32) )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v53);
                v32 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
                GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
                v36 = GalleryId;
                NormalSkillNo = ActivityEffigyChallengeV2ExcelConfigMgr::getNormalSkillNo(v32, GalleryId);
                v35 = *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000);
                LOBYTE(v36) = v35 != 0;
                v37 = v35 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v35;
                if ( v37 )
                  __asan_report_store4(&this->effigy_challenge_v2_skill_no_, v36, v37);
                this->effigy_challenge_v2_skill_no_ = NormalSkillNo;
                std::shared_ptr<Config>::~shared_ptr(&v53);
              }
              else
              {
                v38 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v1 + 112));
                if ( *(_BYTE *)(((unsigned __int64)&v38->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)v38 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->challenge_mode_skill_no >> 3)
                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                challenge_mode_skill_no = v38->challenge_mode_skill_no;
                v40 = *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000);
                LOBYTE(challenge_mode_difficulty) = v40 != 0;
                v41 = v40 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v40;
                if ( v41 )
                  __asan_report_store4(&this->effigy_challenge_v2_skill_no_, challenge_mode_difficulty, v41);
                this->effigy_challenge_v2_skill_no_ = challenge_mode_skill_no;
              }
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v53);
              v42 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v43 = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2SkillExcelConfig(
                      v42,
                      this->effigy_challenge_v2_skill_no_) == 0LL;
              std::shared_ptr<Config>::~shared_ptr(&v53);
              if ( v43 )
              {
                common::milog::MiLogStream::create(
                  &v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
                  "onStart",
                  143);
                v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v54,
                        (const char (*)[13])off_26274660);
                v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v44,
                        (const unsigned int *)(v1 + 32));
                v46 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v45,
                        (const char (*)[10])" skil no ");
                v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v46,
                        &this->effigy_challenge_v2_skill_no_);
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v47, (const char (*)[12])off_262413A0);
                common::milog::MiLogStream::~MiLogStream(&v54);
              }
              else
              {
                EffigyChallengeV2Gallery::addTSkillTeamGlobalValue(this);
                EffigyChallengeV2Gallery::addHostAbilityGroup(this);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v54,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
                "onStart",
                123);
              v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      &v54,
                      (const char (*)[13])off_26274660);
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v1 + 32));
              v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      v21,
                      (const char (*)[35])" does not have difficulty config: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                &this->challenge_mode_difficulty_);
              common::milog::MiLogStream::~MiLogStream(&v54);
            }
          }
          std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v1 + 112));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
            "onStart",
            108);
          v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v54,
                  (const char (*)[30])"[EffigyChallengeV2] level id ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" does not exist");
          common::milog::MiLogStream::~MiLogStream(&v54);
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  if ( v55 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 00000000179DD2CE-00000000179DE458
void __fastcall EffigyChallengeV2Gallery::onStop(EffigyChallengeV2Gallery *const this, __int32 reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const DungeonScene *v16; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  char v20; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool v22; // r15
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  bool v26; // dl
  uint32_t t_use_time_limit; // ecx
  google::protobuf::uint32 v28; // edx
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog> *p_gallery_settle_info_vec; // r14
  proto_log::EffigyChallengeV2GallerySettleInfoLog *v30; // rax
  proto_log::EffigyChallengeV2GallerySettleInfoLog *v31; // rdx
  DungeonScene *v32; // r14
  EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *v33; // rax
  __int64 v34; // rcx
  Player *v35; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  DungeonScene *v38; // rax
  const std::string *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  unsigned int v43; // esi
  google::protobuf::uint32 v44; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  Player *v46; // r14
  Scene *v47; // r14
  std::string v48; // [rsp+0h] [rbp-280h]
  uint32_t now; // [rsp+28h] [rbp-258h]
  uint32_t challenge_mode_difficulty; // [rsp+2Ch] [rbp-254h]
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+30h] [rbp-250h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+38h] [rbp-248h] BYREF
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_exist; // [rsp+40h] [rbp-240h]
  std::tuple_element<1,std::pair<bool,unsigned int> >::type *level_id; // [rsp+48h] [rbp-238h]
  const data::EffigyChallengeV2ExcelConfig *level_config_ptr; // [rsp+50h] [rbp-230h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+58h] [rbp-228h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v57; // [rsp+60h] [rbp-220h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+68h] [rbp-218h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+70h] [rbp-210h]
  std::pair<bool,unsigned int> __in; // [rsp+78h] [rbp-208h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-200h] BYREF
  EffigyChallengeV2Gallery::onStop::<lambda(Player&)> v62; // [rsp+90h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v63; // [rsp+B0h] [rbp-1D0h] BYREF
  char v64[432]; // [rsp+D0h] [rbp-1B0h] BYREF

  *(&v48._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v48._anon_0._M_allocated_capacity) = reason;
  v2 = (unsigned __int64)v64;
  v48._M_string_length = (std::string::size_type)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 10 holder:219 48 4 13 play_time:157 64 4 18 cur_dungeon_id:175 80 4 10 reason:153 96 16 "
                        "19 cur_dungeon_ptr:169 128 16 14 player_ptr:216 160 16 11 log_ptr:220 192 16 13 event_ptr:235 22"
                        "4 40 27 new_gallery_settle_info:204 304 48 15 context_opt:190";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Gallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 80) = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now <= this->start_time_ )
    v5 = 0;
  else
    v5 = now - this->start_time_;
  *(_DWORD *)(v2 + 48) = v5;
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
    "onStop",
    159);
  v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v63,
         (const char (*)[30])"[GALLERY] onStop, play_time: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", stop reason: ");
  common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
    v8,
    (const proto::GalleryStopReason *)(v2 + 80));
  common::milog::MiLogStream::~MiLogStream(&v63);
  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 192), 0LL);
  EffigyChallengeV2Gallery::delHostAbilityGroup(this, (PlayerPtr *)(v2 + 192));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 96));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "onStop",
      172);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v63, (const char (*)[27])off_26274880);
    common::milog::MiLogStream::~MiLogStream(&v63);
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 64) = DungeonScene::getDungeonId(v9);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 192));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    __in = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
             &v10->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr,
             *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
    is_exist = std::get<0ul,bool,unsigned int>(&__in);
    level_id = std::get<1ul,bool,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_exist);
    }
    if ( !*is_exist )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
        "onStop",
        180);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v63, (const char (*)[12])"dungeon id ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v12, (const char (*)[40])off_262745C0);
      common::milog::MiLogStream::~MiLogStream(&v63);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 192));
      p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2ExcelConfig(
                           p_activity_effigy_challenge_v2_config_mgr,
                           *level_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
      if ( level_config_ptr )
      {
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        DungeonScene::getDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(
          (std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *)(v2 + 304),
          v16);
        if ( !std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::has_value((const std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
            "onStop",
            193);
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v63, (const char (*)[13])off_26274660);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v18,
            (const char (*)[27])" does not have context opt");
          common::milog::MiLogStream::~MiLogStream(&v63);
        }
        else
        {
          v19 = (unsigned __int64)std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) <= 3 )
            v19 = __asan_report_load4();
          challenge_mode_difficulty = *(_DWORD *)v19;
          v20 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_config_ptr->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v22 = 0;
          if ( level_config_ptr->challenge_dungeon_id == *(_DWORD *)(v2 + 64) )
          {
            v16 = (const DungeonScene *)ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 192));
            v20 = 1;
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( challenge_mode_difficulty == ActivityEffigyChallengeV2ExcelConfigMgr::getChallengeHighestDifficulty(&v21->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr) )
              v22 = 1;
          }
          if ( v20 )
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
          if ( v22 )
          {
            v23 = *(_DWORD *)(v2 + 48);
            v24 = (__int64)std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304));
            v25 = *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000);
            LOBYTE(v16) = v25 != 0;
            v26 = v25 != 0 && v25 <= 3;
            if ( v26 )
              v24 = __asan_report_store4(v24 + 8, v16, v26);
            *(_DWORD *)(v24 + 8) = v23;
          }
          if ( *(_DWORD *)(v2 + 80) == 3 )
          {
            proto_log::EffigyChallengeV2GallerySettleInfoLog::EffigyChallengeV2GallerySettleInfoLog((proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::EffigyChallengeV2GallerySettleInfoLog::set_gallery_id(
              (proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224),
              this->gallery_id_);
            proto_log::EffigyChallengeV2GallerySettleInfoLog::set_result(
              (proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224),
              *(_DWORD *)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            t_use_time_limit = this->t_use_time_limit_;
            if ( *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( t_use_time_limit <= this->t_remain_use_time_ )
              v28 = 0;
            else
              v28 = this->t_use_time_limit_ - this->t_remain_use_time_;
            proto_log::EffigyChallengeV2GallerySettleInfoLog::set_skill_used_cnt(
              (proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224),
              v28);
            proto_log::EffigyChallengeV2GallerySettleInfoLog::set_duration(
              (proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224),
              *(_DWORD *)(v2 + 48));
            p_gallery_settle_info_vec = &std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator->((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304))->gallery_settle_info_vec;
            v30 = std::move<proto_log::EffigyChallengeV2GallerySettleInfoLog &>((proto_log::EffigyChallengeV2GallerySettleInfoLog *)(v2 + 224));
            std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::emplace_back<proto_log::EffigyChallengeV2GallerySettleInfoLog>(
              p_gallery_settle_info_vec,
              v30,
              v31);
            proto_log::EffigyChallengeV2GallerySettleInfoLog::~EffigyChallengeV2GallerySettleInfoLog((proto_log::EffigyChallengeV2GallerySettleInfoLog *const)(v2 + 224));
          }
          v32 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v33 = std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::operator*((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304));
          DungeonScene::setDungeonExtraData<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>(v32, v33);
          __for_range = &this->player_info_map_;
          __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
          __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v57 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
            uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v57);
            _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v57);
            if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v34 = *(_QWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 24);
            if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Scene::findPlayer((const Scene *const)(v2 + 128), v34, *uid);
            if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
            {
              v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              BasicComp = Player::getBasicComp(v35);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v63, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xE8Au, v48);
              std::string::~string(&v63);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop>();
              v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              v39 = DungeonScene::getTransaction[abi:cxx11](v38);
              proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop::set_transaction_no(v37, v39);
              v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop::set_gallery_id(
                v40,
                *(_DWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 32));
              v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop::set_result(v41, *(_DWORD *)(v2 + 80));
              v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 308) >> 3) + 0x7FFF8000) != 0
                && (char)(((v48._anon_0._M_local_buf[8] + 52) & 7) + 3) >= *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 308) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v43 = *(_DWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 308);
              if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 316) >> 3) + 0x7FFF8000) != 0
                && (char)(((v48._anon_0._M_local_buf[8] + 60) & 7) + 3) >= *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 316) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( v43 <= *(_DWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 316) )
                v44 = 0;
              else
                v44 = *(_DWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 308)
                    - *(_DWORD *)(*(&v48._anon_0._M_allocated_capacity + 1) + 316);
              proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop::set_skill_used_cnt(v42, v44);
              v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop::set_duration(v45, *(_DWORD *)(v2 + 48));
              v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              std::shared_ptr<google::protobuf::Message>::shared_ptr(
                (std::shared_ptr<google::protobuf::Message> *const)(v2 + 192),
                0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop> *)(v2 + 160));
              Player::printStatLog(v46, &p_body_ptr, (MessagePtr *)(v2 + 192), 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 192));
              std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigyChallengeV2GalleryStop> *const)(v2 + 160));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
            std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
          }
        }
        std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext>::~optional((std::optional<EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext> *const)(v2 + 304));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
          "onStop",
          186);
        v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v63,
                (const char (*)[30])"[EffigyChallengeV2] level id ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, level_id);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" does not exist");
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  if ( *(_DWORD *)(v2 + 80) == 3 )
  {
    common::tools::perf::make_shared<GalleryEffigyChallengeV2SettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 192),
      (unsigned int *)(*(&v48._anon_0._M_allocated_capacity + 1) + 32));
    if ( *(_BYTE *)(((*(&v48._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v47 = *(Scene **)(*(&v48._anon_0._M_allocated_capacity + 1) + 24);
    std::shared_ptr<GalleryEffigyChallengeV2SettleEvent>::shared_ptr(
      &v62.__event_ptr,
      (const std::shared_ptr<GalleryEffigyChallengeV2SettleEvent> *)(v2 + 192));
    v62.__this = (EffigyChallengeV2Gallery *)*(&v48._anon_0._M_allocated_capacity + 1);
    std::function<ForeachPolicy ()(Player &)>::function<EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v63,
      &v62);
    Scene::foreachPlayer(v47, (std::function<ForeachPolicy(Player&)> *)&v63);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v63);
    EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(&v62);
    std::shared_ptr<GalleryEffigyChallengeV2SettleEvent>::~shared_ptr((std::shared_ptr<GalleryEffigyChallengeV2SettleEvent> *const)(v2 + 192));
  }
  if ( v48._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 236: range 00000000179DD1DA-00000000179DD2B1
ForeachPolicy __cdecl EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::operator()(
        const EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> v5; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
         &__closure->__this->player_info_map_,
         &value) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryEffigyChallengeV2SettleEvent,void>(&v5, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &v5);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v5);
  }
  return 0;
};

// Line 236: range 00000000179E90E0-00000000179E915F
void __cdecl EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *const this,
        EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *a2)
{
  EffigyChallengeV2Gallery *v2; // rdx

  std::shared_ptr<GalleryEffigyChallengeV2SettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 236: range 00000000179E922A-00000000179E92A9
void __cdecl EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::Player(
        EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *const this,
        const EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *a2)
{
  EffigyChallengeV2Gallery *v2; // rdx

  std::shared_ptr<GalleryEffigyChallengeV2SettleEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this, a2);
  this->__this = v2;
};

// Line 236: range 00000000179DD2B2-00000000179DD2CC
void __cdecl EffigyChallengeV2Gallery::onStop(proto::GalleryStopReason)::{lambda(Player &)#1}::~Player(
        EffigyChallengeV2Gallery::onStop::<lambda(Player&)> *const this)
{
  std::shared_ptr<GalleryEffigyChallengeV2SettleEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 249: range 00000000179DE45A-00000000179DE6C0
void __cdecl EffigyChallengeV2Gallery::onPlayerEnter(EffigyChallengeV2Gallery *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerMpComp *MpComp; // rdx
  common::milog::MiLogStream *v6; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::mapped_type *online_player_info; // [rsp+18h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:255";
  *(_QWORD *)(v2 + 16) = EffigyChallengeV2Gallery::onPlayerEnter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    *(_DWORD *)(v2 + 32) = Player::getUid(player);
    online_player_info = std::map<unsigned int,proto::OnlinePlayerInfo>::operator[](
                           &this->player_info_map_,
                           (const std::map<unsigned int,proto::OnlinePlayerInfo>::key_type *)(v2 + 32));
    MpComp = Player::getMpComp(player);
    PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
    std::set<unsigned int>::insert(&this->player_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->effigy_challenge_v2_host_uid_ == *(_DWORD *)(v2 + 32) )
    {
      EffigyChallengeV2Gallery::addTSkillTeamGlobalValue(this);
      EffigyChallengeV2Gallery::addHostAbilityGroup(this);
    }
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "onPlayerEnter",
      269);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v8,
           (const char (*)[42])"[EFFIGY_CHALLENGE_V2] player enter, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
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

// Line 273: range 00000000179DE6C2-00000000179DE83A
void __cdecl EffigyChallengeV2Gallery::onPlayerLeaveScene(EffigyChallengeV2Gallery *const this, Player *player)
{
  uint32_t effigy_challenge_v2_host_uid; // ebx
  bool v3; // dl
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::enable_shared_from_this<Player> v5; // [rsp+20h] [rbp-20h] BYREF

  BaseGallery::onPlayerLeaveScene((BaseGallery *const)this, player);
  if ( BaseGallery::isStart((BaseGallery *const)this) )
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
           &this->player_info_map_,
           &value) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      effigy_challenge_v2_host_uid = this->effigy_challenge_v2_host_uid_;
      if ( effigy_challenge_v2_host_uid == Player::getUid(player) )
      {
        std::enable_shared_from_this<Player>::shared_from_this(&v5);
        EffigyChallengeV2Gallery::delHostAbilityGroup(this, (PlayerPtr *)&v5);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v5);
        v3 = *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_remain_use_time_ >> 3)
                                                              + 0x7FFF8000);
        if ( v3 )
          __asan_report_store4(&this->t_remain_use_time_, (((_BYTE)this + 60) & 7u) + 3, v3);
        this->t_remain_use_time_ = 0;
        BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
      }
    }
  }
};

// Line 295: range 00000000179DE83C-00000000179DEF9E
void __cdecl EffigyChallengeV2Gallery::addHostAbilityGroup(EffigyChallengeV2Gallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *scene; // rcx
  common::milog::MiLogStream *v14; // r13
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r13
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Player *v19; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v21; // rax
  PlayerAbilityGroupComp *v22; // r13
  common::milog::MiLogStream *i; // r13
  Player *v24; // rax
  PlayerAbilityGroupComp *v25; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-F0h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-C1h] BYREF
  unsigned int val; // [rsp+30h] [rbp-C0h] BYREF
  unsigned int GalleryId; // [rsp+34h] [rbp-BCh] BYREF
  const data::EffigyChallengeV2SkillExcelConfig *skill_config_ptr; // [rsp+38h] [rbp-B8h]
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-90h] BYREF
  char v33[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 owner_player_ptr:307";
  *(_QWORD *)(v1 + 16) = EffigyChallengeV2Gallery::addHostAbilityGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &this->effigy_challenge_v2_host_uid_) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "addHostAbilityGroup",
      298);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v32, (const char (*)[14])"host player: ");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v4,
           &this->effigy_challenge_v2_host_uid_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" not in gallery");
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 32));
    p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    skill_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2SkillExcelConfig(
                         p_activity_effigy_challenge_v2_config_mgr,
                         this->effigy_challenge_v2_skill_no_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
    if ( skill_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, this->effigy_challenge_v2_host_uid_);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
          "addHostAbilityGroup",
          310);
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v32, (const char (*)[10])"scene_id ");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(this->scene_);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" gallery ");
        GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &GalleryId);
        v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v17,
                (const char (*)[20])" doesnot have host ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v18,
          &this->effigy_challenge_v2_host_uid_);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        AbilityGroupComp = Player::getAbilityGroupComp(v19);
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerAbilityGroupComp::markAbilityGroupSource(
          AbilityGroupComp,
          ABILITY_GROUP_SOURCE_GALLERY,
          this->gallery_id_);
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v22 = Player::getAbilityGroupComp(v21);
        std::string::basic_string(&v32, &skill_config_ptr->ability_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v32;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::addTeamAbilityGroup(v22, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v33; i != &v32; std::string::~string(i) )
          --i;
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v25 = Player::getAbilityGroupComp(v24);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v25);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
        "addHostAbilityGroup",
        304);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v32, (const char (*)[10])"scene_id ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" gallery ");
      GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &GalleryId);
      v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" skil no ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              &this->effigy_challenge_v2_skill_no_);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
  }
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 319: range 00000000179DEFA0-00000000179DF54C
void __cdecl EffigyChallengeV2Gallery::delHostAbilityGroup(
        EffigyChallengeV2Gallery *const this,
        PlayerPtr *p_owner_player_ptr)
{
  ActivityEffigyChallengeV2ExcelConfigMgr *p_activity_effigy_challenge_v2_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Scene *scene; // rcx
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v17; // rax
  PlayerAbilityGroupComp *v18; // r14
  common::milog::MiLogStream *i; // rbx
  Player *v20; // rax
  PlayerAbilityGroupComp *v21; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-81h] BYREF
  unsigned int val; // [rsp+20h] [rbp-80h] BYREF
  unsigned int GalleryId; // [rsp+24h] [rbp-7Ch] BYREF
  const data::EffigyChallengeV2SkillExcelConfig *skill_config_ptr; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Player> v26; // [rsp+30h] [rbp-70h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-60h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-40h] BYREF
  __int64 v29; // [rsp+80h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_activity_effigy_challenge_v2_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_skill_no_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  skill_config_ptr = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2SkillExcelConfig(
                       p_activity_effigy_challenge_v2_config_mgr,
                       this->effigy_challenge_v2_skill_no_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  if ( skill_config_ptr )
  {
    if ( !std::operator==<Player>(p_owner_player_ptr, 0LL) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)&v26, (__int64)scene, this->effigy_challenge_v2_host_uid_);
    std::shared_ptr<Player>::operator=(p_owner_player_ptr, &v26);
    std::shared_ptr<Player>::~shared_ptr(&v26);
    if ( std::operator==<Player>(p_owner_player_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
        "delHostAbilityGroup",
        331);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v28, (const char (*)[10])"scene_id ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" gallery ");
      GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &GalleryId);
      v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v13,
              (const char (*)[20])" doesnot have host ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->effigy_challenge_v2_host_uid_);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
LABEL_16:
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
      AbilityGroupComp = Player::getAbilityGroupComp(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerAbilityGroupComp::markAbilityGroupSource(AbilityGroupComp, ABILITY_GROUP_SOURCE_GALLERY, this->gallery_id_);
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
      v18 = Player::getAbilityGroupComp(v17);
      std::string::basic_string(&v28, &skill_config_ptr->ability_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v28), &__a);
      PlayerAbilityGroupComp::delTeamAbilityGroup(v18, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)&v29; i != &v28; std::string::~string(i) )
        --i;
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
      v21 = Player::getAbilityGroupComp(v20);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v21);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "delHostAbilityGroup",
      323);
    v3 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v28, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v4, (const char (*)[10])" gallery ");
    GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &GalleryId);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" skil no ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v7,
           &this->effigy_challenge_v2_skill_no_);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])off_262413A0);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
};

// Line 341: range 00000000179DF54E-00000000179DFA3C
void __cdecl EffigyChallengeV2Gallery::addTSkillTeamGlobalValue(EffigyChallengeV2Gallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Scene *scene; // rcx
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::string *v14; // rax
  float value; // [rsp+4h] [rbp-DCh]
  unsigned int val; // [rsp+18h] [rbp-C8h] BYREF
  unsigned int GalleryId; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 owner_player_ptr:342 64 16 26 avatar_team_entity_ptr:348";
  *(_QWORD *)(v1 + 16) = EffigyChallengeV2Gallery::addTSkillTeamGlobalValue;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  if ( *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effigy_challenge_v2_host_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, this->effigy_challenge_v2_host_uid_);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
      "addTSkillTeamGlobalValue",
      345);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
    GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &GalleryId);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" doesnot have host ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->effigy_challenge_v2_host_uid_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::getAvatarComp(v10);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 64));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/effigy_challenge_v2_gallery.cpp",
        "addTSkillTeamGlobalValue",
        351);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v19,
              (const char (*)[28])"getTeamEntity fail, player:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->effigy_challenge_v2_host_uid_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v12 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->t_use_time_limit_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      value = (float)(int)this->t_use_time_limit_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      v14 = ActivityEffigyChallengeV2ExcelConfigMgr::getTSkillGlobalValueKeyString[abi:cxx11](&v13->design_config.txt_config_mgr.activity_effigy_challenge_v2_config_mgr);
      Creature::setServerGlobalValue(v12, v14, value, 1);
      std::shared_ptr<Config>::~shared_ptr(&v18);
    }
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
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
};

// Line 355: range 00000000179ED360-00000000179ED374
void __cdecl GLOBAL__sub_I_merge_merge_arena_challenge_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 355: range 00000000179EC600-00000000179ED35F
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  __int64 misc_category; // rax
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  const std::type_info *M_target; // rsi
  const boost::system::error_category *ssl_category; // rax
  const boost::system::error_category *stream_category; // rax
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  char v17; // dl
  __int64 v18; // rdx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  char v21; // dl
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  char v25; // dl
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  char v29; // dl
  __int64 v30; // rdx
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  char v33; // dl
  __int64 v34; // rdx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  char v37; // dl
  __int64 v38; // rdx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  char v41; // dl
  __int64 v42; // rdx
  const char *v43; // rcx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  char v46; // dl
  __int64 v47; // rdx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  char v50; // dl
  __int64 v51; // rdx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  char v54; // dl
  __int64 v55; // rdx
  const char *v56; // rcx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  char v59; // dl
  __int64 v60; // rdx
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  char v63; // dl
  __int64 v64; // rdx
  _BYTE *v65; // rcx
  _BYTE *v66; // rcx
  char v67; // dl
  __int64 v68; // rdx
  _BYTE *v69; // rcx
  _BYTE *v70; // rcx
  char v71; // dl
  __int64 v72; // rdx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_arena_challenge_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   &std::__ioinit);
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  &std::__ioinit);
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     &std::__ioinit);
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = (__int64)boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)boost::asio::error::misc_category;
        misc_category = __asan_report_store8(boost::asio::error::misc_category, &std::__ioinit);
      }
      boost::asio::error::misc_category[0] = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      std::type_index::type_index(
        &WidgetAbilityGroupGenerator::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyAbilityGroupGenerator);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetAbilityGroupGenerator::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &AbilityGroupGenerator_register,
        WidgetAbilityGroupGenerator::widget_type);
      std::type_index::type_index(
        &WidgetActivityGacha::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetActivityGacha);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetActivityGacha::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ActivityGacha_register,
        WidgetActivityGacha::widget_type);
      std::type_index::type_index(
        &WidgetAranaraController::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetAranaraController);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetAranaraController::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &AranaraController_register,
        WidgetAranaraController::widget_type);
      std::type_index::type_index(
        &WidgetAttachAbilityGroup::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetUseAttachAbilityGroup);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetAttachAbilityGroup::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      M_target = WidgetAttachAbilityGroup::widget_type._M_target;
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &AttachAbilityGroup_register,
        WidgetAttachAbilityGroup::widget_type);
      ssl_category = boost::asio::error::get_ssl_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::ssl_category >> 3) + 0x7FFF8000) )
        ssl_category = (const boost::system::error_category *)__asan_report_store8(
                                                                &boost::asio::error::ssl_category,
                                                                M_target);
      boost::asio::error::ssl_category = ssl_category;
      stream_category = boost::asio::ssl::error::get_stream_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::stream_category >> 3) + 0x7FFF8000) )
        stream_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::ssl::error::stream_category,
                                                                   M_target);
      boost::asio::ssl::error::stream_category = stream_category;
      v15 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v17 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v17 != 0;
        v18 = (v17 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v17);
        if ( (_BYTE)v18 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            M_target,
            v18);
        *v16 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        M_target = (const std::type_info *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v19 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v19 )
      {
        v20 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        v21 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v21 != 0;
        v22 = (v21 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= v21);
        if ( (_BYTE)v22 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
            M_target,
            v22);
        *v20 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        M_target = (const std::type_info *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v23 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v23 )
      {
        v24 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        v25 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v25 != 0;
        v26 = (v25 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= v25);
        if ( (_BYTE)v26 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            M_target,
            v26);
        *v24 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        M_target = (const std::type_info *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v27 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v27 )
      {
        v28 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        v29 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v29 != 0;
        v30 = (v29 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= v29);
        if ( (_BYTE)v30 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            M_target,
            v30);
        *v28 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        M_target = (const std::type_info *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v31 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
      }
      if ( !*v31 )
      {
        v32 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
        v33 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v33 != 0;
        v34 = (v33 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= v33);
        if ( (_BYTE)v34 )
          __asan_report_store1(
            &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_,
            M_target,
            v34);
        *v32 = 1;
        boost::asio::ssl::detail::openssl_init<true>::openssl_init(&boost::asio::ssl::detail::openssl_init<true>::instance_);
        M_target = (const std::type_info *)&boost::asio::ssl::detail::openssl_init<true>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
          &boost::asio::ssl::detail::openssl_init<true>::instance_,
          &_dso_handle);
      }
      v35 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v35 )
      {
        v36 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v37 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v37 != 0;
        v38 = (v37 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v37);
        if ( (_BYTE)v38 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            M_target,
            v38);
        *v36 = 1;
        M_target = (const std::type_info *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v39 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v39 )
      {
        v40 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v41 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v41 != 0;
        v42 = (v41 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v41);
        if ( (_BYTE)v42 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            M_target,
            v42);
        *v40 = 1;
        v43 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, M_target);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v43;
      }
      v44 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v44 )
      {
        v45 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v46 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v46 != 0;
        v47 = (v46 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v46);
        if ( (_BYTE)v47 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            M_target,
            v47);
        *v45 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v48 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v48 )
      {
        v49 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v50 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v50 != 0;
        v51 = (v50 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v50);
        if ( (_BYTE)v51 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            M_target,
            v51);
        *v49 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v52 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v52 )
      {
        v53 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v54 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v54 != 0;
        v55 = (v54 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v54);
        if ( (_BYTE)v55 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            M_target,
            v55);
        *v53 = 1;
        v56 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, M_target);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v56;
      }
      v57 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v57 )
      {
        v58 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        v59 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v59 != 0;
        v60 = (v59 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= v59);
        if ( (_BYTE)v60 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
            M_target,
            v60);
        *v58 = 1;
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v61 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v61 )
      {
        v62 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        v63 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v63 != 0;
        v64 = (v63 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= v63);
        if ( (_BYTE)v64 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
            M_target,
            v64);
        *v62 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v65 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
      }
      if ( !*v65 )
      {
        v66 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        v67 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v67 != 0;
        v68 = (v67 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= v67);
        if ( (_BYTE)v68 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
            M_target,
            v68);
        *v66 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
          &_dso_handle);
      }
      v69 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v69 )
      {
        v70 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        v71 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v71 != 0;
        v72 = (v71 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v71);
        if ( (_BYTE)v72 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
            M_target,
            v72);
        *v70 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};
