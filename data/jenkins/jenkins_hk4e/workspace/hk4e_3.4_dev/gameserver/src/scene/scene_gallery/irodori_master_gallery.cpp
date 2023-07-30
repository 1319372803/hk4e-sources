// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/irodori_master_gallery.cpp

// Line 29: range 00000000145C8094-00000000145C8671
int32_t __cdecl IrodoriMasterGallery::updatePlayerScore(
        IrodoriMasterGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  common::milog::MiLogStream *v4; // rcx
  bool v6; // bl
  common::milog::MiLogStream *v7; // rax
  bool v8; // bl
  common::milog::MiLogStream *v9; // rax
  uint64_t SceneTimeMs; // rax
  uint64_t end_time; // rcx
  uint64_t v12; // rax
  float v13; // xmm0_4
  uint32_t v14; // edi
  bool v15; // dl
  std::allocator<char> __a; // [rsp+2Bh] [rbp-35h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)&this->baseclass_0[56] != 3 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "updatePlayerScore",
      32);
    v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"[IrodoriMaster] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
LABEL_6:
    val = *(_DWORD *)&this->baseclass_0[56];
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 66) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_settled_);
  }
  if ( this->is_settled_ )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "updatePlayerScore",
      37);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v20,
           (const char (*)[43])"[IrodoriMaster] gallery is settled, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[56] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    goto LABEL_6;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "is_finish", &__a);
  v6 = ScriptUtil::getTableValue<bool>(
         &ScriptUtil::no_exception_instance,
         param_table,
         (const std::string *)&v20,
         &this->is_finish_) != 0;
  std::string::~string(&v20);
  std::allocator<char>::~allocator(&__a);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "updatePlayerScore",
      43);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v20,
           (const char (*)[50])"[IrodoriMaster] getTableValue failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      (const unsigned int *)&this->baseclass_0[32]);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "timeout", &__a);
    v8 = ScriptUtil::getTableValue<bool>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (const std::string *)&v20,
           &this->is_timeout_) != 0;
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "updatePlayerScore",
        48);
      v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v20,
             (const char (*)[50])"[IrodoriMaster] getTableValue failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)&this->baseclass_0[32]);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneTimeMs = Scene::getSceneTimeMs(*(Scene *const *)&this->baseclass_0[24]);
      if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) )
        SceneTimeMs = __asan_report_store8(&this->end_time_, param_table);
      this->end_time_ = SceneTimeMs;
      end_time = this->end_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( end_time <= this->start_time_ )
      {
        v14 = 0;
      }
      else
      {
        v12 = this->end_time_ - this->start_time_;
        if ( (v12 & 0x8000000000000000LL) != 0LL )
          v13 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
        else
          v13 = (float)(int)v12;
        v14 = (int)std::ceil(v13 / 1000.0);
      }
      v15 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
      if ( v15 )
      {
        v14 = (_DWORD)this + 316;
        __asan_report_store4(&this->finish_time_, (((_BYTE)this + 60) & 7u) + 3, v15);
      }
      this->finish_time_ = v14;
      IrodoriMasterGallery::stopPlay(this, 0, GALLERY_STOP_FINISHED);
      return 0;
    }
  }
};

// Line 63: range 00000000145C8672-00000000145C879A
void __cdecl IrodoriMasterGallery::toClient(IrodoriMasterGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryIrodoriMasterInfo *detail_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_irodori_master_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIrodoriMasterInfo::set_level_id(detail_info, this->level_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryIrodoriMasterInfo::set_difficulty(detail_info, this->difficulty_);
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_cg_viewed_);
  proto::SceneGalleryIrodoriMasterInfo::set_is_cg_viewed(detail_info, this->is_cg_viewed_);
};

// Line 72: range 00000000145C8854-00000000145C8F62
void __cdecl IrodoriMasterGallery::onStart(IrodoriMasterGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r15
  uint32_t level_id; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rcx
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // r14
  bool v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+1Ch] [rbp-184h] BYREF
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-180h] BYREF
  std::function<void()> rollbacker; // [rsp+30h] [rbp-170h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-150h] BYREF
  char v22[272]; // [rsp+90h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 12 6 pos:80 80 12 6 rot:81 112 16 13 player_ptr:87 144 40 20 gallery_committer:73";
  *(_QWORD *)(v1 + 16) = IrodoriMasterGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  std::function<void ()(void)>::function<IrodoriMasterGallery::onStart(void)::{lambda(void)#1},void,void>(
    &rollbacker,
    (IrodoriMasterGallery::onStart::<lambda()>)this);
  common::tools::ScopedCommitter::ScopedCommitter((common::tools::ScopedCommitter *const)(v1 + 144), &rollbacker);
  std::function<void ()(void)>::~function(&rollbacker);
  Vector3::Vector3((Vector3 *const)(v1 + 48), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v1 + 80), 0.0, 0.0, 0.0);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_irodori_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = this->level_id_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 112));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
  LOBYTE(level_id) = ActivityIrodoriExcelConfigMgr::getIrodoriMasterLevelTransferPosAndRot(
                       p_activity_irodori_config_mgr,
                       &v6->design_config.txt_config_mgr,
                       level_id,
                       (Vector3 *)(v1 + 48),
                       (Vector3 *)(v1 + 80)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 112));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( (_BYTE)level_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&rollbacker,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "onStart",
      84);
    v7 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           (common::milog::MiLogStream *const)&rollbacker,
           (const char (*)[74])"[IrodoriMaster] getIrodoriMasterLevelTransferPosAndRot failed, level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->level_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = *(_QWORD *)&this->baseclass_0[24];
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 112), v8, this->owner_uid_);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&rollbacker,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "onStart",
        90);
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             (common::milog::MiLogStream *const)&rollbacker,
             (const char (*)[46])"[IrodoriMaster] findPlayer failed, owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      SceneComp = Player::getSceneComp(v10);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_IRODORI_MASTER_TRANSFER);
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = PlayerSceneComp::jumpToScene(
              SceneComp,
              *(Scene **)&this->baseclass_0[24],
              (const Vector3 *)(v1 + 48),
              (const Vector3 *)(v1 + 80),
              0,
              &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&rollbacker,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/irodori_master_gallery.cpp",
          "onStart",
          95);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&rollbacker,
                (const char (*)[46])"[IrodoriMaster] jumpToScene failed, scene_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(*(const Scene *const *)&this->baseclass_0[24]);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", pos:");
        v16 = operator<<(v15, (const Vector3 *)(v1 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", rot:");
        operator<<(v17, (const Vector3 *)(v1 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
      }
      else
      {
        common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v1 + 144));
        BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 112));
  }
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v1 + 144));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 73: range 00000000145C879C-00000000145C8852
void __cdecl IrodoriMasterGallery::onStart(void)::{lambda(void)#1}::operator()(
        const IrodoriMasterGallery::onStart::<lambda()> *const __closure)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/irodori_master_gallery.cpp",
    "operator()",
    75);
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    &v1,
    (const char (*)[41])"[IrodoriMaster] gallery play init failed");
  common::milog::MiLogStream::~MiLogStream(&v1);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  IrodoriMasterGallery::stopPlay(__closure->__this, 1, GALLERY_STOP_PLAY_INIT_FAILED);
};

// Line 103: range 00000000145C8F64-00000000145C8FFB
void __cdecl IrodoriMasterGallery::stopPlay(
        IrodoriMasterGallery *const this,
        bool is_interrupt,
        proto::GalleryStopReason reason)
{
  SceneGalleryComp *GalleryComp; // rdi
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GalleryComp = Scene::getGalleryComp(*(Scene *const *)&this->baseclass_0[24]);
  v4 = is_interrupt;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
  {
    GalleryComp = (SceneGalleryComp *)&this->baseclass_0[32];
    __asan_report_load4();
  }
  SceneGalleryComp::forceStopAndClearGallery(GalleryComp, *(_DWORD *)&this->baseclass_0[32], v4, reason);
};

// Line 108: range 00000000145C9046-00000000145CA703
void __cdecl IrodoriMasterGallery::onPlayerEnter(IrodoriMasterGallery *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint64_t Guid; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint64_t v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  PlayerAvatarComp *v24; // rax
  uint32_t v25; // r15d
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v31; // rdx
  void (__fastcall *v32)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  common::milog::MiLogStream *v33; // rax
  char *v34; // rsi
  int32_t v35; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  char v37; // cl
  uint32_t level_id; // r14d
  __int64 v39; // rax
  char v40; // dl
  bool v41; // dl
  __int64 v42; // rsi
  uint32_t difficulty; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  char v45; // cl
  _BOOL4 is_cg_viewed; // r14d
  __int64 v47; // rax
  char v48; // dl
  bool v49; // dl
  __int64 v50; // rsi
  uint32_t owner_uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  char v53; // cl
  Group *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  PlayerSceneComp *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rbx
  PlayerSceneComp *v61; // rax
  bool IsEnterRelogin; // al
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rbx
  PlayerSceneComp *v65; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-1F0h]
  unsigned int (__fastcall *v67)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+20h] [rbp-1E0h]
  uint32_t p_trial_avatar_ptra; // [rsp+28h] [rbp-1D8h]
  SceneBlockGroupComp *p_trial_avatar_ptr; // [rsp+28h] [rbp-1D8h]
  bool p_trial_avatar_ptrb; // [rsp+28h] [rbp-1D8h]
  TrialAvatarPtr *p_trial_avatar_ptrc; // [rsp+28h] [rbp-1D8h]
  PlayerAvatarComp *p_trial_avatar_ptrd; // [rsp+28h] [rbp-1D8h]
  std::allocator<unsigned int> __a; // [rsp+4Bh] [rbp-1B5h] BYREF
  unsigned int val; // [rsp+4Ch] [rbp-1B4h] BYREF
  std::initializer_list<long unsigned int> v75; // [rsp+50h] [rbp-1B0h] BYREF
  std::shared_ptr<TrialAvatar> v76; // [rsp+60h] [rbp-1A0h] BYREF
  std::vector<unsigned int> uid_vec; // [rsp+70h] [rbp-190h] BYREF
  common::milog::MiLogStream v78; // [rsp+90h] [rbp-170h] BYREF
  char v79[336]; // [rsp+B0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 19 trial_avatar_id:145 48 16 20 trial_avatar_ptr:153 80 16 13 group_ptr:181 112 16 11 evt"
                        "_ptr:187 144 32 10 record:151 208 40 21 gallery_committer:119";
  *(_QWORD *)(v2 + 16) = IrodoriMasterGallery::onPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  p_trial_avatar_ptra = this->owner_uid_;
  if ( p_trial_avatar_ptra == Player::getUid(player) )
  {
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::getDestEnterReason(SceneComp) == ENTER_REASON_IRODORI_MASTER_TRANSFER )
    {
      std::function<void ()(void)>::function<IrodoriMasterGallery::onPlayerEnter(Player &)::{lambda(void)#1},void,void>(
        (std::function<void()> *const)&v78,
        (IrodoriMasterGallery::onPlayerEnter::<lambda()>)this);
      common::tools::ScopedCommitter::ScopedCommitter(
        (common::tools::ScopedCommitter *const)(v2 + 208),
        (std::function<void()> *)&v78);
      std::function<void ()(void)>::~function((std::function<void()> *const)&v78);
      if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_resource_guard_);
      if ( this->is_resource_guard_ )
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/irodori_master_gallery.cpp",
          "onPlayerEnter",
          126);
        v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v78,
               (const char (*)[46])"[IrodoriMaster] is_resource_guard, owner_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->owner_uid_);
        common::milog::MiLogStream::~MiLogStream(&v78);
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_resource_guard_, &v78, &this->is_resource_guard_);
        this->is_resource_guard_ = 1;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 112));
        p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.txt_config_mgr.activity_irodori_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v75._M_len = (std::initializer_list<long unsigned int>::size_type)data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                                                                            p_activity_irodori_config_mgr,
                                                                            this->level_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
        if ( v75._M_len )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_trial_avatar_ptr = Scene::getBlockGroupComp(*(Scene *const *)&this->baseclass_0[24]);
          if ( *(_BYTE *)(((unsigned __int64)p_trial_avatar_ptr >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = (unsigned __int64)(p_trial_avatar_ptr->_vptr_SceneCompBase + 12);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8();
          v67 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v12;
          if ( *(_BYTE *)(((v75._M_len + 16) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v75._M_len + 16) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          val = *(_DWORD *)(v75._M_len + 16);
          __l._M_array = &val;
          __l._M_len = 1LL;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&uid_vec, __l, &__a);
          p_trial_avatar_ptrb = v67(p_trial_avatar_ptr, &uid_vec, 0LL, 0LL) != 0;
          std::vector<unsigned int>::~vector(&uid_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( p_trial_avatar_ptrb )
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/irodori_master_gallery.cpp",
              "onPlayerEnter",
              140);
            v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v78,
                    (const char (*)[49])"[IrodoriMaster] registerGroups failed, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              (const unsigned int *)(v75._M_len + 16));
            common::milog::MiLogStream::~MiLogStream(&v78);
          }
          else
          {
            *(_DWORD *)(v2 + 32) = IrodoriMasterGallery::getIrodoriMasterTrialAvatarId(
                                     this,
                                     player,
                                     (const std::vector<unsigned int> *)(v75._M_len + 72));
            if ( *(_DWORD *)(v2 + 32) )
            {
              proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 144));
              proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v2 + 144), 8u);
              AvatarComp = (unsigned int)Player::getAvatarComp(player);
              PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v2 + 48), AvatarComp, *(_DWORD *)(v2 + 32));
              if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v2 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                  "onPlayerEnter",
                  156);
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v78,
                  (const char (*)[42])"[IrodoriMaster] createTrialAvatar nullptr");
                common::milog::MiLogStream::~MiLogStream(&v78);
              }
              else
              {
                p_trial_avatar_ptrc = (TrialAvatarPtr *)Player::getAvatarComp(player);
                std::shared_ptr<TrialAvatar>::shared_ptr(
                  (std::shared_ptr<TrialAvatar> *const)(v2 + 112),
                  (const std::shared_ptr<TrialAvatar> *)(v2 + 48));
                PlayerAvatarComp::addTrialAvatar(
                  (PlayerAvatarComp *const)&v76,
                  p_trial_avatar_ptrc,
                  (const proto::TrialAvatarGrantRecord *)(v2 + 112));
                LOBYTE(p_trial_avatar_ptrc) = std::operator==<TrialAvatar>(0LL, &v76);
                std::shared_ptr<TrialAvatar>::~shared_ptr(&v76);
                std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 112));
                if ( (_BYTE)p_trial_avatar_ptrc )
                {
                  common::milog::MiLogStream::create(
                    &v78,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                    "onPlayerEnter",
                    161);
                  v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                          &v78,
                          (const char (*)[56])"[IrodoriMaster] addTrialAvatar failed, trial_avatar_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v78);
                }
                else
                {
                  v17 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  Guid = Avatar::getGuid(v17);
                  if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
                    Guid = __asan_report_store8(&this->grant_trial_avatar_guid_, &v76);
                  this->grant_trial_avatar_guid_ = Guid;
                  p_trial_avatar_ptrd = Player::getAvatarComp(player);
                  v19 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  v75._M_array = (std::initializer_list<long unsigned int>::iterator)Avatar::getGuid(v19);
                  std::allocator<unsigned long>::allocator((std::allocator<long unsigned int> *const)&__a);
                  std::vector<unsigned long>::vector(
                    (std::vector<long unsigned int> *const)&uid_vec,
                    (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &v75),
                    (const std::vector<long unsigned int>::allocator_type *)&__a);
                  v20 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  v21 = Avatar::getGuid(v20);
                  v22 = PlayerAvatarComp::lockTeamAvatar(
                          p_trial_avatar_ptrd,
                          v21,
                          (const std::vector<long unsigned int> *)&uid_vec,
                          CHANGE_SCENE_TEAM_REASON_IRODORI_MASTER) != 0;
                  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)&uid_vec);
                  std::allocator<unsigned long>::~allocator((std::allocator<long unsigned int> *const)&__a);
                  if ( v22 )
                  {
                    common::milog::MiLogStream::create(
                      &v78,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                      "onPlayerEnter",
                      167);
                    v23 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                            &v78,
                            (const char (*)[56])"[IrodoriMaster] lockTeamAvatar failed, trial_avatar_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)(v2 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v78);
                  }
                  else
                  {
                    v24 = Player::getAvatarComp(player);
                    PlayerAvatarComp::delAllBuffs(v24);
                    if ( *(_BYTE *)(((v75._M_len + 64) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v75._M_len + 64) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    v25 = *(_DWORD *)(v75._M_len + 64);
                    std::allocator<unsigned int>::allocator(&__a);
                    val = Player::getUid(player);
                    std::vector<unsigned int>::vector(&uid_vec, 1uLL, &val, &__a);
                    v26 = (unsigned int)BaseGallery::attachAbilityGroup((BaseGallery *const)this, &uid_vec, v25) != 0;
                    std::vector<unsigned int>::~vector(&uid_vec);
                    std::allocator<unsigned int>::~allocator(&__a);
                    if ( v26 )
                    {
                      common::milog::MiLogStream::create(
                        &v78,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                        "onPlayerEnter",
                        176);
                      v27 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                              &v78,
                              (const char (*)[54])"[IrodoriMaster] attachAbilityGroup failed, owner_uid:");
                      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v27,
                              &this->owner_uid_);
                      v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                              v28,
                              (const char (*)[31])", gallery_ability_group_index:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v75._M_len + 64));
                      common::milog::MiLogStream::~MiLogStream(&v78);
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(*(Scene *const *)&this->baseclass_0[24]);
                      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                        BlockGroupComp = __asan_report_load8();
                      v31 = *(_QWORD *)BlockGroupComp + 80LL;
                      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                        BlockGroupComp = __asan_report_load8();
                      v32 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v31;
                      if ( *(_BYTE *)(((v75._M_len + 16) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v75._M_len + 16) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        BlockGroupComp = __asan_report_load4();
                      }
                      v32(v2 + 80, BlockGroupComp, *(unsigned int *)(v75._M_len + 16), 0LL, 0LL, 0LL);
                      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 80), 0LL) )
                      {
                        common::milog::MiLogStream::create(
                          &v78,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                          "onPlayerEnter",
                          184);
                        v33 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                &v78,
                                (const char (*)[44])"[IrodoriMaster] findGroup failed, group_id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v33,
                          (const unsigned int *)(v75._M_len + 16));
                        common::milog::MiLogStream::~MiLogStream(&v78);
                      }
                      else
                      {
                        EventUtil::createEvent((data::EventType)(v2 + 112));
                        v34 = (char *)(v2 + 112);
                        if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 112)) )
                        {
                          common::milog::MiLogStream::create(
                            &v78,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                            "onPlayerEnter",
                            190);
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            &v78,
                            (const char (*)[33])"[IrodoriMaster] createEvent fail");
                          common::milog::MiLogStream::~MiLogStream(&v78);
                        }
                        else
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4();
                          }
                          v35 = *(_DWORD *)&this->baseclass_0[32];
                          v36 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                          v37 = *(_BYTE *)(((unsigned __int64)&v36->param1 >> 3) + 0x7FFF8000);
                          if ( v37 != 0 && (char)((((_BYTE)v36 + 44) & 7) + 3) >= v37 )
                          {
                            LOBYTE(v34) = v37 != 0;
                            __asan_report_store4(&v36->param1, v34, (_BYTE)v36);
                          }
                          v36->param1 = v35;
                          if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4();
                          }
                          level_id = this->level_id_;
                          v39 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                          v40 = *(_BYTE *)(((unsigned __int64)(v39 + 48) >> 3) + 0x7FFF8000);
                          LOBYTE(v34) = v40 != 0;
                          v41 = v40 != 0 && v40 <= 3;
                          if ( v41 )
                            v39 = __asan_report_store4(v39 + 48, v34, v41);
                          *(_DWORD *)(v39 + 48) = level_id;
                          v42 = (((_BYTE)this + 52) & 7u) + 3;
                          if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3)
                                                                                + 0x7FFF8000) )
                          {
                            __asan_report_load4();
                          }
                          difficulty = this->difficulty_;
                          v44 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                          v45 = *(_BYTE *)(((unsigned __int64)&v44->param3 >> 3) + 0x7FFF8000);
                          if ( v45 != 0 && (char)((((_BYTE)v44 + 52) & 7) + 3) >= v45 )
                          {
                            LOBYTE(v42) = v45 != 0;
                            __asan_report_store4(&v44->param3, v42, (_BYTE)v44);
                          }
                          v44->param3 = difficulty;
                          if ( *(char *)(((unsigned __int64)&this->is_cg_viewed_ >> 3) + 0x7FFF8000) < 0 )
                            __asan_report_load1(&this->is_cg_viewed_);
                          is_cg_viewed = this->is_cg_viewed_;
                          v47 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                          v48 = *(_BYTE *)(((unsigned __int64)(v47 + 56) >> 3) + 0x7FFF8000);
                          LOBYTE(v42) = v48 != 0;
                          v49 = v48 != 0 && v48 <= 3;
                          if ( v49 )
                            v47 = __asan_report_store4(v47 + 56, v42, v49);
                          *(_DWORD *)(v47 + 56) = is_cg_viewed;
                          v50 = (((_BYTE)this + 44) & 7u) + 3;
                          if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3)
                                                                                + 0x7FFF8000) )
                          {
                            __asan_report_load4();
                          }
                          owner_uid = this->owner_uid_;
                          v52 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                          v53 = *(_BYTE *)(((unsigned __int64)&v52->uid >> 3) + 0x7FFF8000);
                          if ( v53 != 0 && (char)((((_BYTE)v52 + 60) & 7) + 3) >= v53 )
                          {
                            LOBYTE(v50) = v53 != 0;
                            __asan_report_store4(&v52->uid, v50, (_BYTE)v52);
                          }
                          v52->uid = owner_uid;
                          v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                          if ( Group::handleEvent(v54, (EventPtr *)(v2 + 112)) )
                          {
                            common::milog::MiLogStream::create(
                              &v78,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                              "onPlayerEnter",
                              200);
                            v55 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                                    &v78,
                                    (const char (*)[26])"[IrodoriMaster] group_id:");
                            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v55,
                                    (const unsigned int *)(v75._M_len + 16));
                            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                              v56,
                              (const char (*)[43])" handleEvent EVENT_SELECT_DIFFICULTY fails");
                            common::milog::MiLogStream::~MiLogStream(&v78);
                          }
                          else
                          {
                            common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 208));
                            BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
                          }
                        }
                        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 112));
                      }
                      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 80));
                    }
                  }
                }
              }
              std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 48));
              proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 144));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/irodori_master_gallery.cpp",
                "onPlayerEnter",
                148);
              v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v78,
                      (const char (*)[64])"[IrodoriMaster] getIrodoriMasterTrialAvatarId failed, level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->level_id_);
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/irodori_master_gallery.cpp",
            "onPlayerEnter",
            135);
          v11 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v78,
                  (const char (*)[68])"[IrodoriMaster] findIrodoriMasterLevelExcelConfig failed, level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->level_id_);
          common::milog::MiLogStream::~MiLogStream(&v78);
        }
      }
      common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 208));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "onPlayerEnter",
        211);
      v57 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v78,
              (const char (*)[57])"[IrodoriMaster] player is in other transfer, enter_type:");
      v58 = Player::getSceneComp(player);
      *(_DWORD *)(v2 + 32) = PlayerSceneComp::getDestEnterType(v58);
      v59 = common::milog::MiLogStream::operator<<<proto::EnterType,(proto::EnterType*)0>(
              v57,
              (const proto::EnterType *)(v2 + 32));
      v60 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v59, (const char (*)[14])", is_relogin:");
      v61 = Player::getSceneComp(player);
      IsEnterRelogin = PlayerSceneComp::getIsEnterRelogin(v61);
      v63 = common::milog::MiLogStream::operator<<(v60, IsEnterRelogin);
      v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v63, (const char (*)[16])", enter_reason:");
      v65 = Player::getSceneComp(player);
      val = PlayerSceneComp::getDestEnterReason(v65);
      common::milog::MiLogStream::operator<<<proto::EnterReason,(proto::EnterReason*)0>(
        v64,
        (const proto::EnterReason *)&val);
      common::milog::MiLogStream::~MiLogStream(&v78);
      IrodoriMasterGallery::stopPlay(this, 1, GALLERY_STOP_OWNER_LEAVE_SCENE);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "onPlayerEnter",
      111);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v78,
           (const char (*)[47])"[IrodoriMaster] other player enter, owner_uid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->owner_uid_);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])", enter_uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v78);
    IrodoriMasterGallery::stopPlay(this, 1, GALLERY_STOP_OTHER_PLAYER_ENTER);
  }
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 119: range 00000000145C8FFC-00000000145C9044
void __cdecl IrodoriMasterGallery::onPlayerEnter(Player &)::{lambda(void)#1}::operator()(
        const IrodoriMasterGallery::onPlayerEnter::<lambda()> *const __closure)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  IrodoriMasterGallery::stopPlay(__closure->__this, 1, GALLERY_STOP_PLAY_INIT_FAILED);
};

// Line 219: range 00000000145CA704-00000000145CAF5F
void __fastcall IrodoriMasterGallery::onStop(IrodoriMasterGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  proto::GalleryStopReason v8; // r14d
  proto::IrodoriMasterGallerySettleInfo *v9; // rax
  Player *v10; // rax
  Player *v11; // rax
  IrodoriActivity *p_finish_time; // rdi
  uint32_t finish_time; // ecx
  uint32_t difficulty; // edx
  IrodoriActivity *p_level_id; // rdi
  uint32_t level_id; // edx
  Player *v17; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v19; // edx
  IrodoriActivity *p_difficulty; // rdi
  uint32_t v21; // esi
  uint32_t v22; // ecx
  common::milog::MiLogStream *v23; // rax
  uint32_t settle_reason; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-110h] BYREF
  char v27[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 10 reason:218 64 16 14 player_ptr:225 96 16 16 activity_ptr:237 128 32 10 notify:231";
  *(_QWORD *)(v2 + 16) = IrodoriMasterGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = reason;
  if ( *(char *)(((unsigned __int64)&this->is_resource_guard_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_resource_guard_);
  if ( this->is_resource_guard_ )
    IrodoriMasterGallery::recycleGalleryResource(this);
  v5 = ServiceBox::findService<GameserverService>();
  v6 = (unsigned int)GameserverService::getGameThreadLocal(v5) + 16;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), v6);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "onStop",
      228);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v26,
           (const char (*)[46])"[IrodoriMaster] findPlayer failed, owner_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->owner_uid_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    proto::IrodoriMasterGallerySettleNotify::IrodoriMasterGallerySettleNotify((proto::IrodoriMasterGallerySettleNotify *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriMasterGallerySettleNotify::set_gallery_id(
      (proto::IrodoriMasterGallerySettleNotify *const)(v2 + 128),
      *(_DWORD *)&this->baseclass_0[32]);
    v8 = *(_DWORD *)(v2 + 48);
    v9 = proto::IrodoriMasterGallerySettleNotify::mutable_settle_info((proto::IrodoriMasterGallerySettleNotify *const)(v2 + 128));
    IrodoriMasterGallery::toSettleInfo(this, v9, v8);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::sendProto(v10, (const google::protobuf::Message *)(v2 + 128));
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::getActivityComp(v11);
    PlayerActivityComp::findOpenningActivity<IrodoriActivity>((PlayerActivityComp *const)(v2 + 96));
    if ( std::operator!=<IrodoriActivity>(0LL, (const std::shared_ptr<IrodoriActivity> *)(v2 + 96)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_finish_);
      }
      if ( this->is_finish_ )
      {
        p_finish_time = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) )
        {
          p_finish_time = (IrodoriActivity *)&this->finish_time_;
          __asan_report_load4();
        }
        finish_time = this->finish_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) )
        {
          p_finish_time = (IrodoriActivity *)&this->difficulty_;
          __asan_report_load4();
        }
        difficulty = this->difficulty_;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_finish_time = (IrodoriActivity *)&this->level_id_;
          __asan_report_load4();
        }
        IrodoriActivity::recordIrodoriMasterFinishData(p_finish_time, this->level_id_, difficulty, finish_time);
      }
      p_level_id = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_level_id = (IrodoriActivity *)&this->level_id_;
        __asan_report_load4();
      }
      level_id = this->level_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
      {
        p_level_id = (IrodoriActivity *)&this->baseclass_0[32];
        __asan_report_load4();
      }
      IrodoriActivity::clearCurrentIrodoriMasterGallery(p_level_id, *(_DWORD *)&this->baseclass_0[32], level_id);
      settle_reason = IrodoriMasterGallery::getSettleReason(this, *(proto::GalleryStopReason *)(v2 + 48));
      if ( settle_reason == 1 || settle_reason == 4 || settle_reason == 3 )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        WatcherComp = Player::getWatcherComp(v17);
        if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) )
        {
          WatcherComp = (PlayerWatcherComp *)&this->difficulty_;
          __asan_report_load4();
        }
        v19 = this->difficulty_;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          WatcherComp = (PlayerWatcherComp *)&this->level_id_;
          __asan_report_load4();
        }
        PlayerWatcherComp::triggerIrodoriMasterLevelEvent(WatcherComp, this->level_id_, v19, 0, 0);
      }
      p_difficulty = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) )
      {
        p_difficulty = (IrodoriActivity *)&this->finish_time_;
        __asan_report_load4();
      }
      v21 = this->finish_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) )
      {
        p_difficulty = (IrodoriActivity *)&this->difficulty_;
        __asan_report_load4();
      }
      v22 = this->difficulty_;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_difficulty = (IrodoriActivity *)&this->level_id_;
        __asan_report_load4();
      }
      IrodoriActivity::logIrodoriMasterSettle(p_difficulty, settle_reason, this->level_id_, v22, v21);
    }
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "onStop",
      258);
    v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v26,
            (const char (*)[38])"[IrodoriMaster] gallery stop, reason:");
    common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
      v23,
      (const proto::GalleryStopReason *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    std::shared_ptr<IrodoriActivity>::~shared_ptr((std::shared_ptr<IrodoriActivity> *const)(v2 + 96));
    proto::IrodoriMasterGallerySettleNotify::~IrodoriMasterGallerySettleNotify((proto::IrodoriMasterGallerySettleNotify *const)(v2 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 262: range 00000000145CAF60-00000000145CB02E
uint32_t __cdecl IrodoriMasterGallery::getSettleReason(
        IrodoriMasterGallery *const this,
        proto::GalleryStopReason reason)
{
  if ( reason == GALLERY_STOP_FINISHED )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_finish_);
    }
    if ( this->is_finish_ )
    {
      return 1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_timeout_);
      if ( this->is_timeout_ )
        return 4;
      else
        return 2;
    }
  }
  else if ( reason == GALLERY_STOP_AVATAR_DIE )
  {
    return 3;
  }
  else
  {
    return 2;
  }
};

// Line 283: range 00000000145CB030-00000000145CB8B9
void __cdecl IrodoriMasterGallery::recycleGalleryResource(IrodoriMasterGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  GameserverService *v8; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Player *v13; // rax
  PlayerAvatarComp *v14; // rcx
  Player *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  unsigned int (__fastcall *v18)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+8h] [rbp-108h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-100h]
  char __l; // [rsp+10h] [rbp-100h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+20h] [rbp-F0h]
  bool v22; // [rsp+20h] [rbp-F0h]
  char v23; // [rsp+20h] [rbp-F0h]
  PlayerAvatarComp *v24; // [rsp+20h] [rbp-F0h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-D5h] BYREF
  int v26; // [rsp+3Ch] [rbp-D4h] BYREF
  std::initializer_list<long unsigned int> v27; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-C0h] BYREF
  std::vector<unsigned int> v29; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-90h] BYREF
  char v31[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:297";
  *(_QWORD *)(v1 + 16) = IrodoriMasterGallery::recycleGalleryResource;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_irodori_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v27._M_len = (std::initializer_list<long unsigned int>::size_type)data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                                                                      p_activity_irodori_config_mgr,
                                                                      this->level_id_);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( v27._M_len )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BlockGroupComp = Scene::getBlockGroupComp(*(Scene *const *)&this->baseclass_0[24]);
    if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v18 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v6;
    if ( *(_BYTE *)(((v27._M_len + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v27._M_len + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v26 = *(_DWORD *)(v27._M_len + 16);
    __la._M_array = (std::initializer_list<unsigned int>::iterator)&v26;
    __la._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&v29, __la, &__a);
    v22 = v18(BlockGroupComp, &v29, 1LL) != 0;
    std::vector<unsigned int>::~vector(&v29);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v22 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "recycleGalleryResource",
        293);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v30,
             (const char (*)[51])"[IrodoriMaster] unregisterGroups failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v27._M_len + 16));
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    v8 = ServiceBox::findService<GameserverService>();
    v9 = (unsigned int)GameserverService::getGameThreadLocal(v8) + 16;
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v1 + 32), v9);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "recycleGalleryResource",
        300);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"[IrodoriMaster] findPlayer failed, owner_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->owner_uid_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AvatarComp = Player::getAvatarComp(v11);
      PlayerAvatarComp::unlockTeamAvatar(AvatarComp, CHANGE_SCENE_TEAM_REASON_IRODORI_MASTER);
      v23 = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !this->grant_trial_avatar_guid_ )
        goto LABEL_28;
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = Player::getAvatarComp(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&v28, (uint64_t)v14);
      v23 = 1;
      if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&v28) )
        __l = 0;
      else
LABEL_28:
        __l = 1;
      if ( v23 )
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&v28);
      if ( !__l )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v24 = Player::getAvatarComp(v15);
        if ( *(_BYTE *)(((unsigned __int64)&this->grant_trial_avatar_guid_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v27._M_array = (std::initializer_list<long unsigned int>::iterator)this->grant_trial_avatar_guid_;
        std::allocator<unsigned long>::allocator((std::allocator<long unsigned int> *const)&__a);
        std::vector<unsigned long>::vector(
          (std::vector<long unsigned int> *const)&v29,
          (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &v27),
          (const std::vector<long unsigned int>::allocator_type *)&__a);
        v16 = PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
                v24,
                (const std::vector<long unsigned int> *)&v29) != 0;
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)&v29);
        std::allocator<unsigned long>::~allocator((std::allocator<long unsigned int> *const)&__a);
        if ( v16 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/irodori_master_gallery.cpp",
            "recycleGalleryResource",
            312);
          v17 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                  &v30,
                  (const char (*)[75])"[IrodoriMaster] delInformalAvatarBatchAndReplaceByAvatarTeam failed, guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &this->grant_trial_avatar_guid_);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "recycleGalleryResource",
      287);
    v5 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v30,
           (const char (*)[68])"[IrodoriMaster] findIrodoriMasterLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->level_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 318: range 00000000145CB8BA-00000000145CB9F0
void __cdecl IrodoriMasterGallery::initDetailInfo(
        IrodoriMasterGallery *const this,
        uint32_t uid,
        uint32_t level_id,
        uint32_t difficulty,
        bool is_cg_viewed)
{
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl

  v5 = (((_BYTE)this + 44) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->owner_uid_, v5, v6);
  this->owner_uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, v5, (_BYTE)this + 48);
  }
  this->level_id_ = level_id;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->difficulty_, v7, v8);
  this->difficulty_ = difficulty;
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cg_viewed_, v7, &this->is_cg_viewed_);
  this->is_cg_viewed_ = is_cg_viewed;
};

// Line 326: range 00000000145CB9F2-00000000145CBB65
void __cdecl IrodoriMasterGallery::toSettleInfo(
        IrodoriMasterGallery *const this,
        proto::IrodoriMasterGallerySettleInfo *settle_info,
        proto::GalleryStopReason reason)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterGallerySettleInfo::set_level_id(settle_info, this->level_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterGallerySettleInfo::set_difficult(settle_info, this->difficulty_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_);
  }
  proto::IrodoriMasterGallerySettleInfo::set_is_finish(settle_info, this->is_finish_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterGallerySettleInfo::set_finish_time(settle_info, this->finish_time_);
  proto::IrodoriMasterGallerySettleInfo::set_reason(settle_info, reason);
};

// Line 335: range 00000000145CBB66-00000000145CC52F
void __cdecl IrodoriMasterGallery::onCgEnd(IrodoriMasterGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v7; // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  common::milog::MiLogStream *v9; // rax
  char *v10; // rsi
  int32_t v11; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  uint32_t level_id; // r14d
  __int64 v15; // rax
  char v16; // dl
  bool v17; // dl
  __int64 v18; // rsi
  uint32_t difficulty; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  __int64 v22; // rsi
  uint32_t owner_uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  char v25; // cl
  Group *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  uint64_t SceneTimeMs; // rax
  common::milog::MiLogStream *v32; // rax
  const data::IrodoriMasterLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 group_ptr:348 64 16 11 evt_ptr:354";
  *(_QWORD *)(v1 + 16) = IrodoriMasterGallery::onCgEnd;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_cg_end_);
  }
  if ( this->is_cg_end_ )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/irodori_master_gallery.cpp",
      "onCgEnd",
      338);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v34,
      (const char (*)[34])"[IrodoriMaster] cg is already end");
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 64));
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.activity_irodori_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                         p_activity_irodori_config_mgr,
                         this->level_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(*(Scene *const *)&this->baseclass_0[24]);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v7 = *(_QWORD *)BlockGroupComp + 80LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v8 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v7;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        BlockGroupComp = __asan_report_load4();
      }
      v8(v1 + 32, BlockGroupComp, level_config_ptr->group_id, 0LL, 0LL, 0LL);
      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/irodori_master_gallery.cpp",
          "onCgEnd",
          351);
        v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v34,
               (const char (*)[44])"[IrodoriMaster] findGroup failed, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &level_config_ptr->group_id);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      else
      {
        EventUtil::createEvent((data::EventType)(v1 + 64));
        v10 = (char *)(v1 + 64);
        if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/irodori_master_gallery.cpp",
            "onCgEnd",
            357);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v34,
            (const char (*)[33])"[IrodoriMaster] createEvent fail");
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v11 = *(_DWORD *)&this->baseclass_0[32];
          v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v13 = *(_BYTE *)(((unsigned __int64)&v12->param1 >> 3) + 0x7FFF8000);
          if ( v13 != 0 && (char)((((_BYTE)v12 + 44) & 7) + 3) >= v13 )
          {
            LOBYTE(v10) = v13 != 0;
            __asan_report_store4(&v12->param1, v10, (_BYTE)v12);
          }
          v12->param1 = v11;
          if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          level_id = this->level_id_;
          v15 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v16 = *(_BYTE *)(((unsigned __int64)(v15 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v10) = v16 != 0;
          v17 = v16 != 0 && v16 <= 3;
          if ( v17 )
            v15 = __asan_report_store4(v15 + 48, v10, v17);
          *(_DWORD *)(v15 + 48) = level_id;
          v18 = (((_BYTE)this + 52) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          difficulty = this->difficulty_;
          v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v21 = *(_BYTE *)(((unsigned __int64)&v20->param3 >> 3) + 0x7FFF8000);
          if ( v21 != 0 && (char)((((_BYTE)v20 + 52) & 7) + 3) >= v21 )
          {
            LOBYTE(v18) = v21 != 0;
            __asan_report_store4(&v20->param3, v18, (_BYTE)v20);
          }
          v20->param3 = difficulty;
          v22 = (((_BYTE)this + 44) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          owner_uid = this->owner_uid_;
          v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v25 = *(_BYTE *)(((unsigned __int64)&v24->uid >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)((((_BYTE)v24 + 60) & 7) + 3) >= v25 )
          {
            LOBYTE(v22) = v25 != 0;
            __asan_report_store4(&v24->uid, v22, (_BYTE)v24);
          }
          v24->uid = owner_uid;
          v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( Group::handleEvent(v26, (EventPtr *)(v1 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/irodori_master_gallery.cpp",
              "onCgEnd",
              366);
            v27 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v34,
                    (const char (*)[26])"[IrodoriMaster] group_id:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    &level_config_ptr->group_id);
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v28,
              (const char (*)[46])" handleEvent EVENT_IRODORI_MASTER_READY fails");
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          v29 = ((_BYTE)this + 65) & 7;
          v30 = (*(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->is_cg_end_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v30 )
            __asan_report_store1(&this->is_cg_end_, v29, v30);
          this->is_cg_end_ = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneTimeMs = Scene::getSceneTimeMs(*(Scene *const *)&this->baseclass_0[24]);
          if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
            SceneTimeMs = __asan_report_store8(&this->start_time_, v29);
          this->start_time_ = SceneTimeMs;
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/irodori_master_gallery.cpp",
            "onCgEnd",
            370);
          v32 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v34,
                  (const char (*)[36])"[IrodoriMaster] cg end, start_time:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v32, &this->start_time_);
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/irodori_master_gallery.cpp",
        "onCgEnd",
        344);
      v5 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v34,
             (const char (*)[68])"[IrodoriMaster] findIrodoriMasterLevelExcelConfig failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->level_id_);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
  }
  if ( v35 == (char *)v1 )
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

// Line 374: range 00000000145CC530-00000000145CC8DC
uint32_t __cdecl IrodoriMasterGallery::getIrodoriMasterTrialAvatarId(
        IrodoriMasterGallery *const this,
        Player *player,
        const std::vector<unsigned int> *trial_avatar_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v7; // rax
  uint32_t v8; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t avatar_id; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  uint64_t choose_guid; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 trial_avatar_id:381 64 16 14 avatar_ptr:376";
  *(_QWORD *)(v3 + 16) = IrodoriMasterGallery::getIrodoriMasterTrialAvatarId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  AvatarComp = Player::getAvatarComp(player);
  choose_guid = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
  v7 = Player::getAvatarComp(player);
  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)v7);
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
  {
    v8 = 0;
  }
  else
  {
    __for_range = trial_avatar_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(trial_avatar_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(trial_avatar_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                  &v10->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                  *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( trial_avatar_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( avatar_id == Avatar::getAvatarId(v13) )
        {
          v8 = *(_DWORD *)(v3 + 48);
          goto LABEL_18;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/irodori_master_gallery.cpp",
          "getIrodoriMasterTrialAvatarId",
          386);
        v11 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                &v22,
                (const char (*)[68])"[IrodoriMaster] findTrialAvatarExcelConfig failed, trial_avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v8 = 0;
  }
LABEL_18:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  result = v8;
  if ( v23 == (char *)v3 )
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

// Line 398: range 00000000145CC8DE-00000000145CC995
void __cdecl IrodoriMasterGallery::onAvatarDie(IrodoriMasterGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/irodori_master_gallery.cpp",
    "onAvatarDie",
    399);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v4,
         (const char (*)[34])"[IrodoriMaster] onAvatarDie, uid:");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  IrodoriMasterGallery::stopPlay(this, 0, GALLERY_STOP_AVATAR_DIE);
};

// Line 405: range 00000000145CC996-00000000145CCA4D
void __cdecl IrodoriMasterGallery::onPlayerLeaveScene(IrodoriMasterGallery *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/irodori_master_gallery.cpp",
    "onPlayerLeaveScene",
    406);
  v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v4,
         (const char (*)[44])"[IrodoriMaster] player is leave scene, uid:");
  val = Player::getUid(player);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  IrodoriMasterGallery::stopPlay(this, 1, GALLERY_STOP_OWNER_LEAVE_SCENE);
};
