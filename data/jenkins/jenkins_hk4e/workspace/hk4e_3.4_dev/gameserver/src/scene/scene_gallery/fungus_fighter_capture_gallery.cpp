// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp

// Line 27: range 00000000165FD572-00000000165FD61F
void __cdecl FungusFighterCaptureGallery::toClient(
        FungusFighterCaptureGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  std::map<std::string,std::shared_ptr<GalleryProgress>>::size_type camp_fungus_count; // rbx
  bool v3; // dl
  proto::SceneGalleryFungusFighterCaptureInfo *detail_info; // [rsp+18h] [rbp-18h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  detail_info = proto::SceneGalleryInfo::mutable_fungus_fighter_capture_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  camp_fungus_count = this->camp_fungus_count_;
  v3 = camp_fungus_count > std::map<std::string,std::shared_ptr<GalleryProgress>>::size(&this->gallery_progress_map_);
  proto::SceneGalleryFungusFighterCaptureInfo::set_is_hide_progress(detail_info, v3);
};

// Line 34: range 00000000165FD620-00000000165FD807
void __cdecl FungusFighterCaptureGallery::onInit(FungusFighterCaptureGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivityFungusFighterExcelConfigMgr *p_activity_fungus_fighter_config_mgr; // rcx
  const std::set<unsigned int> *FungusIdSetByCampId; // rax
  uint32_t v6; // edi
  bool v7; // dl
  GalleryFungusFighterCaptureParam *param; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-70h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 12 param_opt:35";
  *(_QWORD *)(v1 + 16) = FungusFighterCaptureGallery::onInit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::optional<GalleryFungusFighterCaptureParam> *)(v1 + 32) = BaseGallery::getParam<GalleryFungusFighterCaptureParam>((const BaseGallery *const)this);
  if ( std::optional<GalleryFungusFighterCaptureParam>::has_value((const std::optional<GalleryFungusFighterCaptureParam> *const)(v1 + 32)) )
  {
    param = std::optional<GalleryFungusFighterCaptureParam>::value((std::optional<GalleryFungusFighterCaptureParam> *const)(v1 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    p_activity_fungus_fighter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    FungusIdSetByCampId = ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(
                            p_activity_fungus_fighter_config_mgr,
                            param->camp_id);
    v6 = std::set<unsigned int>::size(FungusIdSetByCampId);
    v7 = *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_fungus_count_ >> 3)
                                                          + 0x7FFF8000);
    if ( v7 )
    {
      v6 = (_DWORD)this + 300;
      __asan_report_store4(&this->camp_fungus_count_, (((_BYTE)this + 44) & 7u) + 3, v7);
    }
    this->camp_fungus_count_ = v6;
    std::shared_ptr<Config>::~shared_ptr(&v10);
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 44: range 00000000165FD808-00000000165FD822
void __cdecl FungusFighterCaptureGallery::onStart(FungusFighterCaptureGallery *const this)
{
  FungusFighterCaptureGallery::printGalleryStartLog(this);
};

// Line 49: range 00000000165FD824-00000000165FDA67
void __cdecl FungusFighterCaptureGallery::onStop(
        FungusFighterCaptureGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  FungusFighterActivity *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-C0h] BYREF
  char v7[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 activity_ptr:55 64 24 9 notify:51";
  *(_QWORD *)(v2 + 16) = FungusFighterCaptureGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::FungusCaptureSettleNotify::FungusCaptureSettleNotify((proto::FungusCaptureSettleNotify *const)(v2 + 64));
  proto::FungusCaptureSettleNotify::set_is_success(
    (proto::FungusCaptureSettleNotify *const)(v2 + 64),
    reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS);
  BaseGallery::notifyToGalleryPlayers<proto::FungusCaptureSettleNotify>(
    (BaseGallery *const)this,
    (proto::FungusCaptureSettleNotify *)(v2 + 64));
  FungusFighterCaptureGallery::findOpeningActivity((FungusFighterCaptureGallery *const)(v2 + 32));
  if ( std::operator==<FungusFighterActivity>(0LL, (const std::shared_ptr<FungusFighterActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
      "onStop",
      58);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      &v6,
      (const char (*)[56])"[FungusFighterCapture] activity not find of not opening");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FungusFighterActivity::updateFinishedCampQuestProgress(v5);
  }
  FungusFighterCaptureGallery::printGalleryStopLog(this, reason);
  std::shared_ptr<FungusFighterActivity>::~shared_ptr((std::shared_ptr<FungusFighterActivity> *const)(v2 + 32));
  proto::FungusCaptureSettleNotify::~FungusCaptureSettleNotify((proto::FungusCaptureSettleNotify *const)(v2 + 64));
  if ( v7 == (char *)v2 )
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

// Line 69: range 00000000165FDA68-00000000165FE1FA
__int64 __fastcall FungusFighterCaptureGallery::updatePlayerScore(
        FungusFighterCaptureGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  bool v9; // r14
  bool v10; // r14
  SceneBlockGroupComp *BlockGroupComp; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  FungusFighterActivity *v18; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-119h] BYREF
  uint32_t monster_id; // [rsp+28h] [rbp-118h]
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-110h] BYREF
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 11 group_id:83 64 4 12 config_id:89 80 4 6 uid:68 96 16 15 activity_ptr:77 128 16 12 grou"
                        "p_ptr:96 160 16 15 monster_ptr:102";
  *(_QWORD *)(v4 + 16) = FungusFighterCaptureGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getOwnerUid(this->scene_) == *(_DWORD *)(v4 + 80) )
  {
    FungusFighterCaptureGallery::findOpeningActivity((FungusFighterCaptureGallery *const)(v4 + 96));
    if ( std::operator==<FungusFighterActivity>(0LL, (const std::shared_ptr<FungusFighterActivity> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
        "updatePlayerScore",
        80);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        &v24,
        (const char (*)[56])"[FungusFighterCapture] activity not find of not opening");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "group_id", &__a);
      v9 = ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::no_exception_instance,
             param_table,
             (const std::string *)&v24,
             (unsigned int *)(v4 + 48)) != 0;
      std::string::~string(&v24);
      std::allocator<char>::~allocator(&__a);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
          "updatePlayerScore",
          86);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v24,
          (const char (*)[53])"[FungusFighterCapture] getTableValue group_id failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v8 = -1;
      }
      else
      {
        *(_DWORD *)(v4 + 64) = 0;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "config_id", &__a);
        v10 = ScriptUtil::getTableValue<unsigned int>(
                &ScriptUtil::no_exception_instance,
                param_table,
                (const std::string *)&v24,
                (unsigned int *)(v4 + 64)) != 0;
        std::string::~string(&v24);
        std::allocator<char>::~allocator(&__a);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
            "updatePlayerScore",
            92);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v24,
            (const char (*)[44])"[FungusFighterCapture] getTableValue failed");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v8 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BlockGroupComp = Scene::getBlockGroupComp(this->scene_);
          SceneBlockGroupComp::getActiveGroup(
            (SceneBlockGroupComp *const)(v4 + 128),
            (__int64)BlockGroupComp,
            *(_DWORD *)(v4 + 48));
          if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
              "updatePlayerScore",
              99);
            v12 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    &v24,
                    (const char (*)[65])"[FungusFighterCapture] invalid group id or not active, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v24);
            v8 = -1;
          }
          else
          {
            v13 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            Group::findEntityByConfigId<Monster>((Group *const)(v4 + 160), v13);
            if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v24,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
                "updatePlayerScore",
                105);
              v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      &v24,
                      (const char (*)[54])"[FungusFighterCapture] monster ptr is null, group_id:");
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v14,
                      (const unsigned int *)(v4 + 48));
              v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v15,
                      (const char (*)[12])" config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream(&v24);
              v8 = -1;
            }
            else
            {
              v17 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              monster_id = Monster::getMonsterId(v17);
              v18 = std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              ret = FungusFighterActivity::fungusCapture(v18, monster_id);
              v8 = ret;
            }
            std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 160));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
        }
      }
    }
    std::shared_ptr<FungusFighterActivity>::~shared_ptr((std::shared_ptr<FungusFighterActivity> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
      "updatePlayerScore",
      73);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v24,
           (const char (*)[48])"[FungusFighterCapture] player is not host, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  result = v8;
  if ( v25 == (char *)v4 )
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
  return result;
};

// Line 115: range 00000000165FE1FC-00000000165FE5C4
FungusFighterActivityPtr __cdecl FungusFighterCaptureGallery::findOpeningActivity(
        FungusFighterCaptureGallery *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  Player *v6; // rax
  std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // r14
  FungusFighterActivityPtr result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:117 64 16 16 activity_ptr:123";
  *(_QWORD *)(v2 + 16) = FungusFighterCaptureGallery::findOpeningActivity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
      "findOpeningActivity",
      120);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v12,
           (const char (*)[53])"[FungusFighterCapture] findPlayer failed, owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getOwnerUid(*(const Scene *const *)(v1 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::shared_ptr<FungusFighterActivity>::shared_ptr((std::shared_ptr<FungusFighterActivity> *const)this, 0LL);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::getActivityComp(v6);
    PlayerActivityComp::findOpenningActivity<FungusFighterActivity>((PlayerActivityComp *const)(v2 + 64));
    if ( std::operator!=<FungusFighterActivity>(0LL, (const std::shared_ptr<FungusFighterActivity> *)(v2 + 64))
      && (v7 = std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          BaseActivity::isOpening(v7, 0)) )
    {
      std::shared_ptr<FungusFighterActivity>::shared_ptr(
        (std::shared_ptr<FungusFighterActivity> *const)this,
        (std::shared_ptr<FungusFighterActivity> *)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/fungus_fighter_capture_gallery.cpp",
        "findOpeningActivity",
        128);
      v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v12,
             (const char (*)[68])"[FungusFighterCapture] activity not find of not opening, owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(*(const Scene *const *)(v1 + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      std::shared_ptr<FungusFighterActivity>::shared_ptr((std::shared_ptr<FungusFighterActivity> *const)this, 0LL);
    }
    std::shared_ptr<FungusFighterActivity>::~shared_ptr((std::shared_ptr<FungusFighterActivity> *const)(v2 + 64));
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
  result._M_ptr = (std::__shared_ptr<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 133: range 00000000165FE5C6-00000000165FE5D0
void __cdecl FungusFighterCaptureGallery::printGalleryStartLog(FungusFighterCaptureGallery *const this)
{
  ;
};

// Line 138: range 00000000165FE5D2-00000000165FE5DF
void __cdecl FungusFighterCaptureGallery::printGalleryStopLog(
        FungusFighterCaptureGallery *const this,
        proto::GalleryStopReason reason)
{
  ;
};
