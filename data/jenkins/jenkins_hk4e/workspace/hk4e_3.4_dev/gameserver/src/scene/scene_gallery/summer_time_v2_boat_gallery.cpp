// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp

// Line 24: range 00000000168955F6-000000001689576F
void __cdecl SummerTimeV2BoatGallery::toClient(
        SummerTimeV2BoatGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  proto::SceneGallerySummerTimeV2BoatInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_summer_time_v2_boat_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySummerTimeV2BoatInfo::set_used_time(detail_info, this->used_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySummerTimeV2BoatInfo::set_param1(detail_info, this->param1_);
  if ( *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySummerTimeV2BoatInfo::set_param2(detail_info, this->param2_);
  if ( *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGallerySummerTimeV2BoatInfo::set_param3(detail_info, this->param3_);
};

// Line 34: range 0000000016895770-0000000016895BB6
void __cdecl SummerTimeV2BoatGallery::onStart(SummerTimeV2BoatGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  SummerTimeV2BoatGallery *v7; // rdx
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
  *(_QWORD *)(v1 + 8) = "1 32 16 19 owner_player_ptr:41";
  *(_QWORD *)(v1 + 16) = SummerTimeV2BoatGallery::onStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) != 1 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "onStart",
      38);
    v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v16,
           (const char (*)[58])"[SUMMER_TIME_V2] gallery player count != 1. player count:");
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
  (*(void (__fastcall **)(unsigned __int64, SummerTimeV2BoatGallery *))v8)(v1 + 32, v7);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "onStart",
      44);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v16,
           (const char (*)[47])"[SUMMER_TIME_V2] getOwnPlayer fail! cur_scene:");
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
        "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
        "onStart",
        50);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        &v16,
        (const char (*)[52])"[SUMMER_TIME_V2] cannot find host player in gallery");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    SummerTimeV2BoatGallery::clearGalleryData(this);
    SummerTimeV2BoatGallery::printGalleryStartLog(this);
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

// Line 57: range 0000000016895BB8-00000000168963CB
void __fastcall SummerTimeV2BoatGallery::onStop(SummerTimeV2BoatGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  SummerTimeV2BoatGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // dl
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  Player *v12; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  uint32_t now; // [rsp+14h] [rbp-ECh]
  proto::SummerTimeV2BoatGallerySettleInfo *gallery_settle_info; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 reason:56 64 16 19 owner_player_ptr:58 96 16 12 event_ptr:78";
  *(_QWORD *)(v2 + 16) = SummerTimeV2BoatGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = reason;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, SummerTimeV2BoatGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "onStop",
      61);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v18,
      (const char (*)[42])"[SUMMER_TIME_V2] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
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
      if ( *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !this->used_time_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        this->used_time_ = now - this->start_time_;
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
          "onStop",
          74);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v18,
                (const char (*)[51])"[SUMMER_TIME_V2] use backup gallery time, reason: ");
        common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
          v10,
          (const proto::GalleryStopReason *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
        "onStop",
        67);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v18,
             (const char (*)[41])"[SUMMER_TIME_V2] now < start_time_, uid:");
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = Player::getUid(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v9 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
      if ( v9 )
        __asan_report_store4(&this->used_time_, (((_BYTE)this + 44) & 7u) + 3, v9);
      this->used_time_ = 0;
    }
    common::tools::perf::make_shared<SummerTimeV2BoatGallerySettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 96),
      &this->gallery_id_);
    if ( std::operator==<SummerTimeV2BoatGallerySettleEvent>(
           0LL,
           (const std::shared_ptr<SummerTimeV2BoatGallerySettleEvent> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
        "onStop",
        81);
      common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
        &v18,
        (const char (*)[68])"[SUMMER_TIME_V2] make SummerTimeV2BoatGallerySettleEvent ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v11 = 0;
    }
    else
    {
      gallery_settle_info = &std::__shared_ptr_access<SummerTimeV2BoatGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeV2BoatGallerySettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->gallery_settle_info;
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SummerTimeV2BoatGallerySettleInfo::set_gallery_id(gallery_settle_info, this->gallery_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SummerTimeV2BoatGallerySettleInfo::set_used_time(gallery_settle_info, this->used_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SummerTimeV2BoatGallerySettleInfo::set_param1(gallery_settle_info, this->param1_);
      if ( *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SummerTimeV2BoatGallerySettleInfo::set_param2(gallery_settle_info, this->param2_);
      if ( *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SummerTimeV2BoatGallerySettleInfo::set_param3(gallery_settle_info, this->param3_);
      proto::SummerTimeV2BoatGallerySettleInfo::set_reason(gallery_settle_info, *(proto::GalleryStopReason *)(v2 + 48));
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EventComp = Player::getEventComp(v12);
      std::shared_ptr<BaseEvent>::shared_ptr<SummerTimeV2BoatGallerySettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<SummerTimeV2BoatGallerySettleEvent> *)(v2 + 96));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      v11 = 1;
    }
    std::shared_ptr<SummerTimeV2BoatGallerySettleEvent>::~shared_ptr((std::shared_ptr<SummerTimeV2BoatGallerySettleEvent> *const)(v2 + 96));
    if ( v11 == 1 )
    {
      SummerTimeV2BoatGallery::printGalleryStopLog(this, *(proto::GalleryStopReason *)(v2 + 48));
      SummerTimeV2BoatGallery::clearGalleryData(this);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
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

// Line 98: range 00000000168963CC-0000000016896BEF
__int64 __fastcall SummerTimeV2BoatGallery::updatePlayerScore(
        SummerTimeV2BoatGallery *const this,
        uint32_t uid,
        luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const luabind::adl::object *v11; // rsi
  bool v12; // r14
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  __int64 result; // rax
  const luabind::adl::object *param_tableb; // [rsp+8h] [rbp-118h]
  const char (*v20)[7]; // [rsp+10h] [rbp-110h]
  SummerTimeV2BoatGallery *thisa; // [rsp+18h] [rbp-108h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+50h] [rbp-D0h] BYREF

  HIDWORD(v20) = uid;
  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 10 param1:126 64 4 10 param2:127 80 4 10 param3:128 96 4 13 used_time:144 112 4 6 uid:97 "
                        "128 16 14 player_ptr:111";
  *(_QWORD *)(v4 + 16) = SummerTimeV2BoatGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 112) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v23, off_25E06920, &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v23,
      (unsigned int *)(v4 + 112));
    std::string::~string(&v23);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 112) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 128), (__int64)this->scene_, *(_DWORD *)(v4 + 112));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
          "updatePlayerScore",
          114);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v23,
               (const char (*)[40])"[SUMMER_TIME_V2] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
          "updatePlayerScore",
          120);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v23,
                (const char (*)[38])"[SUMMER_TIME_V2] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        *(_DWORD *)(v4 + 80) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v23, "param1", &__a);
        ScriptUtil::getTableValue<unsigned int,char const(&)[7],unsigned int &,char const(&)[7],unsigned int &>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v23,
          (unsigned int *)(v4 + 48),
          (const char (*)[7])"param2",
          (unsigned int *)(v4 + 64),
          (const char (*)[7])"param3",
          (unsigned int *)(v4 + 80),
          (const char (*)[7])contex,
          (unsigned int *)param_table,
          v20,
          (unsigned int *)this);
        std::string::~string(&v23);
        std::allocator<char>::~allocator(&__a);
        if ( *(_DWORD *)(v4 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->param1_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->param1_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++thisa->param1_;
        }
        if ( *(_DWORD *)(v4 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->param2_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->param2_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++thisa->param2_;
        }
        if ( *(_DWORD *)(v4 + 80) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->param3_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->param3_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++thisa->param3_;
        }
        *(_DWORD *)(v4 + 96) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v23, "time", &__a);
        v11 = param_tableb;
        v12 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_tableb,
                (const std::string *)&v23,
                (unsigned int *)(v4 + 96)) == 0;
        std::string::~string(&v23);
        std::allocator<char>::~allocator(&__a);
        if ( v12 )
        {
          v13 = *(_DWORD *)(v4 + 96);
          v14 = *(_BYTE *)(((unsigned __int64)&thisa->used_time_ >> 3) + 0x7FFF8000);
          LOBYTE(v11) = v14 != 0;
          v15 = v14 != 0 && (char)((((_BYTE)thisa + 44) & 7) + 3) >= v14;
          if ( v15 )
            __asan_report_store4(&thisa->used_time_, v11, v15);
          thisa->used_time_ = v13;
        }
        v8 = 0;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
        "updatePlayerScore",
        107);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v23,
        (const char (*)[26])"[SUMMER_TIME_V2] uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "updatePlayerScore",
      101);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v23,
           (const char (*)[49])"[SUMMER_TIME_V2] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 96) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  result = v8;
  if ( v24 == (char *)v4 )
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
  return result;
};

// Line 154: range 0000000016896BF0-0000000016896D1A
void __cdecl SummerTimeV2BoatGallery::clearGalleryData(SummerTimeV2BoatGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->used_time_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->used_time_, v1, v2);
  this->used_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param1_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param1_, v1, (_BYTE)this + 48);
  }
  this->param1_ = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->param2_, v3, v4);
  this->param2_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param3_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param3_, v3, (_BYTE)this + 56);
  }
  this->param3_ = 0;
};

// Line 162: range 0000000016896D1C-0000000016897105
// local variable allocation has failed, the output may be wrong!
void __cdecl SummerTimeV2BoatGallery::printGalleryStartLog(SummerTimeV2BoatGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::string v11; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v11._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:169 64 16 20 owner_player_ptr:163 96 16 11 log_ptr:170";
  *(_QWORD *)(v1 + 16) = SummerTimeV2BoatGallery::printGalleryStartLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  M_string_length = v11._M_string_length;
  if ( *(_BYTE *)((v11._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v11._M_string_length + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v5)(v1 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "printGalleryStartLog",
      166);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v13,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v13, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE2Eu, v11);
    std::string::~string(&v13);
    common::tools::perf::make_shared<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v11._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v11._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart::set_gallery_id(v8, *(_DWORD *)(v11._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart::set_transaction(
      v9,
      (const std::string *)(v11._M_string_length + 64));
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0,
      (const std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart> *)(v1 + 96));
    Player::printStatLog(v10, (MessagePtr *)&v11._anon_0, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v14 == (char *)v1 )
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

// Line 177: range 0000000016897106-00000000168976A0
// local variable allocation has failed, the output may be wrong!
void __cdecl SummerTimeV2BoatGallery::printGalleryStopLog(
        SummerTimeV2BoatGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  Player *v16; // r14
  std::string v17; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v17._M_string_length = (std::string::size_type)this;
  HIDWORD(v17._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:184 64 16 20 owner_player_ptr:178 96 16 11 log_ptr:185";
  *(_QWORD *)(v2 + 16) = SummerTimeV2BoatGallery::printGalleryStopLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  M_string_length = v17._M_string_length;
  if ( *(_BYTE *)((v17._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v17._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "printGalleryStopLog",
      181);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v19,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE2Fu, v17);
    std::string::~string(&v19);
    common::tools::perf::make_shared<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v17._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v17._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_gallery_id(v9, *(_DWORD *)(v17._M_string_length + 32));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_transaction(
      v10,
      (const std::string *)(v17._M_string_length + 64));
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_result_type(v11, HIDWORD(v17._M_dataplus._M_p));
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v17._M_string_length + 300) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v17._M_string_length) + 44) & 7) + 3) >= *(_BYTE *)(((v17._M_string_length + 300) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_used_time(v12, *(_DWORD *)(v17._M_string_length + 300));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v17._M_string_length + 304) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v17._M_string_length + 304) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_param1(v13, *(_DWORD *)(v17._M_string_length + 304));
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v17._M_string_length + 308) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v17._M_string_length) + 52) & 7) + 3) >= *(_BYTE *)(((v17._M_string_length + 308) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_param2(v14, *(_DWORD *)(v17._M_string_length + 308));
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((v17._M_string_length + 312) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v17._M_string_length + 312) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop::set_param3(v15, *(_DWORD *)(v17._M_string_length + 312));
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&v17._anon_0,
      (const std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop> *)(v2 + 96));
    Player::printStatLog(v16, (MessagePtr *)&v17._anon_0, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v17._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySummerTimeV2BoatGalleryStop> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v20 == (char *)v2 )
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

// Line 197: range 00000000168976A2-0000000016897A28
void __cdecl SummerTimeV2BoatGallery::onAvatarDie(SummerTimeV2BoatGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  SceneGalleryComp *GalleryComp; // rcx
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
      3u,
      "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
      "onAvatarDie",
      200);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v17,
           (const char (*)[51])"[SUMMER_TIME_V2] uid not in player_info_map_. uid:");
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
      GalleryComp = Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, (__int64)GalleryComp, this->gallery_id_);
      v9 = std::operator==<BaseGallery>(0LL, &__a);
      std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
          "onAvatarDie",
          209);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v17,
                (const char (*)[48])"[SUMMER_TIME_V2] findGallery fail, gallery_id_:");
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
        if ( (unsigned int)SceneGalleryComp::forceStopAndClearGallery(
                             p_gallery_id,
                             this->gallery_id_,
                             0,
                             GALLERY_STOP_AVATAR_DIE) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/summer_time_v2_boat_gallery.cpp",
            "onAvatarDie",
            214);
          v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v17,
                  (const char (*)[61])"[SUMMER_TIME_V2] forceStopAndClearGallery fail, gallery_id_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
      }
    }
  }
};
