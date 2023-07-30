// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/mist_trial_gallery.cpp

// Line 24: range 00000000168873CA-0000000016887F37
void __cdecl MistTrialGallery::onStart(MistTrialGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  MistTrialGallery *v4; // rdx
  unsigned __int64 v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v8; // rax
  __int64 v9; // rsi
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t GalleryStartTime; // ecx
  char v12; // dl
  bool v13; // dl
  DungeonScene *v14; // rax
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t DungeonId; // r15d
  std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Player *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *v33; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+10h] [rbp-190h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-18Ch] BYREF
  const std::shared_ptr<DungeonScene> *dungeon_scene_ptr; // [rsp+18h] [rbp-188h]
  MistTrialDungeonContext *context; // [rsp+20h] [rbp-180h]
  const data::ActivityMistTrialLevelDataExcelConfig *activity_mist_trial_config_ptr; // [rsp+28h] [rbp-178h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-170h] BYREF
  std::shared_ptr<Config> v41; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-150h] BYREF
  char v43[304]; // [rsp+70h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 11 level_id:62 64 8 25 mist_trial_context_opt:53 96 16 19 owner_player_ptr:25 128 16 16 c"
                        "ur_scene_ptr:32 160 16 26 mist_trial_activity_ptr:46 192 16 11 team_ptr:75 224 16 12 event_ptr:85";
  *(_QWORD *)(v1 + 16) = MistTrialGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862727] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, MistTrialGallery *))v5)(v1 + 96, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/mist_trial_gallery.cpp",
      "onStart",
      28);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v42,
      (const char (*)[49])"[MIST_TRIAL_GALLERY] owner_player_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toPtr<Scene,Scene>((Scene *)(v1 + 128));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/mist_trial_gallery.cpp",
        "onStart",
        35);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v42,
        (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    else
    {
      std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
      dungeon_scene_ptr = (const std::shared_ptr<DungeonScene> *)&__r;
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)&__r, 0LL)
        || (v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
            Scene::getSceneType((const Scene *const)v6) != SCENE_DUNGEON) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/mist_trial_gallery.cpp",
          "onStart",
          42);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v42,
          (const char (*)[39])"[GALLERY] cur_scene_ptr is not dungeon");
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
      else
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        Player::getActivityComp(v8);
        PlayerActivityComp::findOpenningActivity<MistTrialActivity>((PlayerActivityComp *const)(v1 + 160));
        v9 = 0LL;
        if ( std::operator==<MistTrialActivity>((const std::shared_ptr<MistTrialActivity> *)(v1 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/mist_trial_gallery.cpp",
            "onStart",
            49);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v42, (const char (*)[18])"activity not open");
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        else
        {
          v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
          *(std::optional<MistTrialDungeonContext> *)(v1 + 64) = DungeonScene::getDungeonExtraData<MistTrialDungeonContext>(v10);
          if ( std::optional<MistTrialDungeonContext>::has_value((const std::optional<MistTrialDungeonContext> *const)(v1 + 64)) )
          {
            context = std::optional<MistTrialDungeonContext>::value((std::optional<MistTrialDungeonContext> *const)(v1 + 64));
            GalleryStartTime = BaseGallery::getGalleryStartTime(this);
            v12 = *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000);
            LOBYTE(v9) = v12 != 0;
            v13 = v12 != 0 && (char)(((unsigned __int8)context & 7) + 3) >= v12;
            if ( v13 )
              __asan_report_store4(context, v9, v13);
            context->gallery_start_time = GalleryStartTime;
            v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
            DungeonScene::setDungeonExtraData<MistTrialDungeonContext>(v14, context);
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v41);
          p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
          v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
          DungeonId = DungeonScene::getDungeonId(v16);
          v18 = std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          ScheduleId = BaseActivity::getScheduleId(v18);
          *(_DWORD *)(v1 + 48) = ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId(
                                   p_activity_mist_trial_config_mgr,
                                   ScheduleId,
                                   DungeonId);
          std::shared_ptr<Config>::~shared_ptr(&v41);
          if ( *(_DWORD *)(v1 + 48) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v41);
            v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
            activity_mist_trial_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                                               &v25->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                                               *(_DWORD *)(v1 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v41);
            if ( activity_mist_trial_config_ptr )
            {
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Player::getAvatarComp(v27);
              PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 192));
              if ( std::operator==<AvatarTeamEntity>((const std::shared_ptr<AvatarTeamEntity> *)(v1 + 192), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/mist_trial_gallery.cpp",
                  "onStart",
                  78);
                v28 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v42,
                        (const char (*)[37])"getTeamEntity team_ptr is null, uid:");
                v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                Uid = Player::getUid(v29);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &Uid);
                common::milog::MiLogStream::~MiLogStream(&v42);
              }
              else
              {
                v30 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
                Creature::setServerGlobalValue(v30, &activity_mist_trial_config_ptr->server_global_value_key, 1.0, 1);
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_gallery/mist_trial_gallery.cpp",
                  "onStart",
                  84);
                v31 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        &v42,
                        (const char (*)[48])"[GALLERY] mist_trial_test, make start evt, uid:");
                v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                Uid = Player::getUid(v32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &Uid);
                common::milog::MiLogStream::~MiLogStream(&v42);
                common::tools::perf::make_shared<GalleryMistTrialStartEvent,unsigned int &>(
                  (unsigned int *)(v1 + 224),
                  &this->gallery_id_);
                v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                EventComp = Player::getEventComp(v33);
                std::shared_ptr<BaseEvent>::shared_ptr<GalleryMistTrialStartEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)&v41,
                  (const std::shared_ptr<GalleryMistTrialStartEvent> *)(v1 + 224));
                PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v41);
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v41);
                std::shared_ptr<GalleryMistTrialStartEvent>::~shared_ptr((std::shared_ptr<GalleryMistTrialStartEvent> *const)(v1 + 224));
              }
              std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 192));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/mist_trial_gallery.cpp",
                "onStart",
                71);
              v26 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      &v42,
                      (const char (*)[59])"findActivityMistTrialLevelDataExcelConfig fails, level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/mist_trial_gallery.cpp",
              "onStart",
              65);
            v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v42,
                    (const char (*)[53])"[MISTTRIAL] activity_config not found, schedule_id: ");
            v21 = std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            val = BaseActivity::getScheduleId(v21);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v22,
                    (const char (*)[14])", dungeon_id:");
            v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
            Uid = DungeonScene::getDungeonId(v24);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &Uid);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
        }
        std::shared_ptr<MistTrialActivity>::~shared_ptr((std::shared_ptr<MistTrialActivity> *const)(v1 + 160));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  if ( v43 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 90: range 0000000016887F38-0000000016888643
void __cdecl MistTrialGallery::onStop(MistTrialGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  DungeonScene *v7; // rax
  Scene *v8; // rax
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v18; // [rsp+0h] [rbp-140h]
  unsigned int *v19; // [rsp+10h] [rbp-130h]
  bool *v20; // [rsp+18h] [rbp-128h] BYREF
  unsigned int val; // [rsp+20h] [rbp-120h] BYREF
  uint32_t now; // [rsp+24h] [rbp-11Ch]
  const std::shared_ptr<DungeonScene> *dungeon_scene_ptr; // [rsp+28h] [rbp-118h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  HIDWORD(v18) = reason;
  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 duration:118 64 16 16 cur_scene_ptr:91 96 16 20 owner_player_ptr:105 128 16 13 event_ptr:121";
  *(_QWORD *)(v2 + 16) = MistTrialGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Scene,Scene>((Scene *)(v2 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/mist_trial_gallery.cpp",
      "onStop",
      94);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v26,
      (const char (*)[32])"[GALLERY] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
    dungeon_scene_ptr = (const std::shared_ptr<DungeonScene> *)&__r;
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)&__r, 0LL)
      || (v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
          Scene::getSceneType((const Scene *const)v5) != SCENE_DUNGEON) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/mist_trial_gallery.cpp",
        "onStop",
        101);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v26,
        (const char (*)[39])"[GALLERY] cur_scene_ptr is not dungeon");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/mist_trial_gallery.cpp",
          "onStop",
          108);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v26,
          (const char (*)[35])"[GALLERY] owner_player_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
        if ( !DungeonScene::isEnterByMistTrialActivity(v7) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/mist_trial_gallery.cpp",
            "onStop",
            113);
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v26,
            (const char (*)[54])"[GALLERY] cur dungeon not mist_trial activity dungeon");
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        else
        {
          v8 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
          now = Scene::getSceneTimeSeconds(v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( now <= this->start_time_ )
            v9 = 0;
          else
            v9 = now - this->start_time_;
          *(_DWORD *)(v2 + 48) = v9;
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/mist_trial_gallery.cpp",
            "onStop",
            119);
          v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v26,
                  (const char (*)[49])"[GALLERY] mist_trial_test, make settle evt, uid:");
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          val = Player::getUid(v11);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v12,
                  (const char (*)[22])", gallery_duration = ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
          BYTE3(v20) = reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS;
          v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
          val = Scene::getSceneId((const Scene *const)v14);
          v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
          HIDWORD(v20) = DungeonScene::getDungeonId(v15);
          common::tools::perf::make_shared<GalleryMistTrialSettleEvent,unsigned int &,unsigned int,unsigned int,unsigned int &,bool>(
            (unsigned int *)(v2 + 128),
            &this->gallery_id_,
            (unsigned int *)&v20 + 1,
            &val,
            (bool *)(v2 + 48),
            (unsigned int *)((char *)&v20 + 3),
            v18,
            (unsigned int *)this,
            v19,
            v20);
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          EventComp = Player::getEventComp(v16);
          std::shared_ptr<BaseEvent>::shared_ptr<GalleryMistTrialSettleEvent,void>(
            &p_event_ptr,
            (const std::shared_ptr<GalleryMistTrialSettleEvent> *)(v2 + 128));
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          std::shared_ptr<GalleryMistTrialSettleEvent>::~shared_ptr((std::shared_ptr<GalleryMistTrialSettleEvent> *const)(v2 + 128));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v27 == (char *)v2 )
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
};
