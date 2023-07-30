// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/home_racing_gallery.cpp

// Line 27: range 00000000145BE9DE-00000000145BEA52
void __cdecl HomeRacingGallery::onStart(HomeRacingGallery *const this)
{
  unsigned __int64 v1; // rax

  HomeRacingGallery::clearGalleryData(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_BaseGallery + 18);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(HomeRacingGallery *const))v1)(this);
};

// Line 33: range 00000000145BEA54-00000000145BF5B1
void __cdecl HomeRacingGallery::onStop(HomeRacingGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  proto::RacingGallerySettleInfo *p_settle_info; // rcx
  std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  proto::RacingGallerySettleInfo *v10; // rcx
  Scene *scene; // rcx
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  HomeRacingGallery *v14; // rdx
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  Home *v17; // rax
  HomeGroupRecordComp *GroupRecordComp; // r14
  Player *v19; // rax
  common::milog::MiLogStream *v20; // rax
  proto::RacingGallerySettleInfo *v21; // rdx
  __int64 v22; // rax
  std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  bool *p_is_new_record; // rax
  unsigned __int64 v25; // rax
  uint32_t control_group_id; // [rsp+14h] [rbp-17Ch]
  proto::RacingGallerySettleInfo *settle_info_proto; // [rsp+18h] [rbp-178h]
  std::shared_ptr<BaseHomePlaySettleInfo> p_settle_info_ptr; // [rsp+20h] [rbp-170h] BYREF
  std::shared_ptr<BaseHomePlayRankInfo> p_rank_info_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-150h] BYREF
  char v31[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 11 home_ptr:40 80 16 25 racing_settle_info_ptr:47 112 16 23 racing_rank_info_ptr:48 144 "
                        "16 20 winner_player_ptr:60 176 40 9 notify:79";
  *(_QWORD *)(v2 + 16) = HomeRacingGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( reason != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
    goto LABEL_58;
  if ( *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->winner_uid_ )
  {
LABEL_58:
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnHome((const Scene *const)(v2 + 48));
    if ( std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/home_racing_gallery.cpp",
        "onStop",
        43);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v30,
             (const char (*)[40])"[GALLERY] home_ptr is null, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      common::tools::perf::make_shared<RacingHomePlaySettleInfo>();
      common::tools::perf::make_shared<RacingHomePlayRankInfo>();
      if ( std::operator==<RacingHomePlaySettleInfo>(0LL, (const std::shared_ptr<RacingHomePlaySettleInfo> *)(v2 + 80))
        || std::operator==<RacingHomePlayRankInfo>(0LL, (const std::shared_ptr<RacingHomePlayRankInfo> *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/home_racing_gallery.cpp",
          "onStop",
          51);
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          &v30,
          (const char (*)[58])"racing_settle_info_ptr or racing_rank_info_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        p_settle_info = &std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->settle_info;
        if ( *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::RacingGallerySettleInfo::set_use_time(p_settle_info, this->use_time_);
        v9 = std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto::RacingGallerySettleInfo::set_reason(&v9->settle_info, reason);
        v10 = &std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->settle_info;
        if ( *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::RacingGallerySettleInfo::set_winner_uid(v10, this->winner_uid_);
        if ( reason != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
          goto LABEL_40;
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = this->scene_;
        if ( *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 144), (__int64)scene, this->winner_uid_);
        if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/home_racing_gallery.cpp",
            "onStop",
            63);
          v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v30,
                  (const char (*)[40])"[GALLERY] home_ptr is null, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v13 = 0;
        }
        else
        {
          v14 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = (unsigned __int64)(this->_vptr_BaseGallery + 15);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          control_group_id = (*(__int64 (__fastcall **)(HomeRacingGallery *))v15)(v14);
          if ( control_group_id )
          {
            v17 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            GroupRecordComp = Home::getGroupRecordComp(v17);
            std::shared_ptr<BaseHomePlayRankInfo>::shared_ptr<RacingHomePlayRankInfo,void>(
              &p_rank_info_ptr,
              (const std::shared_ptr<RacingHomePlayRankInfo> *)(v2 + 112));
            std::shared_ptr<BaseHomePlaySettleInfo>::shared_ptr<RacingHomePlaySettleInfo,void>(
              &p_settle_info_ptr,
              (const std::shared_ptr<RacingHomePlaySettleInfo> *)(v2 + 80));
            v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            LOBYTE(GroupRecordComp) = HomeGroupRecordComp::addRecord(
                                        GroupRecordComp,
                                        control_group_id,
                                        v19,
                                        &p_settle_info_ptr,
                                        &p_rank_info_ptr) != 0;
            std::shared_ptr<BaseHomePlaySettleInfo>::~shared_ptr(&p_settle_info_ptr);
            std::shared_ptr<BaseHomePlayRankInfo>::~shared_ptr(&p_rank_info_ptr);
            if ( (_BYTE)GroupRecordComp )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/home_racing_gallery.cpp",
                "onStop",
                74);
              v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v30,
                      (const char (*)[38])"[GALLERY] addRecord fail, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gallery_id_);
              common::milog::MiLogStream::~MiLogStream(&v30);
              v13 = 0;
            }
            else
            {
              v13 = 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/home_racing_gallery.cpp",
              "onStop",
              69);
            v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v30,
                    (const char (*)[45])"[GALLERY] control_group_id is 0, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
            common::milog::MiLogStream::~MiLogStream(&v30);
            v13 = 0;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 144));
        if ( v13 == 1 )
        {
LABEL_40:
          proto::HomeRacingGallerySettleNotify::HomeRacingGallerySettleNotify((proto::HomeRacingGallerySettleNotify *const)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::HomeRacingGallerySettleNotify::set_gallery_id(
            (proto::HomeRacingGallerySettleNotify *const)(v2 + 176),
            this->gallery_id_);
          settle_info_proto = proto::HomeRacingGallerySettleNotify::mutable_settle_info((proto::HomeRacingGallerySettleNotify *const)(v2 + 176));
          v21 = &std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->settle_info;
          proto::RacingGallerySettleInfo::CopyFrom(settle_info_proto, v21);
          v22 = (__int64)std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) <= 3 )
          {
            v22 = __asan_report_load4();
          }
          proto::HomeRacingGallerySettleNotify::set_rank(
            (proto::HomeRacingGallerySettleNotify *const)(v2 + 176),
            *(_DWORD *)(v22 + 8));
          v23 = std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          p_is_new_record = &v23->rank_info.is_new_record;
          if ( *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_new_record);
          }
          proto::HomeRacingGallerySettleNotify::set_is_new_record(
            (proto::HomeRacingGallerySettleNotify *const)(v2 + 176),
            v23->rank_info.is_new_record);
          BaseGallery::notifyToGalleryPlayers<proto::HomeRacingGallerySettleNotify>(
            this,
            (proto::HomeRacingGallerySettleNotify *)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v25 = (unsigned __int64)(this->_vptr_BaseGallery + 19);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8();
          (*(void (__fastcall **)(HomeRacingGallery *const, _QWORD))v25)(this, (unsigned int)reason);
          HomeRacingGallery::clearGalleryData(this);
          proto::HomeRacingGallerySettleNotify::~HomeRacingGallerySettleNotify((proto::HomeRacingGallerySettleNotify *const)(v2 + 176));
        }
      }
      std::shared_ptr<RacingHomePlayRankInfo>::~shared_ptr((std::shared_ptr<RacingHomePlayRankInfo> *const)(v2 + 112));
      std::shared_ptr<RacingHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<RacingHomePlaySettleInfo> *const)(v2 + 80));
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/home_racing_gallery.cpp",
      "onStop",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v30,
           (const char (*)[62])"[GALLERY] reason is lua succ but winner_uid is 0, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 00000000145BF5B2-00000000145BFCF9
__int64 __fastcall HomeRacingGallery::updatePlayerScore(
        HomeRacingGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  char *v10; // rsi
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // ecx
  char v17; // al
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-B5h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 winner_uid:98 48 4 6 uid:91 64 16 14 player_ptr:105";
  *(_QWORD *)(v4 + 16) = HomeRacingGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v22, off_254168A0, &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v22,
      (unsigned int *)(v4 + 32));
    std::string::~string(&v22);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 64), (__int64)this->scene_, *(_DWORD *)(v4 + 48));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/home_racing_gallery.cpp",
          "updatePlayerScore",
          108);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v22,
               (const char (*)[33])"[GALLERY] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = -1;
      }
      else
      {
        v10 = (char *)(v4 + 48);
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                &this->player_info_map_,
                (const unsigned int *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/home_racing_gallery.cpp",
            "updatePlayerScore",
            113);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v22,
                  (const char (*)[31])"[GALLERY] unknown player, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          v8 = -1;
        }
        else
        {
          v12 = *(_DWORD *)(v4 + 32);
          v13 = *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000);
          LOBYTE(v10) = v13 != 0;
          v14 = v13 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v13;
          if ( v14 )
            __asan_report_store4(&this->winner_uid_, v10, v14);
          this->winner_uid_ = v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          now = Scene::getSceneTimeSeconds(this->scene_);
          if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( now >= this->start_time_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v16 = now - this->start_time_;
            v17 = *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000);
            if ( v17 != 0 && v17 <= 3 )
            {
              LOBYTE(v10) = v17 != 0;
              __asan_report_store4(&this->use_time_, v10, (_BYTE)this + 64);
            }
            this->use_time_ = v16;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/home_racing_gallery.cpp",
              "updatePlayerScore",
              120);
            v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v22,
                    (const char (*)[34])"[GALLERY] now < start_time_, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            if ( *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->use_time_, v4 + 48, (_BYTE)this + 64);
            }
            this->use_time_ = 0;
          }
          v8 = 0;
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/home_racing_gallery.cpp",
        "updatePlayerScore",
        102);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v22,
        (const char (*)[26])"[GALLERY] winner_uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_racing_gallery.cpp",
      "updatePlayerScore",
      95);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v22,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  result = v8;
  if ( v23 == (char *)v4 )
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
  return result;
};

// Line 131: range 00000000145BFCFA-00000000145BFD96
void __cdecl HomeRacingGallery::clearGalleryData(HomeRacingGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_time_, v1, (_BYTE)this + 64);
  }
  this->use_time_ = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->winner_uid_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->winner_uid_, (((_BYTE)this + 68) & 7u) + 3, v2);
  this->winner_uid_ = 0;
};

// Line 137: range 00000000145BFD98-00000000145C0349
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeRacingGallery::printGalleryStartLog(HomeRacingGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // eax
  __int64 v13; // rcx
  Player *v14; // r14
  std::string v15; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v17; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+80h] [rbp-D0h] BYREF

  v15._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:144 64 16 20 owner_player_ptr:138 96 16 11 log_ptr:145 128 16 14 player_ptr:151";
  *(_QWORD *)(v1 + 16) = HomeRacingGallery::printGalleryStartLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  M_string_length = v15._M_string_length;
  if ( *(_BYTE *)((v15._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v15._M_string_length + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v5)(v1 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_racing_gallery.cpp",
      "printGalleryStartLog",
      141);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v22,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDE2u, v15);
    std::string::~string(&v22);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryHomeRacingStart>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v15._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v15._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryHomeRacingStart::set_gallery_id(v8, *(_DWORD *)(v15._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryHomeRacingStart::set_transaction(
      v9,
      (const std::string *)(v15._M_string_length + 64));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v12 = Player::getUid(v11);
    proto_log::PlayerLogBodyGalleryHomeRacingStart::set_owner_uid(v10, v12);
    __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v15._M_string_length + 144);
    *(std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)v15._anon_0._M_local_buf = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v15._M_string_length + 144));
    *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v15._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v15._M_string_length + 144));
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v15._anon_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v15._anon_0._M_allocated_capacity
            + 1) )
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v15._anon_0);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v17);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v17);
      if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = *(_QWORD *)(v15._M_string_length + 24);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 128), v13, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStart,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStart> *)(v1 + 96));
        Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v15._anon_0);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
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

// Line 160: range 00000000145C034A-00000000145C0ACF
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeRacingGallery::printGalleryStopLog(HomeRacingGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __int64 v18; // rcx
  Player *v19; // r14
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type v20; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // r14
  std::string v23; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v25; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+80h] [rbp-D0h] BYREF

  v23._M_string_length = (std::string::size_type)this;
  HIDWORD(v23._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:167 64 16 20 owner_player_ptr:161 96 16 11 log_ptr:168 128 16 14 player_ptr:188";
  *(_QWORD *)(v2 + 16) = HomeRacingGallery::printGalleryStopLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  M_string_length = v23._M_string_length;
  if ( *(_BYTE *)((v23._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v23._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/home_racing_gallery.cpp",
      "printGalleryStopLog",
      164);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v30,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDE3u, v23);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryHomeRacingStop>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v23._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v23._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryHomeRacingStop::set_gallery_id(v9, *(_DWORD *)(v23._M_string_length + 32));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyGalleryHomeRacingStop::set_transaction(
      v10,
      (const std::string *)(v23._M_string_length + 64));
    if ( HIDWORD(v23._M_dataplus._M_p) == 3 )
    {
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((v23._M_string_length + 324) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v23._M_string_length) + 68) & 7) + 3) >= *(_BYTE *)(((v23._M_string_length + 324) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGalleryHomeRacingStop::set_stop_uid(v11, *(_DWORD *)(v23._M_string_length + 324));
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryHomeRacingStop::set_stop_reason(v12, 1u);
    }
    else if ( HIDWORD(v23._M_dataplus._M_p) == 2 )
    {
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v15 = Player::getUid(v14);
      proto_log::PlayerLogBodyGalleryHomeRacingStop::set_stop_uid(v13, v15);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryHomeRacingStop::set_stop_reason(v16, 2u);
    }
    else
    {
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeRacingStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryHomeRacingStop::set_stop_reason(v17, 3u);
    }
    __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v23._M_string_length + 144);
    *(std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)v23._anon_0._M_local_buf = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v23._M_string_length + 144));
    *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v23._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v23._M_string_length + 144));
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v23._anon_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v23._anon_0._M_allocated_capacity
            + 1) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v23._anon_0);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v25);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v25);
      if ( *(_BYTE *)(((v23._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = *(_QWORD *)(v23._M_string_length + 24);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v2 + 128), v18, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
      {
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop> *)(v2 + 96));
        Player::printStatLog(v19, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v20 = *uid;
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( v20 == Player::getUid(v21) )
        {
          v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop> *)(v2 + 96));
          Player::printStatLog(v22, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v23._anon_0);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeRacingStop> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v31 == (char *)v2 )
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
