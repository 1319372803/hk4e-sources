// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/duel_heart_gallery.cpp

// Line 20: range 00000000179DB19C-00000000179DB8DD
void __cdecl DuelHeartGallery::onStop(DuelHeartGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // ecx
  std::__shared_ptr_access<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_difficulty; // rdi
  uint32_t difficulty; // esi
  unsigned int cost_time; // [rsp+14h] [rbp-11Ch]
  DuelHeartDungeonContext *context; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-110h] BYREF
  char v17[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 6 now:48 64 12 14 context_opt:27 96 16 20 dungeon_scene_ptr:21 128 16 13 player_ptr:35 16"
                        "0 16 15 activity_ptr:41";
  *(_QWORD *)(v2 + 16) = DuelHeartGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::enable_shared_from_this<Scene>::shared_from_this((std::enable_shared_from_this<Scene> *const)(v2 + 160));
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 96));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/duel_heart_gallery.cpp",
      "onStop",
      24);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v16, (const char (*)[25])off_26273F40);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(std::optional<DuelHeartDungeonContext> *)(v2 + 64) = DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(v5);
    if ( !std::optional<DuelHeartDungeonContext>::has_value((const std::optional<DuelHeartDungeonContext> *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/duel_heart_gallery.cpp",
        "onStop",
        30);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v16, (const char (*)[42])off_26273F80);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      context = std::optional<DuelHeartDungeonContext>::value((std::optional<DuelHeartDungeonContext> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v2 + 128));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/duel_heart_gallery.cpp",
          "onStop",
          38);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"player is null");
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Player::getActivityComp(v6);
        PlayerActivityComp::findOpenningActivity<DuelHeartActivity>((PlayerActivityComp *const)(v2 + 160));
        if ( std::operator==<DuelHeartActivity>((const std::shared_ptr<DuelHeartActivity> *)(v2 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/duel_heart_gallery.cpp",
            "onStop",
            44);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v16,
            (const char (*)[24])"activity is not opening");
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 48) = Scene::getSceneTimeSeconds(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( this->start_time_ <= *(_DWORD *)(v2 + 48) )
          {
            v10 = *(_DWORD *)(v2 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            cost_time = v10 - this->start_time_;
            p_difficulty = std::__shared_ptr_access<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                    + 0x7FFF8000) )
            {
              p_difficulty = (std::__shared_ptr_access<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&context->difficulty;
              __asan_report_load4();
            }
            difficulty = context->difficulty;
            if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
            {
              p_difficulty = (std::__shared_ptr_access<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)context;
              __asan_report_load4();
            }
            DuelHeartActivity::gallerySettle(p_difficulty, context->level_id, difficulty, cost_time, reason);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/duel_heart_gallery.cpp",
              "onStop",
              51);
            v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   &v16,
                   (const char (*)[14])"start_time_: ");
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->start_time_);
            v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", now: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v16);
          }
        }
        std::shared_ptr<DuelHeartActivity>::~shared_ptr((std::shared_ptr<DuelHeartActivity> *const)(v2 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  if ( v17 == (char *)v2 )
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
};
