// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/photo_gallery.cpp

// Line 27: range 000000001688A794-000000001688A7BA
void __cdecl PhotoGallery::onStart(PhotoGallery *const this)
{
  PhotoGallery::clearGalleryData(this);
  PhotoGallery::printGalleryStartLog(this);
};

// Line 33: range 000000001688A7BC-000000001688A7EA
void __cdecl PhotoGallery::onStop(PhotoGallery *const this, proto::GalleryStopReason reason)
{
  PhotoGallery::printGalleryStopLog(this, reason);
  PhotoGallery::clearGalleryData(this);
};

// Line 39: range 000000001688A7EC-000000001688A90D
void __cdecl PhotoGallery::addPhotoTime(PhotoGallery *const this, bool is_succ)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_succ_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_succ_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_succ_);
  }
  if ( !this->is_has_succ_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->photograph_times_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->photograph_times_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->photograph_times_;
    this->is_has_succ_ = is_succ || this->is_has_succ_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->after_succ_times_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->after_succ_times_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++this->after_succ_times_;
  }
};

// Line 52: range 000000001688A90E-000000001688A9AC
void __cdecl PhotoGallery::clearGalleryData(PhotoGallery *const this)
{
  bool v1; // dl
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(_BYTE *)(((unsigned __int64)&this->photograph_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->photograph_times_ >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->photograph_times_, (((_BYTE)this + 44) & 7u) + 3, v1);
  this->photograph_times_ = 0;
  v2 = ((_BYTE)this + 53) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_all_dead_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_all_dead_, v2, v3);
  this->is_all_dead_ = 0;
};

// Line 58: range 000000001688A9AE-000000001688AD97
// local variable allocation has failed, the output may be wrong!
void __cdecl PhotoGallery::printGalleryStartLog(PhotoGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
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
  *(_QWORD *)(v1 + 8) = "3 48 1 9 holder:65 64 16 19 owner_player_ptr:59 96 16 10 log_ptr:66";
  *(_QWORD *)(v1 + 16) = PhotoGallery::printGalleryStartLog;
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
      "./src/scene/scene_gallery/photo_gallery.cpp",
      "printGalleryStartLog",
      62);
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
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE04u, v11);
    std::string::~string(&v13);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryPhotoStart>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v11._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v11._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyGalleryPhotoStart::set_gallery_id(v8, *(_DWORD *)(v11._M_string_length + 32));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    proto_log::PlayerLogBodyGalleryPhotoStart::set_transaction(v9, (const std::string *)(v11._M_string_length + 64));
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStart,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0,
      (const std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStart> *)(v1 + 96));
    Player::printStatLog(v10, (MessagePtr *)&v11._anon_0, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStart> *const)(v1 + 96));
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

// Line 73: range 000000001688AD98-000000001688B42A
void __cdecl PhotoGallery::printGalleryStopLog(PhotoGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PhotoGallery *v5; // rdx
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *v17; // r14
  std::string v18; // [rsp+0h] [rbp-110h]
  proto::GalleryStopReason reasona; // [rsp+4h] [rbp-10Ch]
  PhotoGallery *thisa; // [rsp+8h] [rbp-108h]
  uint32_t now; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  HIDWORD(v18._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 holder:80 64 16 19 owner_player_ptr:74 96 16 10 log_ptr:81";
  *(_QWORD *)(v2 + 16) = PhotoGallery::printGalleryStopLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_BaseGallery + 8);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, PhotoGallery *))v6)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/photo_gallery.cpp",
      "printGalleryStopLog",
      77);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v24,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
    goto LABEL_33;
  }
  v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  BasicComp = Player::getBasicComp(v7);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE05u, v18);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryPhotoStop>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryPhotoStop::set_gallery_id(v9, thisa->gallery_id_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGalleryPhotoStop::set_transaction(v10, &thisa->transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  now = Scene::getSceneTimeSeconds(thisa->scene_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryPhotoStop::set_unpaused_time(v11, now - thisa->start_time_);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->photograph_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->photograph_times_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryPhotoStop::set_photograph_times(v12, thisa->photograph_times_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_has_succ_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_has_succ_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_has_succ_);
  }
  if ( !thisa->is_has_succ_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->is_all_dead_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)thisa + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_all_dead_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&thisa->is_all_dead_);
    }
    if ( thisa->is_all_dead_ )
    {
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGalleryPhotoStop::set_end_reason(v14, 3u);
      goto LABEL_30;
    }
    if ( reasona != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( reasona == GALLERY_STOP_OWNER_LEAVE_SCENE )
        proto_log::PlayerLogBodyGalleryPhotoStop::set_end_reason(v15, 2u);
      else
        proto_log::PlayerLogBodyGalleryPhotoStop::set_end_reason(v15, 0);
      goto LABEL_30;
    }
  }
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyGalleryPhotoStop::set_end_reason(v13, 1u);
LABEL_30:
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryPhotoStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->after_succ_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->after_succ_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyGalleryPhotoStop::set_after_succ_times(v16, thisa->after_succ_times_);
  v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStop,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStop> *)(v2 + 96));
  Player::printStatLog(v17, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryPhotoStop> *const)(v2 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
LABEL_33:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v25 == (char *)v2 )
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

// Line 112: range 000000001688B42C-000000001688B822
void __cdecl PhotoGallery::onAvatarDie(PhotoGallery *const this, Player *player)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerAvatarComp *AvatarComp; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  uint32_t GalleryComp; // ecx
  bool v13; // bl
  common::milog::MiLogStream *v14; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v16; // rax
  unsigned int value; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<BaseGallery> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-30h] BYREF

  value = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          &value)
    || (SceneComp = Player::getSceneComp(player), !PlayerSceneComp::isInMyPlayerWorld(SceneComp)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/photo_gallery.cpp",
      "onAvatarDie",
      118);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v21,
           (const char (*)[44])"[GALLERY] uid not in player_info_map_. uid:");
    value = Player::getUid(player);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &value);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v5,
           (const char (*)[25])", player_info_map_ size:");
    val = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    AvatarComp = Player::getAvatarComp(player);
    if ( PlayerAvatarComp::isAllAvatarDead(AvatarComp) )
    {
      v10 = ((_BYTE)this + 53) & 7;
      v11 = (*(_BYTE *)(((unsigned __int64)&this->is_all_dead_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_all_dead_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v11 )
        __asan_report_store1(&this->is_all_dead_, v10, v11);
      this->is_all_dead_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GalleryComp = (unsigned int)Scene::getGalleryComp(this->scene_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)&__a, GalleryComp);
      v13 = std::operator==<BaseGallery>(0LL, &__a);
      std::shared_ptr<BaseGallery>::~shared_ptr(&__a);
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/photo_gallery.cpp",
          "onAvatarDie",
          128);
        v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v21,
                (const char (*)[41])"[Salvage] findGallery fail, gallery_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v21);
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
        if ( SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, this->gallery_id_, 0, GALLERY_STOP_NONE) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/photo_gallery.cpp",
            "onAvatarDie",
            133);
          v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v21,
                  (const char (*)[54])"[Salvage] forceStopAndClearGallery fail, gallery_id_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
      }
    }
  }
};
