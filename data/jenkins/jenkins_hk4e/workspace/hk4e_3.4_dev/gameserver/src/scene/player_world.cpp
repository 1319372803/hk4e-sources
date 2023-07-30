// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/player_world.cpp

// Line 49: range 0000000015C48B70-0000000015C48BC7
uint32_t __cdecl PlayerWorld::getDefaultWorldId()
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v0; // rax
  uint32_t DefaultWorldId; // ebx
  std::shared_ptr<Config> v3[2]; // [rsp+0h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  v0 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  DefaultWorldId = ConstValueExcelConfigMgr::getDefaultWorldId(&v0->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v3);
  return DefaultWorldId;
};

// Line 55: range 0000000015C48BC8-0000000015C493F3
__int64 __fastcall PlayerWorld::getAdjustedLevel(uint32_t rely_world_level, uint32_t base_level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const int *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const data::WorldLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<Config> v33; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-100h] BYREF
  char v35[224]; // [rsp+50h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 4 L:67 48 4 4 m:68 64 4 4 n:69 80 4 4 B:70 96 4 10 divisor:71 112 4 12 tmp_level:80 128 4"
                        " 13 dest_level:88 144 4 19 rely_world_level:54 160 4 13 base_level:54";
  *(_QWORD *)(v2 + 16) = PlayerWorld::getAdjustedLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -202116348;
  *(_DWORD *)(v2 + 144) = rely_world_level;
  *(_DWORD *)(v2 + 160) = base_level;
  if ( *(_DWORD *)(v2 + 144) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    level_config_ptr = data::SceneExcelConfigMgrBase::findWorldLevelExcelConfig(
                         &v6->design_config.txt_config_mgr.scene_config_mgr,
                         *(_DWORD *)(v2 + 144));
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->monster_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->monster_level >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->monster_level);
      }
      *(_DWORD *)(v2 + 32) = level_config_ptr->monster_level;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
      *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getWorldLevelFormulaMax(&v9->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
      *(_DWORD *)(v2 + 64) = ConstValueExcelConfigMgr::getWorldLevelFormulaMin(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
      *(_DWORD *)(v2 + 80) = ConstValueExcelConfigMgr::getWorldLevelFormulaCity(&v11->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 48);
      v12 = std::min<int>((const int *)(v2 + 128), (const int *)(v2 + 80));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v2 + 96) = *v13 - 1;
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "getAdjustedLevel",
        73);
      v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(&v34, (const char (*)[3])"L:");
      v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v15, (const char (*)[5])", m:");
      v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])", n:");
      v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v2 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])", B:");
      v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v2 + 80));
      v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", divisor:");
      v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v2 + 96));
      v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" base:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 160));
      common::milog::MiLogStream::~MiLogStream(&v34);
      if ( *(_DWORD *)(v2 + 96) )
      {
        *(_DWORD *)(v2 + 112) = (int)(float)((float)((float)((float)((float)((float)(*(_DWORD *)(v2 + 48)
                                                                                   - *(_DWORD *)(v2 + 64))
                                                                           / (float)*(int *)(v2 + 96))
                                                                   * (float)(*(_DWORD *)(v2 + 160) - 1))
                                                           + (float)*(int *)(v2 + 32))
                                                   + (float)*(int *)(v2 + 64))
                                           + 0.5);
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/player_world.cpp",
          "getAdjustedLevel",
          82);
        v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"tmp_level:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream(&v34);
        if ( *(int *)(v2 + 112) > 0 )
        {
          *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 112);
          if ( *(_DWORD *)(v2 + 128) <= 0x2710u )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_world.cpp",
              "getAdjustedLevel",
              95);
            v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v34,
                    (const char (*)[12])"dest_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              (const unsigned int *)(v2 + 128));
            common::milog::MiLogStream::~MiLogStream(&v34);
            result = *(unsigned int *)(v2 + 128);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/player_world.cpp",
              "getAdjustedLevel",
              91);
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v34,
                    (const char (*)[13])"base_level: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v2 + 160));
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v27,
                    (const char (*)[18])" standard_level: ");
            v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v28, (const int *)(v2 + 32));
            v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v29,
                    (const char (*)[18])" but dest_level: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v30,
              (const unsigned int *)(v2 + 128));
            common::milog::MiLogStream::~MiLogStream(&v34);
            result = *(unsigned int *)(v2 + 160);
          }
        }
        else
        {
          result = *(unsigned int *)(v2 + 160);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "getAdjustedLevel",
          77);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v34,
          (const char (*)[29])"std::min(L + m, B) - 1 == 0!");
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = *(unsigned int *)(v2 + 160);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "getAdjustedLevel",
        63);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v34,
             (const char (*)[27])"findWorldLevelExcelConfig ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 144));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = *(unsigned int *)(v2 + 160);
    }
  }
  else
  {
    result = *(unsigned int *)(v2 + 160);
  }
  if ( v35 == (char *)v2 )
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

// Line 101: range 0000000015C493F4-0000000015C49B20
int32_t __cdecl PlayerWorld::fromBin(PlayerWorld *const this, const proto::WorldBin *world_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *v6; // rsi
  uint32_t v7; // edx
  char v8; // al
  uint32_t adjust_time; // ecx
  char v10; // dl
  bool v11; // dl
  uint32_t v12; // edx
  char v13; // al
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  std::shared_ptr<Scene> *v21; // r8
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  const google::protobuf::Map<unsigned int,proto::SceneBin> *__for_range; // [rsp+20h] [rbp-140h]
  google::protobuf::Map<unsigned int,proto::SceneBin>::const_reference p_scene_id; // [rsp+28h] [rbp-138h]
  std::shared_ptr<Player> v31; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<Home> v32; // [rsp+40h] [rbp-120h] BYREF
  google::protobuf::Map<unsigned int,proto::SceneBin>::const_iterator __for_begin; // [rsp+50h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,proto::SceneBin>::const_iterator __for_end; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v35; // [rsp+90h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:112 64 16 14 player_ptr:102 96 16 13 scene_ptr:116";
  *(_QWORD *)(v3 + 16) = PlayerWorld::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
  v6 = (char *)(v3 + 64);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "fromBin",
      105);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v35, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v2 = -1;
  }
  else
  {
    v7 = proto::WorldBin::level(world_bin);
    v8 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(&this->level_, v6, v7);
    }
    this->level_ = v7;
    adjust_time = proto::WorldBin::last_adjust_time(world_bin);
    v10 = *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v10 != 0;
    v11 = v10 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v10;
    if ( v11 )
      __asan_report_store4(&this->last_adjust_time_, v6, v11);
    this->last_adjust_time_ = adjust_time;
    v12 = proto::WorldBin::adjust_level(world_bin);
    v13 = *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v6) = v13 != 0;
      __asan_report_store4(&this->adjust_level_, v6, v12);
    }
    this->adjust_level_ = v12;
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(_DWORD *)(v3 + 48) = Player::getUid(v14);
    __for_range = proto::WorldBin::scene_map(world_bin);
    google::protobuf::Map<unsigned int,proto::SceneBin>::begin(&__for_begin, __for_range);
    google::protobuf::Map<unsigned int,proto::SceneBin>::end(&__for_end, __for_range);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_scene_id = google::protobuf::Map<unsigned int,proto::SceneBin>::const_iterator::operator*(&__for_begin);
      std::shared_ptr<Home>::shared_ptr(&v32, 0LL);
      std::shared_ptr<Player>::shared_ptr(&v31, (const std::shared_ptr<Player> *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(p_scene_id);
      }
      SceneMgr::createScene(v3 + 96, (PlayerPtr *)p_scene_id->first, (HomePtr *)&v31, (uint32_t)&v32);
      std::shared_ptr<Player>::~shared_ptr(&v31);
      std::shared_ptr<Home>::~shared_ptr(&v32);
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "fromBin",
          119);
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v35,
                (const char (*)[30])"scene_ptr is null, scene_id: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &p_scene_id->first);
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v35);
        v2 = -1;
        v18 = 0;
      }
      else
      {
        v19 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        v20 = *(_QWORD *)v19 + 8LL;
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::SceneBin *))v20)(v19, &p_scene_id->second) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_world.cpp",
            "fromBin",
            124);
          v22 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v35,
                  (const char (*)[32])"scene_ptr->fromBin failed, uid:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &p_scene_id->first);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v2 = -1;
          v18 = 0;
        }
        else
        {
          v25 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int const&,std::shared_ptr<Scene>&>(
                  &this->scene_map_,
                  &p_scene_id->first,
                  (std::shared_ptr<Scene> *)(v3 + 96),
                  (const unsigned int *)&this->scene_map_,
                  v21);
          if ( !v25.second )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/player_world.cpp",
              "fromBin",
              129);
            v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v35,
                    (const char (*)[31])"scene already exist, scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &p_scene_id->first);
            common::milog::MiLogStream::~MiLogStream(&v35);
            v2 = -1;
            v18 = 0;
          }
          else
          {
            v18 = 1;
          }
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
      if ( v18 != 1 )
        goto LABEL_30;
      google::protobuf::Map<unsigned int,proto::SceneBin>::const_iterator::operator++(&__for_begin);
    }
    v2 = 0;
  }
LABEL_30:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  result = v2;
  if ( v36 == (char *)v3 )
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

// Line 137: range 0000000015C49B22-0000000015C4A0DB
int32_t __cdecl PlayerWorld::toBin(const PlayerWorld *const this, proto::WorldBin *world_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  proto::SceneBin *v15; // r15
  proto::SceneBin *v16; // rax
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<Scene>>::const_iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::const_iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  google::protobuf::Map<unsigned int,proto::SceneBin> *proto_scene_map; // [rsp+38h] [rbp-238h]
  const std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-230h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v22; // [rsp+48h] [rbp-228h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+50h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-218h]
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-210h] BYREF
  char v26[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:142 64 312 19 proto_scene_bin:146";
  *(_QWORD *)(v3 + 16) = PlayerWorld::toBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  v5[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  proto::WorldBin::set_level(world_bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_adjust_time_);
  }
  proto::WorldBin::set_last_adjust_time(world_bin, this->last_adjust_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->adjust_level_);
  }
  proto::WorldBin::set_adjust_level(world_bin, this->adjust_level_);
  *(_DWORD *)(v3 + 48) = World::getOwnerUid(this);
  proto_scene_map = proto::WorldBin::mutable_scene_map(world_bin);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v22);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v22);
    proto::SceneBin::SceneBin((proto::SceneBin *const)(v3 + 64));
    if ( std::operator==<Scene>(scene_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_world.cpp",
        "toBin",
        149);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v25,
             (const char (*)[27])"scene_ptr is nullptr, uid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v11)(v10, v3 + 64) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "toBin",
          154);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v25,
                (const char (*)[30])"scene_ptr->toBin failed, uid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v15 = std::move<proto::SceneBin &>((proto::SceneBin *)(v3 + 64));
        v16 = google::protobuf::Map<unsigned int,proto::SceneBin>::operator[](proto_scene_map, scene_id);
        proto::SceneBin::operator=(v16, v15);
        v9 = 1;
      }
    }
    proto::SceneBin::~SceneBin((proto::SceneBin *const)(v3 + 64));
    if ( v9 != 1 )
      goto LABEL_24;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_24:
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 164: range 0000000015C4A0DC-0000000015C4B3F2
int32_t __cdecl PlayerWorld::init(PlayerWorld *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v12; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  char v19; // al
  const char *v20; // rsi
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  Scene *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  _BOOL4 v35; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  PlayerWorldScene *v38; // rax
  Scene *v39; // rax
  std::shared_ptr<Scene> *v40; // r8
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int v44; // r15d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  uint32_t v50; // r15d
  uint32_t v51; // r14d
  common::milog::MiLogStream *v52; // rax
  int32_t result; // eax
  bool v54; // [rsp+10h] [rbp-210h]
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // [rsp+10h] [rbp-210h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-200h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-1F8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-1F0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v59; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-1D8h]
  std::string __rhs; // [rsp+50h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v63; // [rsp+70h] [rbp-1B0h] BYREF
  char v64[400]; // [rsp+90h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 7 uid:175 64 4 21 world_level_limit:176 80 4 17 main_scene_id:209 96 16 19 perf_span_pro"
                        "xy:165 128 16 14 player_ptr:167 160 16 19 perf_span_proxy:213 192 16 13 scene_ptr:215 224 16 19 "
                        "perf_span_proxy:194 256 16 19 world_scene_ptr:227 288 32 19 scene_perf_name:212";
  *(_QWORD *)(v2 + 16) = PlayerWorld::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862730] = -202116109;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v2 + 256), "PlayerWorld::init");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  PerfSpanProxy::PerfSpanProxy((PerfSpanProxy *const)(v2 + 96), v5, *(opentracing::v3::string_view *)(v2 + 256));
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 128));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "init",
      170);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v63, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v63);
    v1 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    *(_DWORD *)(v2 + 48) = Player::getUid(v6);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    BasicComp = Player::getBasicComp(v7);
    *(_DWORD *)(v2 + 64) = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    if ( !this->level_ && *(_DWORD *)(v2 + 64) )
    {
      this->level_ = *(_DWORD *)(v2 + 64);
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "init",
        181);
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v63, (const char (*)[10])"init uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" init level_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v63);
    }
    v12 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    v54 = 0;
    if ( this->level_ != *(_DWORD *)(v2 + 64) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 256));
      v12 = 1;
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
      if ( FeatureSwitchMgr::isWorldLevelAdjustClosed(&v13->feature_switch_mgr) )
        v54 = 1;
    }
    if ( v12 )
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
    if ( v54 )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "init",
        186);
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v63, (const char (*)[8])"level_:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->level_);
      v16 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v15, (const char (*)[3])"->");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
      v20 = off_259B55A0;
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])off_259B55A0);
      common::milog::MiLogStream::~MiLogStream(&v63);
      v18 = *(_DWORD *)(v2 + 64);
      v19 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v19 != 0;
      if ( v19 != 0 && v19 <= 3 )
        __asan_report_store4(&this->level_, v20, (_BYTE)this + 120);
      this->level_ = v18;
      if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->adjust_level_, v20, (_BYTE)this + 0x80);
      }
      this->adjust_level_ = 0;
    }
    __for_range = &this->scene_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v59 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v59);
      scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v59);
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(scene_id);
      }
      std::to_string(&__rhs, *scene_id);
      std::operator+<char>((std::string *)&v63, "scene", &__rhs);
      std::operator+<char>((std::string *)(v2 + 288), (std::string *)&v63, "::init");
      std::string::~string(&v63);
      std::string::~string(&__rhs);
      opentracing::v3::string_view::string_view(
        (opentracing::v3::string_view *const)(v2 + 256),
        (const std::string *)(v2 + 288));
      v21 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
      PerfSpanProxy::PerfSpanProxy((PerfSpanProxy *const)(v2 + 224), v21, *(opentracing::v3::string_view *)(v2 + 256));
      if ( std::operator==<Scene>(scene_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "init",
          198);
        v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v63,
                (const char (*)[27])"scene_ptr is nullptr, uid:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v1 = -1;
        v25 = 0;
      }
      else
      {
        v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        if ( Scene::init(v26) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/player_world.cpp",
            "init",
            203);
          v27 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v63,
                  (const char (*)[32])"scene_ptr->fromBin failed, uid:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, scene_id);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v1 = -1;
          v25 = 0;
        }
        else
        {
          v25 = 1;
        }
      }
      PerfSpanProxy::~PerfSpanProxy((PerfSpanProxy *const)(v2 + 224));
      std::string::~string((void *)(v2 + 288));
      if ( v25 != 1 )
        goto LABEL_56;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 256));
    v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
    *(_DWORD *)(v2 + 80) = TxtConfigMgr::getDefaultWorldMainSceneId(&v30->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 256));
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::find(
                            &this->scene_map_,
                            (const std::map<unsigned int,std::shared_ptr<Scene>>::key_type *)(v2 + 80))._M_node;
    if ( !std::operator==(&__for_begin, &__for_end) )
      goto LABEL_61;
    std::to_string(&__rhs, *(_DWORD *)(v2 + 80));
    std::operator+<char>((std::string *)&v63, "scene", &__rhs);
    std::operator+<char>((std::string *)(v2 + 288), (std::string *)&v63, "::init");
    std::string::~string(&v63);
    std::string::~string(&__rhs);
    opentracing::v3::string_view::string_view(
      (opentracing::v3::string_view *const)(v2 + 256),
      (const std::string *)(v2 + 288));
    v31 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
    PerfSpanProxy::PerfSpanProxy((PerfSpanProxy *const)(v2 + 160), v31, *(opentracing::v3::string_view *)(v2 + 256));
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 256), 0LL);
    std::shared_ptr<Player>::shared_ptr(
      (std::shared_ptr<Player> *const)(v2 + 224),
      (const std::shared_ptr<Player> *)(v2 + 128));
    SceneMgr::createScene(v2 + 192, (PlayerPtr *)*(unsigned int *)(v2 + 80), (HomePtr *)(v2 + 224), v2 + 256);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 224));
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 256));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "init",
        218);
      v32 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v63,
              (const char (*)[30])"scene_ptr is null, scene_id: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 80));
      v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v1 = -1;
      v35 = 0;
    }
    else
    {
      v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      if ( Scene::getSceneType(v36) == SCENE_WORLD )
      {
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 256));
        if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 256)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_world.cpp",
            "init",
            230);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v63,
            (const char (*)[26])"scene 3 setIsLocked false");
          common::milog::MiLogStream::~MiLogStream(&v63);
          v38 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
          PlayerWorldScene::setIsLocked(v38, 0);
        }
        v39 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        if ( Scene::init(v39) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world.cpp",
            "init",
            236);
          v41 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v63,
                  (const char (*)[33])"scene_ptr init failed, scene_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v2 + 80));
          v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v63);
          v1 = -1;
          v44 = 0;
        }
        else
        {
          v45 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int &,std::shared_ptr<Scene>&>(
                  &this->scene_map_,
                  (unsigned int *)(v2 + 80),
                  (std::shared_ptr<Scene> *)(v2 + 192),
                  (unsigned int *)&this->scene_map_,
                  v40);
          if ( !v45.second )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/player_world.cpp",
              "init",
              241);
            v46 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v63,
                    (const char (*)[31])"scene already exist, scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v63);
            v1 = -1;
            v44 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_world.cpp",
              "init",
              244);
            v47 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v63,
                    (const char (*)[38])"[SCENE] first create scene, scene_id:");
            v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v47,
                    (const unsigned int *)(v2 + 80));
            v49 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v48, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v63);
            v44 = 1;
          }
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 256));
        v35 = v44 == 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "init",
          223);
        v37 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v63,
                (const char (*)[42])"scene_ptr is not SceneType::SCENE_WORLD: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v1 = -1;
        v35 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 192));
    PerfSpanProxy::~PerfSpanProxy((PerfSpanProxy *const)(v2 + 160));
    std::string::~string((void *)(v2 + 288));
    if ( v35 )
    {
LABEL_61:
      if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
      {
        v55 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_team_ptr_);
        v50 = *(_DWORD *)(v2 + 80);
        v51 = *(_DWORD *)(v2 + 48);
        std::shared_ptr<Player>::shared_ptr(
          (std::shared_ptr<Player> *const)(v2 + 256),
          (const std::shared_ptr<Player> *)(v2 + 128));
        SceneTeam::init(v55, (PlayerPtr *)(v2 + 256), v51, v50);
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 256));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "init",
          254);
        v52 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v63,
                (const char (*)[27])"SceneTeam is nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
      }
      if ( DungeonCandidateTeam::init(&this->dungeon_candidate_team_) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "init",
          258);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v63,
          (const char (*)[35])"init dungeon_candidate_team failed");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v1 = -1;
      }
      else
      {
        v1 = 0;
      }
    }
  }
LABEL_56:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  PerfSpanProxy::~PerfSpanProxy((PerfSpanProxy *const)(v2 + 96));
  result = v1;
  if ( v64 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 266: range 0000000015C4B3F4-0000000015C4B912
int32_t __cdecl PlayerWorld::start(PlayerWorld *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 Now; // rsi
  PlayerWorld **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v20; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-D8h]
  void (*__f[2])(PlayerWorld *, unsigned __int64); // [rsp+40h] [rbp-D0h] BYREF
  std::_Bind<void (PlayerWorld::*(PlayerWorld*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-90h] BYREF
  char v26[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 uid:267";
  *(_QWORD *)(v1 + 16) = PlayerWorld::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = World::getOwnerUid(this);
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_location_notify_time_, Now, (_BYTE)this - 48);
  }
  this->last_location_notify_time_ = Now;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >::_Base_ptr)this;
  __f[0] = (void (*)(PlayerWorld *, unsigned __int64))49;
  __f[1] = 0LL;
  std::bind<void (PlayerWorld::*)(unsigned long),PlayerWorld*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (PlayerWorld::*)(long unsigned int),PlayerWorld*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    __f,
    (PlayerWorld **)&__for_end,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (PlayerWorld::*)(unsigned long) ()(PlayerWorld*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (PlayerWorld::*(PlayerWorld*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "start",
      273);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v25,
           (const char (*)[35])"make_shared UnixTimer fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    __for_range = &this->scene_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v20);
      scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v20);
      if ( std::operator==<Scene>(scene_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "start",
          281);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v25,
               (const char (*)[27])"scene_ptr is nullptr, uid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
        goto LABEL_20;
      }
      v12 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(_QWORD *)v12 + 40LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "start",
          286);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v25,
                (const char (*)[32])"scene_ptr->fromBin failed, uid:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v1 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
        goto LABEL_20;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
    }
    result = 0;
  }
LABEL_20:
  if ( v26 == (char *)v1 )
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

// Line 295: range 0000000015C4B914-0000000015C4B9DD
void __cdecl PlayerWorld::prePlayerLogin(PlayerWorld *const this, bool is_relogin)
{
  Scene *v2; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    if ( std::operator!=<Scene>(scene_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      Scene::prePlayerLogin(v2, is_relogin);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
};

// Line 307: range 0000000015C4B9DE-0000000015C4BA96
void __cdecl PlayerWorld::afterPlayerLogin(PlayerWorld *const this)
{
  Scene *v1; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Scene> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    scene_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(__in);
    if ( std::operator!=<Scene>(scene_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      Scene::afterPlayerLogin(v1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
};

// Line 318: range 0000000015C4BA98-0000000015C4BC70
int32_t __cdecl PlayerWorld::onLogout(PlayerWorld *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v10; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/scene/player_world.cpp",
    "onLogout",
    319);
  v1 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v13, (const char (*)[20])"world logout, uid: ");
  val = World::getOwnerUid(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  if ( std::operator!=<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v2);
  }
  PlayerWorld::kickAllPlayerOnOwnerLeave(this);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v10);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v10);
    if ( std::operator!=<Scene>(scene_ptr, 0LL) )
    {
      v3 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      v4 = *(_QWORD *)v3 + 48LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v4)(v3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 338: range 0000000015C4BC72-0000000015C4BCD3
void __cdecl PlayerWorld::onAvatarDie(
        PlayerWorld *const this,
        Player *player,
        uint64_t die_avatar_guid,
        bool is_cur_use_avatar)
{
  if ( is_cur_use_avatar && DungeonCandidateTeam::isVaild(&this->dungeon_candidate_team_) )
    DungeonCandidateTeam::onPlayerCurAvatarDie(&this->dungeon_candidate_team_, player);
};

// Line 346: range 0000000015C4BCD4-0000000015C4BD1E
void __cdecl PlayerWorld::onDelAvatar(PlayerWorld *const this, Player *player, uint64_t del_avatar_guid)
{
  if ( DungeonCandidateTeam::isVaild(&this->dungeon_candidate_team_) )
    DungeonCandidateTeam::onPlayerDelAvatar(&this->dungeon_candidate_team_, player, del_avatar_guid);
};

// Line 354: range 0000000015C4BD20-0000000015C4BD70
// local variable allocation has failed, the output may be wrong!
ScenePtr __cdecl PlayerWorld::createScene(PlayerWorld *const this, uint32_t scene_id)
{
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&scene_id);
  result = PlayerWorld::createPersonalScene(this, scene_id);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 359: range 0000000015C4BD72-0000000015C4BE82
PlayerWorldScenePtr __cdecl PlayerWorld::getMainWorldScene(PlayerWorld *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerWorldScenePtr result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:360";
  *(_QWORD *)(v2 + 16) = PlayerWorld::getMainWorldScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  World::getMainWorldScene((World *const)(v2 + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)this);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 365: range 0000000015C4BE84-0000000015C4BF00
void __cdecl PlayerWorld::setOwnPlayer(PlayerWorld *const this, PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t Uid; // eax

  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
  if ( std::operator!=<Player>(p_player_ptr, 0LL) )
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v2);
    World::setOwnerUid(this, Uid);
  }
  else
  {
    World::setOwnerUid(this, 0);
  }
};

// Line 378: range 0000000015C4BF02-0000000015C4BF10
uint32_t __cdecl PlayerWorld::getMaxPlayerCount(const PlayerWorld *const this)
{
  return 4;
};

// Line 383: range 0000000015C4BF12-0000000015C4C4E7
__int64 __fastcall PlayerWorld::checkKickPlayer(PlayerWorld *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 target_uid:382 64 16 20 owner_player_ptr:384 96 16 14 player_ptr:397 128 16 13 scene_ptr:412";
  *(_QWORD *)(v2 + 16) = PlayerWorld::checkKickPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = target_uid;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "checkKickPlayer",
      387);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v16, (const char (*)[20])"getOwnPlayer failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( Player::getUid(v6) == *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "checkKickPlayer",
        393);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v16, (const char (*)[21])"kick self is invalid");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v5 = -1;
    }
    else
    {
      World::findPlayerPtr((World *const)(v2 + 96), (uint32_t)this);
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/player_world.cpp",
          "checkKickPlayer",
          400);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v16,
          (const char (*)[21])"findPlayerPtr failed");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Player::getSceneComp(v7);
        PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 128));
        v8 = std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL);
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
        if ( v8 )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_world.cpp",
            "checkKickPlayer",
            407);
          v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                 &v16,
                 (const char (*)[44])"target player dest scene is not null, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v16);
          v5 = 1214;
        }
        else
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Player::getSceneComp(v10);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
          if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL)
            && (v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128)),
                Scene::getSceneType(v11) == SCENE_DUNGEON) )
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_world.cpp",
              "checkKickPlayer",
              415);
            v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v16,
                    (const char (*)[35])"target player is in dungeon, uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v16);
            v5 = 1121;
          }
          else if ( PlayerWorld::getRewardPointLatestReservedTimeForPlayer(this, *(_DWORD *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/player_world.cpp",
              "checkKickPlayer",
              422);
            v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v16,
                    (const char (*)[51])"some reward point is still available, target_uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v16);
            v5 = 1229;
          }
          else
          {
            v5 = 0;
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 430: range 0000000015C4C4E8-0000000015C4C9C8
void __fastcall PlayerWorld::kickPlayer(
        PlayerWorld *const this,
        uint32_t target_uid,
        proto::PlayerQuitFromMpNotify_QuitReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<proto::PlayerQuitFromMpNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // r14
  uint32_t v8; // eax
  bool v9; // r14
  Scene *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+20h] [rbp-100h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v23; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<proto::PlayerQuitFromMpNotify> __r; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 7 uid:446 48 4 14 target_uid:429 64 16 14 player_ptr:431 96 16 14 notify_ptr:434";
  *(_QWORD *)(v3 + 16) = PlayerWorld::kickPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = target_uid;
  World::findPlayerPtr((World *const)(v3 + 64), (uint32_t)this);
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::tools::perf::make_shared<proto::PlayerQuitFromMpNotify>();
    v6 = std::__shared_ptr_access<proto::PlayerQuitFromMpNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerQuitFromMpNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( reason )
      proto::PlayerQuitFromMpNotify::set_reason(v6, reason);
    else
      proto::PlayerQuitFromMpNotify::set_reason(v6, PlayerQuitFromMpNotify_QuitReason_KICK_BY_HOST);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerQuitFromMpNotify>(&__r);
    Player::sendMessage(v7, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::PlayerQuitFromMpNotify>::~shared_ptr((std::shared_ptr<proto::PlayerQuitFromMpNotify> *const)(v3 + 96));
  }
  *(_DWORD *)(v3 + 32) = World::getOwnerUid(this);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v23);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v23);
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    Scene::findPlayer((const Scene *const)&__r, v8);
    v9 = std::operator!=<Player>((const std::shared_ptr<Player> *)&__r, 0LL);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__r);
    if ( v9 )
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( Scene::kickPlayer(v10, *(_DWORD *)(v3 + 48), 0) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "kickPlayer",
          453);
        v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v27,
                (const char (*)[24])"kickPlayer failed, uid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" target_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "kickPlayer",
        455);
      v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v27,
              (const char (*)[25])"kickPlayer success, uid:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" target_uid:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, scene_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
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
};

// Line 461: range 0000000015C4CB9A-0000000015C4CD0F
int32_t __cdecl PlayerWorld::checkKickAllPlayer(PlayerWorld *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  PlayerWorld::checkKickAllPlayer::<lambda(Player&)> v5; // [rsp-20h] [rbp-F0h]
  __int64 __f_8; // [rsp+28h] [rbp-A8h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v8[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 ret:462";
  *(_QWORD *)(v1 + 16) = PlayerWorld::checkKickAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  LODWORD(__f_8) = World::getOwnerUid(this);
  v5.__this = this;
  *(_QWORD *)&v5.__owner_uid = __f_8;
  v5.__ret = (int32_t *)(v1 + 32);
  std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::checkKickAllPlayer(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    v5);
  World::foreachPlayer(this, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
  result = *(_DWORD *)(v1 + 32);
  if ( v8 == (char *)v1 )
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

// Line 464: range 0000000015C4C9CA-0000000015C4CB99
ForeachPolicy __cdecl PlayerWorld::checkKickAllPlayer(void)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::checkKickAllPlayer::<lambda(Player&)> *const __closure,
        Player *target_player)
{
  PlayerWorld *this; // rdx
  _QWORD *p_vptr_World; // rax
  unsigned __int64 v5; // rax
  __int64 (__fastcall *v6)(PlayerWorld *, _QWORD); // rcx
  int32_t *ret; // rbx
  int32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  int32_t *v12; // rdx
  uint32_t target_uid; // [rsp+1Ch] [rbp-14h]

  target_uid = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( target_uid == __closure->__owner_uid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  p_vptr_World = &this->_vptr_World;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    p_vptr_World = (_QWORD *)__asan_report_load8();
  v5 = *p_vptr_World + 104LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(__int64 (__fastcall **)(PlayerWorld *, _QWORD))v5;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ret = __closure->__ret;
  v10 = target_uid;
  v8 = v6(this, target_uid);
  v9 = *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v9 != 0;
  v11 = v9 != 0 && (char)(((unsigned __int8)ret & 7) + 3) >= v9;
  if ( v11 )
    __asan_report_store4(ret, v10, v11);
  *ret = v8;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  return *v12 != 0;
};

// Line 485: range 0000000015C4D1A6-0000000015C4D4FA
void __cdecl PlayerWorld::kickAllPlayer(PlayerWorld *const this, int reason, bool can_kick_owner)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  Scene *v7; // r14
  PlayerWorld::kickAllPlayer::<lambda(Player&)> v8; // [rsp-20h] [rbp-130h]
  uint32_t owner_uid; // [rsp+1Ch] [rbp-F4h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *pr; // [rsp+38h] [rbp-D8h]
  PlayerWorld::kickAllPlayer::<lambda(Player&)> __f; // [rsp+40h] [rbp-D0h]
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 scene_id:490 64 16 13 scene_ptr:491";
  *(_QWORD *)(v3 + 16) = PlayerWorld::kickAllPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  owner_uid = World::getOwnerUid(this);
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    pr = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(pr);
    }
    *(_DWORD *)(v3 + 48) = pr->first;
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64), &pr->second);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_world.cpp",
        "kickAllPlayer",
        494);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v16,
             (const char (*)[29])"scene_ptr is null, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __f.__reason = reason;
      __f.__can_kick_owner = can_kick_owner;
      __f.__owner_uid = owner_uid;
      __f.__scene_ptr = (const ScenePtr *)(v3 + 64);
      v8.__scene_ptr = (const ScenePtr *)(v3 + 64);
      *(_OWORD *)&v8.__reason = *(_OWORD *)&__f.__reason;
      std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v16,
        v8);
      Scene::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v16);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
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
};

// Line 497: range 0000000015C4CD10-0000000015C4D1A4
ForeachPolicy __cdecl PlayerWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::kickAllPlayer::<lambda(Player&)> *const __closure,
        Player *target_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // ecx
  char v6; // al
  Scene *v7; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  ForeachPolicy result; // eax
  unsigned int v19; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:503";
  *(_QWORD *)(v2 + 16) = PlayerWorld::kickAllPlayer(int,bool)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__can_kick_owner >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__can_kick_owner >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__can_kick_owner);
  }
  if ( __closure->__can_kick_owner )
    goto LABEL_11;
  Uid = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( Uid == __closure->__owner_uid )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( !v6 )
  {
    proto::PlayerQuitFromMpNotify::PlayerQuitFromMpNotify((proto::PlayerQuitFromMpNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(__closure);
    }
    proto::PlayerQuitFromMpNotify::set_reason(
      (proto::PlayerQuitFromMpNotify *const)(v2 + 32),
      (proto::PlayerQuitFromMpNotify_QuitReason)__closure->__reason);
    Player::sendProto(target_player, (const google::protobuf::Message *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__scene_ptr);
    v8 = Player::getUid(target_player);
    if ( Scene::kickPlayer(v7, v8, 0) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "operator()",
        508);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v21,
             (const char (*)[24])"kickPlayer failed, uid:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &__closure->__owner_uid);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" target_uid:");
      val = Player::getUid(target_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "operator()",
      510);
    v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v21,
            (const char (*)[25])"kickPlayer success, uid:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__closure->__owner_uid);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" target_uid:");
    v19 = Player::getUid(target_player);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v19);
    v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__scene_ptr);
    val = Scene::getSceneId(v17);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::PlayerQuitFromMpNotify::~PlayerQuitFromMpNotify((proto::PlayerQuitFromMpNotify *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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

// Line 517: range 0000000015C4DE22-0000000015C4E1D3
void __cdecl PlayerWorld::kickAllPlayerOnOwnerLeave(PlayerWorld *const this)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  Player *v5; // rax
  PlayerWorld::kickAllPlayerOnOwnerLeave::<lambda(Player&)>_0 v6; // [rsp-20h] [rbp-190h]
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+10h] [rbp-160h]
  bool is_transfer_to_home; // [rsp+2Bh] [rbp-145h]
  uint32_t owner_uid; // [rsp+2Ch] [rbp-144h]
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-130h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v13; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *_; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-118h]
  std::function<ForeachPolicy(Player&)> v16; // [rsp+60h] [rbp-110h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+80h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+A0h] [rbp-D0h] BYREF
  PlayerWorld::kickAllPlayerOnOwnerLeave::<lambda(Player&)> v19; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 20 owner_player_ptr:533 80 48 23 world_scene_uid_set:519";
  *(_QWORD *)(v2 + 16) = PlayerWorld::kickAllPlayerOnOwnerLeave;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  owner_uid = World::getOwnerUid(this);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v13);
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
    v1 = v1 & 0xFFFFFFFF00000000LL | owner_uid;
    v19.__world_scene_uid_set = (std::set<unsigned int> *)(v2 + 80);
    v19.__owner_uid = v1;
    std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      v19);
    Scene::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 48));
  is_transfer_to_home = 0;
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 48), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    is_transfer_to_home = Player::getTransferTargetHomeOwnerUid(v5) != 0;
  }
  LODWORD(p_func._M_functor._M_unused._M_object) = owner_uid;
  *(_QWORD *)&p_func._M_functor._M_pod_data[8] = v2 + 80;
  p_func._M_manager = (std::_Function_base::_Manager_type)this;
  LOBYTE(p_func._M_invoker) = is_transfer_to_home;
  *(_OWORD *)&v6.__this = __PAIR128__((unsigned __int64)p_func._M_invoker, (unsigned __int64)this);
  v6.__world_scene_uid_set = (std::set<unsigned int> *)(v2 + 80);
  *(_QWORD *)&v6.__owner_uid = p_func._M_functor._M_unused._M_object;
  std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#2},void,void>(
    &v16,
    v6);
  World::foreachPlayer(this, &v16);
  std::function<ForeachPolicy ()(Player &)>::~function(&v16);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 522: range 0000000015C4D4FC-0000000015C4D641
ForeachPolicy __cdecl PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::kickAllPlayerOnOwnerLeave::<lambda(Player&)> *const __closure,
        Player *target_player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 target_uid:524";
  *(_QWORD *)(v2 + 16) = PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( __closure->__owner_uid != *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__world_scene_uid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::set<unsigned int>::insert(
      __closure->__world_scene_uid_set,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v6 == (char *)v2 )
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

// Line 539: range 0000000015C4D642-0000000015C4DE21
ForeachPolicy __cdecl PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#2}::operator()(
        const PlayerWorld::kickAllPlayerOnOwnerLeave::<lambda(Player&)>_0 *const __closure,
        Player *target_player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ForeachPolicy result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerWorld *this; // r14
  _QWORD *p_vptr_World; // rax
  unsigned __int64 v11; // rax
  unsigned int (__fastcall *v12)(PlayerWorld *, Player *, __int64, __int64); // r15
  PlayerSceneComp *SceneComp; // rax
  __int64 CurSceneId; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  PlayerSceneComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerWorld *v20; // r14
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned int (__fastcall *v23)(PlayerWorld *, Player *, __int64, __int64); // r15
  PlayerSceneComp *v24; // rax
  __int64 v25; // rdx
  common::milog::MiLogStream *v26; // rax
  BackMyWorldReason reason; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-90h] BYREF
  char v29[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 target_uid:541";
  *(_QWORD *)(v2 + 16) = PlayerWorld::kickAllPlayerOnOwnerLeave(void)::{lambda(Player &)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( __closure->__owner_uid == *(_DWORD *)(v2 + 32) )
  {
    result = FOREACH_CONTINUE;
    goto LABEL_40;
  }
  Player::setIsQuitMp(target_player, 1);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__world_scene_uid_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( std::set<unsigned int>::count(
         __closure->__world_scene_uid_set,
         (const std::set<unsigned int>::key_type *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "operator()",
      550);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v28,
           (const char (*)[51])"world owner leave, target player back world, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v28);
    if ( Player::leaveCurScene(target_player) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "operator()",
        554);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v28,
             (const char (*)[41])"target player leaveCurScene failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = FOREACH_CONTINUE;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( std::unordered_map<unsigned int,WorldPlayerInfo>::count(
           &__closure->__this->player_info_map_,
           (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "operator()",
        561);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v28,
             (const char (*)[33])"target player leave world, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this = __closure->__this;
      p_vptr_World = &this->_vptr_World;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        p_vptr_World = (_QWORD *)__asan_report_load8();
      v11 = *p_vptr_World + 144LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(unsigned int (__fastcall **)(PlayerWorld *, Player *, __int64, __int64))v11;
      SceneComp = Player::getSceneComp(target_player);
      CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
      if ( v12(this, target_player, CurSceneId, 3LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "operator()",
          564);
        v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v28,
                (const char (*)[39])"target player leave world failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = FOREACH_CONTINUE;
        goto LABEL_40;
      }
    }
    if ( *(char *)(((unsigned __int64)&__closure->__is_transfer_to_home >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&__closure->__is_transfer_to_home);
    if ( __closure->__is_transfer_to_home )
      v16 = 2;
    else
      v16 = 0;
    reason = v16;
    v17 = Player::getSceneComp(target_player);
    if ( PlayerSceneComp::backMyWorld(v17, reason) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "operator()",
        573);
      v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v28,
              (const char (*)[39])"target player backMyWorld failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = FOREACH_CONTINUE;
      goto LABEL_40;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "operator()",
      579);
    v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v28,
            (const char (*)[57])"world owner leave, target player just leave world, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v28);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = __closure->__this;
    v21 = &v20->_vptr_World;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      v21 = (_QWORD *)__asan_report_load8();
    v22 = *v21 + 144LL;
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_load8();
    v23 = *(unsigned int (__fastcall **)(PlayerWorld *, Player *, __int64, __int64))v22;
    v24 = Player::getSceneComp(target_player);
    v25 = PlayerSceneComp::getCurSceneId(v24);
    if ( v23(v20, target_player, v25, 3LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "operator()",
        583);
      v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v28,
              (const char (*)[39])"target player leave world failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = FOREACH_CONTINUE;
      goto LABEL_40;
    }
  }
  result = FOREACH_CONTINUE;
LABEL_40:
  if ( v29 == (char *)v2 )
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

// Line 594: range 0000000015C4E1D4-0000000015C4E7EA
int32_t __cdecl PlayerWorld::playerPreEnter(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char *v17; // rsi
  uint32_t v18; // ecx
  char v19; // al
  uint32_t Now; // edi
  bool v21; // dl
  PlayerBasicComp *BasicComp; // rax
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  WorldPlayerSlotInfo *slot_info; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 uid:601 48 4 13 owner_uid:609 64 16 20 owner_player_ptr:595";
  *(_QWORD *)(v2 + 16) = PlayerWorld::playerPreEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "playerPreEnter",
      598);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v33, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = Player::getUid(player);
    if ( World::isWorldFull(this) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "playerPreEnter",
        604);
      v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v33, (const char (*)[6])"uid: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v7,
        (const char (*)[34])" playerPreEnter fails, world full");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(_DWORD *)(v2 + 48) = Player::getUid(v8);
      if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(v2 + 48)
        && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerInfo>,unsigned int>(
              &this->player_info_map_,
              (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "playerPreEnter",
          612);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v33, (const char (*)[11])"owner_uid:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v11,
                (const char (*)[20])" not in world, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = 1243;
      }
      else
      {
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerSlotInfo>,unsigned int>(
               &this->slot_info_map_,
               (const unsigned int *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_world.cpp",
            "playerPreEnter",
            618);
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v33, (const char (*)[6])"uid: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v14,
                  (const char (*)[33])" already preEnter world, owner: ");
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          val = Player::getUid(v16);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        v17 = (char *)(v2 + 32);
        slot_info = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::operator[](
                      &this->slot_info_map_,
                      (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 32));
        v18 = *(_DWORD *)(v2 + 32);
        v19 = *(_BYTE *)(((unsigned __int64)slot_info >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v17) = v19 != 0;
          __asan_report_store4(slot_info, v17, (_BYTE)slot_info);
        }
        slot_info->uid = v18;
        Now = common::tools::TimeUtils::getNow();
        v21 = *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)slot_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&slot_info->pre_enter_time >> 3)
                                                                   + 0x7FFF8000);
        if ( v21 )
        {
          Now = (_DWORD)slot_info + 4;
          __asan_report_store4(&slot_info->pre_enter_time, (((_BYTE)slot_info + 4) & 7u) + 3, v21);
        }
        slot_info->pre_enter_time = Now;
        BasicComp = Player::getBasicComp(player);
        v23 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
        std::string::operator=(&slot_info->nickname, v23);
        World::notifyPreEnterMpPlayer(
          this,
          *(_DWORD *)(v2 + 32),
          &slot_info->nickname,
          PlayerPreEnterMpNotify_State_START);
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/player_world.cpp",
          "playerPreEnter",
          627);
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v33, (const char (*)[14])"[WORLD] uid: ");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v2 + 32));
        v26 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v25,
                (const char (*)[26])" pre-Enter world, owner: ");
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        val = Player::getUid(v27);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = 0;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v5;
  if ( v34 == (char *)v2 )
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

// Line 632: range 0000000015C4E7EC-0000000015C4EE94
int32_t __cdecl PlayerWorld::checkPlayerEnter(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char v23; // al
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 7 uid:639 48 4 13 owner_uid:647 64 8 8 iter:654 96 16 20 owner_player_ptr:633";
  *(_QWORD *)(v2 + 16) = PlayerWorld::checkPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "checkPlayerEnter",
      636);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = Player::getUid(player);
    if ( World::isWorldFull(this) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "checkPlayerEnter",
        642);
      v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v27, (const char (*)[6])"uid: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" enter owner: ");
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" world fails");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(_DWORD *)(v2 + 48) = Player::getUid(v11);
      if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(v2 + 48)
        && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerInfo>,unsigned int>(
              &this->player_info_map_,
              (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "checkPlayerEnter",
          650);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v27, (const char (*)[11])"owner_uid:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v14,
                (const char (*)[20])" not in world, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v5 = 1243;
      }
      else
      {
        *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::find(
                                                                                         &this->slot_info_map_,
                                                                                         (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 32));
        __y._M_cur = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::end(&this->slot_info_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerSlotInfo>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world.cpp",
            "checkPlayerEnter",
            657);
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v27,
                  (const char (*)[14])"world owner: ");
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          val = Player::getUid(v17);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v18,
                  (const char (*)[29])" cannot found slot for uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
        }
        else if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world.cpp",
            "checkPlayerEnter",
            663);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v27,
            (const char (*)[22])"timer_ptr_ is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
        }
        else
        {
          v20 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
          if ( common::tools::MiTimer::isActive(v20) )
            goto LABEL_25;
          v21 = (unsigned __int64)std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          v22 = *(_QWORD *)v21 + 16LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v22)(
                 v21,
                 1LL,
                 1LL,
                 "./src/scene/player_world.cpp",
                 "checkPlayerEnter",
                 666LL,
                 *(unsigned int *)(v2 + 32),
                 0LL) )
          {
            v23 = 1;
          }
          else
          {
LABEL_25:
            v23 = 0;
          }
          if ( v23 )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/player_world.cpp",
              "checkPlayerEnter",
              668);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v27,
              (const char (*)[25])"timer_ptr_->startS fails");
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          v5 = 0;
        }
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 675: range 0000000015C4F068-0000000015C4FFC9
int32_t __cdecl PlayerWorld::playerEnter(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v8; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  int v23; // edx
  Player *v24; // rax
  PlayerMatchComp *MatchComp; // rdx
  uint32_t Now; // edi
  __int64 v27; // rsi
  bool v28; // dl
  SceneTeam *v29; // rdx
  PlayerWorld::playerEnter::<lambda(Player&)> v30; // si
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Player *v32; // rcx
  uint32_t PlayerCount; // edx
  unsigned __int64 v34; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  Player *v36; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  PlayerEventComp *EventComp; // r14
  PlayerHuntingComp *HuntingComp; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t v42; // eax
  Player *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int32_t result; // eax
  std::string v50; // [rsp+0h] [rbp-270h]
  PlayerSceneComp *stream; // [rsp+8h] [rbp-268h]
  common::milog::MiLogStream *streama; // [rsp+8h] [rbp-268h]
  char __args_0[6]; // [rsp+2Eh] [rbp-242h] BYREF
  unsigned int val; // [rsp+34h] [rbp-23Ch] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-238h]
  std::shared_ptr<Player> __r; // [rsp+40h] [rbp-230h] BYREF
  std::shared_ptr<WorldPlayerChangeEvent> v57; // [rsp+50h] [rbp-220h] BYREF
  std::shared_ptr<World> p_world_ptr; // [rsp+60h] [rbp-210h] BYREF
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-200h] BYREF
  PlayerWorld::playerEnter::<lambda(Player&)>_0 p___f; // [rsp+90h] [rbp-1E0h] BYREF
  char v61[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  *(&v50._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v50._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v2 = (unsigned __int64)v61;
  v50._M_dataplus._M_p = v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 10 holder:682 48 4 7 uid:683 64 4 7 ret:684 80 4 13 old_count:706 96 16 20 owner_player_"
                        "ptr:676 128 16 13 world_ptr:695 160 16 13 event_ptr:750 192 16 16 mp_event_ptr:752 224 16 24 ent"
                        "erer_mp_event_ptr:768 256 24 19 enterer_uid_vec:751 320 24 11 uid_vec:753";
  *(_QWORD *)(v2 + 16) = PlayerWorld::playerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "playerEnter",
      679);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v59, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v59);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v59, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x60Eu, v50);
    std::string::~string(&v59);
    *(_DWORD *)(v2 + 48) = Player::getUid((const Player *const)v50._anon_0._M_allocated_capacity);
    *(_DWORD *)(v2 + 64) = PlayerWorld::checkPlayerEnter(
                             *((PlayerWorld *const *)&v50._anon_0._M_allocated_capacity + 1),
                             (Player *)v50._anon_0._M_allocated_capacity);
    std::unordered_map<unsigned int,WorldPlayerSlotInfo>::erase(
      (std::unordered_map<unsigned int,WorldPlayerSlotInfo> *const)(*(&v50._anon_0._M_allocated_capacity + 1) + 96),
      (const std::unordered_map<unsigned int,WorldPlayerSlotInfo>::key_type *)(v2 + 48));
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    MpComp = Player::getMpComp(v8);
    PlayerMpComp::removeEnterAllowPlayerUid(MpComp, *(_DWORD *)(v2 + 48));
    if ( *(_DWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "playerEnter",
        689);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v59, (const char (*)[14])"[WORLD] uid: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v11,
              (const char (*)[27])" enter world fail, owner: ");
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v59);
      v5 = *(_DWORD *)(v2 + 64);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/player_world.cpp",
        "playerEnter",
        692);
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v59, (const char (*)[14])"[WORLD] uid: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v50._M_string_length = (std::string::size_type)common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                                       v17,
                                                       (const char (*)[22])" enter world, owner: ");
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v18);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        (common::milog::MiLogStream *const)v50._M_string_length,
        &val);
      common::milog::MiLogStream::~MiLogStream(&v59);
      toThisPtr<PlayerWorld>((PlayerWorld *)(v2 + 128));
      v50._M_string_length = (std::string::size_type)Player::getSceneComp((Player *const)v50._anon_0._M_allocated_capacity);
      std::shared_ptr<World>::shared_ptr<PlayerWorld,void>(
        &p_world_ptr,
        (const std::shared_ptr<PlayerWorld> *)(v2 + 128));
      PlayerSceneComp::setCurWorld((PlayerSceneComp *const)v50._M_string_length, &p_world_ptr);
      std::shared_ptr<World>::~shared_ptr(&p_world_ptr);
      stream = Player::getSceneComp((Player *const)v50._anon_0._M_allocated_capacity);
      v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Uid = Player::getUid(v19);
      PlayerSceneComp::setCurWorldOwnerUid(stream, Uid);
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v22 = Player::getUid(v21);
      v23 = *(_DWORD *)(v2 + 48);
      __args_0[1] = v22 == v23;
      if ( v22 != v23 )
      {
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        MatchComp = Player::getMatchComp(v24);
        PlayerMatchComp::onGuestPlayerJoinMp(MatchComp, (Player *)v50._anon_0._M_allocated_capacity);
      }
      *(_DWORD *)(v2 + 80) = World::getPlayerCount(*((const World *const *)&v50._anon_0._M_allocated_capacity + 1));
      player_info = std::unordered_map<unsigned int,WorldPlayerInfo>::operator[](
                      (std::unordered_map<unsigned int,WorldPlayerInfo> *const)(*(&v50._anon_0._M_allocated_capacity + 1)
                                                                              + 152),
                      (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v2 + 48));
      toThisPtr<Player>((Player *)&__r);
      std::weak_ptr<Player>::operator=<Player>(&player_info->player_wtr, &__r);
      std::shared_ptr<Player>::~shared_ptr(&__r);
      Now = common::tools::TimeUtils::getNow();
      v27 = (((_BYTE)player_info + 20) & 7u) + 3;
      v28 = *(_BYTE *)(((unsigned __int64)&player_info->enter_time >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)player_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->enter_time >> 3)
                                                                    + 0x7FFF8000);
      if ( v28 )
      {
        Now = (_DWORD)player_info + 20;
        __asan_report_store4(&player_info->enter_time, v27, v28);
      }
      player_info->enter_time = Now;
      if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&player_info->cur_scene_id, v27, (_BYTE)player_info + 16);
      }
      player_info->cur_scene_id = 0;
      if ( std::operator!=<SceneTeam>(
             (const std::shared_ptr<SceneTeam> *)(*(&v50._anon_0._M_allocated_capacity + 1) + 224),
             0LL) )
      {
        v29 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v50._anon_0._M_allocated_capacity + 1) + 224));
        v30.gap0[0] = v50._anon_0._M_local_buf[0];
        SceneTeam::onPlayerEnter(v29, (Player *)v50._anon_0._M_allocated_capacity);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/player_world.cpp",
          "playerEnter",
          717);
        streama = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v59,
                    (const char (*)[35])"SceneTeam is nullptr, owner_player");
        v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v30.gap0[0] = (char)v31;
        operator<<(streama, v31);
        common::milog::MiLogStream::~MiLogStream(&v59);
      }
      v50._M_string_length = *(&v50._anon_0._M_allocated_capacity + 1);
      std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::playerEnter(Player &)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v59,
        v30);
      World::foreachPlayer(
        *((World *const *)&v50._anon_0._M_allocated_capacity + 1),
        (std::function<ForeachPolicy(Player&)> *)&v59);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v59);
      World::notifyAllPlayerInfo(*((World *const *)&v50._anon_0._M_allocated_capacity + 1));
      v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      PlayerWorld::notifyWorldAndOwnerData(
        *((PlayerWorld *const *)&v50._anon_0._M_allocated_capacity + 1),
        v32,
        (Player *)v50._anon_0._M_allocated_capacity);
      if ( World::getPlayerCount(*((const World *const *)&v50._anon_0._M_allocated_capacity + 1)) > 1 )
      {
        PlayerCount = World::getPlayerCount(*((const World *const *)&v50._anon_0._M_allocated_capacity + 1));
        PlayerWorld::onPlayerCountChange(
          *((PlayerWorld *const *)&v50._anon_0._M_allocated_capacity + 1),
          *(_DWORD *)(v2 + 80),
          PlayerCount);
        World::notifyEnterWorldChatChannel(
          *((World *const *)&v50._anon_0._M_allocated_capacity + 1),
          (Player *)v50._anon_0._M_allocated_capacity);
        if ( *(_BYTE *)((*(&v50._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v34 = **((_QWORD **)&v50._anon_0._M_allocated_capacity + 1) + 184LL;
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          v34 = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(__int64))v34)(*(&v50._anon_0._M_allocated_capacity + 1)) != 1 )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_world.cpp",
            "playerEnter",
            742);
          v50._M_string_length = (std::string::size_type)common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                                           &v59,
                                                           (const char (*)[48])"[MATCH] set world in mp mode not in join, uid: ");
          v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          val = Player::getUid(v35);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            (common::milog::MiLogStream *const)v50._M_string_length,
            &val);
          common::milog::MiLogStream::~MiLogStream(&v59);
          PlayerWorld::setIsInMpMode(*((PlayerWorld *const *)&v50._anon_0._M_allocated_capacity + 1), 1);
          v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          SceneComp = Player::getSceneComp(v36);
          PlayerSceneComp::jumpInplace(SceneComp);
        }
      }
      __args_0[0] = 1;
      v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v38);
      *(_DWORD *)&__args_0[2] = World::getPlayerCount(*((const World *const *)&v50._anon_0._M_allocated_capacity + 1));
      common::tools::perf::make_shared<WorldPlayerChangeEvent,unsigned int &,unsigned int,unsigned int,unsigned int &,bool>(
        (unsigned int *)&v57,
        (unsigned int *)(v2 + 80),
        (unsigned int *)&__args_0[2],
        &val,
        (bool *)(v2 + 48),
        (unsigned int *)__args_0,
        (unsigned int *)v50._M_dataplus._M_p,
        (unsigned int *)v50._M_string_length,
        (unsigned int *)v50._anon_0._M_allocated_capacity,
        *((bool **)&v50._anon_0._M_allocated_capacity + 1));
      std::shared_ptr<BaseEvent>::shared_ptr<WorldPlayerChangeEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 160),
        &v57);
      std::shared_ptr<WorldPlayerChangeEvent>::~shared_ptr(&v57);
      val = *(_DWORD *)(v2 + 48);
      std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)__args_0);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v2 + 256),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
        (const std::vector<unsigned int>::allocator_type *)__args_0);
      std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)__args_0);
      common::tools::perf::make_shared<EnterMpEvent,std::vector<unsigned int> &>(
        (std::vector<unsigned int> *)(v2 + 224),
        (std::vector<unsigned int> *)(v2 + 256));
      std::shared_ptr<BaseEvent>::shared_ptr<EnterMpEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 192),
        (std::shared_ptr<EnterMpEvent> *)(v2 + 224));
      std::shared_ptr<EnterMpEvent>::~shared_ptr((std::shared_ptr<EnterMpEvent> *const)(v2 + 224));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 320));
      p___f.__uid = *(_DWORD *)(v2 + 48);
      std::shared_ptr<BaseEvent>::shared_ptr(&p___f.__event_ptr, (const std::shared_ptr<BaseEvent> *)(v2 + 160));
      std::shared_ptr<BaseEvent>::shared_ptr(&p___f.__mp_event_ptr, (const std::shared_ptr<BaseEvent> *)(v2 + 192));
      p___f.__uid_vec = (std::vector<unsigned int> *)(v2 + 320);
      std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v59,
        &p___f);
      World::foreachPlayer(
        *((World *const *)&v50._anon_0._M_allocated_capacity + 1),
        (std::function<ForeachPolicy(Player&)> *)&v59);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v59);
      PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2}::~Player(&p___f);
      if ( __args_0[1] != 1 )
      {
        common::tools::perf::make_shared<EnterMpEvent,std::vector<unsigned int> &>(
          (std::vector<unsigned int> *)&p_world_ptr,
          (std::vector<unsigned int> *)(v2 + 320));
        std::shared_ptr<BaseEvent>::shared_ptr<EnterMpEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 224),
          (std::shared_ptr<EnterMpEvent> *)&p_world_ptr);
        std::shared_ptr<EnterMpEvent>::~shared_ptr((std::shared_ptr<EnterMpEvent> *const)&p_world_ptr);
        EventComp = Player::getEventComp((Player *const)v50._anon_0._M_allocated_capacity);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&p_world_ptr,
          (const std::shared_ptr<BaseEvent> *)(v2 + 224));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_world_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_world_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 224));
      }
      HuntingComp = Player::getHuntingComp((Player *const)v50._anon_0._M_allocated_capacity);
      v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v42 = Player::getUid(v41);
      PlayerHuntingComp::onPlayerEnterWorld(HuntingComp, v42);
      v43 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      PlayerWorld::logPlayerEnter(
        *((PlayerWorld *const *)&v50._anon_0._M_allocated_capacity + 1),
        (Player *)v50._anon_0._M_allocated_capacity,
        v43);
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/scene/player_world.cpp",
        "playerEnter",
        776);
      v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v59, (const char (*)[6])"uid: ");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v2 + 48));
      v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v45, (const char (*)[15])" enter owner: ");
      v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v47);
      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v48, (const char (*)[7])" world");
      common::milog::MiLogStream::~MiLogStream(&v59);
      v5 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 320));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 192));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 160));
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v5;
  if ( v50._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  return result;
};

// Line 721: range 0000000015C4EE96-0000000015C4EEC0
ForeachPolicy __cdecl PlayerWorld::playerEnter(Player &)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::playerEnter::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerMpComp *MpComp; // rax

  MpComp = Player::getMpComp(player);
  PlayerMpComp::updateMpPlayerInfo(MpComp);
  return 0;
};

// Line 755: range 0000000015C4EEC2-0000000015C4F036
ForeachPolicy __cdecl PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2}::operator()(
        const PlayerWorld::playerEnter::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerEventComp *EventComp; // rbx
  PlayerEventComp *v4; // rbx
  std::vector<unsigned int> *uid_vec; // rbx
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid != __closure->__uid )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v4 = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__mp_event_ptr);
    PlayerEventComp::notifyEvent(v4, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    uid_vec = __closure->__uid_vec;
    __x = Player::getUid(player);
    std::vector<unsigned int>::push_back(uid_vec, &__x);
  }
  return 0;
};

// Line 755: range 0000000015D0D76A-0000000015D0D877
void __cdecl PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2}::Player(
        PlayerWorld::playerEnter::<lambda(Player&)>_0 *const this,
        PlayerWorld::playerEnter::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  std::vector<unsigned int> *uid_vec; // rdx
  PlayerWorld::playerEnter::<lambda(Player&)>_0 *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v5->__event_ptr);
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__mp_event_ptr, &v5->__mp_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v5->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = v5->__uid_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__uid_vec, &v5->__mp_event_ptr);
  this->__uid_vec = uid_vec;
};

// Line 755: range 0000000015D0D942-0000000015D0DA4F
void __cdecl PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2}::Player(
        PlayerWorld::playerEnter::<lambda(Player&)>_0 *const this,
        const PlayerWorld::playerEnter::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  std::vector<unsigned int> *uid_vec; // rdx
  const PlayerWorld::playerEnter::<lambda(Player&)>_0 *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v5->__event_ptr);
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__mp_event_ptr, &v5->__mp_event_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v5->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = v5->__uid_vec;
  if ( *(_BYTE *)(((unsigned __int64)&this->__uid_vec >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__uid_vec, &v5->__mp_event_ptr);
  this->__uid_vec = uid_vec;
};

// Line 755: range 0000000015C4F038-0000000015C4F066
void __cdecl PlayerWorld::playerEnter(Player &)::{lambda(Player &)#2}::~Player(
        PlayerWorld::playerEnter::<lambda(Player&)>_0 *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__mp_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 781: range 0000000015C5020E-0000000015C50292
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWorld::onPlayerCountChange(PlayerWorld *const this, uint32_t old_count, uint32_t cur_count)
{
  std::function<ForeachPolicy(Scene&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(Scene &)>::function<PlayerWorld::onPlayerCountChange(unsigned int,unsigned int)::{lambda(Scene &)#1},void,void>(
    &p_func,
    *(PlayerWorld::onPlayerCountChange::<lambda(Scene&)> *)&old_count);
  World::foreachScene(this, &p_func);
  std::function<ForeachPolicy ()(Scene &)>::~function(&p_func);
};

// Line 782: range 0000000015C4FFCA-0000000015C5020C
ForeachPolicy __cdecl PlayerWorld::onPlayerCountChange(unsigned int,unsigned int)::{lambda(Scene &)#1}::operator()(
        const PlayerWorld::onPlayerCountChange::<lambda(Scene&)> *const __closure,
        Scene *scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerWorldScene *v5; // rcx
  PlayerWorldScene *v6; // rax
  SceneEncounterComp *EncounterComp; // rdi
  uint32_t cur_count; // ecx
  ForeachPolicy result; // eax
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 world_scene_ptr:788";
  *(_QWORD *)(v2 + 16) = PlayerWorld::onPlayerCountChange(unsigned int,unsigned int)::{lambda(Scene &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( Scene::getSceneType(scene) == SCENE_WORLD )
  {
    toPtr<PlayerWorldScene,Scene>((Scene *)(v2 + 32));
    if ( !std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
    {
      v5 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__cur_count >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&__closure->__cur_count);
      }
      PlayerWorldScene::refreshMonsterMpProp(v5, __closure->__cur_count);
      v6 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EncounterComp = PlayerWorldScene::getEncounterComp(v6);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__cur_count >> 3)
                                                                + 0x7FFF8000) )
      {
        EncounterComp = (SceneEncounterComp *)&__closure->__cur_count;
        __asan_report_load4(&__closure->__cur_count);
      }
      cur_count = __closure->__cur_count;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      {
        EncounterComp = (SceneEncounterComp *)__closure;
        __asan_report_load4(__closure);
      }
      SceneEncounterComp::onWorldPlayerChange(EncounterComp, __closure->__old_count, cur_count);
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v11 == (char *)v2 )
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

// Line 800: range 0000000015C50294-0000000015C50702
void __cdecl PlayerWorld::logPlayerEnter(PlayerWorld *const this, Player *player, Player *owner_player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  PlayerSceneComp *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHostEnterMp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  PlayerSceneComp *v17; // rax
  const std::string *v18; // rax
  std::string v19; // [rsp+0h] [rbp-130h]
  Player *const owner_playera; // [rsp+8h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-100h] BYREF
  std::string v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v19._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v19._M_string_length = (std::string::size_type)owner_player;
  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 10 holder:814 64 16 11 log_ptr:802 96 16 18 dest_scene_ptr:805 128 16 11 log_ptr:815";
  *(_QWORD *)(v3 + 16) = PlayerWorld::logPlayerEnter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  SceneComp = Player::getSceneComp(player);
  PlayerSceneComp::resetEnterWorldTransaction(SceneComp);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterWorld>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  Uid = Player::getUid((const Player *const)v19._M_string_length);
  proto_log::PlayerLogBodyEnterWorld::set_owner_uid(v7, Uid);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v10 = Player::getSceneComp(player);
  v11 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](v10);
  proto_log::PlayerLogBodyEnterWorld::set_transaction(v9, v11);
  Player::getSceneComp(player);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    SceneId = Scene::getSceneId(v13);
    proto_log::PlayerLogBodyEnterWorld::set_dest_scene_id(v12, SceneId);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterWorld,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyEnterWorld> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  if ( World::getPlayerCount(this) == 2 )
  {
    BasicComp = Player::getBasicComp((Player *const)v19._M_string_length);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x70Du, v19);
    std::string::~string(&v23);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHostEnterMp>();
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHostEnterMp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHostEnterMp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    v17 = Player::getSceneComp(owner_playera);
    v18 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](v17);
    proto_log::PlayerLogBodyHostEnterMp::set_transaction(v16, v18);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHostEnterMp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHostEnterMp> *)(v3 + 128));
    Player::printStatLog(owner_playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHostEnterMp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHostEnterMp> *const)(v3 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyEnterWorld>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterWorld> *const)(v3 + 64));
  if ( v24 == (char *)v3 )
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

// Line 823: range 0000000015C5081A-0000000015C5132F
int32_t __cdecl PlayerWorld::playerLeave(
        PlayerWorld *const this,
        Player *player,
        uint32_t leave_scene_id,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::unordered_map<unsigned int,WorldPlayerInfo>::mapped_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerSceneComp *SceneComp; // r14
  PlayerSceneComp *v15; // rax
  DungeonCandidateTeam *DungeonCandidateTeam; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // rax
  PlayerMatchComp *MatchComp; // rax
  Scene *v20; // rcx
  SceneTeam *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t PlayerCount; // edx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  PlayerHuntingComp *HuntingComp; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t v29; // eax
  Player *v30; // rdi
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v36; // [rsp+0h] [rbp-210h]
  unsigned int *v37; // [rsp+0h] [rbp-210h]
  unsigned int *leave_world_reasona; // [rsp+8h] [rbp-208h]
  uint32_t leave_scene_ida; // [rsp+Ch] [rbp-204h]
  Player *playera; // [rsp+10h] [rbp-200h]
  Player *const playerb; // [rsp+10h] [rbp-200h]
  PlayerWorld *thisa; // [rsp+18h] [rbp-1F8h]
  PlayerWorld *thisb; // [rsp+18h] [rbp-1F8h]
  char __args_0[5]; // [rsp+27h] [rbp-1E9h] BYREF
  unsigned int Uid; // [rsp+2Ch] [rbp-1E4h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-1D0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v49; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-1B8h]
  std::shared_ptr<LeaveWorldEvent> __r; // [rsp+60h] [rbp-1B0h] BYREF
  std::shared_ptr<World> p_world_ptr; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v54; // [rsp+80h] [rbp-190h] BYREF
  char v55[368]; // [rsp+A0h] [rbp-170h] BYREF

  *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v36._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v36._M_string_length) = leave_scene_id;
  LODWORD(v36._M_string_length) = leave_world_reason;
  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 1 10 holder:830 48 4 7 uid:832 64 4 13 owner_uid:833 80 4 13 old_count:835 96 16 20 owner_p"
                        "layer_ptr:824 128 16 13 event_ptr:893 160 24 22 leave_world_notify:901 224 56 27 leave_world_player_info:836";
  *(_QWORD *)(v4 + 16) = PlayerWorld::playerLeave;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v4 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "playerLeave",
      827);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v54, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v54);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v54, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x60Fu, v36);
    std::string::~string(&v54);
    *(_DWORD *)(v4 + 48) = Player::getUid(playera);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    *(_DWORD *)(v4 + 64) = Player::getUid(v10);
    *(_DWORD *)(v4 + 80) = World::getPlayerCount(thisa);
    v11 = std::unordered_map<unsigned int,WorldPlayerInfo>::operator[](
            &thisa->player_info_map_,
            (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v4 + 48));
    WorldPlayerInfo::WorldPlayerInfo((WorldPlayerInfo *const)(v4 + 224), v11);
    if ( !std::unordered_map<unsigned int,WorldPlayerInfo>::erase(
            &thisa->player_info_map_,
            (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "playerLeave",
        840);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v54, (const char (*)[16])off_259B6B80);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])off_259B6BC0);
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    SceneComp = Player::getSceneComp(playera);
    std::shared_ptr<World>::shared_ptr(&p_world_ptr, 0LL);
    PlayerSceneComp::setCurWorld(SceneComp, &p_world_ptr);
    std::shared_ptr<World>::~shared_ptr(&p_world_ptr);
    v15 = Player::getSceneComp(playera);
    PlayerSceneComp::setCurWorldOwnerUid(v15, 0);
    DungeonCandidateTeam = PlayerWorld::getDungeonCandidateTeam(thisa);
    DungeonCandidateTeam::onPlayerLeaveWorld(DungeonCandidateTeam, playera);
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( Player::getUid(v17) != *(_DWORD *)(v4 + 48) )
    {
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      MatchComp = Player::getMatchComp(v18);
      PlayerMatchComp::onGuestPlayerLeaveMp(MatchComp, *(_DWORD *)(v4 + 48));
    }
    __for_range = &thisa->scene_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&thisa->scene_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&thisa->scene_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v49 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v49);
      scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v49);
      v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      Scene::onPlayerLeaveWorld(v20, playera, (proto::LeaveWorldReason)leave_world_reasona);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
    }
    std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v54,
      (PlayerWorld::playerLeave::<lambda(Player&)>)&__for_end);
    World::foreachPlayer(thisa, (std::function<ForeachPolicy(Player&)> *)&v54);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v54);
    World::notifyAllPlayerInfo(thisa);
    if ( std::operator!=<SceneTeam>(&thisa->scene_team_ptr_, 0LL) )
    {
      v21 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->scene_team_ptr_);
      SceneTeam::onPlayerLeave(v21, *(_DWORD *)(v4 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_world.cpp",
        "playerLeave",
        879);
      v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v54,
              (const char (*)[27])"SceneTeam is nullptr, uid:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    if ( World::getPlayerCount(thisa) )
      World::notifyLeaveWorldChatChannel(thisa, playera);
    if ( World::isPlayerIn(thisa, *(_DWORD *)(v4 + 64)) )
    {
      PlayerCount = World::getPlayerCount(thisa);
      PlayerWorld::onPlayerCountChange(thisa, *(_DWORD *)(v4 + 80), PlayerCount);
    }
    __args_0[0] = 0;
    v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    Uid = Player::getUid(v26);
    *(_DWORD *)&__args_0[1] = World::getPlayerCount(thisa);
    common::tools::perf::make_shared<WorldPlayerChangeEvent,unsigned int &,unsigned int,unsigned int,unsigned int &,bool>(
      (unsigned int *)&p_world_ptr,
      (unsigned int *)(v4 + 80),
      (unsigned int *)&__args_0[1],
      &Uid,
      (bool *)(v4 + 48),
      (unsigned int *)__args_0,
      v37,
      leave_world_reasona,
      (unsigned int *)playera,
      (bool *)thisa);
    std::shared_ptr<BaseEvent>::shared_ptr<WorldPlayerChangeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v4 + 128),
      (std::shared_ptr<WorldPlayerChangeEvent> *)&p_world_ptr);
    std::shared_ptr<WorldPlayerChangeEvent>::~shared_ptr((std::shared_ptr<WorldPlayerChangeEvent> *const)&p_world_ptr);
    *(_DWORD *)(v4 + 160) = *(_DWORD *)(v4 + 48);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)(v4 + 168),
      (const std::shared_ptr<BaseEvent> *)(v4 + 128));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v54,
      (PlayerWorld::playerLeave::<lambda(Player&)>_0 *)(v4 + 160));
    World::foreachPlayer(thisb, (std::function<ForeachPolicy(Player&)> *)&v54);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v54);
    PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::~LeaveWorldReason((PlayerWorld::playerLeave::<lambda(Player&)>_0 *const)(v4 + 160));
    proto::LeaveWorldNotify::LeaveWorldNotify((proto::LeaveWorldNotify *const)(v4 + 160));
    Player::sendProto(playerb, (const google::protobuf::Message *)(v4 + 160));
    HuntingComp = Player::getHuntingComp(playerb);
    v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v29 = Player::getUid(v28);
    PlayerHuntingComp::onPlayerLeaveWorld(HuntingComp, v29);
    v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    PlayerWorld::logPlayerLeave(thisb, playerb, v30, leave_scene_ida, (const WorldPlayerInfo *)(v4 + 224));
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/scene/player_world.cpp",
      "playerLeave",
      908);
    v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v54, (const char (*)[14])"[WORLD] uid: ");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 48));
    v33 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v32,
            (const char (*)[26])" leave world, owner uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v54);
    EventComp = Player::getEventComp(playerb);
    common::tools::perf::make_shared<LeaveWorldEvent>();
    std::shared_ptr<BaseEvent>::shared_ptr<LeaveWorldEvent,void>((std::shared_ptr<BaseEvent> *const)&p_world_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_world_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_world_ptr);
    std::shared_ptr<LeaveWorldEvent>::~shared_ptr(&__r);
    v7 = 0;
    proto::LeaveWorldNotify::~LeaveWorldNotify((proto::LeaveWorldNotify *const)(v4 + 160));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 128));
    WorldPlayerInfo::~WorldPlayerInfo((WorldPlayerInfo *const)(v4 + 224));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
  result = v7;
  if ( v55 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 864: range 0000000015C50704-0000000015C5072E
ForeachPolicy __cdecl PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::playerLeave::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerMpComp *MpComp; // rax

  MpComp = Player::getMpComp(player);
  PlayerMpComp::updateMpPlayerInfo(MpComp);
  return 0;
};

// Line 894: range 0000000015C50730-0000000015C507F8
ForeachPolicy __cdecl PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::operator()(
        const PlayerWorld::playerLeave::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid != __closure->__uid )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  }
  return 0;
};

// Line 894: range 0000000015D0DEBE-0000000015D0DF56
void __cdecl PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::LeaveWorldReason(
        PlayerWorld::playerLeave::<lambda(Player&)>_0 *const this,
        PlayerWorld::playerLeave::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  PlayerWorld::playerLeave::<lambda(Player&)>_0 *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v4->__event_ptr);
};

// Line 894: range 0000000015D0E022-0000000015D0E0BA
void __cdecl PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::LeaveWorldReason(
        PlayerWorld::playerLeave::<lambda(Player&)>_0 *const this,
        const PlayerWorld::playerLeave::<lambda(Player&)>_0 *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  const PlayerWorld::playerLeave::<lambda(Player&)>_0 *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->__uid;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->__uid = uid;
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &v4->__event_ptr);
};

// Line 894: range 0000000015C507FA-0000000015C50818
void __cdecl PlayerWorld::playerLeave(Player &,unsigned int,proto::LeaveWorldReason)::{lambda(Player &)#2}::~LeaveWorldReason(
        PlayerWorld::playerLeave::<lambda(Player&)>_0 *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 915: range 0000000015C51330-0000000015C51FBC
void __cdecl PlayerWorld::logPlayerLeave(
        PlayerWorld *const this,
        Player *player,
        Player *owner_player,
        uint32_t leave_scene_id,
        const WorldPlayerInfo *world_player_info)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t v9; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  PlayerSceneComp *SceneComp; // rax
  const std::string *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t OwnerUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // eax
  uint32_t v20; // r14d
  uint32_t v21; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHostLeaveMp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  PlayerSceneComp *v25; // rax
  const std::string *v26; // rax
  uint32_t v27; // r14d
  PlayerBasicComp *v28; // rax
  PlayerSocialComp *SocialComp; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  uint32_t v31; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  uint32_t PlatformType; // eax
  uint32_t *v34; // rax
  uint32_t *v35; // rdx
  _BOOL4 v36; // r14d
  const unsigned int *v37; // rax
  _DWORD *v38; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  int v41; // r14d
  Player *v42; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::string v49; // [rsp+0h] [rbp-1C0h]
  const WorldPlayerInfo *world_player_infoa; // [rsp+8h] [rbp-1B8h]
  bool is_friend; // [rsp+37h] [rbp-189h]
  uint32_t now; // [rsp+38h] [rbp-188h]
  uint32_t duration; // [rsp+3Ch] [rbp-184h]
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_begin; // [rsp+40h] [rbp-180h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo>::iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,WorldPlayerInfo> *__for_range; // [rsp+50h] [rbp-170h]
  const std::pair<unsigned int const,WorldPlayerInfo> *v57; // [rsp+58h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,WorldPlayerInfo> >::type *uid; // [rsp+60h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *player_info; // [rsp+68h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+80h] [rbp-140h] BYREF
  std::string v62; // [rsp+90h] [rbp-130h] BYREF
  char v63[272]; // [rsp+B0h] [rbp-110h] BYREF

  *(&v49._anon_0._M_allocated_capacity + 1) = (std::string::size_type)owner_player;
  HIDWORD(v49._anon_0._M_allocated_capacity) = leave_scene_id;
  v49._M_string_length = (std::string::size_type)world_player_info;
  v5 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 1 26 mp_state_change_holder:941 64 16 11 log_ptr:916 96 16 18 dest_scene_ptr:920 128 16 29 "
                        "other_mp_state_change_log:945 160 16 20 other_player_ptr:959 192 16 29 leave_mp_state_change_log:967";
  *(_QWORD *)(v5 + 16) = PlayerWorld::logPlayerLeave;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyLeaveWorld>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  v9 = Player::getUid(*((const Player *const *)&v49._anon_0._M_allocated_capacity + 1));
  proto_log::PlayerLogBodyLeaveWorld::set_owner_uid(v8, v9);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyLeaveWorld::set_scene_id(v10, HIDWORD(v49._anon_0._M_allocated_capacity));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  SceneComp = Player::getSceneComp(player);
  v13 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](SceneComp);
  proto_log::PlayerLogBodyLeaveWorld::set_transaction(v11, v13);
  Player::getSceneComp(player);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v5 + 96));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v5 + 96), 0LL) )
  {
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    OwnerUid = Scene::getOwnerUid(v15);
    proto_log::PlayerLogBodyLeaveWorld::set_dest_owner_uid(v14, OwnerUid);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLeaveWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    SceneId = Scene::getSceneId(v18);
    proto_log::PlayerLogBodyLeaveWorld::set_dest_scene_id(v17, SceneId);
  }
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLeaveWorld,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  v20 = Player::getUid(player);
  if ( v20 != Player::getUid(*((const Player *const *)&v49._anon_0._M_allocated_capacity + 1))
    && World::getPlayerCount(this) == 1
    || (v21 = Player::getUid(player),
        v21 == Player::getUid(*((const Player *const *)&v49._anon_0._M_allocated_capacity + 1)))
    && World::getPlayerCount(this) )
  {
    BasicComp = Player::getBasicComp(*((Player *const *)&v49._anon_0._M_allocated_capacity + 1));
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v62, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x70Eu, v49);
    std::string::~string(&v62);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHostLeaveMp>();
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyHostLeaveMp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHostLeaveMp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
    v25 = Player::getSceneComp(*((Player *const *)&v49._anon_0._M_allocated_capacity + 1));
    v26 = PlayerSceneComp::getEnterWorldTransaction[abi:cxx11](v25);
    proto_log::PlayerLogBodyHostLeaveMp::set_transaction(v24, v26);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHostLeaveMp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHostLeaveMp> *)(v5 + 192));
    Player::printStatLog(*((Player *const *)&v49._anon_0._M_allocated_capacity + 1), &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHostLeaveMp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHostLeaveMp> *const)(v5 + 192));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  v27 = Player::getUid(player);
  if ( v27 != Player::getUid(*((const Player *const *)&v49._anon_0._M_allocated_capacity + 1)) )
  {
    v28 = Player::getBasicComp(*((Player *const *)&v49._anon_0._M_allocated_capacity + 1));
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v62, v28);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x710u, v49);
    std::string::~string(&v62);
    now = common::tools::TimeUtils::getNow();
    __for_range = &this->player_info_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::begin(&this->player_info_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerInfo>,false>(&__for_begin, &__for_end) )
    {
      v57 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,WorldPlayerInfo>(v57);
      player_info = (std::tuple_element<1,const std::pair<unsigned int const,WorldPlayerInfo> >::type *)std::get<1ul,unsigned int const,WorldPlayerInfo>(v57);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyMpStateChange>();
      SocialComp = Player::getSocialComp(player);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(uid);
      }
      is_friend = PlayerSocialComp::isPlayerFriend(SocialComp, *uid);
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      v31 = Player::getUid(player);
      proto_log::PlayerLogBodyMpStateChange::set_target_uid(v30, v31);
      v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      PlatformType = Player::getPlatformType(player);
      proto_log::PlayerLogBodyMpStateChange::set_target_platform_type(v32, PlatformType);
      v34 = (uint32_t *)std::max<unsigned int>(&world_player_infoa->enter_time, &player_info->enter_time);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      if ( now >= *v35 )
      {
        v37 = std::max<unsigned int>(&world_player_infoa->enter_time, &player_info->enter_time);
        v38 = v37;
        if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v37);
        }
        duration = now - *v38;
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        proto_log::PlayerLogBodyMpStateChange::set_duration(v39, duration);
        v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        proto_log::PlayerLogBodyMpStateChange::set_is_friend(v40, is_friend);
        std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v5 + 160));
        if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 160)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world.cpp",
            "logPlayerLeave",
            962);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)&v62,
            (const char (*)[16])"getPlayer fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
          v41 = 0;
        }
        else
        {
          v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpStateChange,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *)(v5 + 128));
          Player::printStatLog(v42, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyMpStateChange>();
          v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(uid);
          }
          proto_log::PlayerLogBodyMpStateChange::set_target_uid(v43, *uid);
          v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
          v46 = Player::getPlatformType(v45);
          proto_log::PlayerLogBodyMpStateChange::set_target_platform_type(v44, v46);
          v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          proto_log::PlayerLogBodyMpStateChange::set_duration(v47, duration);
          v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
          proto_log::PlayerLogBodyMpStateChange::set_is_friend(v48, is_friend);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpStateChange,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *)(v5 + 192));
          Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          std::shared_ptr<proto_log::PlayerLogBodyMpStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *const)(v5 + 192));
          v41 = 1;
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 160));
        v36 = v41 == 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "logPlayerLeave",
          952);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)&v62,
          (const char (*)[32])"enter_time should not early now");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
        v36 = 0;
      }
      std::shared_ptr<proto_log::PlayerLogBodyMpStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpStateChange> *const)(v5 + 128));
      if ( !v36 )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator++(&__for_begin);
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLeaveWorld> *const)(v5 + 64));
  if ( v63 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 980: range 0000000015C51FBE-0000000015C5238F
void __cdecl PlayerWorld::onPlayerEnterScene(PlayerWorld *const this, Player *player, Scene *scene)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  uint32_t SceneId; // edx
  char v13; // al
  unsigned int *p_OwnerUid; // rsi
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-C0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:981 64 8 8 iter:982";
  *(_QWORD *)(v3 + 16) = PlayerWorld::onPlayerEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,WorldPlayerInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WorldPlayerInfo>::find(
                                                                               &this->player_info_map_,
                                                                               (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "onPlayerEnterScene",
      985);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v21,
           (const char (*)[33])"player_info_map_ not found uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "onPlayerEnterScene",
      989);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v21, (const char (*)[14])"[WORLD] uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" enterScene: ");
    val = Scene::getSceneId(scene);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" scene owner: ");
    OwnerUid = Scene::getOwnerUid(scene);
    p_OwnerUid = &OwnerUid;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v21);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    SceneId = Scene::getSceneId(scene);
    v13 = *(_BYTE *)(((unsigned __int64)&player_info->cur_scene_id >> 3) + 0x7FFF8000);
    LOBYTE(p_OwnerUid) = v13 != 0;
    if ( v13 != 0 && v13 <= 3 )
      __asan_report_store4(&player_info->cur_scene_id, p_OwnerUid, SceneId);
    player_info->cur_scene_id = SceneId;
    if ( World::getOwnerUid(this) == *(_DWORD *)(v3 + 48) && Scene::getSceneType(scene) == SCENE_WORLD )
    {
      if ( *(char *)(((unsigned __int64)&this->is_in_self_main_scene_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_in_self_main_scene_, p_OwnerUid, &this->is_in_self_main_scene_);
      this->is_in_self_main_scene_ = 1;
    }
  }
  if ( v22 == (char *)v3 )
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

// Line 1002: range 0000000015C52390-0000000015C52AEF
void __cdecl PlayerWorld::onPlayerLeaveScene(PlayerWorld *const this, Player *player, Scene *scene)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned int *p_OwnerUid; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 Rotation; // rax
  __int64 v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  DungeonCandidateTeam *DungeonCandidateTeam; // rdx
  uint32_t SceneId; // ecx
  char v22; // dl
  bool v23; // dl
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int OwnerUid; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> __y; // [rsp+30h] [rbp-E0h] BYREF
  WorldPlayerInfo *player_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1003 64 8 9 iter:1004 96 16 15 avatar_ptr:1016";
  *(_QWORD *)(v3 + 16) = PlayerWorld::onPlayerLeaveScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = Player::getUid(player);
  *(std::unordered_map<unsigned int,WorldPlayerInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WorldPlayerInfo>::find(
                                                                               &this->player_info_map_,
                                                                               (const std::unordered_map<unsigned int,WorldPlayerInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WorldPlayerInfo>::end(&this->player_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WorldPlayerInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "onPlayerLeaveScene",
      1007);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v30,
           (const char (*)[33])"player_info_map_ not found uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "onPlayerLeaveScene",
      1011);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v30, (const char (*)[14])"[WORLD] uid: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" leaveScene: ");
    val = Scene::getSceneId(scene);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" scene owner: ");
    OwnerUid = Scene::getOwnerUid(scene);
    p_OwnerUid = &OwnerUid;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &OwnerUid);
    common::milog::MiLogStream::~MiLogStream(&v30);
    player_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerInfo>,false,false> *const)(v3 + 64))->second;
    if ( Scene::getSceneType(scene) == SCENE_WORLD )
    {
      Player::getCurAvatar((Player *const)(v3 + 96));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
      {
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v13);
        if ( *(char *)(((unsigned __int64)&player_info->last_main_pos >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_pos.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          Position = __asan_report_store_n(&player_info->last_main_pos, 12LL);
        }
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        player_info->last_main_pos = *(Vector3 *)Position;
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v15);
        if ( (((unsigned __int8)player_info + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3)
                                                                   + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&player_info->last_main_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)player_info + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&player_info->last_main_rot.z
                                                                     + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          Rotation = __asan_report_store_n(&player_info->last_main_rot, 12LL);
        }
        v17 = ((_DWORD)Rotation + 11) & 7;
        if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
        {
          v17 = 12LL;
          Rotation = __asan_report_load_n(Rotation, 12LL);
        }
        player_info->last_main_rot = *(Vector3 *)Rotation;
        if ( *(char *)(((unsigned __int64)&player_info->is_pos_valid >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&player_info->is_pos_valid, v17, &player_info->is_pos_valid);
        player_info->is_pos_valid = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "onPlayerLeaveScene",
          1025);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"uid: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
        v17 = (__int64)" getCurAvatar fails";
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v19, (const char (*)[20])" getCurAvatar fails");
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      if ( World::getOwnerUid(this) == *(_DWORD *)(v3 + 48) )
      {
        if ( *(char *)(((unsigned __int64)&this->is_in_self_main_scene_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_in_self_main_scene_, v17, &this->is_in_self_main_scene_);
        this->is_in_self_main_scene_ = 0;
      }
      DungeonCandidateTeam = PlayerWorld::getDungeonCandidateTeam(this);
      DungeonCandidateTeam::onPlayerLeaveWorldScene(DungeonCandidateTeam, player);
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
    }
    else if ( Scene::getSceneType(scene) == SCENE_ROOM )
    {
      SceneId = Scene::getSceneId(scene);
      v22 = *(_BYTE *)(((unsigned __int64)&player_info->last_leave_room_scene_id >> 3) + 0x7FFF8000);
      LOBYTE(p_OwnerUid) = v22 != 0;
      v23 = v22 != 0 && (char)((((_BYTE)player_info + 52) & 7) + 3) >= v22;
      if ( v23 )
        __asan_report_store4(&player_info->last_leave_room_scene_id, p_OwnerUid, v23);
      player_info->last_leave_room_scene_id = SceneId;
    }
  }
  if ( v31 == (char *)v3 )
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

// Line 1042: range 0000000015C52AF0-0000000015C53229
void __cdecl PlayerWorld::notifyWorldAndOwnerData(PlayerWorld *const this, Player *owner_player, Player *player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerDailyTaskComp *DailyTaskComp; // r14
  std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerRoutineComp *RoutineComp; // rax
  unsigned __int64 v9; // rax
  PlayerBlossomComp *BlossomComp; // r14
  std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo> *v12; // rax
  PlayerMatchComp *MatchComp; // rax
  PlayerMatchComp *v14; // r14
  std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  AsterActivity *v16; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // rdx
  PlayerSceneComp *SceneComp; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerSceneComp *v20; // rax
  char v22[528]; // [rsp+20h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 16 15 notify_ptr:1044 64 16 23 blossom_notify_ptr:1061 96 16 22 match_info_notify:1070 128 "
                        "16 23 aster_activity_ptr:1076 160 40 11 notify:1087 240 48 19 routine_notify:1051 320 48 22 deat"
                        "h_zone_notify:1092 400 48 33 deshret_obelisk_chest_notify:1097";
  *(_QWORD *)(v3 + 16) = PlayerWorld::notifyWorldAndOwnerData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862729] = -218959118;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -202116109;
  common::tools::perf::make_shared<proto::WorldOwnerDailyTaskNotify>();
  DailyTaskComp = Player::getDailyTaskComp(owner_player);
  v7 = std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( !PlayerDailyTaskComp::fillOwnerDailyTaskNotify(DailyTaskComp, v7) )
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::WorldOwnerDailyTaskNotify>((const std::shared_ptr<proto::WorldOwnerDailyTaskNotify> *)(v3 + 128));
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v3 + 128), 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 128));
  }
  proto::WorldAllRoutineTypeNotify::WorldAllRoutineTypeNotify((proto::WorldAllRoutineTypeNotify *const)(v3 + 240));
  RoutineComp = Player::getRoutineComp(owner_player);
  if ( !PlayerRoutineComp::fillWorldAllRoutineTypeNotify(RoutineComp, (proto::WorldAllRoutineTypeNotify *)(v3 + 240)) )
    Player::sendProto(player, (const google::protobuf::Message *)(v3 + 240));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = (unsigned __int64)(this->_vptr_World + 22);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  (*(void (__fastcall **)(PlayerWorld *const, Player *))v9)(this, player);
  common::tools::perf::make_shared<proto::WorldOwnerBlossomBriefInfoNotify>();
  BlossomComp = Player::getBlossomComp(owner_player);
  v11 = std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v12 = proto::WorldOwnerBlossomBriefInfoNotify::mutable_brief_info_list(v11);
  if ( !PlayerBlossomComp::fillBlossomBriefInfoList(BlossomComp, v12) )
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::WorldOwnerBlossomBriefInfoNotify>((const std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> *)(v3 + 128));
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v3 + 128), 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 128));
  }
  MatchComp = Player::getMatchComp(owner_player);
  if ( PlayerMatchComp::isInMatch(MatchComp) )
  {
    common::tools::perf::make_shared<proto::PlayerMatchInfoNotify>();
    v14 = Player::getMatchComp(owner_player);
    v15 = std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    PlayerMatchComp::fillPlayerMatchInfoNotify(v14, v15);
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchInfoNotify>((const std::shared_ptr<proto::PlayerMatchInfoNotify> *)(v3 + 128));
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v3 + 128), 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v3 + 128));
    std::shared_ptr<proto::PlayerMatchInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchInfoNotify> *const)(v3 + 96));
  }
  Player::getActivityComp(owner_player);
  PlayerActivityComp::findOpenningActivity<AsterActivity>((PlayerActivityComp *const)(v3 + 128));
  if ( std::operator!=<AsterActivity>(0LL, (const std::shared_ptr<AsterActivity> *)(v3 + 128)) )
  {
    v16 = std::__shared_ptr_access<AsterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AsterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    AsterActivity::notifyAsterMidCampInfo(v16, player);
  }
  GroupLinkComp = Player::getGroupLinkComp(owner_player);
  PlayerGroupLinkComp::sendGroupLinkBundleNotify(GroupLinkComp, player);
  PlayerWorld::notifyPlayerWorldSceneInfoList(this, player);
  proto::LevelTagDataNotify::LevelTagDataNotify((proto::LevelTagDataNotify *const)(v3 + 160));
  SceneComp = Player::getSceneComp(owner_player);
  PlayerSceneComp::fillLevelTagDataNotify(SceneComp, (proto::LevelTagDataNotify *)(v3 + 160));
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 160));
  proto::DeathZoneInfoNotify::DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v3 + 320));
  RegionalPlayComp = Player::getRegionalPlayComp(owner_player);
  PlayerRegionalPlayComp::fillDeathZoneDataNotify(RegionalPlayComp, (proto::DeathZoneInfoNotify *)(v3 + 320));
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 320));
  proto::DeshretObeliskChestInfoNotify::DeshretObeliskChestInfoNotify((proto::DeshretObeliskChestInfoNotify *const)(v3 + 400));
  v20 = Player::getSceneComp(owner_player);
  PlayerSceneComp::fillDeshretObeliskChestInfoNotify(v20, (proto::DeshretObeliskChestInfoNotify *)(v3 + 400));
  Player::sendProto(player, (const google::protobuf::Message *)(v3 + 400));
  proto::DeshretObeliskChestInfoNotify::~DeshretObeliskChestInfoNotify((proto::DeshretObeliskChestInfoNotify *const)(v3 + 400));
  proto::DeathZoneInfoNotify::~DeathZoneInfoNotify((proto::DeathZoneInfoNotify *const)(v3 + 320));
  proto::LevelTagDataNotify::~LevelTagDataNotify((proto::LevelTagDataNotify *const)(v3 + 160));
  std::shared_ptr<AsterActivity>::~shared_ptr((std::shared_ptr<AsterActivity> *const)(v3 + 128));
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> *const)(v3 + 64));
  proto::WorldAllRoutineTypeNotify::~WorldAllRoutineTypeNotify((proto::WorldAllRoutineTypeNotify *const)(v3 + 240));
  std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerDailyTaskNotify> *const)(v3 + 32));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1104: range 0000000015C5322A-0000000015C53B5D
PlayerWorld *__fastcall PlayerWorld::createPersonalScene(
        PlayerWorld *const this,
        std::map<unsigned int,std::shared_ptr<Scene>> *scene_id,
        int a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  std::shared_ptr<Scene> *v19; // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene> > >,bool> v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int val; // [rsp+24h] [rbp-11Ch] BYREF
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+28h] [rbp-118h]
  std::shared_ptr<Player> v30; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<Config> v31; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 8 uid:1124 48 4 13 scene_id:1103 64 16 10 timer:1105 96 16 15 player_ptr:1107 128 16 14 scene_ptr:1125";
  *(_QWORD *)(v3 + 16) = PlayerWorld::createPersonalScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v3 + 64));
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 96));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "createPersonalScene",
      1110);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v32, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v32);
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                         &v6->design_config.txt_config_mgr.scene_config_mgr,
                         *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( scene_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&scene_config_ptr->type);
      }
      if ( !SceneExcelConfigMgr::isPlayerScene(scene_config_ptr->type) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "createPersonalScene",
          1121);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v32,
               (const char (*)[27])"scene is not PlayerScene: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        *(_DWORD *)(v3 + 32) = Player::getUid(v9);
        std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)&v31, 0LL);
        std::shared_ptr<Player>::shared_ptr(&v30, (const std::shared_ptr<Player> *)(v3 + 96));
        SceneMgr::createScene(v3 + 128, (PlayerPtr *)*(unsigned int *)(v3 + 48), (HomePtr *)&v30, (uint32_t)&v31);
        std::shared_ptr<Player>::~shared_ptr(&v30);
        std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v31);
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/player_world.cpp",
            "createPersonalScene",
            1128);
          v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v32,
                  (const char (*)[30])"scene_ptr is null, scene_id: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v3 + 48));
          v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v32);
          std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
        }
        else
        {
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( Scene::init(v13) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/player_world.cpp",
              "createPersonalScene",
              1133);
            v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v32,
                    (const char (*)[33])"scene_ptr init failed, scene_id:");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 48));
            v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v32);
            std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
          }
          else
          {
            v17 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8();
            v18 = *(_QWORD *)v17 + 40LL;
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(unsigned __int64))v18)(v17) )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/player_world.cpp",
                "createPersonalScene",
                1138);
              v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v32,
                      (const char (*)[34])"scene_ptr start failed, scene_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v32);
              std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
            }
            else
            {
              v23 = std::map<unsigned int,std::shared_ptr<Scene>>::emplace<unsigned int &,std::shared_ptr<Scene>&>(
                      scene_id + 1,
                      (unsigned int *)(v3 + 48),
                      (std::shared_ptr<Scene> *)(v3 + 128),
                      (unsigned int *)&scene_id[1],
                      v19);
              if ( !v23.second )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/player_world.cpp",
                  "createPersonalScene",
                  1143);
                v24 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v32,
                        (const char (*)[31])"scene already exist, scene_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v32);
                std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/player_world.cpp",
                  "createPersonalScene",
                  1146);
                v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v32,
                        (const char (*)[31])"createPersonalScene cost time:");
                val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 64));
                common::milog::MiLogStream::operator<<<int,(int *)0>(v25, &val);
                common::milog::MiLogStream::~MiLogStream(&v32);
                std::shared_ptr<Scene>::shared_ptr(
                  (std::shared_ptr<Scene> *const)this,
                  (std::shared_ptr<Scene> *)(v3 + 128));
              }
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "createPersonalScene",
        1116);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v32,
             (const char (*)[29])"findSceneExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  if ( v33 == (char *)v3 )
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
  return this;
};

// Line 1151: range 0000000015C53B5E-0000000015C54208
void __cdecl PlayerWorld::onTimer(PlayerWorld *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Uid; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rsi
  bool v13; // dl
  unsigned __int64 v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::pointer v15; // rdx
  uint32_t *p_pre_enter_time; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::pointer v21; // rax
  uint32_t now; // [rsp+10h] [rbp-E0h]
  uint32_t pre_enter_time; // [rsp+14h] [rbp-DCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 owner_uid:1160 48 4 8 uid:1183 64 8 9 iter:1181 96 16 14 owner_ptr:1153";
  *(_QWORD *)(v2 + 16) = PlayerWorld::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  now = now_ms / 0x3E8;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "onTimer",
      1156);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v25, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 32) = Player::getUid(v5);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Uid = Player::getUid(v6);
    if ( !World::isPlayerIn(this, Uid) && World::getPlayerCount(this) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "onTimer",
        1164);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v25, (const char (*)[16])"[WORLD] owner: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v10,
              (const char (*)[34])" not in world, but player count: ");
      *(_DWORD *)(v2 + 48) = World::getPlayerCount(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    v12 = (((_BYTE)this - 44) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_rtt_notify_time_);
    }
    if ( now >= this->last_rtt_notify_time_ + 1 )
    {
      World::notifyAllPlayerRttInfo(this);
      v12 = (((_BYTE)this - 44) & 7u) + 3;
      v13 = *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_rtt_notify_time_ >> 3)
                                                             + 0x7FFF8000);
      if ( v13 )
        __asan_report_store4(&this->last_rtt_notify_time_, v12, v13);
      this->last_rtt_notify_time_ = now;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_location_notify_time_);
    }
    if ( now > this->last_location_notify_time_ + 5 )
    {
      World::notifyAllPlayerLocation(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_location_notify_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_location_notify_time_, v12, (_BYTE)this - 48);
      }
      this->last_location_notify_time_ = now;
      *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::begin(&this->slot_info_map_);
      while ( 1 )
      {
        __y._M_cur = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::end(&this->slot_info_map_)._M_cur;
        if ( !std::__detail::operator!=<std::pair<unsigned int const,WorldPlayerSlotInfo>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WorldPlayerSlotInfo>,false> *)(v2 + 64),
                &__y) )
          break;
        v14 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) <= 3 )
          v14 = __asan_report_load4(v14);
        *(_DWORD *)(v2 + 48) = *(_DWORD *)v14;
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        p_pre_enter_time = &v15->second.pre_enter_time;
        if ( *(_BYTE *)(((unsigned __int64)p_pre_enter_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_pre_enter_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_pre_enter_time >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(p_pre_enter_time);
        }
        pre_enter_time = v15->second.pre_enter_time;
        if ( *(_DWORD *)(v2 + 48) != *(_DWORD *)(v2 + 32)
          && !World::isPlayerIn(this, *(_DWORD *)(v2 + 48))
          && now > pre_enter_time + 300 )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/player_world.cpp",
            "onTimer",
            1187);
          v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v25,
                  (const char (*)[33])"[WORLD] erase player slot, uid: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 48));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" owner_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
          World::notifyPreEnterMpPlayer(
            this,
            *(_DWORD *)(v2 + 48),
            &v21->second.nickname,
            PlayerPreEnterMpNotify_State_TIMEOUT);
          *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,WorldPlayerSlotInfo>::erase(
                                                                                           &this->slot_info_map_,
                                                                                           *(std::unordered_map<unsigned int,WorldPlayerSlotInfo>::iterator *)(v2 + 64));
        }
        else
        {
          std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WorldPlayerSlotInfo>,false,false> *const)(v2 + 64));
        }
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v26 == (char *)v2 )
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

// Line 1201: range 0000000015C5420A-0000000015C547D6
int32_t __cdecl PlayerWorld::autoAdjustLevel(PlayerWorld *const this, uint32_t world_level_limit, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t level; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t old_level; // [rsp+14h] [rbp-BCh]
  const data::PlayerLevelLockExcelConfig *level_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 owner_uid:1202 64 4 17 expect_level:1209";
  *(_QWORD *)(v3 + 16) = PlayerWorld::autoAdjustLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = World::getOwnerUid(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  level = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->adjust_level_);
  }
  if ( world_level_limit == level + this->adjust_level_ )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "autoAdjustLevel",
      1206);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" level_:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->level_);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" adjust_level_:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->adjust_level_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])off_259B7600);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 64) = world_level_limit;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    v14 = this->level_;
    if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->adjust_level_);
    }
    if ( world_level_limit < v14 + this->adjust_level_ )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/player_world.cpp",
        "autoAdjustLevel",
        1218);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" level:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->level_);
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" expect_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      *(_DWORD *)(v3 + 64) = world_level_limit - this->adjust_level_;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
                         &v20->design_config.txt_config_mgr.player_config_mgr,
                         *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      old_level = this->level_;
      this->level_ = *(_DWORD *)(v3 + 64);
      PlayerWorld::onLevelChange(this, old_level, 1u, is_notify);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/player_world.cpp",
        "autoAdjustLevel",
        1224);
      v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v27,
              (const char (*)[31])"fndPlayerLevelLockExcelConfig:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
    }
  }
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
  return result;
};

// Line 1237: range 0000000015C547D8-0000000015C550A3
__int64 __fastcall PlayerWorld::manualAdjustLevel(PlayerWorld *const this, uint32_t expect_world_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  time_t Now; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // edi
  bool v20; // dl
  uint32_t v21; // ecx
  char v22; // al
  uint32_t v23; // ecx
  char v24; // al
  bool v25; // dl
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  __int64 result; // rax
  __int64 last_adjust_time; // [rsp+8h] [rbp-128h]
  uint32_t old_level; // [rsp+24h] [rbp-10Ch]
  const data::PlayerLevelLockExcelConfig *level_config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v40; // [rsp+30h] [rbp-100h] BYREF
  std::shared_ptr<Config> v41; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-D0h] BYREF
  char v44[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 22 world_level_limit:1244 48 4 9 pace:1245 64 4 14 owner_uid:1266 80 4 23 expect_world_le"
                        "vel:1236 96 16 15 player_ptr:1238";
  *(_QWORD *)(v2 + 16) = PlayerWorld::manualAdjustLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 80) = expect_world_level;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "manualAdjustLevel",
      1241);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v43, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v5 = -1;
    goto LABEL_35;
  }
  v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  BasicComp = Player::getBasicComp(v6);
  *(_DWORD *)(v2 + 32) = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getWorldLevelAdjustPace(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v40);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
  v10 = ConstValueExcelConfigMgr::getWorldLevelAdjustMinLimit(&v9->design_config.txt_config_mgr.const_value_config_mgr)
      + *(_DWORD *)(v2 + 48) > *(_DWORD *)(v2 + 32);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( v10 )
  {
    v5 = 165;
    goto LABEL_35;
  }
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_adjust_time_);
  }
  last_adjust_time = this->last_adjust_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
  v13 = Now <= last_adjust_time
             + 3600LL
             * ConstValueExcelConfigMgr::getWorldLevelAdjustCD(&v12->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( v13 )
  {
    v5 = 166;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ == *(_DWORD *)(v2 + 80) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "manualAdjustLevel",
      1256);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v43,
      (const char (*)[33])"same world level, no need adjust");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v5 = -1;
    goto LABEL_35;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
  v15 = *(unsigned int *)(v2 + 80);
  level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
                       &v14->design_config.txt_config_mgr.player_config_mgr,
                       v15);
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "manualAdjustLevel",
      1262);
    v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v43,
            (const char (*)[32])"findPlayerLevelLockExcelConfig:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v5 = -1;
    goto LABEL_35;
  }
  v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  *(_DWORD *)(v2 + 64) = Player::getUid(v18);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  if ( *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 32) )
  {
    this->level_ = *(_DWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->adjust_level_, v15, (_BYTE)this + 0x80);
    }
    this->adjust_level_ = 0;
    v19 = common::tools::TimeUtils::getNow();
    v20 = *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3)
                                                            + 0x7FFF8000);
    if ( v20 )
    {
      v19 = (_DWORD)this + 380;
      __asan_report_store4(&this->last_adjust_time_, (((_BYTE)this + 124) & 7u) + 3, v20);
    }
LABEL_25:
    this->last_adjust_time_ = v19;
    PlayerWorld::onLevelChange(this, old_level, 2u, 1);
    v5 = 0;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 32) )
  {
    v21 = *(_DWORD *)(v2 + 80);
    v22 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    if ( v22 != 0 && v22 <= 3 )
    {
      LOBYTE(v15) = v22 != 0;
      __asan_report_store4(&this->level_, v15, (_BYTE)this + 120);
    }
    this->level_ = v21;
    v23 = *(_DWORD *)(v2 + 48);
    v24 = *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      LOBYTE(v15) = v24 != 0;
      __asan_report_store4(&this->adjust_level_, v15, (_BYTE)this + 0x80);
    }
    this->adjust_level_ = v23;
    v19 = common::tools::TimeUtils::getNow();
    v25 = *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3)
                                                            + 0x7FFF8000);
    if ( v25 )
    {
      v19 = (_DWORD)this + 380;
      __asan_report_store4(&this->last_adjust_time_, (((_BYTE)this + 124) & 7u) + 3, v25);
    }
    goto LABEL_25;
  }
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/player_world.cpp",
    "manualAdjustLevel",
    1287);
  v26 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v43, (const char (*)[5])"uid:");
  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 64));
  v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])" world_level:");
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->level_);
  v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v29, (const char (*)[21])" expect_world_level:");
  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 80));
  v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v31, (const char (*)[20])" world_level_limit:");
  v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 32));
  v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])" pace:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v43);
  v5 = -1;
LABEL_35:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  result = v5;
  if ( v44 == (char *)v2 )
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

// Line 1294: range 0000000015C550A4-0000000015C551A0
uint32_t __cdecl PlayerWorld::getAdjustCDOverTime(const PlayerWorld *const this)
{
  uint32_t v1; // ebx
  uint32_t last_adjust_time; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_adjust_time_);
  }
  if ( !this->last_adjust_time_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_adjust_time_);
  }
  last_adjust_time = this->last_adjust_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v1 = 3600 * ConstValueExcelConfigMgr::getWorldLevelAdjustCD(&v3->design_config.txt_config_mgr.const_value_config_mgr)
     + last_adjust_time;
  std::shared_ptr<Config>::~shared_ptr(v5);
  return v1;
};

// Line 1305: range 0000000015C551A2-0000000015C55299
void __cdecl PlayerWorld::clearAdjustCDByGm(PlayerWorld *const this)
{
  bool v1; // dl
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_adjust_time_ >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->last_adjust_time_, (((_BYTE)this + 124) & 7u) + 3, v1);
  this->last_adjust_time_ = 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "clearAdjustCDByGm",
    1307);
  v2 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v5, (const char (*)[11])"owner_uid:");
  val = World::getOwnerUid(this);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v3, (const char (*)[19])" clearAdjustCDByGm");
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 1312: range 0000000015C5529A-0000000015C55638
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerWorld::adjustLevelByGm(PlayerWorld *const this, uint32_t world_level_limit, bool is_force)
{
  GameserverService *v3; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t old_level; // [rsp+18h] [rbp-48h]
  uint32_t pace; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  if ( is_force || world_level_limit > this->level_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->level_, *(_QWORD *)&world_level_limit, (_BYTE)this + 120);
    }
    this->level_ = world_level_limit;
    if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->adjust_level_, *(_QWORD *)&world_level_limit, (_BYTE)this + 0x80);
    }
    this->adjust_level_ = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    if ( world_level_limit == this->level_ )
    {
      v3 = ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v9);
      v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
      pace = ConstValueExcelConfigMgr::getWorldLevelAdjustPace(&v4->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( pace > this->level_ )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/player_world.cpp",
          "adjustLevelByGm",
          1326);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"level_ < pace!!!");
        common::milog::MiLogStream::~MiLogStream(&v10);
        return -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      this->level_ -= pace;
      if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->adjust_level_, v3, (_BYTE)this + 0x80);
      }
      this->adjust_level_ = pace;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  if ( old_level != this->level_ )
    PlayerWorld::onLevelChange(this, old_level, 3u, 1);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "adjustLevelByGm",
    1338);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"adjustLevelByGm!!!");
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 1343: range 0000000015C5563A-0000000015C55748
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerWorld::recoverLevelByMuip(PlayerWorld *const this, uint32_t world_level_limit)
{
  uint32_t old_level; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  if ( world_level_limit == this->level_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  this->level_ = world_level_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->adjust_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->adjust_level_, *(_QWORD *)&world_level_limit, (_BYTE)this + 0x80);
  }
  this->adjust_level_ = 0;
  PlayerWorld::onLevelChange(this, old_level, 4u, 1);
  return 0;
};

// Line 1357: range 0000000015C55904-0000000015C5630A
void __fastcall PlayerWorld::onLevelChange(
        PlayerWorld *const this,
        uint32_t old_level,
        uint32_t reason,
        __int8 is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t AdjustCDOverTime; // eax
  proto::PropValue *i; // r14
  void (__fastcall **vptr_MessageLite)(proto::PropValue *); // rax
  Player *v15; // rax
  Player *v16; // rcx
  Player *v17; // rax
  PlayerEventComp *EventComp; // r14
  Player *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  Player *v24; // rax
  PlayerBasicComp *v25; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  Player *v28; // rax
  PlayerBasicComp *v29; // rax
  uint32_t Exp; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Player *v32; // r14
  std::string v33; // [rsp+0h] [rbp-200h]
  unsigned int val; // [rsp+38h] [rbp-1C8h] BYREF
  proto::PropChangeReason prop_change_reason; // [rsp+3Ch] [rbp-1C4h]
  std::shared_ptr<PlayerWorldLevelChangeEvent> __r; // [rsp+40h] [rbp-1C0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-1A0h] BYREF
  proto::PropValue value; // [rsp+80h] [rbp-180h] BYREF
  proto::PropValue v41; // [rsp+B0h] [rbp-150h] BYREF
  proto::PropValue v42; // [rsp+E0h] [rbp-120h] BYREF
  char v43[240]; // [rsp+110h] [rbp-F0h] BYREF

  v33._anon_0._M_local_buf[12] = is_notify;
  v4 = (unsigned __int64)v43;
  v33._M_string_length = (std::string::size_type)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 11 holder:1406 48 4 14 old_level:1356 64 16 15 player_ptr:1358 96 16 20 levelup_log_ptr:1"
                        "407 128 24 20 notify_prop_vec:1374";
  *(_QWORD *)(v4 + 16) = PlayerWorld::onLevelChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = old_level;
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v4 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/player_world.cpp",
      "onLevelChange",
      1361);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v39, (const char (*)[19])"getOwnPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "onLevelChange",
      1365);
    v33._anon_0._M_allocated_capacity = (std::string::size_type)common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                                                  &v39,
                                                                  (const char (*)[12])"owner_uid: ");
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    val = Player::getUid(v7);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           (common::milog::MiLogStream *const)v33._anon_0._M_allocated_capacity,
           &val);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" level ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])"->");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->level_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    if ( v33._anon_0._M_local_buf[12] )
    {
      v33._anon_0._M_allocated_capacity = (std::string::size_type)this;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      buildIntProp(&value, 1u, this->level_);
      World::notifyWorldPropData(this, &value);
      proto::PropValue::~PropValue(&value);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    buildIntProp(&v41, 0x2723u, this->level_);
    AdjustCDOverTime = PlayerWorld::getAdjustCDOverTime(this);
    buildIntProp(&v42, 0x2738u, AdjustCDOverTime);
    std::allocator<proto::PropValue>::allocator((std::allocator<proto::PropValue> *const)(v4 + 32));
    std::vector<proto::PropValue>::vector(
      (std::vector<proto::PropValue> *const)(v4 + 128),
      (std::initializer_list<proto::PropValue>)__PAIR128__(2LL, &v41),
      (const std::vector<proto::PropValue>::allocator_type *)(v4 + 32));
    std::allocator<proto::PropValue>::~allocator((std::allocator<proto::PropValue> *const)(v4 + 32));
    for ( i = (proto::PropValue *)v43; i != &v41; (*vptr_MessageLite)(i) )
    {
      if ( *(_BYTE *)(((unsigned __int64)--i >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vptr_MessageLite = (void (__fastcall **)(proto::PropValue *))i->_vptr_MessageLite;
      if ( *(_BYTE *)(((unsigned __int64)i->_vptr_MessageLite >> 3) + 0x7FFF8000) )
        vptr_MessageLite = (void (__fastcall **)(proto::PropValue *))__asan_report_load8();
    }
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Player::notifyPlayerPropList(v15, (const std::vector<proto::PropValue> *)(v4 + 128));
    prop_change_reason = PROP_CHANGE_FINISH_QUEST;
    if ( reason == 2 )
      prop_change_reason = PROP_CHANGE_MANUAL_ADJUST_WORLD_LEVEL;
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    Player::notifyPlayerPropChange(
      v16,
      PROP_PLAYER_WORLD_LEVEL,
      (float)*(int *)(v4 + 48),
      (float)(int)this->level_,
      prop_change_reason);
    std::function<ForeachPolicy ()(Scene &)>::function<PlayerWorld::onLevelChange(unsigned int,unsigned int,bool)::{lambda(Scene &)#1},void,void>(
      (std::function<ForeachPolicy(Scene&)> *const)&v39,
      (PlayerWorld::onLevelChange::<lambda(Scene&)>)this);
    World::foreachScene(this, (std::function<ForeachPolicy(Scene&)> *)&v39);
    std::function<ForeachPolicy ()(Scene &)>::~function((std::function<ForeachPolicy(Scene&)> *const)&v39);
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    EventComp = Player::getEventComp(v17);
    common::tools::perf::make_shared<PlayerWorldLevelChangeEvent,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      &this->level_,
      (unsigned int *)(v4 + 48),
      &this->level_);
    std::shared_ptr<BaseEvent>::shared_ptr<PlayerWorldLevelChangeEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<PlayerWorldLevelChangeEvent>::~shared_ptr(&__r);
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    BasicComp = Player::getBasicComp(v19);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x839u, v33);
    std::string::~string(&v39);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyWorldLevelAdd>();
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyWorldLevelAdd::set_world_level_before(v21, *(_DWORD *)(v4 + 48));
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    proto_log::PlayerLogBodyWorldLevelAdd::set_world_level_after(v22, this->level_);
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v25 = Player::getBasicComp(v24);
    Level = PlayerBasicComp::getLevel(v25);
    proto_log::PlayerLogBodyWorldLevelAdd::set_level(v23, Level);
    v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v29 = Player::getBasicComp(v28);
    Exp = PlayerBasicComp::getExp(v29);
    proto_log::PlayerLogBodyWorldLevelAdd::set_exp(v27, Exp);
    v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyWorldLevelAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    proto_log::PlayerLogBodyWorldLevelAdd::set_reason(v31, reason);
    v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr,
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyWorldLevelAdd,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&__r,
      (const std::shared_ptr<proto_log::PlayerLogBodyWorldLevelAdd> *)(v4 + 96));
    Player::printStatLog(v32, (MessagePtr *)&__r, (MessagePtr *)&p_event_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyWorldLevelAdd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyWorldLevelAdd> *const)(v4 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v4 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  if ( v33._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1388: range 0000000015C5574A-0000000015C55902
ForeachPolicy __cdecl PlayerWorld::onLevelChange(unsigned int,unsigned int,bool)::{lambda(Scene &)#1}::operator()(
        const PlayerWorld::onLevelChange::<lambda(Scene&)> *const __closure,
        Scene *scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerWorldScene *p_level; // rdi
  PlayerWorld *this; // rax
  char v7; // dl
  ForeachPolicy result; // eax
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 world_scene_ptr:1394";
  *(_QWORD *)(v2 + 16) = PlayerWorld::onLevelChange(unsigned int,unsigned int,bool)::{lambda(Scene &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( Scene::getSceneType(scene) == SCENE_WORLD )
  {
    toPtr<PlayerWorldScene,Scene>((Scene *)(v2 + 32));
    if ( !std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
    {
      p_level = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      {
        p_level = (PlayerWorldScene *)__closure;
        __asan_report_load8();
      }
      this = __closure->__this;
      v7 = *(_BYTE *)(((unsigned __int64)&__closure->__this->level_ >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        p_level = (PlayerWorldScene *)&__closure->__this->level_;
        this = (PlayerWorld *)__asan_report_load4(p_level);
      }
      PlayerWorldScene::refreshMonsterLevel(p_level, this->level_);
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v10 == (char *)v2 )
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

// Line 1418: range 0000000015C5630C-0000000015C5652D
int32_t __cdecl PlayerWorld::notifyAllWorldPropData(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  PropValueMap *prop_map; // [rsp+18h] [rbp-D8h]
  char v8[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 11 notify:1419";
  *(_QWORD *)(v2 + 16) = PlayerWorld::notifyAllWorldPropData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::WorldDataNotify::WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  prop_map = proto::WorldDataNotify::mutable_world_prop_map((proto::WorldDataNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  appendIntPropValue(prop_map, 1u, this->level_);
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_mode_);
  appendIntPropValue(prop_map, 2u, this->is_in_mp_mode_);
  v5 = Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::WorldDataNotify::~WorldDataNotify((proto::WorldDataNotify *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 1428: range 0000000015C5652E-0000000015C56769
int32_t __cdecl PlayerWorld::notifyWorldData(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t Uid; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  Player *v9; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 owner_player_ptr:1438";
  *(_QWORD *)(v2 + 16) = PlayerWorld::notifyWorldData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Uid = Player::getUid(player);
  if ( !World::isPlayerIn(this, Uid) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/player_world.cpp",
      "notifyWorldData",
      1431);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])off_259B7CC0);
    val = Player::getUid(player);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])off_259B7D00);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v8 = -1;
  }
  else
  {
    World::notifyAllPlayerInfo(this);
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerWorld::notifyWorldAndOwnerData(this, v9, player);
    }
    v8 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  result = v8;
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

// Line 1448: range 0000000015C5676A-0000000015C56A5B
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWorld::setIsInMpMode(PlayerWorld *const this, bool is_in_mp_mode)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Player *v5; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int __args_0; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<WorldMpModeChangeEvent> __r; // [rsp+20h] [rbp-C0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-B0h] BYREF
  proto::PropValue value; // [rsp+40h] [rbp-A0h] BYREF
  char v12[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 owner_player_ptr:1457";
  *(_QWORD *)(v2 + 16) = PlayerWorld::setIsInMpMode;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_mode_);
  if ( is_in_mp_mode != this->is_in_mp_mode_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_in_mp_mode_, is_in_mp_mode, &this->is_in_mp_mode_);
    this->is_in_mp_mode_ = is_in_mp_mode;
    buildIntProp(&value, 2u, this->is_in_mp_mode_);
    World::notifyWorldPropData(this, &value);
    proto::PropValue::~PropValue(&value);
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 32));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v5);
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __args_0 = Player::getUid(v7);
      common::tools::perf::make_shared<WorldMpModeChangeEvent,unsigned int>((unsigned int *)&__r, &__args_0);
      std::shared_ptr<BaseEvent>::shared_ptr<WorldMpModeChangeEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<WorldMpModeChangeEvent>::~shared_ptr(&__r);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
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
};

// Line 1465: range 0000000015C56A5C-0000000015C56ACE
bool __cdecl PlayerWorld::isHasOtherPlayerPreEnter(const PlayerWorld *const this)
{
  bool result; // al
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  result = 1;
  if ( std::unordered_map<unsigned int,WorldPlayerSlotInfo>::size(&this->slot_info_map_) <= 1 )
  {
    if ( std::unordered_map<unsigned int,WorldPlayerSlotInfo>::size(&this->slot_info_map_) != 1 )
      return 0;
    value = World::getOwnerUid(this);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WorldPlayerSlotInfo> const,unsigned int>(
           &this->slot_info_map_,
           &value) )
    {
      return 0;
    }
  }
  return result;
};

// Line 1470: range 0000000015C56AD0-0000000015C56B90
bool __cdecl PlayerWorld::isMpToSingleValid(PlayerWorld *const this)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::unordered_map<unsigned int,WorldPlayerInfo>::size(&this->player_info_map_) <= 1
    && !PlayerWorld::isHasOtherPlayerPreEnter(this) )
  {
    return 1;
  }
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "isMpToSingleValid",
    1473);
  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
    &v3,
    (const char (*)[45])"player_info_map_ or slot_info_map_ not empty");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 1481: range 0000000015C56B92-0000000015C56ECE
void __fastcall PlayerWorld::onCreateRewardPoint(
        PlayerWorld *const this,
        uint32_t group_id,
        uint32_t config_id,
        const std::set<unsigned int> *qualify_uid_set,
        uint32_t create_time)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  uint32_t v16; // ecx
  char v17; // dl
  bool v18; // dl
  uint32_t v19; // ecx
  char v20; // al
  WorldRewardPointInfo *reward_point; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-C0h] BYREF
  char v26[160]; // [rsp+50h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 13 group_id:1480 64 4 14 config_id:1480 80 4 16 create_time:1480 96 8 21 reward_point_key:1483";
  *(_QWORD *)(v5 + 16) = PlayerWorld::onCreateRewardPoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116352;
  *(_DWORD *)(v5 + 48) = group_id;
  *(_DWORD *)(v5 + 64) = config_id;
  *(_DWORD *)(v5 + 80) = create_time;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "onCreateRewardPoint",
    1482);
  v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v25,
         (const char (*)[32])"onCreateRewardPoint, group_id: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" ,config_id: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 64));
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" ,create_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 80));
  common::milog::MiLogStream::~MiLogStream(&v25);
  *(_QWORD *)(v5 + 96) = PlayerWorld::genRewardPointKey(this, *(_DWORD *)(v5 + 48), *(_DWORD *)(v5 + 64));
  v13 = (char *)(v5 + 96);
  reward_point = std::map<unsigned long,WorldRewardPointInfo>::operator[](
                   &this->reward_point_map_,
                   (const std::map<long unsigned int,WorldRewardPointInfo>::key_type *)(v5 + 96));
  v14 = *(_DWORD *)(v5 + 48);
  v15 = *(_BYTE *)(((unsigned __int64)reward_point >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(reward_point, v13, (_BYTE)reward_point);
  }
  reward_point->group_id = v14;
  v16 = *(_DWORD *)(v5 + 64);
  v17 = *(_BYTE *)(((unsigned __int64)&reward_point->config_id >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v17 != 0;
  v18 = v17 != 0 && (char)((((_BYTE)reward_point + 4) & 7) + 3) >= v17;
  if ( v18 )
    __asan_report_store4(&reward_point->config_id, v13, v18);
  reward_point->config_id = v16;
  v19 = *(_DWORD *)(v5 + 80);
  v20 = *(_BYTE *)(((unsigned __int64)&reward_point->create_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v13) = v20 != 0;
    __asan_report_store4(&reward_point->create_time, v13, (_BYTE)reward_point + 8);
  }
  reward_point->create_time = v19;
  std::set<unsigned int>::operator=(&reward_point->qualify_uid_set, qualify_uid_set);
  std::set<unsigned int>::operator=(&reward_point->remain_uid_set, qualify_uid_set);
  if ( v26 == (char *)v5 )
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
};

// Line 1493: range 0000000015C56ED0-0000000015C57233
void __fastcall PlayerWorld::onInteractRewardPoint(
        PlayerWorld *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t player_uid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,WorldRewardPointInfo> >::pointer v15; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,WorldRewardPointInfo> >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  WorldRewardPointInfo *reward_point; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-E0h] BYREF
  char v21[192]; // [rsp+50h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 group_id:1492 64 4 14 config_id:1492 80 4 15 player_uid:1492 96 8 21 reward_point_key:"
                        "1495 128 8 9 iter:1496";
  *(_QWORD *)(v4 + 16) = PlayerWorld::onInteractRewardPoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = config_id;
  *(_DWORD *)(v4 + 80) = player_uid;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "onInteractRewardPoint",
    1494);
  v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v20,
         (const char (*)[34])"onInteractRewardPoint, group_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" ,config_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" ,player_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
  common::milog::MiLogStream::~MiLogStream(&v20);
  *(_QWORD *)(v4 + 96) = PlayerWorld::genRewardPointKey(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64));
  *(std::map<long unsigned int,WorldRewardPointInfo>::iterator *)(v4 + 128) = std::map<unsigned long,WorldRewardPointInfo>::find(
                                                                                &this->reward_point_map_,
                                                                                (const std::map<long unsigned int,WorldRewardPointInfo>::key_type *)(v4 + 96));
  __y._M_node = std::map<unsigned long,WorldRewardPointInfo>::end(&this->reward_point_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,WorldRewardPointInfo> >::_Self *)(v4 + 128),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/player_world.cpp",
      "onInteractRewardPoint",
      1499);
    v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v20,
            (const char (*)[37])"find reward point failed, group_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" ,config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned long const,WorldRewardPointInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,WorldRewardPointInfo> > *const)(v4 + 128));
    reward_point = &v15->second;
    std::set<unsigned int>::erase(&v15->second.remain_uid_set, (const std::set<unsigned int>::key_type *)(v4 + 80));
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1508: range 0000000015C57234-0000000015C57417
void __fastcall PlayerWorld::onDestroyRewardPoint(PlayerWorld *const this, uint32_t group_id, uint32_t config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 group_id:1507 48 4 14 config_id:1507 64 8 21 reward_point_key:1510";
  *(_QWORD *)(v3 + 16) = PlayerWorld::onDestroyRewardPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = group_id;
  *(_DWORD *)(v3 + 48) = config_id;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/player_world.cpp",
    "onDestroyRewardPoint",
    1509);
  v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v10,
         (const char (*)[33])"onDestroyRewardPoint, group_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,config_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v10);
  *(_QWORD *)(v3 + 64) = PlayerWorld::genRewardPointKey(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
  std::map<unsigned long,WorldRewardPointInfo>::erase(
    &this->reward_point_map_,
    (const std::map<long unsigned int,WorldRewardPointInfo>::key_type *)(v3 + 64));
  if ( v11 == (char *)v3 )
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

// Line 1515: range 0000000015C57418-0000000015C5768A
__int64 __fastcall PlayerWorld::getRewardPointLatestReservedTimeForPlayer(PlayerWorld *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  uint32_t lastest_time; // [rsp+10h] [rbp-B0h]
  uint32_t limit_time; // [rsp+14h] [rbp-ACh]
  uint32_t now; // [rsp+18h] [rbp-A8h]
  uint32_t reserved_time; // [rsp+1Ch] [rbp-A4h]
  std::map<long unsigned int,WorldRewardPointInfo>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::map<long unsigned int,WorldRewardPointInfo>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::map<long unsigned int,WorldRewardPointInfo> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<long unsigned int const,WorldRewardPointInfo> *v14; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<long unsigned int const,WorldRewardPointInfo> >::type *_; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<long unsigned int const,WorldRewardPointInfo> >::type *reward_point; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-70h] BYREF
  char v18[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 player_uid:1514";
  *(_QWORD *)(v2 + 16) = PlayerWorld::getRewardPointLatestReservedTimeForPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = player_uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  limit_time = ConstValueExcelConfigMgr::getMpRewardReservedTime(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  lastest_time = 0;
  now = common::tools::TimeUtils::getNow();
  __for_range = &this->reward_point_map_;
  __for_begin._M_node = std::map<unsigned long,WorldRewardPointInfo>::begin(&this->reward_point_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,WorldRewardPointInfo>::end(&this->reward_point_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned long const,WorldRewardPointInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,WorldRewardPointInfo>(v14);
    reward_point = (std::tuple_element<1,const std::pair<long unsigned int const,WorldRewardPointInfo> >::type *)std::get<1ul,unsigned long const,WorldRewardPointInfo>(v14);
    if ( std::set<unsigned int>::count(
           &reward_point->remain_uid_set,
           (const std::set<unsigned int>::key_type *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&reward_point->create_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_point->create_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_point->create_time);
      }
      reserved_time = reward_point->create_time + limit_time;
      if ( reserved_time > now && reserved_time > lastest_time )
        lastest_time = reward_point->create_time + limit_time;
    }
    std::_Rb_tree_iterator<std::pair<unsigned long const,WorldRewardPointInfo>>::operator++(&__for_begin);
  }
  result = lastest_time;
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

// Line 1536: range 0000000015C577E2-0000000015C579D2
uint32_t __cdecl PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer(PlayerWorld *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer::<lambda(Player&)> v6; // [rsp-20h] [rbp-F0h]
  __int64 __f; // [rsp+20h] [rbp-B0h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v9[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 lastest_time:1543";
  *(_QWORD *)(v1 + 16) = PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_mode_);
  if ( !this->is_in_mp_mode_ || World::getPlayerCount(this) == 1 )
  {
    result = 0;
  }
  else
  {
    *(_DWORD *)(v1 + 32) = 0;
    LODWORD(__f) = World::getOwnerUid(this);
    v6.__lastest_time = (uint32_t *)(v1 + 32);
    v6.__this = this;
    *(_QWORD *)&v6.__owner_uid = __f;
    std::function<ForeachPolicy ()(Player &)>::function<PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      v6);
    World::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    result = *(_DWORD *)(v1 + 32);
  }
  if ( v9 == (char *)v1 )
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

// Line 1545: range 0000000015C5768C-0000000015C577E1
ForeachPolicy __cdecl PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer(void)::{lambda(Player &)#1}::operator()(
        const PlayerWorld::getRewardPointLatestReservedTimeForAllPlayer::<lambda(Player&)> *const __closure,
        Player *target_player)
{
  __int64 v3; // rsi
  uint32_t *lastest_time; // rdx
  uint32_t *v5; // rdx
  char v6; // cl
  uint32_t target_uid; // [rsp+18h] [rbp-8h]
  uint32_t reserved_time; // [rsp+1Ch] [rbp-4h]

  target_uid = Player::getUid(target_player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( target_uid == __closure->__owner_uid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = target_uid;
  reserved_time = PlayerWorld::getRewardPointLatestReservedTimeForPlayer(__closure->__this, target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__lastest_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lastest_time = __closure->__lastest_time;
  if ( *(_BYTE *)(((unsigned __int64)lastest_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lastest_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lastest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__lastest_time);
  }
  if ( reserved_time > *lastest_time )
  {
    v5 = __closure->__lastest_time;
    v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v6 )
    {
      LOBYTE(v3) = v6 != 0;
      __asan_report_store4(__closure->__lastest_time, v3, (_BYTE)v5);
    }
    *v5 = reserved_time;
  }
  return 0;
};

// Line 1566: range 0000000015C579D4-0000000015C57DC5
void __cdecl PlayerWorld::fillPlayerWorldSceneInfoListNotify(
        PlayerWorld *const this,
        proto::PlayerWorldSceneInfoListNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool IsLocked; // al
  Scene *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  google::protobuf::uint32 *v11; // rdx
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  std::map<unsigned int,std::shared_ptr<Scene>> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,std::shared_ptr<Scene> > *v17; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *scene_ptr; // [rsp+58h] [rbp-B8h]
  proto::PlayerWorldSceneInfo *scene_info; // [rsp+60h] [rbp-B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  char v22[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 world_scene_ptr:1571 64 24 21 scene_tag_id_vec:1577";
  *(_QWORD *)(v2 + 16) = PlayerWorld::fillPlayerWorldSceneInfoListNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  __for_range = &this->scene_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::begin(&this->scene_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Scene>>::end(&this->scene_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::shared_ptr<Scene>>(v17);
    scene_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Scene> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Scene>>(v17);
    if ( std::operator!=<Scene>(0LL, scene_ptr) )
    {
      v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
      if ( Scene::getSceneType(v5) == SCENE_WORLD )
      {
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
        if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
        {
          scene_info = proto::PlayerWorldSceneInfoListNotify::add_info_list(notify);
          if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(scene_id);
          }
          proto::PlayerWorldSceneInfo::set_scene_id(scene_info, *scene_id);
          v7 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          IsLocked = PlayerWorldScene::getIsLocked(v7);
          proto::PlayerWorldSceneInfo::set_is_locked(scene_info, IsLocked);
          v9 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Scene::getActiveSceneTagList((std::vector<unsigned int> *)(v2 + 64), v9);
          __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
          __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
          {
            v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            proto::PlayerWorldSceneInfo::add_scene_tag_id_list(scene_info, *v11);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Scene>>>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v2 )
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

// Line 1588: range 0000000015C57DC6-0000000015C57F1A
void __cdecl PlayerWorld::notifyPlayerWorldSceneInfoList(PlayerWorld *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::PlayerWorldSceneInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::shared_ptr<proto::PlayerWorldSceneInfoListNotify> __r; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 34 player_world_scene_notify_ptr:1589";
  *(_QWORD *)(v2 + 16) = PlayerWorld::notifyPlayerWorldSceneInfoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerWorldSceneInfoListNotify>();
  v5 = std::__shared_ptr_access<proto::PlayerWorldSceneInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerWorldSceneInfoListNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  PlayerWorld::fillPlayerWorldSceneInfoListNotify(this, v5);
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerWorldSceneInfoListNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerWorldSceneInfoListNotify>::~shared_ptr((std::shared_ptr<proto::PlayerWorldSceneInfoListNotify> *const)(v2 + 32));
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
