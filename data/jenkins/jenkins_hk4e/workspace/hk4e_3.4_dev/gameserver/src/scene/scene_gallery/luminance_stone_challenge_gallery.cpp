// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp

// Line 23: range 0000000016884E28-0000000016884FA1
void __cdecl LuminanceStoneChallengeGallery::toClient(
        LuminanceStoneChallengeGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryLuminanceStoneChallengeInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_luminance_stone_challenge_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryLuminanceStoneChallengeInfo::set_score(detail_info, this->score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryLuminanceStoneChallengeInfo::set_kill_monster_count(detail_info, this->kill_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryLuminanceStoneChallengeInfo::set_kill_special_monster_count(
    detail_info,
    this->kill_special_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryLuminanceStoneChallengeInfo::set_clean_mud_count(detail_info, this->clean_mud_count_);
};

// Line 33: range 0000000016884FA2-00000000168853E8
void __cdecl LuminanceStoneChallengeGallery::onStart(LuminanceStoneChallengeGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  LuminanceStoneChallengeGallery *v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::key_type __x; // [rsp+1Ch] [rbp-A4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self v14; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 owner_player_ptr:40";
  *(_QWORD *)(v1 + 16) = LuminanceStoneChallengeGallery::onStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) != 1 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "onStart",
      37);
    v4 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v16,
           (const char (*)[59])"[Luminance Stone] gallery player count != 1. player count:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, LuminanceStoneChallengeGallery *))v8)(v1 + 32, v7);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "onStart",
      43);
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v16,
           (const char (*)[48])"[Luminance Stone] getOwnPlayer fail! cur_scene:");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v9, this->scene_);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    val = (unsigned __int64)std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    __x = Player::getUid(v12);
    v14._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::find(&this->player_info_map_, &__x)._M_node;
    if ( std::operator==(
           &v14,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&val) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
        "onStart",
        49);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        &v16,
        (const char (*)[53])"[Luminance Stone] cannot find host player in gallery");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    LuminanceStoneChallengeGallery::clearGalleryData(this);
    LuminanceStoneChallengeGallery::printGalleryStartLog(this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 56: range 00000000168853EA-0000000016885959
void __cdecl LuminanceStoneChallengeGallery::onStop(
        LuminanceStoneChallengeGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  LuminanceStoneChallengeGallery *v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // r14d
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  proto::LuminanceStoneChallengeGallerySettleInfo *gallery_settle_info; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:57 64 16 12 event_ptr:67";
  *(_QWORD *)(v2 + 16) = LuminanceStoneChallengeGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, LuminanceStoneChallengeGallery *))v6)(v2 + 32, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "onStop",
      60);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v12,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    if ( reason != GALLERY_STOP_CLIENT_INTERRUPT && reason != GALLERY_STOP_TIMEUP )
      goto LABEL_26;
    common::tools::perf::make_shared<LuminanceStoneChallengeGallerySettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      &this->gallery_id_);
    if ( std::operator==<LuminanceStoneChallengeGallerySettleEvent>(
           0LL,
           (const std::shared_ptr<LuminanceStoneChallengeGallerySettleEvent> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
        "onStop",
        70);
      common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
        &v12,
        (const char (*)[86])"[Luminance Stone Challenge] make LuminanceStoneChallengeGallerySettleEvent ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v7 = 0;
    }
    else
    {
      gallery_settle_info = &std::__shared_ptr_access<LuminanceStoneChallengeGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuminanceStoneChallengeGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->gallery_settle_info;
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeGallerySettleInfo::set_gallery_id(gallery_settle_info, this->gallery_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeGallerySettleInfo::set_kill_monster_count(
        gallery_settle_info,
        this->kill_monster_count_);
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeGallerySettleInfo::set_kill_special_monster_count(
        gallery_settle_info,
        this->kill_special_monster_count_);
      if ( *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeGallerySettleInfo::set_clean_mud_count(gallery_settle_info, this->clean_mud_count_);
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::LuminanceStoneChallengeGallerySettleInfo::set_final_score(gallery_settle_info, this->score_);
      proto::LuminanceStoneChallengeGallerySettleInfo::set_reason(gallery_settle_info, reason);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v8);
      std::shared_ptr<BaseEvent>::shared_ptr<LuminanceStoneChallengeGallerySettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<LuminanceStoneChallengeGallerySettleEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      v7 = 1;
    }
    std::shared_ptr<LuminanceStoneChallengeGallerySettleEvent>::~shared_ptr((std::shared_ptr<LuminanceStoneChallengeGallerySettleEvent> *const)(v2 + 64));
    if ( v7 == 1 )
    {
LABEL_26:
      LuminanceStoneChallengeGallery::printGalleryStopLog(this, reason);
      LuminanceStoneChallengeGallery::clearGalleryData(this);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
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

// Line 87: range 000000001688595A-00000000168861F0
__int64 __fastcall LuminanceStoneChallengeGallery::updatePlayerScore(
        LuminanceStoneChallengeGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-159h] BYREF
  const GalleryLuminanceStoneChallengeParam *param; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-150h] BYREF
  char v18[304]; // [rsp+50h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 14 monster_id:118 48 4 17 clean_mud_num:119 64 4 6 uid:86 80 16 14 player_ptr:105 112 112"
                        " 13 param_opt:123";
  *(_QWORD *)(v4 + 16) = LuminanceStoneChallengeGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 64) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v17, off_25E06920, &__a);
    v9 = ScriptUtil::getTableValue<unsigned int>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (const std::string *)&v17,
           (unsigned int *)(v4 + 64)) != 0;
    std::string::~string(&v17);
    std::allocator<char>::~allocator(&__a);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
        "updatePlayerScore",
        96);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v17,
        (const char (*)[43])"[Luminance Stone] getTableValue uid failed");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v8 = -1;
    }
    else if ( *(_DWORD *)(v4 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 80), (__int64)this->scene_, *(_DWORD *)(v4 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
          "updatePlayerScore",
          108);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v17,
                (const char (*)[41])"[Luminance Stone] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
          "updatePlayerScore",
          114);
        v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v17,
                (const char (*)[39])"[Luminance Stone] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 48) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "monster_id", &__a);
        ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v17,
          (unsigned int *)(v4 + 32));
        std::string::~string(&v17);
        std::allocator<char>::~allocator(&__a);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "clean_mud_num", &__a);
        ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v17,
          (unsigned int *)(v4 + 48));
        std::string::~string(&v17);
        std::allocator<char>::~allocator(&__a);
        BaseGallery::getParam<GalleryLuminanceStoneChallengeParam>(
          (std::optional<GalleryLuminanceStoneChallengeParam> *)(v4 + 112),
          (const BaseGallery *const)this);
        if ( !std::optional<GalleryLuminanceStoneChallengeParam>::has_value((const std::optional<GalleryLuminanceStoneChallengeParam> *const)(v4 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
            "updatePlayerScore",
            126);
          v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v17,
                  (const char (*)[46])"[Luminance Stone] param not find, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v17);
          v8 = -1;
        }
        else
        {
          param = std::optional<GalleryLuminanceStoneChallengeParam>::value((std::optional<GalleryLuminanceStoneChallengeParam> *const)(v4 + 112));
          if ( *(_DWORD *)(v4 + 32) )
            LuminanceStoneChallengeGallery::onKillMonster(this, param, *(_DWORD *)(v4 + 32));
          if ( *(_DWORD *)(v4 + 48) )
            LuminanceStoneChallengeGallery::onCleanMud(this, param, *(_DWORD *)(v4 + 48));
          BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
          v8 = 0;
        }
        std::optional<GalleryLuminanceStoneChallengeParam>::~optional((std::optional<GalleryLuminanceStoneChallengeParam> *const)(v4 + 112));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
        "updatePlayerScore",
        101);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v17,
        (const char (*)[27])"[Luminance Stone] uid is 0");
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
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "updatePlayerScore",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v17,
           (const char (*)[50])"[Luminance Stone] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  result = v8;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 144: range 00000000168861F2-000000001688631C
void __cdecl LuminanceStoneChallengeGallery::clearGalleryData(LuminanceStoneChallengeGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->kill_monster_count_, v1, v2);
  this->kill_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_special_monster_count_, v1, (_BYTE)this + 48);
  }
  this->kill_special_monster_count_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->clean_mud_count_, v3, v4);
  this->clean_mud_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_, v3, (_BYTE)this + 56);
  }
  this->score_ = 0;
};

// Line 152: range 000000001688631E-0000000016886328
void __cdecl LuminanceStoneChallengeGallery::printGalleryStartLog(LuminanceStoneChallengeGallery *const this)
{
  ;
};

// Line 157: range 0000000016886388-0000000016886AE3
// local variable allocation has failed, the output may be wrong!
void __fastcall LuminanceStoneChallengeGallery::printGalleryStopLog(
        LuminanceStoneChallengeGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int v11; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *v22; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *v24; // r14
  std::string v25; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop> v26; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+50h] [rbp-B0h] BYREF

  v25._M_string_length = (std::string::size_type)this;
  HIDWORD(v25._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:164 48 4 10 reason:156 64 16 20 owner_player_ptr:158 96 16 11 log_ptr:165";
  *(_QWORD *)(v2 + 16) = LuminanceStoneChallengeGallery::printGalleryStopLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = HIDWORD(v25._M_dataplus._M_p);
  M_string_length = v25._M_string_length;
  if ( *(_BYTE *)((v25._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v25._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "printGalleryStopLog",
      161);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v27,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_33;
  }
  v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  BasicComp = Player::getBasicComp(v7);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xE10u, v25);
  std::string::~string(&v27);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((v25._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v25._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_gallery_id(v9, *(_DWORD *)(v25._M_string_length + 32));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_transaction(
    v10,
    (const std::string *)(v25._M_string_length + 64));
  v11 = *(_DWORD *)(v2 + 48);
  if ( v11 == 8 )
  {
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_stop_reason(v13, 2u);
  }
  else
  {
    if ( v11 > 8 )
      goto LABEL_23;
    if ( v11 == 5 )
    {
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_stop_reason(v14, 3u);
      goto LABEL_24;
    }
    if ( v11 > 5 )
    {
LABEL_23:
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_stop_reason(v16, 5u);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
        "printGalleryStopLog",
        194);
      v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v27,
              (const char (*)[59])"[Luminance Stone Gallery] unknown reason to fail gallery: ");
      common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
        v17,
        (const proto::GalleryStopReason *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      goto LABEL_24;
    }
    if ( v11 == 1 )
    {
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_stop_reason(v12, 1u);
    }
    else
    {
      if ( v11 != 2 )
        goto LABEL_23;
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_stop_reason(v15, 4u);
    }
  }
LABEL_24:
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((v25._M_string_length + 312) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v25._M_string_length + 312) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_score(v18, *(_DWORD *)(v25._M_string_length + 312));
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((v25._M_string_length + 300) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v25._M_string_length) + 44) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 300) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_kill_normal_monster_count(
    v19,
    *(_DWORD *)(v25._M_string_length + 300));
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((v25._M_string_length + 304) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v25._M_string_length + 304) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_kill_elite_monster_count(
    v20,
    *(_DWORD *)(v25._M_string_length + 304));
  v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((v25._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v25._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 308) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::set_clean_mud_count(
    v21,
    *(_DWORD *)(v25._M_string_length + 308));
  v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  AvatarComp = Player::getAvatarComp(v22);
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>::shared_ptr(
    &v26,
    (const std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop> *)(v2 + 96));
  std::function<ForeachPolicy ()(Avatar &)>::function<LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1},void,void>(
    (std::function<ForeachPolicy(Avatar&)> *const)&v27,
    (LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *)&v26);
  PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v27);
  std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v27);
  LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::~Avatar((LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *const)&v26);
  v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  std::shared_ptr<google::protobuf::Message>::shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v26, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v25._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop> *)(v2 + 96));
  Player::printStatLog(v24, (MessagePtr *)&v25._anon_0, (MessagePtr *)&v26, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v25._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v26);
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop> *const)(v2 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
LABEL_33:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
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
};

// Line 201: range 000000001688632A-000000001688636B
ForeachPolicy __cdecl LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::operator()(
        const LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  v3 = proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 201: range 00000000168E9C40-00000000168E9C65
void __cdecl LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::Avatar(
        LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>::shared_ptr(
    &this->__log_ptr,
    &a2->__log_ptr);
};

// Line 201: range 00000000168E9D30-00000000168E9D55
void __cdecl LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::Avatar(
        LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *const this,
        const LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>::shared_ptr(
    &this->__log_ptr,
    &a2->__log_ptr);
};

// Line 201: range 000000001688636C-0000000016886386
void __cdecl LuminanceStoneChallengeGallery::printGalleryStopLog(proto::GalleryStopReason)::{lambda(Avatar &)#1}::~Avatar(
        LuminanceStoneChallengeGallery::printGalleryStopLog::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyGalleryLuminanceStoneGalleryStop>::~shared_ptr(&this->__log_ptr);
};

// Line 211: range 0000000016886AE4-0000000016886F03
void __fastcall LuminanceStoneChallengeGallery::onKillMonster(
        LuminanceStoneChallengeGallery *const this,
        const GalleryLuminanceStoneChallengeParam *param,
        uint32_t monster_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int second; // edx
  __int64 v8; // rsi
  uint32_t v9; // edx
  char v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rsi
  uint32_t v14; // edx
  char v15; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v18[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 monster_id:210 64 8 8 iter:217";
  *(_QWORD *)(v3 + 16) = LuminanceStoneChallengeGallery::onKillMonster;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = monster_id;
  if ( *(_DWORD *)(v3 + 48) )
  {
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          &param->normal_monster_score_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,unsigned int>::end(&param->normal_monster_score_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
           &__y) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++this->kill_monster_count_;
      v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      second = v6->second;
      if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v8 = second;
      v9 = SAFE_ADD<unsigned int,unsigned int>(this->score_, second);
      v10 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(&this->score_, v8, v9);
      }
      this->score_ = v9;
    }
    else
    {
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                            &param->special_monster_score_map,
                                                                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,unsigned int>::end(&param->special_monster_score_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
             &__y) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ++this->kill_special_monster_count_;
        v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = v11->second;
        if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v13 = v12;
        v14 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v12);
        v15 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
        if ( v15 != 0 && v15 <= 3 )
        {
          LOBYTE(v13) = v15 != 0;
          __asan_report_store4(&this->score_, v13, v14);
        }
        this->score_ = v14;
      }
    }
  }
  if ( v18 == (char *)v3 )
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

// Line 235: range 0000000016886F04-0000000016887040
void __cdecl LuminanceStoneChallengeGallery::onCleanMud(
        LuminanceStoneChallengeGallery *const this,
        const GalleryLuminanceStoneChallengeParam *param,
        uint32_t clean_mud_num)
{
  unsigned int v3; // ecx
  __int64 v4; // rsi
  uint32_t v5; // edx
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clean_mud_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++this->clean_mud_count_;
  if ( *(_BYTE *)(((unsigned __int64)&param->clean_mud_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->clean_mud_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = SAFE_MULTIPLY<unsigned int,unsigned int>(param->clean_mud_score, clean_mud_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v4 = v3;
  v5 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v3);
  v6 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->score_, v4, v5);
  }
  this->score_ = v5;
};

// Line 242: range 0000000016887042-00000000168873C8
void __cdecl LuminanceStoneChallengeGallery::onAvatarDie(LuminanceStoneChallengeGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t GalleryComp; // ecx
  bool v9; // bl
  common::milog::MiLogStream *v10; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v12; // rax
  unsigned int value; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<BaseGallery> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
      "onAvatarDie",
      246);
    v2 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v17,
           (const char (*)[52])"[Luminance Stone] uid not in player_info_map_. uid:");
    value = Player::getUid(player);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v3,
           (const char (*)[25])", player_info_map_ size:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = (unsigned int)Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, GalleryComp);
      v9 = std::operator==<BaseGallery>(0LL, &__a);
      std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
          "onAvatarDie",
          255);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v17,
                (const char (*)[49])"[Luminance Stone] findGallery fail, gallery_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_gallery_id = Scene::getGalleryComp(this->scene_);
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_gallery_id = (SceneGalleryComp *)&this->gallery_id_;
          __asan_report_load4();
        }
        if ( SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_AVATAR_DIE) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/luminance_stone_challenge_gallery.cpp",
            "onAvatarDie",
            260);
          v12 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v17,
                  (const char (*)[62])"[Luminance Stone] forceStopAndClearGallery fail, gallery_id_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
      }
    }
  }
};
