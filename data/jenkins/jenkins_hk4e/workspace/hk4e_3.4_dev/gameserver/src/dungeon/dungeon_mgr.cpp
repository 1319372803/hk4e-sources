// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_mgr.cpp

// Line 23: range 000000001556A7FA-000000001556A918
void __cdecl DungeonMgr::DungeonMgr(DungeonMgr *const this, DungeonMgr *a2)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::unordered_map(&this->dungeon_scene_map_);
  std::unordered_map<unsigned int,PlayerDungeonInfo>::unordered_map(&this->player_dungeon_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_entity_index_);
  }
  this->next_entity_index_ = 0;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/dungeon/dungeon_mgr.cpp",
    "DungeonMgr",
    25);
  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(&v2, (const char (*)[58])off_25805BC0);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 30: range 000000001556A91A-000000001556AB4D
int32_t __cdecl DungeonMgr::init(DungeonMgr *const this)
{
  DungeonMgr **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  DungeonMgr *v6; // [rsp+18h] [rbp-78h] BYREF
  void (*__f[2])(DungeonMgr *, unsigned __int64); // [rsp+20h] [rbp-70h] BYREF
  std::_Bind<void (DungeonMgr::*(DungeonMgr*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v9; // [rsp+60h] [rbp-30h] BYREF

  v6 = this;
  __f[0] = (void (*)(DungeonMgr *, unsigned __int64))DungeonMgr::onTimer;
  __f[1] = 0LL;
  std::bind<void (DungeonMgr::*)(unsigned long),DungeonMgr*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (DungeonMgr::*)(long unsigned int),DungeonMgr*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    __f,
    &v6,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (DungeonMgr::*)(unsigned long) ()(DungeonMgr*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (DungeonMgr::*(DungeonMgr*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_mgr.cpp",
      "init",
      34);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v9,
      (const char (*)[29])"make_shared UnixTimer failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 16LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 16LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v5)(
           v4,
           5LL,
           1LL,
           "./src/dungeon/dungeon_mgr.cpp",
           "init",
           38LL,
           0LL,
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_mgr.cpp",
        "init",
        40);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v9,
        (const char (*)[30])"DungeonMgr timer start failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 49: range 000000001556AB4E-000000001556ABA9
void __cdecl DungeonMgr::destroy(DungeonMgr *const this)
{
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax

  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::clear(&this->dungeon_scene_map_);
  std::unordered_map<unsigned int,PlayerDungeonInfo>::clear(&this->player_dungeon_map_);
  if ( std::operator!=<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v1);
  }
};

// Line 60: range 000000001556ABAA-000000001556BD4B
DungeonMgr *__fastcall DungeonMgr::createDungeon(
        DungeonMgr *const this,
        DungeonMgr *dungeon_id,
        PlayerPtr *p_player_ptr,
        const std::shared_ptr<Player> *a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  uint32_t SceneComp; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t InstId; // eax
  common::milog::MiLogStream *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  Player *v41; // rax
  PlayerSceneComp *v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  common::milog::MiLogStream *v52; // rax
  DungeonScene *v53; // rax
  DungeonScene *v54; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t Level; // eax
  DungeonScene *v57; // r14
  Player *v58; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t v60; // eax
  DungeonScene *v61; // r14
  std::shared_ptr<DungeonScene> *v62; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false>,bool> v63; // rax
  common::milog::MiLogStream *v64; // rax
  Player *v65; // rax
  PlayerDungeonComp *DungeonComp; // r14
  Player *v67; // rax
  PlayerSceneComp *v68; // r14
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  int v82; // [rsp+Ch] [rbp-174h]
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  const TxtConfigMgr *txt_config_mgr; // [rsp+28h] [rbp-158h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+30h] [rbp-150h]
  const proto::SceneBin *dungeon_scene_bin_ptr; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Player> v87; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v88; // [rsp+50h] [rbp-130h] BYREF
  char v89[272]; // [rsp+70h] [rbp-110h] BYREF

  v82 = (int)p_player_ptr;
  v4 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 19 dungeon_scene_id:82 48 4 14 init_param:124 64 4 11 inst_id:131 80 4 13 dungeon_id:59 9"
                        "6 16 12 world_ptr:73 128 16 33 created_persistent_dungeon_ptr:88 160 16 13 scene_ptr:108 192 16 "
                        "21 dungeon_scene_ptr:109";
  *(_QWORD *)(v4 + 16) = DungeonMgr::createDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -202178560;
  *(_DWORD *)(v4 + 80) = v82;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v87);
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v87)->design_config.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v87);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &txt_config_mgr->dungeon_config_mgr,
                         *(_DWORD *)(v4 + 80));
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_mgr.cpp",
      "createDungeon",
      65);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v88,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v88);
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
    goto LABEL_57;
  }
  if ( std::operator==<Player>(a4, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_mgr.cpp",
      "createDungeon",
      70);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v88, (const char (*)[20])"player_ptr is null!");
    common::milog::MiLogStream::~MiLogStream(&v88);
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
    goto LABEL_57;
  }
  v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
  Player::getSceneComp(v8);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 96));
  if ( !std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 96), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->scene_id);
    }
    *(_DWORD *)(v4 + 32) = dungeon_config_ptr->scene_id;
    if ( SceneExcelConfigMgr::isSceneAbandonBlockbin(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v4 + 32))
      || SceneExcelConfigMgr::isSceneAbandonScenebin(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_mgr.cpp",
        "createDungeon",
        85);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v88,
              (const char (*)[37])"blockbin abandoned.dungeon_scene_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])", uid: ");
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
      val = Player::getUid(v15);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v88);
      std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
      goto LABEL_56;
    }
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
    SceneComp = (unsigned int)Player::getSceneComp(v16);
    PlayerSceneComp::getCreatedPersistentDungeonScenePtr((const PlayerSceneComp *const)(v4 + 128), SceneComp);
    if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 128)) )
    {
      v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( DungeonScene::getDungeonId(v18) != *(_DWORD *)(v4 + 80) )
      {
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/dungeon_mgr.cpp",
          "createDungeon",
          93);
        v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v88,
                (const char (*)[45])"persistent dungeon_id not match, dungeon_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 80));
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v20,
                (const char (*)[19])", inst_dungeon_id:");
        v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        *(_DWORD *)(v4 + 64) = DungeonScene::getDungeonId(v22);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 64));
        v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])", scene_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v4 + 32));
        v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])", uid: ");
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
        val = Player::getUid(v27);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        common::milog::MiLogStream::~MiLogStream(&v88);
        std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
LABEL_55:
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 128));
        goto LABEL_56;
      }
      v28 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( Scene::getPlayerCount((const Scene *const)v28) )
      {
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_mgr.cpp",
          "createDungeon",
          101);
        v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v88,
                (const char (*)[51])"connot destroy persistent dungeon_id , dungeon_id:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v4 + 80));
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v30,
                (const char (*)[16])", player_count:");
        v32 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        *(_DWORD *)(v4 + 64) = Scene::getPlayerCount((const Scene *const)v32);
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 64));
        v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])", uid: ");
        v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
        val = Player::getUid(v35);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
        common::milog::MiLogStream::~MiLogStream(&v88);
        std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
        goto LABEL_55;
      }
      v36 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      InstId = DungeonScene::getInstId(v36);
      DungeonMgr::destroyDungeon(dungeon_id, InstId);
    }
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)&v87, 0LL);
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 192), a4);
    SceneMgr::createScene(v4 + 160, (PlayerPtr *)*(unsigned int *)(v4 + 32), (HomePtr *)(v4 + 192), (uint32_t)&v87);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 192));
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v87);
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 192));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_mgr.cpp",
        "createDungeon",
        112);
      v38 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v88,
              (const char (*)[39])"dungeon_scene_ptr is null, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v88);
      std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
    }
    else
    {
      v39 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8(v39);
      v40 = *(_QWORD *)v39 + 504LL;
      if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        v39 = __asan_report_load8(*(_QWORD *)v39 + 504LL);
      if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))v40)(v39) )
        goto LABEL_41;
      v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
      v42 = Player::getSceneComp(v41);
      dungeon_scene_bin_ptr = PlayerSceneComp::findPersistentDungeonSceneBin(v42, *(_DWORD *)(v4 + 32));
      if ( !dungeon_scene_bin_ptr )
        goto LABEL_38;
      v43 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
        v43 = __asan_report_load8(v43);
      v44 = *(_QWORD *)v43 + 8LL;
      if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        v43 = __asan_report_load8(*(_QWORD *)v43 + 8LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, const proto::SceneBin *))v44)(v43, dungeon_scene_bin_ptr) )
        v45 = 1;
      else
LABEL_38:
        v45 = 0;
      if ( v45 )
      {
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/dungeon_mgr.cpp",
          "createDungeon",
          120);
        v46 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v88,
                (const char (*)[40])"dungeon_scene frombin fail, dungeon_id:");
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                (const unsigned int *)(v4 + 80));
        v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])", uid: ");
        v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
        val = Player::getUid(v49);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
        common::milog::MiLogStream::~MiLogStream(&v88);
        std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
      }
      else
      {
LABEL_41:
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 80);
        v50 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
          v50 = __asan_report_load8(v50);
        v51 = *(_QWORD *)v50 + 32LL;
        if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
          v50 = __asan_report_load8(*(_QWORD *)v50 + 32LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v51)(v50, v4 + 48) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/dungeon_mgr.cpp",
            "createDungeon",
            128);
          v52 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v88,
                  (const char (*)[24])"init fails, dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v88);
          std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
        }
        else
        {
          *(_DWORD *)(v4 + 64) = DungeonMgr::genNewDungeonInstId(dungeon_id);
          v53 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          DungeonScene::setInstId(v53, *(_DWORD *)(v4 + 64));
          v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v55 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          Level = PlayerWorld::getLevel(v55);
          DungeonScene::setCreatedWorldLevel(v54, Level);
          v57 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v58 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
          BasicComp = Player::getBasicComp(v58);
          v60 = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
          DungeonScene::setCreatedWorldLevelLimit(v57, v60);
          v61 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          std::shared_ptr<Player>::shared_ptr(&v87, a4);
          DungeonScene::setCreatePlayer(v61, &v87);
          std::shared_ptr<Player>::~shared_ptr(&v87);
          v63 = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::emplace<unsigned int &,std::shared_ptr<DungeonScene>&>(
                  &dungeon_id->dungeon_scene_map_,
                  (unsigned int *)(v4 + 64),
                  (std::shared_ptr<DungeonScene> *)(v4 + 192),
                  (unsigned int *)(v4 + 64),
                  v62);
          if ( !v63.second )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/dungeon_mgr.cpp",
              "createDungeon",
              138);
            v64 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v88,
                    (const char (*)[26])"duplicate scene, inst_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v88);
            std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
          }
          else
          {
            v65 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
            DungeonComp = Player::getDungeonComp(v65);
            std::shared_ptr<DungeonScene>::shared_ptr(
              (std::shared_ptr<DungeonScene> *const)&v87,
              (const std::shared_ptr<DungeonScene> *)(v4 + 192));
            PlayerDungeonComp::onCreateDungeon(DungeonComp, *(_DWORD *)(v4 + 64), (DungeonScenePtr *)&v87);
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v87);
            v67 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
            v68 = Player::getSceneComp(v67);
            std::shared_ptr<DungeonScene>::shared_ptr(
              (std::shared_ptr<DungeonScene> *const)&v87,
              (const std::shared_ptr<DungeonScene> *)(v4 + 192));
            PlayerSceneComp::onCreateDungeonScene(v68, (DungeonScenePtr *)&v87);
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v87);
            v69 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            if ( *(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
              v69 = __asan_report_load8(v69);
            v70 = *(_QWORD *)v69 + 40LL;
            if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
              v69 = __asan_report_load8(*(_QWORD *)v69 + 40LL);
            (*(void (__fastcall **)(unsigned __int64))v70)(v69);
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/dungeon_mgr.cpp",
              "createDungeon",
              145);
            v71 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v88,
                    (const char (*)[25])"create dungeon, inst_id:");
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v71,
                    (const unsigned int *)(v4 + 64));
            v73 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v72,
                    (const char (*)[13])" dungeon_id:");
            v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v73,
                    (const unsigned int *)(v4 + 80));
            v75 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v74, (const char (*)[11])" scene_id:");
            v76 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            val = Scene::getSceneId((const Scene *const)v76);
            v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &val);
            v78 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v77, (const char (*)[10])" player_:");
            v79 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
            operator<<(v78, v79);
            common::milog::MiLogStream::~MiLogStream(&v88);
            std::shared_ptr<DungeonScene>::shared_ptr(
              (std::shared_ptr<DungeonScene> *const)this,
              (std::shared_ptr<DungeonScene> *)(v4 + 192));
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 192));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160));
    goto LABEL_55;
  }
  common::milog::MiLogStream::create(
    &v88,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/dungeon_mgr.cpp",
    "createDungeon",
    76);
  v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v88,
         (const char (*)[30])"getMyPlayerWorld fails, uid: ");
  v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)a4);
  val = Player::getUid(v10);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v88);
  std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
LABEL_56:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 96));
LABEL_57:
  if ( v89 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return this;
};

// Line 151: range 000000001556BD4C-000000001556C0AA
__int64 __fastcall DungeonMgr::addPlayerToDungeon(
        DungeonMgr *const this,
        uint32_t uid,
        uint32_t dungeon_id,
        uint32_t inst_id)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-E0h] BYREF
  PlayerDungeonInfo *dungeon_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 7 uid:150 48 4 14 dungeon_id:150 64 8 6 it:153 96 16 13 scene_ptr:157";
  *(_QWORD *)(v5 + 16) = DungeonMgr::addPlayerToDungeon;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 32) = uid;
  *(_DWORD *)(v5 + 48) = dungeon_id;
  dungeon_info = std::unordered_map<unsigned int,PlayerDungeonInfo>::operator[](
                   &this->player_dungeon_map_,
                   (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v5 + 32));
  *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &dungeon_info->dungeon_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&dungeon_info->dungeon_map)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 64),
          &__y) )
    goto LABEL_11;
  p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 64))->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  DungeonMgr::findDungeon((DungeonMgr *const)(v5 + 96), (uint32_t)this);
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_mgr.cpp",
      "addPlayerToDungeon",
      160);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v20,
           (const char (*)[35])"dungeon already exist, dungeon_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v4 = -1;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 96));
  if ( v12 == 1 )
  {
LABEL_11:
    v13 = std::map<unsigned int,unsigned int>::operator[](
            &dungeon_info->dungeon_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *v14 = inst_id;
    v4 = 0;
  }
  result = v4;
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 170: range 000000001556C0AC-000000001556C4B3
__int64 __fastcall DungeonMgr::delPlayerFromDungeon(
        DungeonMgr *const this,
        uint32_t uid,
        uint32_t dungeon_id,
        bool is_force_quit)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int *p_second; // rax
  DungeonScene *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int v17; // r15d
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-E0h] BYREF
  PlayerDungeonInfo *dungeon_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 7 uid:169 48 4 14 dungeon_id:169 64 8 6 it:172 96 16 21 dungeon_scene_ptr:182";
  *(_QWORD *)(v5 + 16) = DungeonMgr::delPlayerFromDungeon;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 32) = uid;
  *(_DWORD *)(v5 + 48) = dungeon_id;
  dungeon_info = std::unordered_map<unsigned int,PlayerDungeonInfo>::operator[](
                   &this->player_dungeon_map_,
                   (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v5 + 32));
  *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &dungeon_info->dungeon_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&dungeon_info->dungeon_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_mgr.cpp",
      "delPlayerFromDungeon",
      175);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v23, (const char (*)[23])off_258064E0);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v4 = -1;
  }
  else
  {
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 64))->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    std::map<unsigned int,unsigned int>::erase[abi:cxx11](
      &dungeon_info->dungeon_map,
      *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 64));
    if ( !is_force_quit )
      goto LABEL_17;
    DungeonMgr::findDungeon((DungeonMgr *const)(v5 + 96), (uint32_t)this);
    if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 96), 0LL)
      && (v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96)),
          DungeonScene::forcePlayerQuit(v12, *(_DWORD *)(v5 + 32))) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_mgr.cpp",
        "delPlayerFromDungeon",
        185);
      v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v23,
              (const char (*)[28])"forcePlayerQuit fails, uid:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 32));
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v15, v16);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v4 = -1;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 96));
    if ( v17 == 1 )
LABEL_17:
      v4 = 0;
  }
  result = v4;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 194: range 000000001556C4B4-000000001556C90F
__int64 __fastcall DungeonMgr::delPlayerFromAllDungeon(DungeonMgr *const this, uint32_t uid, bool is_force_quit)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  DungeonScene *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  PlayerDungeonInfo *dungeon_info; // [rsp+28h] [rbp-118h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_id; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *inst_id; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:193 48 16 21 dungeon_scene_ptr:201 80 48 20 temp_dungeon_map:198";
  *(_QWORD *)(v3 + 16) = DungeonMgr::delPlayerFromAllDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  dungeon_info = std::unordered_map<unsigned int,PlayerDungeonInfo>::operator[](
                   &this->player_dungeon_map_,
                   (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v3 + 32));
  if ( is_force_quit )
  {
    std::map<unsigned int,unsigned int>::map(
      (std::map<unsigned int,unsigned int> *const)(v3 + 80),
      &dungeon_info->dungeon_map);
    __for_range = (std::map<unsigned int,unsigned int> *)(v3 + 80);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 80))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 80))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      dungeon_id = std::get<0ul,unsigned int const,unsigned int>(__in);
      v6 = std::get<1ul,unsigned int const,unsigned int>(__in);
      inst_id = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      DungeonMgr::findDungeon((DungeonMgr *const)(v3 + 48), (uint32_t)this);
      if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 48), 0LL) )
      {
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        if ( DungeonScene::forcePlayerQuit(v7, *(_DWORD *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/dungeon_mgr.cpp",
            "delPlayerFromAllDungeon",
            203);
          v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v22,
                 (const char (*)[28])"forcePlayerQuit fails, uid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v3 + 32));
          v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
          common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v10, v11);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 48));
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
  }
  if ( std::unordered_map<unsigned int,PlayerDungeonInfo>::erase(
         &this->player_dungeon_map_,
         (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_mgr.cpp",
      "delPlayerFromAllDungeon",
      208);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v22, (const char (*)[16])off_25806600);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  if ( v23 == (char *)v3 )
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

// Line 216: range 000000001556C910-000000001556CA90
DungeonMgr *__fastcall DungeonMgr::findDungeon(
        DungeonMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>> *inst_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 inst_id:215 64 8 8 iter:217";
  *(_QWORD *)(v3 + 16) = DungeonMgr::findDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::find(
                                                                                             inst_id,
                                                                                             (const std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::end(inst_id)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false> *const)(v3 + 64));
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 229: range 000000001556CA92-000000001556CE5A
DungeonMgr *__fastcall DungeonMgr::findDungeon(DungeonMgr *const this, __int64 uid, uint32_t dungeon_id, int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  PlayerDungeonInfo *dungeon_info; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 uid:228 48 4 14 dungeon_id:228 64 8 6 it:231 96 16 21 dungeon_scene_ptr:238";
  *(_QWORD *)(v4 + 16) = DungeonMgr::findDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = dungeon_id;
  *(_DWORD *)(v4 + 48) = a4;
  dungeon_info = std::unordered_map<unsigned int,PlayerDungeonInfo>::operator[](
                   (std::unordered_map<unsigned int,PlayerDungeonInfo> *const)(uid + 56),
                   (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v4 + 32));
  *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &dungeon_info->dungeon_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&dungeon_info->dungeon_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_mgr.cpp",
      "findDungeon",
      234);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v20, (const char (*)[23])off_258064E0);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    DungeonMgr::findDungeon(
      (DungeonMgr *const)(v4 + 96),
      (std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>> *)uid,
      v10->second);
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_mgr.cpp",
        "findDungeon",
        241);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v20,
              (const char (*)[39])"dungeon_scene_ptr is null, dungeon_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<DungeonScene>::shared_ptr(
        (std::shared_ptr<DungeonScene> *const)this,
        (std::shared_ptr<DungeonScene> *)(v4 + 96));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 96));
  }
  if ( v21 == (char *)v4 )
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
  return this;
};

// Line 248: range 000000001556CE5C-000000001556D31F
__int64 __fastcall DungeonMgr::destroyDungeon(DungeonMgr *const this, uint32_t inst_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerDungeonComp *DungeonComp; // rax
  Player *v11; // rax
  PlayerSceneComp *SceneComp; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false> __y; // [rsp+18h] [rbp-108h] BYREF
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 inst_id:247 64 8 6 it:249 96 16 15 dungeon_ptr:255 128 16 14 player_ptr:261";
  *(_QWORD *)(v2 + 16) = DungeonMgr::destroyDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = inst_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::find(
                                                                                             &this->dungeon_scene_map_,
                                                                                             (const std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::end(&this->dungeon_scene_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_mgr.cpp",
      "destroyDungeon",
      252);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v19, (const char (*)[27])off_258067A0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false> *const)(v2 + 64));
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96), &v7->second);
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/dungeon_mgr.cpp",
        "destroyDungeon",
        258);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v19,
             (const char (*)[33])"dungeon_ptr is nullptr, inst_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      DungeonScene::getCreatePlayer((const DungeonScene *const)(v2 + 128));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        DungeonComp = Player::getDungeonComp(v9);
        PlayerDungeonComp::onDestroyDungeon(DungeonComp, *(_DWORD *)(v2 + 48));
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        SceneComp = Player::getSceneComp(v11);
        std::shared_ptr<DungeonScene>::shared_ptr(
          &p_dungeon_scene_ptr,
          (const std::shared_ptr<DungeonScene> *)(v2 + 96));
        PlayerSceneComp::onDestroyDungeonScene(SceneComp, &p_dungeon_scene_ptr);
        std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
      }
      v13 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13);
      v14 = *(_QWORD *)v13 + 48LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(*(_QWORD *)v13 + 48LL);
      (*(void (__fastcall **)(unsigned __int64))v14)(v13);
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_mgr.cpp",
        "destroyDungeon",
        269);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"erase inst_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::erase(
        &this->dungeon_scene_map_,
        *(std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::iterator *)(v2 + 64));
      v6 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  }
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 276: range 000000001556D320-000000001556D8E4
void __cdecl DungeonMgr::onTimer(DungeonMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  uint32_t *v11; // rdx
  uint32_t now; // [rsp+14h] [rbp-14Ch]
  std::unordered_map<unsigned int,PlayerDungeonInfo>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,PlayerDungeonInfo>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::iterator __for_end_0; // [rsp+30h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,PlayerDungeonInfo> *__for_range; // [rsp+38h] [rbp-128h]
  std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>> *__for_range_0; // [rsp+40h] [rbp-120h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-118h]
  std::pair<unsigned int const,std::shared_ptr<DungeonScene> > *v19; // [rsp+50h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<DungeonScene> > >::type *inst_id_0; // [rsp+58h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<DungeonScene> > >::type *dungeon_ptr; // [rsp+60h] [rbp-100h]
  std::pair<unsigned int const,PlayerDungeonInfo> *__in; // [rsp+68h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,PlayerDungeonInfo> >::type *uid; // [rsp+70h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,PlayerDungeonInfo> >::type *dungeon_info; // [rsp+78h] [rbp-E8h]
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-E0h] BYREF
  char v26[192]; // [rsp+A0h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 6 it:279 64 16 21 dungeon_scene_ptr:282 96 24 15 inst_id_vec:291";
  *(_QWORD *)(v2 + 16) = DungeonMgr::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  __for_range = &this->player_dungeon_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,PlayerDungeonInfo>::begin(&this->player_dungeon_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,PlayerDungeonInfo>::end(&this->player_dungeon_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PlayerDungeonInfo>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerDungeonInfo>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,PlayerDungeonInfo>(__in);
    dungeon_info = std::get<1ul,unsigned int const,PlayerDungeonInfo>(__in);
    *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::begin(&dungeon_info->dungeon_map);
    while ( 1 )
    {
      __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false>::__node_type *)std::map<unsigned int,unsigned int>::end(&dungeon_info->dungeon_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
        break;
      v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32));
      p_second = &v5->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      DungeonMgr::findDungeon((DungeonMgr *const)(v2 + 64), &this->dungeon_scene_map_, v5->second);
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
        *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::erase[abi:cxx11](
                                                                        &dungeon_info->dungeon_map,
                                                                        *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32));
      else
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32),
          0);
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerDungeonInfo>,false,false>::operator++(&__for_begin);
  }
  now = common::tools::TimeUtils::getNow();
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  __for_range_0 = &this->dungeon_scene_map_;
  *(std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::begin(&this->dungeon_scene_map_);
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<DungeonScene>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false> *)(v2 + 32),
            &__for_end_0) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false> *const)(v2 + 32));
    inst_id_0 = std::get<0ul,unsigned int const,std::shared_ptr<DungeonScene>>(v19);
    dungeon_ptr = std::get<1ul,unsigned int const,std::shared_ptr<DungeonScene>>(v19);
    if ( !std::operator==<DungeonScene>(dungeon_ptr, 0LL) )
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_ptr);
      if ( !Scene::getPlayerCount((const Scene *const)v7) )
      {
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_ptr);
        if ( now > DungeonScene::getDungeonBeginTime(v8) + 600 )
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), inst_id_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false,false> *const)(v2 + 32));
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_mgr.cpp",
      "onTimer",
      309);
    v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v25,
           (const char (*)[66])"[DUNGEON TIMER] try destroy nobody out time dungeon, inst_id_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::vector<unsigned int> *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v25);
    __for_range_1 = (std::vector<unsigned int> *)(v2 + 96);
    *(std::vector<unsigned int>::iterator *)(v2 + 32) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96));
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<DungeonScene> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 32));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      DungeonMgr::destroyDungeon(this, *v11);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 32));
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( v26 == (char *)v2 )
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

// Line 319: range 000000001556D8E6-000000001556D947
uint32_t __cdecl DungeonMgr::genNewDungeonInstId(DungeonMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_entity_index_);
  }
  return ++this->next_entity_index_;
};

// Line 325: range 000000001556D948-000000001556DD83
void __fastcall DungeonMgr::playerLogout(DungeonMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const std::map<unsigned int,unsigned int> *dungeon_map; // [rsp+20h] [rbp-E0h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+30h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *dungeon_id; // [rsp+38h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *inst_id; // [rsp+40h] [rbp-C0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:324 64 8 6 it:326";
  *(_QWORD *)(v2 + 16) = DungeonMgr::playerLogout;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,PlayerDungeonInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,PlayerDungeonInfo>::find(
                                                                                 &this->player_dungeon_map_,
                                                                                 (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v2 + 48));
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,PlayerDungeonInfo>::end(&this->player_dungeon_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,PlayerDungeonInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PlayerDungeonInfo>,false> *)(v2 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PlayerDungeonInfo>,false> *)&__for_end) )
  {
    dungeon_map = &std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerDungeonInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PlayerDungeonInfo>,false,false> *const)(v2 + 64))->second.dungeon_map;
    __for_range = dungeon_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(dungeon_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      dungeon_id = std::get<0ul,unsigned int const,unsigned int>(v13);
      inst_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dungeon_id);
      }
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( dungeon_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_config_ptr->involve_type);
        }
        if ( dungeon_config_ptr->involve_type == INVOLVE_ONLY_SINGLE )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/dungeon_mgr.cpp",
            "playerLogout",
            339);
          v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                 &v18,
                 (const char (*)[37])"find and destory single dungeon_id: ");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, dungeon_id);
          v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" inst_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, inst_id);
          common::milog::MiLogStream::~MiLogStream(&v18);
          if ( *(_BYTE *)(((unsigned __int64)inst_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)inst_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inst_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(inst_id);
          }
          DungeonMgr::destroyDungeon(this, *inst_id);
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,PlayerDungeonInfo>::erase(
      &this->player_dungeon_map_,
      (const std::unordered_map<unsigned int,PlayerDungeonInfo>::key_type *)(v2 + 48));
  }
  if ( v19 == (char *)v2 )
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
