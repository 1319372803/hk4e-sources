// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/base_home_gallery.cpp

// Line 26: range 0000000017FBD902-0000000017FBDE58
__int64 __fastcall BaseHomeGallery::initWithOwner(
        BaseHomeGallery *const this,
        const std::set<unsigned int> *uid_set,
        uint32_t owner_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<Player> p_player_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 owner_uid:25 64 16 19 owner_player_ptr:37";
  *(_QWORD *)(v3 + 16) = BaseHomeGallery::initWithOwner;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = owner_uid;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          uid_set,
          (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "initWithOwner",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v26,
           (const char (*)[44])"[GALLERY] owner_uid is not in uid_set, uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])", uid_set:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int>(v8, uid_set);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v11 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Scene::isHomeScene(this->scene_) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "initWithOwner",
        34);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v26,
              (const char (*)[42])"[GALLERY] is not in home scene, scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v11 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_home_gallery.cpp",
          "initWithOwner",
          40);
        v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v26,
                (const char (*)[52])"[GALLERY] owner_uid is not in home scene, scene_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(this->scene_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v11 = -1;
      }
      else
      {
        std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v3 + 64));
        BaseHomeGallery::setOwnPlayer(this, &p_player_ptr);
        std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
        v11 = BaseGallery::init(this, uid_set);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
  }
  result = v11;
  if ( v27 == (char *)v3 )
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

// Line 48: range 0000000017FBDE5A-0000000017FBDEAB
PlayerPtr __cdecl BaseHomeGallery::getOwner(const BaseHomeGallery *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 0000000017FBDEAC-0000000017FBE2D8
void __cdecl BaseHomeGallery::onPlayerLeaveScene(BaseHomeGallery *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Uid; // r14d
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<unsigned int,proto::OnlinePlayerInfo>::key_type __x; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 owner_player_ptr:60 64 24 9 notify:69";
  *(_QWORD *)(v2 + 16) = BaseHomeGallery::onPlayerLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  BaseGallery::onPlayerLeaveScene(this, player);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ != STOP )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, BaseHomeGallery *const))v5)(v2 + 32, this);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Uid = Player::getUid(v6);
      if ( Uid != Player::getUid(player) )
      {
        __x = Player::getUid(player);
        std::map<unsigned int,proto::OnlinePlayerInfo>::erase(&this->player_info_map_, &__x);
        __x = Player::getUid(player);
        std::set<unsigned int>::erase(&this->player_uid_set_, &__x);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = (unsigned __int64)(this->_vptr_BaseGallery + 17);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(BaseHomeGallery *const, Player *))v8)(this, player);
        proto::GalleryStopNotify::GalleryStopNotify((proto::GalleryStopNotify *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryStopNotify::set_gallery_id((proto::GalleryStopNotify *const)(v2 + 64), this->gallery_id_);
        Player::sendProto(player, (const google::protobuf::Message *)(v2 + 64));
        proto::GalleryStopNotify::~GalleryStopNotify((proto::GalleryStopNotify *const)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "onPlayerLeaveScene",
        76);
      v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v11,
             (const char (*)[64])"[GALLERY] Home onPlayerLeaveScene owner is nullptr, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
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

// Line 81: range 0000000017FBE2DA-0000000017FBE7F7
bool __cdecl BaseHomeGallery::isCanStart(const BaseHomeGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  bool CanStart; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Scene *scene; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // eax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool result; // al
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Player> __a; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 owner_player_ptr:82";
  *(_QWORD *)(v1 + 16) = BaseHomeGallery::isCanStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, const BaseHomeGallery *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "isCanStart",
      85);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v25,
      (const char (*)[35])"[GALLERY] owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v25);
    CanStart = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Scene::isHomeScene(this->scene_) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "isCanStart",
        90);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v25,
             (const char (*)[42])"[GALLERY] is not in home scene, scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      Uid = Player::getUid(v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      CanStart = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene = this->scene_;
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = Player::getUid(v13);
      Scene::findPlayer((const Scene *const)&__a, (__int64)scene, v14);
      LOBYTE(scene) = std::operator==<Player>(&__a, 0LL);
      std::shared_ptr<Player>::~shared_ptr(&__a);
      if ( (_BYTE)scene )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/base_home_gallery.cpp",
          "isCanStart",
          95);
        v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v25,
                (const char (*)[48])"[GALLERY] owner is not in home scene, scene_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Scene::getSceneId(this->scene_);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Uid = Player::getUid(v18);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &Uid);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v25);
        CanStart = 0;
      }
      else
      {
        CanStart = BaseGallery::isCanStart(this);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = CanStart;
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

// Line 102: range 0000000017FBE7F8-0000000017FBEAE8
bool __cdecl BaseHomeGallery::isCurSceneValid(const BaseHomeGallery *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v3; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  unsigned int value; // [rsp+1Ch] [rbp-54h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+20h] [rbp-50h]
  const FurnitureGroupJsonConfig *furniture_group_json_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( gallery_config_ptr->group_furniture_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v9);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      furniture_group_json_config_ptr = JsonConfigMgr::findFurnitureGroupConfig(
                                          p_json_config_mgr,
                                          gallery_config_ptr->group_furniture_id);
      std::shared_ptr<Config>::~shared_ptr(&v9);
      if ( furniture_group_json_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        value = Scene::getSceneId(this->scene_);
        return common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
                 &furniture_group_json_config_ptr->scene_group_map,
                 &value);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/base_home_gallery.cpp",
          "isCurSceneValid",
          117);
        v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v10, (const char (*)[53])off_26486200);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v5,
          &gallery_config_ptr->group_furniture_id);
        common::milog::MiLogStream::~MiLogStream(&v10);
        return 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "isCurSceneValid",
        111);
      v3 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v10,
             (const char (*)[60])"[GALLERY] home gallery group_furniture_id is 0, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "isCurSceneValid",
      106);
    v1 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v10,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
};

// Line 124: range 0000000017FBEAEA-0000000017FBF050
uint32_t __cdecl BaseHomeGallery::getControlGroupId(const BaseHomeGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  uint32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+10h] [rbp-D0h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+18h] [rbp-C8h]
  const FurnitureGroupJsonConfig *furniture_group_json_config_ptr; // [rsp+20h] [rbp-C0h]
  const std::unordered_map<unsigned int,unsigned int> *scene_group_map; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 scene_id:143 64 8 8 iter:145";
  *(_QWORD *)(v1 + 16) = BaseHomeGallery::getControlGroupId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig(this);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( gallery_config_ptr->group_furniture_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      furniture_group_json_config_ptr = JsonConfigMgr::findFurnitureGroupConfig(
                                          p_json_config_mgr,
                                          gallery_config_ptr->group_furniture_id);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( furniture_group_json_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v1 + 48) = Scene::getSceneId(this->scene_);
        scene_group_map = &furniture_group_json_config_ptr->scene_group_map;
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                        &furniture_group_json_config_ptr->scene_group_map,
                                                                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 48));
        __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(scene_group_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v1 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/base_home_gallery.cpp",
            "getControlGroupId",
            148);
          v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(&v18, (const char (*)[44])off_264862A0);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  &gallery_config_ptr->group_furniture_id);
          v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])"scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
          result = 0;
        }
        else
        {
          v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          result = v12->second;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/base_home_gallery.cpp",
          "getControlGroupId",
          140);
        v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v18, (const char (*)[53])off_26486200);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v8,
          &gallery_config_ptr->group_furniture_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "getControlGroupId",
        133);
      v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v18,
             (const char (*)[60])"[GALLERY] home gallery group_furniture_id is 0, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "getControlGroupId",
      128);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v18,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0;
  }
  if ( v19 == (char *)v1 )
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
  return result;
};

// Line 155: range 0000000017FBF052-0000000017FBF07D
int32_t __cdecl BaseHomeGallery::clear(BaseHomeGallery *const this)
{
  std::__weak_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&this->owner_player_wtr_);
  return BaseGallery::clear(this);
};

// Line 161: range 0000000017FBF07E-0000000017FBF6E1
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseHomeGallery::printGalleryStartLog(BaseHomeGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // eax
  __int64 v12; // rcx
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v16; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+80h] [rbp-D0h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:168 64 16 20 owner_player_ptr:162 96 16 11 log_ptr:169 128 16 14 player_ptr:180";
  *(_QWORD *)(v1 + 16) = BaseHomeGallery::printGalleryStartLog;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)((v14._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)v14._M_string_length + 64LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v4)(v1 + 64, v14._M_string_length);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "printGalleryStartLog",
      165);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v21,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v5);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDEBu, v14);
    std::string::~string(&v21);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryHomeStart>();
    if ( std::operator==<proto_log::PlayerLogBodyGalleryHomeStart>(
           0LL,
           (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStart> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "printGalleryStartLog",
        172);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v21, (const char (*)[16])"log_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v14._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v14._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGalleryHomeStart::set_gallery_id(v7, *(_DWORD *)(v14._M_string_length + 32));
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyGalleryHomeStart::set_transaction(v8, (const std::string *)(v14._M_string_length + 64));
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v11 = Player::getUid(v10);
      proto_log::PlayerLogBodyGalleryHomeStart::set_owner_uid(v9, v11);
      __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v14._M_string_length + 144);
      *(std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)v14._anon_0._M_local_buf = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v14._M_string_length + 144));
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v14._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v14._M_string_length + 144));
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v14._anon_0,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v14._anon_0._M_allocated_capacity
              + 1) )
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v14._anon_0);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
        if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = *(_QWORD *)(v14._M_string_length + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 128), v12, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
        {
          v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStart,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStart> *)(v1 + 96));
          Player::printStatLog(v13, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v14._anon_0);
      }
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStart> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
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

// Line 189: range 0000000017FBF6E2-0000000017FBFEB9
void __cdecl BaseHomeGallery::printGalleryStopLog(BaseHomeGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  proto_log::PlayerLogBodyGalleryHomeStop *v9; // rcx
  proto_log::PlayerLogBodyGalleryHomeStop *v10; // rax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(BaseHomeGallery *, _QWORD, _QWORD, std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  __int64 scene; // rcx
  Player *v15; // r14
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type v16; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  std::string v19; // [rsp+0h] [rbp-160h]
  proto::GalleryStopReason reasona; // [rsp+4h] [rbp-15Ch]
  BaseHomeGallery *thisa; // [rsp+8h] [rbp-158h]
  uint32_t owner_uid; // [rsp+1Ch] [rbp-144h]
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v26; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+90h] [rbp-D0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  HIDWORD(v19._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:197 64 16 20 owner_player_ptr:190 96 16 11 log_ptr:198 128 16 14 player_ptr:212";
  *(_QWORD *)(v2 + 16) = BaseHomeGallery::printGalleryStopLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, BaseHomeGallery *const))v5)(v2 + 64, this);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_home_gallery.cpp",
      "printGalleryStopLog",
      193);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v31,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3) = Player::getUid(v6);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDECu, v19);
    std::string::~string(&v31);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryHomeStop>();
    if ( std::operator==<proto_log::PlayerLogBodyGalleryHomeStop>(
           0LL,
           (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/base_home_gallery.cpp",
        "printGalleryStopLog",
        201);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v31, (const char (*)[16])"log_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGalleryHomeStop::set_gallery_id(v9, thisa->gallery_id_);
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryHomeStop::set_transaction(v10, &thisa->transaction_);
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (unsigned __int64)(thisa->_vptr_BaseGallery + 20);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(void (__fastcall **)(BaseHomeGallery *, _QWORD, _QWORD, std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11;
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryHomeStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v12(thisa, (unsigned int)reasona, owner_uid, v13);
      __for_range = &thisa->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&thisa->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&thisa->player_info_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v26);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v26);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene = (__int64)thisa->scene_;
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 128), scene, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop> *)(v2 + 96));
          Player::printStatLog(v15, &p_body_ptr, &p_body_ext_ptr, 0xEu);
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
          v16 = *uid;
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( v16 == Player::getUid(v17) )
          {
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop> *)(v2 + 96));
            Player::printStatLog(v18, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryHomeStop> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v32 == (char *)v2 )
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

// Line 225: range 0000000017FBFEBA-0000000017FBFF26
void __cdecl BaseHomeGallery::fillGalleryStopLog(
        BaseHomeGallery *const this,
        proto::GalleryStopReason reason,
        uint32_t owner_uid,
        proto_log::PlayerLogBodyGalleryHomeStop *gallery_stop_log)
{
  if ( reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 1u);
  }
  else if ( reason == GALLERY_STOP_CLIENT_INTERRUPT )
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_uid(gallery_stop_log, owner_uid);
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 2u);
  }
  else
  {
    proto_log::PlayerLogBodyGalleryHomeStop::set_stop_reason(gallery_stop_log, 3u);
  }
};

// Line 242: range 0000000017FBFF28-0000000017FC00F0
void __cdecl BaseHomeGallery::onPlayerEnter(BaseHomeGallery *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:254";
  *(_QWORD *)(v2 + 16) = BaseHomeGallery::onPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( BaseGallery::isStart(this) )
  {
    Uid = Player::getUid(player);
    if ( !BaseGallery::isPlayerInGallery(this, Uid) )
    {
      proto::HomeGalleryInPlayingNotify::HomeGalleryInPlayingNotify((proto::HomeGalleryInPlayingNotify *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::HomeGalleryInPlayingNotify::set_gallery_id(
        (proto::HomeGalleryInPlayingNotify *const)(v2 + 32),
        this->gallery_id_);
      Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
      proto::HomeGalleryInPlayingNotify::~HomeGalleryInPlayingNotify((proto::HomeGalleryInPlayingNotify *const)(v2 + 32));
    }
  }
  if ( v6 == (char *)v2 )
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
