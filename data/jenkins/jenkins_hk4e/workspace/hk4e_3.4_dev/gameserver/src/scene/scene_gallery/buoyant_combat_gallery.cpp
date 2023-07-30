// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/buoyant_combat_gallery.cpp

// Line 29: range 00000000179D0A8C-00000000179D0E69
void __cdecl BuoyantCombatGallery::onStart(BuoyantCombatGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Scene *scene; // rcx
  Group *v9; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 14 level_param:39 64 16 12 group_ptr:50";
  *(_QWORD *)(v1 + 16) = BuoyantCombatGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  if ( std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_) > 1 )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "onStart",
      33);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v11,
           (const char (*)[49])"[GALLERY] gallery player count >1. player count:");
    *(_QWORD *)(v1 + 32) = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v4,
           (const unsigned __int64 *)(v1 + 32));
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  BuoyantCombatGallery::clearGalleryData(this);
  *(BuoyantCombaLevelParam *)(v1 + 32) = BuoyantCombatGallery::getCurDifficultLevelParam(this);
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( gallery_config_ptr->control_group_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      Scene::findGroup((Scene *const)(v1 + 64), (uint32_t)scene);
      if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
      {
        v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        Group::setReviseLevel(v9, *(_DWORD *)(v1 + 32));
      }
      BuoyantCombatGallery::printGalleryStartLog(this);
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "onStart",
      43);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v11,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( v12 == (char *)v1 )
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

// Line 59: range 00000000179D0E6A-00000000179D1502
__int64 __fastcall BuoyantCombatGallery::updatePlayerScore(
        BuoyantCombatGallery *const this,
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
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 13 monster_id:85 64 4 12 target_id:86 80 4 6 uid:58 96 16 13 player_ptr:72";
  *(_QWORD *)(v4 + 16) = BuoyantCombatGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v14, off_26271F80, &__a);
    ScriptUtil::getTableValue<unsigned int>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v14,
      (unsigned int *)(v4 + 80));
    std::string::~string(&v14);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v4 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v4 + 96), (__int64)this->scene_, *(_DWORD *)(v4 + 80));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
          "updatePlayerScore",
          75);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v14,
               (const char (*)[33])"[GALLERY] player not found, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v14);
        v8 = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                   &this->player_info_map_,
                   (const unsigned int *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
          "updatePlayerScore",
          81);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v14,
                (const char (*)[31])"[GALLERY] unknown player, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v14);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 48) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v14, "monster_id", &__a);
        ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v14,
          (unsigned int *)(v4 + 48));
        std::string::~string(&v14);
        std::allocator<char>::~allocator(&__a);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v14, "target_id", &__a);
        ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          (const std::string *)&v14,
          (unsigned int *)(v4 + 64));
        std::string::~string(&v14);
        std::allocator<char>::~allocator(&__a);
        if ( *(_DWORD *)(v4 + 48) )
          BuoyantCombatGallery::onKillMonster(this, *(_DWORD *)(v4 + 48));
        if ( *(_DWORD *)(v4 + 64) )
          BuoyantCombatGallery::onHitTarget(this);
        BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
        v8 = 0;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
        "updatePlayerScore",
        68);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"[GALLERY] uid is 0");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "updatePlayerScore",
      62);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v14,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  result = v8;
  if ( v15 == (char *)v4 )
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

// Line 102: range 00000000179D1504-00000000179D1B00
void __cdecl BuoyantCombatGallery::onStop(BuoyantCombatGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  BuoyantCombatGallery *v5; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerEventComp *EventComp; // r14
  proto::BuoyantCombatGallerySettleInfo *gallery_settle_info; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 level_param:126 64 16 20 owner_player_ptr:104 96 16 13 event_ptr:118";
  *(_QWORD *)(v2 + 16) = BuoyantCombatGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BuoyantCombatGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "onStop",
      107);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v12,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)this) )
  {
    common::tools::perf::make_shared<GalleryBuoyantCombatSettleEvent,unsigned int &>(
      (unsigned int *)(v2 + 96),
      &this->gallery_id_);
    gallery_settle_info = &std::__shared_ptr_access<GalleryBuoyantCombatSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBuoyantCombatSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->gallery_settle_info;
    if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_gallery_id(gallery_settle_info, this->gallery_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_kill_monster_count(gallery_settle_info, this->kill_monster_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_kill_special_monster_count(
      gallery_settle_info,
      this->kill_special_monster_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_kill_target_count(gallery_settle_info, this->kill_target_count_);
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_final_score(gallery_settle_info, this->score_);
    if ( *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BuoyantCombatGallerySettleInfo::set_gallery_level(gallery_settle_info, this->difficult_level_);
    *(BuoyantCombaLevelParam *)(v2 + 32) = BuoyantCombatGallery::getCurDifficultLevelParam(this);
    proto::BuoyantCombatGallerySettleInfo::set_gallery_multiple(gallery_settle_info, *(_DWORD *)(v2 + 36));
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    EventComp = Player::getEventComp(v8);
    std::shared_ptr<BaseEvent>::shared_ptr<GalleryBuoyantCombatSettleEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<GalleryBuoyantCombatSettleEvent> *)(v2 + 96));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<GalleryBuoyantCombatSettleEvent>::~shared_ptr((std::shared_ptr<GalleryBuoyantCombatSettleEvent> *const)(v2 + 96));
    BuoyantCombatGallery::printGalleryStopLog(this);
    BuoyantCombatGallery::clearGalleryData(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "onStop",
      113);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v12,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v13 == (char *)v2 )
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

// Line 135: range 00000000179D1B02-00000000179D20ED
// local variable allocation has failed, the output may be wrong!
void __cdecl BuoyantCombatGallery::printGalleryStartLog(BuoyantCombatGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  __int64 v11; // rcx
  Player *v12; // r14
  std::string v13; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v15; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+80h] [rbp-D0h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:142 64 16 20 owner_player_ptr:136 96 16 11 log_ptr:143 128 16 14 player_ptr:149";
  *(_QWORD *)(v1 + 16) = BuoyantCombatGallery::printGalleryStartLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  M_string_length = v13._M_string_length;
  if ( *(_BYTE *)((v13._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v13._M_string_length + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v5)(v1 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "printGalleryStartLog",
      139);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v20,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDA2u, v13);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryBuoyantCombatStart>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v13._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v13._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStart::set_gallery_id(v8, *(_DWORD *)(v13._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryBuoyantCombatStart::set_transaction(
      v9,
      (const std::string *)(v13._M_string_length + 64));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v13._M_string_length + 300) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v13._M_string_length) + 44) & 7) + 3) >= *(_BYTE *)(((v13._M_string_length + 300) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStart::set_difficulty(v10, *(_DWORD *)(v13._M_string_length + 300));
    __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v13._M_string_length + 144);
    *(std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)v13._anon_0._M_local_buf = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v13._M_string_length + 144));
    *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v13._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v13._M_string_length + 144));
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v13._anon_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v13._anon_0._M_allocated_capacity
            + 1) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v13._anon_0);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
      if ( *(_BYTE *)(((v13._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = *(_QWORD *)(v13._M_string_length + 24);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 128), v11, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStart,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStart> *)(v1 + 96));
        Player::printStatLog(v12, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v13._anon_0);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v21 == (char *)v1 )
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

// Line 158: range 00000000179D2154-00000000179D2D56
// local variable allocation has failed, the output may be wrong!
void __cdecl BuoyantCombatGallery::printGalleryStopLog(BuoyantCombatGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  GalleryProgress *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // rax
  PlayerAvatarComp *AvatarComp; // r14
  __int64 v22; // rcx
  Player *v23; // r14
  std::string v24; // [rsp+0h] [rbp-1C0h] OVERLAPPED BYREF
  std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,long unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-190h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+38h] [rbp-188h]
  std::map<std::string,std::shared_ptr<GalleryProgress>> *__for_range; // [rsp+40h] [rbp-180h]
  const std::pair<const std::string,std::shared_ptr<GalleryProgress> > *v30; // [rsp+48h] [rbp-178h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *key; // [rsp+50h] [rbp-170h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *gallery_progress_ptr; // [rsp+58h] [rbp-168h]
  std::map<unsigned int,long unsigned int> *progress_stage_time_map; // [rsp+60h] [rbp-160h]
  std::map<unsigned int,long unsigned int> *__for_range_0; // [rsp+68h] [rbp-158h]
  const std::pair<unsigned int const,long unsigned int> *v35; // [rsp+70h] [rbp-150h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *stage_id; // [rsp+78h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *time_ms; // [rsp+80h] [rbp-140h]
  proto_log::GalleryProgressStageInfo *progress_stage_info; // [rsp+88h] [rbp-138h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range_1; // [rsp+90h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v40; // [rsp+98h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+A0h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+A8h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+B0h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+C0h] [rbp-100h] BYREF
  common::milog::MiLogStream v45; // [rsp+D0h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v24._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:166 64 16 20 owner_player_ptr:159 96 16 11 log_ptr:167 128 16 14 player_ptr:217";
  *(_QWORD *)(v1 + 16) = BuoyantCombatGallery::printGalleryStopLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  M_string_length = v24._M_string_length;
  if ( *(_BYTE *)((v24._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)v24._M_string_length + 64LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v5)(v1 + 64, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "printGalleryStopLog",
      162);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v45,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v45);
  }
  else
  {
    if ( *(_BYTE *)(((v24._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v24._anon_0._M_allocated_capacity) = Scene::getSceneTimeSeconds(*(Scene *const *)(v24._M_string_length + 24));
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v45, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDA3u, v24);
    std::string::~string(&v45);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryBuoyantCombatStop>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v24._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v24._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_gallery_id(v8, *(_DWORD *)(v24._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_transaction(
      v9,
      (const std::string *)(v24._M_string_length + 64));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v24._M_string_length + 300) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v24._M_string_length) + 44) & 7) + 3) >= *(_BYTE *)(((v24._M_string_length + 300) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_difficulty(v10, *(_DWORD *)(v24._M_string_length + 300));
    if ( *(_BYTE *)(((v24._M_string_length + 108) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v24._M_string_length) + 108) & 7) + 3) >= *(_BYTE *)(((v24._M_string_length + 108) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(v24._M_string_length + 108) )
    {
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_stop_reason(v11, 2u);
      gallery_config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v24._M_string_length);
      if ( gallery_config_ptr )
      {
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_use_time(v12, gallery_config_ptr->duration);
      }
    }
    else
    {
      if ( *(char *)(((v24._M_string_length + 320) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(v24._M_string_length + 320);
      if ( *(_BYTE *)(v24._M_string_length + 320) )
      {
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_stop_reason(v13, 1u);
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((v24._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v24._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
      }
      else
      {
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_stop_reason(v15, 3u);
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((v24._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v24._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
      }
      proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_use_time(
        v14,
        HIDWORD(v24._anon_0._M_allocated_capacity) - *(_DWORD *)(v24._M_string_length + 104));
    }
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v24._M_string_length + 316) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v24._M_string_length) + 60) & 7) + 3) >= *(_BYTE *)(((v24._M_string_length + 316) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_score(v16, *(_DWORD *)(v24._M_string_length + 316));
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v24._M_string_length + 312) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v24._M_string_length + 312) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryBuoyantCombatStop::set_hit_target(v17, *(_DWORD *)(v24._M_string_length + 312));
    __for_range = (std::map<std::string,std::shared_ptr<GalleryProgress>> *)(v24._M_string_length + 192);
    *((std::map<std::string,std::shared_ptr<GalleryProgress>>::iterator *)&v24._anon_0._M_allocated_capacity + 1) = std::map<std::string,std::shared_ptr<GalleryProgress>>::begin((std::map<std::string,std::shared_ptr<GalleryProgress>> *const)(v24._M_string_length + 192));
    __for_end._M_node = std::map<std::string,std::shared_ptr<GalleryProgress>>::end((std::map<std::string,std::shared_ptr<GalleryProgress>> *const)(v24._M_string_length + 192))._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::_Self *)&v24._anon_0._M_allocated_capacity
            + 1,
              &__for_end) )
    {
      v30 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator*(
              (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)&v24._anon_0._M_allocated_capacity
            + 1);
      key = std::get<0ul,std::string const,std::shared_ptr<GalleryProgress>>(v30);
      gallery_progress_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<GalleryProgress> > >::type *)std::get<1ul,std::string const,std::shared_ptr<GalleryProgress>>(v30);
      if ( !std::operator==<GalleryProgress>(gallery_progress_ptr, 0LL) )
      {
        v18 = std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_progress_ptr);
        progress_stage_time_map = GalleryProgress::getStageLastTimeMap(v18);
        __for_range_0 = progress_stage_time_map;
        __for_begin_0._M_node = std::map<unsigned int,unsigned long>::begin(progress_stage_time_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,unsigned long>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator*(&__for_begin_0);
          stage_id = std::get<0ul,unsigned int const,unsigned long>(v35);
          time_ms = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v35);
          v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          progress_stage_info = proto_log::PlayerLogBodyGalleryBuoyantCombatStop::add_progress_stage_time_list(v19);
          if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::GalleryProgressStageInfo::set_stage_id(progress_stage_info, *stage_id);
          if ( *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          proto_log::GalleryProgressStageInfo::set_time(progress_stage_info, *time_ms / 0x3E8);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned long>>::operator++(&__for_begin_0);
        }
        break;
      }
      std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<GalleryProgress>>>::operator++(
        (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<GalleryProgress> > > *const)&v24._anon_0._M_allocated_capacity
      + 1);
    }
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    AvatarComp = Player::getAvatarComp(v20);
    std::function<ForeachPolicy ()(Avatar &)>::function<BuoyantCombatGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v45,
      (BuoyantCombatGallery::printGalleryStopLog::<lambda(Avatar&)>)(v1 + 96));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v45);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v45);
    __for_range_1 = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v24._M_string_length + 144);
    __for_begin_0._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v24._M_string_length + 144))._M_node;
    __for_end_0._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_end_0) )
    {
      v40 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin_0);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v40);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v40);
      if ( *(_BYTE *)(((v24._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v24._M_string_length + 24);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Scene::findPlayer((const Scene *const)(v1 + 128), v22, *uid);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
      {
        v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStop> *)(v1 + 96));
        Player::printStatLog(v23, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin_0);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryBuoyantCombatStop> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v46 == (char *)v1 )
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

// Line 209: range 00000000179D20EE-00000000179D2153
ForeachPolicy __cdecl BuoyantCombatGallery::printGalleryStopLog(void)::{lambda(Avatar &)#1}::operator()(
        const BuoyantCombatGallery::printGalleryStopLog::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBuoyantCombatStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  v3 = proto_log::PlayerLogBodyGalleryBuoyantCombatStop::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 226: range 00000000179D2D58-00000000179D2E84
void __cdecl BuoyantCombatGallery::toClient(BuoyantCombatGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryBuoyantCombatInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_buoyant_combat_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBuoyantCombatInfo::set_kill_monster_count(detail_info, this->kill_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBuoyantCombatInfo::set_kill_special_monster_count(detail_info, this->kill_special_monster_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBuoyantCombatInfo::set_score(detail_info, this->score_);
};

// Line 235: range 00000000179D2E86-00000000179D2FB0
void __cdecl BuoyantCombatGallery::clearGalleryData(BuoyantCombatGallery *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monster_count_, v1, (_BYTE)this + 48);
  }
  this->kill_monster_count_ = 0;
  v2 = (((_BYTE)this + 52) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3)
                                                        + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->kill_special_monster_count_, v2, v3);
  this->kill_special_monster_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_target_count_, v2, (_BYTE)this + 56);
  }
  this->kill_target_count_ = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->score_, (((_BYTE)this + 60) & 7u) + 3, v4);
  this->score_ = 0;
};

// Line 243: range 00000000179D2FB2-00000000179D35B2
void __fastcall BuoyantCombatGallery::onKillMonster(BuoyantCombatGallery *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  unsigned int v8; // ecx
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  unsigned int v13; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v14; // rdx
  unsigned int v15; // ecx
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rsi
  bool v19; // dl
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+10h] [rbp-180h] BYREF
  const BuoyantCombatParam *param; // [rsp+18h] [rbp-178h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-170h] BYREF
  char v23[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 monster_id:242 64 8 8 iter:257 96 8 15 level_param:255 128 128 13 param_opt:248";
  *(_QWORD *)(v2 + 16) = BuoyantCombatGallery::onKillMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = monster_id;
  if ( *(_DWORD *)(v2 + 48) )
  {
    BaseGallery::getParam<BuoyantCombatParam>(
      (std::optional<BuoyantCombatParam> *)(v2 + 128),
      (const BaseGallery *const)this);
    if ( !std::optional<BuoyantCombatParam>::has_value((const std::optional<BuoyantCombatParam> *const)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
        "onKillMonster",
        251);
      v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v22,
             (const char (*)[38])"[GALLERY] param not find, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      param = std::optional<BuoyantCombatParam>::value((std::optional<BuoyantCombatParam> *const)(v2 + 128));
      *(BuoyantCombaLevelParam *)(v2 + 96) = BuoyantCombatGallery::getCurDifficultLevelParam(this);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                            &param->normal_monster_score_map,
                                                                            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,unsigned int>::end(&param->normal_monster_score_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
             &__y) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->kill_monster_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ++this->kill_monster_count_;
        v6 = *(_DWORD *)(v2 + 100);
        v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v8 = SAFE_MULTIPLY<unsigned int,unsigned int>(v7->second, v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v11 = v8;
        v9 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v8);
        v10 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
        LOBYTE(v11) = v10 != 0;
        v12 = v10 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v10;
        if ( v12 )
          __asan_report_store4(&this->score_, v11, v12);
        this->score_ = v9;
      }
      else
      {
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                              &param->special_monster_score_map,
                                                                              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,unsigned int>::end(&param->special_monster_score_map)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
               &__y) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_count_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++this->kill_special_monster_count_;
          v13 = *(_DWORD *)(v2 + 100);
          v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v15 = SAFE_MULTIPLY<unsigned int,unsigned int>(v14->second, v13);
          if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v18 = v15;
          v16 = SAFE_ADD<unsigned int,unsigned int>(this->score_, v15);
          v17 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v17 != 0;
          v19 = v17 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v17;
          if ( v19 )
            __asan_report_store4(&this->score_, v18, v19);
          this->score_ = v16;
        }
      }
    }
    std::optional<BuoyantCombatParam>::~optional((std::optional<BuoyantCombatParam> *const)(v2 + 128));
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 275: range 00000000179D35B4-00000000179D360E
void __cdecl BuoyantCombatGallery::onHitTarget(BuoyantCombatGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_target_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->kill_target_count_;
};

// Line 280: range 00000000179D3610-00000000179D3A3F
BuoyantCombaLevelParam __cdecl BuoyantCombatGallery::getCurDifficultLevelParam(const BuoyantCombatGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  BuoyantCombaLevelParam v5; // r14
  std::vector<BuoyantCombaLevelParam>::size_type difficult_level; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const std::vector<BuoyantCombaLevelParam> *p_level_param_vec; // rcx
  __gnu_cxx::__alloc_traits<std::allocator<BuoyantCombaLevelParam>,BuoyantCombaLevelParam>::value_type *v11; // rax
  BuoyantCombaLevelParam *v12; // rdx
  BuoyantCombaLevelParam v13; // rax
  const BuoyantCombatParam *param; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-130h] BYREF
  char v16[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 17 default_param:281 64 128 13 param_opt:282";
  *(_QWORD *)(v1 + 16) = BuoyantCombatGallery::getCurDifficultLevelParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862726] = -202116109;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 1;
  BaseGallery::getParam<BuoyantCombatParam>(
    (std::optional<BuoyantCombatParam> *)(v1 + 64),
    (const BaseGallery *const)this);
  if ( !std::optional<BuoyantCombatParam>::has_value((const std::optional<BuoyantCombatParam> *const)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "getCurDifficultLevelParam",
      285);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v15,
           (const char (*)[38])"[GALLERY] param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = *(BuoyantCombaLevelParam *)(v1 + 32);
  }
  else
  {
    param = std::optional<BuoyantCombatParam>::value((const std::optional<BuoyantCombatParam> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    difficult_level = this->difficult_level_;
    if ( difficult_level < std::vector<BuoyantCombaLevelParam>::size(&param->level_param_vec) )
    {
      p_level_param_vec = &param->level_param_vec;
      if ( *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = (__gnu_cxx::__alloc_traits<std::allocator<BuoyantCombaLevelParam>,BuoyantCombaLevelParam>::value_type *)std::vector<BuoyantCombaLevelParam>::operator[](p_level_param_vec, this->difficult_level_);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->score_ratio + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->score_ratio + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      v5 = *v12;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
        "getCurDifficultLevelParam",
        291);
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v15,
             (const char (*)[59])"[GALLERY] difficult_level param not find, difficult_level:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->difficult_level_);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = *(BuoyantCombaLevelParam *)(v1 + 32);
    }
  }
  std::optional<BuoyantCombatParam>::~optional((std::optional<BuoyantCombatParam> *const)(v1 + 64));
  v13 = v5;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v13;
};

// Line 298: range 00000000179D3A40-00000000179D3D9C
__int64 __fastcall BuoyantCombatGallery::trySetDifficultLevel(
        BuoyantCombatGallery *const this,
        uint32_t difficult_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BuoyantCombatGallery *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::vector<BuoyantCombaLevelParam>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  __int64 result; // rax
  const BuoyantCombatParam *param; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-130h] BYREF
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 difficult_level:297 64 128 13 param_opt:299";
  *(_QWORD *)(v2 + 16) = BuoyantCombatGallery::trySetDifficultLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = difficult_level;
  v5 = this;
  BaseGallery::getParam<BuoyantCombatParam>(
    (std::optional<BuoyantCombatParam> *)(v2 + 64),
    (const BaseGallery *const)this);
  if ( !std::optional<BuoyantCombatParam>::has_value((const std::optional<BuoyantCombatParam> *const)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "trySetDifficultLevel",
      302);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v17,
           (const char (*)[38])"[GALLERY] param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    param = std::optional<BuoyantCombatParam>::value((const std::optional<BuoyantCombatParam> *const)(v2 + 64));
    v8 = *(unsigned int *)(v2 + 48);
    if ( v8 < std::vector<BuoyantCombaLevelParam>::size(&param->level_param_vec) )
    {
      v12 = *(_DWORD *)(v2 + 48);
      v13 = *(_BYTE *)(((unsigned __int64)&this->difficult_level_ >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v13 != 0;
      v14 = v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13;
      if ( v14 )
        __asan_report_store4(&this->difficult_level_, v5, v14);
      this->difficult_level_ = v12;
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
        "trySetDifficultLevel",
        308);
      v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v17,
             (const char (*)[54])"[GALLERY] trySetDifficultLevel fail. difficult_level:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])"gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
  }
  std::optional<BuoyantCombatParam>::~optional((std::optional<BuoyantCombatParam> *const)(v2 + 64));
  result = v7;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 316: range 00000000179D3D9E-00000000179D3F42
void __cdecl BuoyantCombatGallery::onAvatarDie(BuoyantCombatGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  unsigned int value; // [rsp+14h] [rbp-3Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/buoyant_combat_gallery.cpp",
      "onAvatarDie",
      319);
    v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"[GALLERY] uid not in player_info_map_. uid:");
    value = Player::getUid(player);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v3,
           (const char (*)[25])", player_info_map_ size:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      if ( *(char *)(((unsigned __int64)&this->is_all_avatar_dead_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_all_avatar_dead_, &value, &this->is_all_avatar_dead_);
      this->is_all_avatar_dead_ = 1;
      BaseGallery::stop((BaseGallery *const)this, 0, GALLERY_STOP_NONE);
    }
  }
};
