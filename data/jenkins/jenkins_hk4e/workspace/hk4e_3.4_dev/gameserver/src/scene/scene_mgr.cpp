// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_mgr.cpp

// Line 25: range 0000000015CE061A-0000000015CE0EFE
std::shared_ptr<Scene> *__fastcall SceneMgr::createScene(
        std::shared_ptr<Scene> *scene_id,
        PlayerPtr *p_player_ptr,
        const std::shared_ptr<Player> *p_home_ptr,
        const std::shared_ptr<Home> *home_module_id,
        uint32_t a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // r14
  Scene *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  Scene *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+28h] [rbp-118h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<PersistentDungeonScene> v24; // [rsp+40h] [rbp-100h] BYREF
  std::shared_ptr<DungeonScene> v25; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<PlayerRoomScene> v26; // [rsp+60h] [rbp-E0h] BYREF
  std::shared_ptr<HomeWorldScene> v27; // [rsp+70h] [rbp-D0h] BYREF
  std::shared_ptr<Player> v28; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+B0h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 11 scene_id:24 64 16 12 scene_ptr:32";
  *(_QWORD *)(v5 + 16) = SceneMgr::createScene;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = (_DWORD)p_player_ptr;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                       &v8->design_config.txt_config_mgr.scene_config_mgr,
                       *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
  if ( scene_config_ptr )
  {
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    switch ( scene_config_ptr->type )
    {
      case SCENE_WORLD:
        common::tools::perf::make_shared<PlayerWorldScene,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v5 + 48));
        std::shared_ptr<Scene>::operator=<PlayerWorldScene>((std::shared_ptr<Scene> *const)(v5 + 64), &__r);
        std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
        goto LABEL_19;
      case SCENE_DUNGEON:
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&scene_config_ptr->subtype >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( scene_config_ptr->subtype == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
        {
          common::tools::perf::make_shared<PersistentDungeonScene,unsigned int &>(
            (unsigned int *)&v24,
            (unsigned int *)(v5 + 48));
          std::shared_ptr<Scene>::operator=<PersistentDungeonScene>((std::shared_ptr<Scene> *const)(v5 + 64), &v24);
          std::shared_ptr<PersistentDungeonScene>::~shared_ptr(&v24);
        }
        else
        {
          common::tools::perf::make_shared<DungeonScene,unsigned int &>((unsigned int *)&v25, (unsigned int *)(v5 + 48));
          std::shared_ptr<Scene>::operator=<DungeonScene>((std::shared_ptr<Scene> *const)(v5 + 64), &v25);
          std::shared_ptr<DungeonScene>::~shared_ptr(&v25);
        }
        goto LABEL_19;
      case SCENE_ROOM:
        common::tools::perf::make_shared<PlayerRoomScene,unsigned int &>(
          (unsigned int *)&v26,
          (unsigned int *)(v5 + 48));
        std::shared_ptr<Scene>::operator=<PlayerRoomScene>((std::shared_ptr<Scene> *const)(v5 + 64), &v26);
        std::shared_ptr<PlayerRoomScene>::~shared_ptr(&v26);
        goto LABEL_19;
      case SCENE_HOME_WORLD:
        common::tools::perf::make_shared<HomeWorldScene,unsigned int &>((unsigned int *)&v27, (unsigned int *)(v5 + 48));
        std::shared_ptr<Scene>::operator=<HomeWorldScene>((std::shared_ptr<Scene> *const)(v5 + 64), &v27);
        std::shared_ptr<HomeWorldScene>::~shared_ptr(&v27);
        goto LABEL_19;
      case SCENE_HOME_ROOM:
        common::tools::perf::make_shared<HomeRoomScene,unsigned int &>((unsigned int *)&v28, (unsigned int *)(v5 + 48));
        std::shared_ptr<Scene>::operator=<HomeRoomScene>(
          (std::shared_ptr<Scene> *const)(v5 + 64),
          (std::shared_ptr<HomeRoomScene> *)&v28);
        std::shared_ptr<HomeRoomScene>::~shared_ptr((std::shared_ptr<HomeRoomScene> *const)&v28);
LABEL_19:
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_mgr.cpp",
            "createScene",
            75);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v29, (const char (*)[18])"scene_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v29);
          std::shared_ptr<Scene>::shared_ptr(scene_id, 0LL);
        }
        else
        {
          if ( std::operator!=<Player>(p_home_ptr, 0LL) )
          {
            v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            std::shared_ptr<Player>::shared_ptr(&v28, p_home_ptr);
            Scene::setOwnPlayer(v11, &v28);
            std::shared_ptr<Player>::~shared_ptr(&v28);
          }
          if ( std::operator!=<Home>(home_module_id, 0LL) )
          {
            v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)&v28, home_module_id);
            Scene::setOwnHome(v12, (HomePtr *)&v28, a5);
            std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v28);
          }
          v13 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          v14 = *(_QWORD *)v13 + 24LL;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v13 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v14)(v13) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_mgr.cpp",
              "createScene",
              89);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v29,
              (const char (*)[25])"constructTimerMgr failed");
            common::milog::MiLogStream::~MiLogStream(&v29);
            std::shared_ptr<Scene>::shared_ptr(scene_id, 0LL);
          }
          else
          {
            v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
            if ( Scene::constructTimerMgr(v15) )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_mgr.cpp",
                "createScene",
                95);
              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v29,
                (const char (*)[25])"constructTimerMgr failed");
              common::milog::MiLogStream::~MiLogStream(&v29);
              std::shared_ptr<Scene>::shared_ptr(scene_id, 0LL);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/scene_mgr.cpp",
                "createScene",
                99);
              v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v29,
                      (const char (*)[34])"[SCENE] create scene succ. scene:");
              v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v16, v17);
              common::milog::MiLogStream::~MiLogStream(&v29);
              std::shared_ptr<Scene>::shared_ptr(scene_id, (std::shared_ptr<Scene> *)(v5 + 64));
            }
          }
        }
        break;
      default:
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_mgr.cpp",
          "createScene",
          69);
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v29,
                (const char (*)[20])"invalid scene type:");
        common::milog::MiLogStream::operator<<<data::SceneType,(data::SceneType*)0>(v10, &scene_config_ptr->type);
        common::milog::MiLogStream::~MiLogStream(&v29);
        std::shared_ptr<Scene>::shared_ptr(scene_id, 0LL);
        break;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_mgr.cpp",
      "createScene",
      29);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v29,
           (const char (*)[38])"findSceneExcelConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::shared_ptr<Scene>::shared_ptr(scene_id, 0LL);
  }
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return scene_id;
};
