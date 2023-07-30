// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/balloon_gallery.cpp

// Line 28: range 0000000017FAD5B4-0000000017FAD6A1
void __cdecl BalloonPlayerInfo::toSettleInfo(
        const BalloonPlayerInfo *const this,
        proto::BalloonSettleInfo *settle_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BalloonSettleInfo::set_max_combo(settle_info, this->max_combo);
  if ( *(_BYTE *)(((unsigned __int64)&this->shoot_balloon_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shoot_balloon_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BalloonSettleInfo::set_shoot_count(settle_info, this->shoot_balloon_count);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BalloonSettleInfo::set_final_score(settle_info, this->score);
};

// Line 35: range 0000000017FAD6A2-0000000017FAD77C
void __cdecl BalloonPlayerInfo::toClient(const BalloonPlayerInfo *const this, proto::BalloonPlayerInfo *player_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BalloonPlayerInfo::set_combo(player_info, this->cur_combo);
  if ( *(_BYTE *)(((unsigned __int64)&this->combo_disable_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::BalloonPlayerInfo::set_combo_disable_time(player_info, this->combo_disable_time);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BalloonPlayerInfo::set_cur_score(player_info, this->score);
};

// Line 42: range 0000000017FAD77E-0000000017FAD8A7
// local variable allocation has failed, the output may be wrong!
void __cdecl BalloonPlayerInfo::addScore(BalloonPlayerInfo *const this, int32_t delta)
{
  uint32_t v2; // edx
  char v3; // al

  if ( delta >= 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_QWORD *)&delta = (unsigned int)delta;
    v2 = SAFE_ADD<unsigned int,int>(this->score, delta);
    v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( v3 != 0 && v3 <= 3 )
    {
      LOBYTE(delta) = v3 != 0;
      __asan_report_store4(this, *(_QWORD *)&delta, v2);
    }
    this->score = v2;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->score > abs32(delta) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      this->score += delta;
    }
    else
    {
      this->score = 0;
    }
  }
};

// Line 61: range 0000000017FAD8A8-0000000017FADF15
// local variable allocation has failed, the output may be wrong!
void __cdecl BalloonGallery::onStart(BalloonGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 v10; // rcx
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v16; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+90h] [rbp-D0h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 holder:74 64 16 19 owner_player_ptr:68 96 16 10 log_ptr:76 128 16 13 player_ptr:82";
  *(_QWORD *)(v1 + 16) = BalloonGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v12._M_string_length) )
  {
    if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::getOwnPlayer((const Scene *const)(v1 + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "onStart",
        71);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v21,
        (const char (*)[35])"[GALLERY] owner_player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BasicComp = Player::getBasicComp(v5);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xC4Eu, v12);
      std::string::~string(&v21);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryBalloonStart>();
      v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v12._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGalleryBalloonStart::set_gallery_id(v7, *(_DWORD *)(v12._M_string_length + 32));
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((v12._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
        && ((LOBYTE(v12._M_string_length) + 36) & 7) >= *(_BYTE *)(((v12._M_string_length + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v12._M_string_length + 36);
      }
      proto_log::PlayerLogBodyGalleryBalloonStart::set_is_single(v8, *(_BYTE *)(v12._M_string_length + 36));
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyGalleryBalloonStart::set_transaction(v9, (const std::string *)(v12._M_string_length + 64));
      __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v12._M_string_length + 144);
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v12._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144));
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v12._M_string_length + 144))._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v12._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0._M_allocated_capacity
              + 1);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v16);
        if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = *(_QWORD *)(v12._M_string_length + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 128), v10, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
        {
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStart,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStart> *)(v1 + 96));
          Player::printStatLog(v11, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v12._anon_0._M_allocated_capacity
        + 1);
      }
      std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStart> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/balloon_gallery.cpp",
      "onStart",
      65);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v21,
           (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v4,
      (const unsigned int *)(v12._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
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

// Line 91: range 0000000017FADF16-0000000017FAEEA0
__int64 __fastcall BalloonGallery::updatePlayerScore(
        BalloonGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::pointer v17; // rdx
  char *cur_combo; // rsi
  uint32_t *p_max_combo; // rsi
  uint32_t *v20; // rdx
  uint32_t v21; // ecx
  char v22; // dl
  bool v23; // dl
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint64_t v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  Player *v37; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-1F5h] BYREF
  float base_score; // [rsp+2Ch] [rbp-1F4h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Self __y; // [rsp+30h] [rbp-1F0h] BYREF
  uint64_t now; // [rsp+38h] [rbp-1E8h]
  const GalleryBalloonParam *param; // [rsp+40h] [rbp-1E0h]
  BalloonPlayerInfo *player_info; // [rsp+48h] [rbp-1D8h]
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-1D0h] BYREF
  char v48[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 13 gadget_id:111 48 4 13 add_score:134 64 4 12 up_ratio:142 80 4 6 uid:90 96 8 14 score_i"
                        "ter:127 128 16 13 player_ptr:98 160 48 10 notify:164 240 112 13 param_opt:119";
  *(_QWORD *)(v4 + 16) = BalloonGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v4 + 128), (__int64)this->scene_, *(_DWORD *)(v4 + 80));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "updatePlayerScore",
        101);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v47,
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v47);
      v8 = -1;
LABEL_65:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
      goto LABEL_66;
    }
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
            &this->player_info_map_,
            (const unsigned int *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "updatePlayerScore",
        107);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v47,
              (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v47);
      v8 = -1;
      goto LABEL_65;
    }
    *(_DWORD *)(v4 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v47, "trigger_gadget_id", &__a);
    v11 = ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v47,
            (unsigned int *)(v4 + 32)) != 0;
    std::string::~string(&v47);
    std::allocator<char>::~allocator(&__a);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "updatePlayerScore",
        114);
      v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v47,
              (const char (*)[44])"[GALLERY] getTableValue failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v8 = -1;
      goto LABEL_65;
    }
    now = common::tools::TimeUtils::getNowMs();
    BaseGallery::getParam<GalleryBalloonParam>((std::optional<GalleryBalloonParam> *)(v4 + 240), this);
    if ( !std::optional<GalleryBalloonParam>::has_value((const std::optional<GalleryBalloonParam> *const)(v4 + 240)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "updatePlayerScore",
        122);
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v47,
              (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v8 = -1;
    }
    else
    {
      param = std::optional<GalleryBalloonParam>::value((std::optional<GalleryBalloonParam> *const)(v4 + 240));
      *(std::map<unsigned int,int>::const_iterator *)(v4 + 96) = std::map<unsigned int,int>::find(
                                                                   &param->balloon_gadget_score_map,
                                                                   (const std::map<unsigned int,int>::key_type *)(v4 + 32));
      __y._M_node = std::map<unsigned int,int>::end(&param->balloon_gadget_score_map)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Self *)(v4 + 96),
              &__y) )
      {
        v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> > *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        base_score = (float)v17->second;
        *(_DWORD *)(v4 + 48) = (int)base_score;
        cur_combo = (char *)(v4 + 80);
        player_info = std::map<unsigned int,BalloonPlayerInfo>::operator[](
                        &this->uid_balloon_info_map_,
                        (const std::map<unsigned int,BalloonPlayerInfo>::key_type *)(v4 + 80));
        if ( base_score <= 0.0 )
        {
          if ( base_score < 0.0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&player_info->cur_combo, cur_combo, (_BYTE)player_info + 16);
            }
            player_info->cur_combo = 0;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( now > player_info->combo_disable_time )
          {
            if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&player_info->cur_combo, cur_combo, (_BYTE)player_info + 16);
            }
            player_info->cur_combo = 1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            ++player_info->cur_combo;
            p_max_combo = &player_info->max_combo;
            v20 = (uint32_t *)std::max<unsigned int>(&player_info->cur_combo, &player_info->max_combo);
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v21 = *v20;
            v22 = *(_BYTE *)(((unsigned __int64)&player_info->max_combo >> 3) + 0x7FFF8000);
            LOBYTE(p_max_combo) = v22 != 0;
            v23 = v22 != 0 && (char)((((_BYTE)player_info + 20) & 7) + 3) >= v22;
            if ( v23 )
              __asan_report_store4(&player_info->max_combo, p_max_combo, v23);
            player_info->max_combo = v21;
            *(_DWORD *)(v4 + 64) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            cur_combo = (char *)player_info->cur_combo;
            if ( BalloonGallery::getComboUpRatio(&param->combo_up_ratio_map, (uint32_t)cur_combo, (float *)(v4 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/balloon_gallery.cpp",
                "updatePlayerScore",
                145);
              v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v47,
                      (const char (*)[38])"[GALLERY] getComboUpRatio failed, uid");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v4 + 80));
              v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v25,
                      (const char (*)[14])", gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->gallery_id_);
              common::milog::MiLogStream::~MiLogStream(&v47);
              v8 = -1;
              goto LABEL_64;
            }
            *(_DWORD *)(v4 + 48) = (int)(float)(*(float *)(v4 + 64) * base_score);
          }
          if ( *(_BYTE *)(((unsigned __int64)&player_info->shoot_balloon_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&player_info->shoot_balloon_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++player_info->shoot_balloon_count;
          if ( *(_BYTE *)(((unsigned __int64)&param->combo_duration >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&param->combo_duration >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v27 = 1000LL * param->combo_duration + now;
          if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
            __asan_report_store8(&player_info->combo_disable_time, cur_combo);
          player_info->combo_disable_time = v27;
        }
        BalloonPlayerInfo::addScore(player_info, *(_DWORD *)(v4 + 48));
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/balloon_gallery.cpp",
          "updatePlayerScore",
          163);
        v28 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v47,
                (const char (*)[41])"[GALLERY] shoot balloon succ, gagdet_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v4 + 32));
        v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])" add_score:");
        v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v4 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])", cur_combo:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &player_info->cur_combo);
        v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])" cur_score:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &player_info->score);
        v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v47);
        proto::GalleryBalloonShootNotify::GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_gallery_id(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          this->gallery_id_);
        proto::GalleryBalloonShootNotify::set_add_score(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          *(_DWORD *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_combo(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          player_info->cur_combo);
        if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        proto::GalleryBalloonShootNotify::set_combo_disable_time(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          player_info->combo_disable_time);
        if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_cur_score(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          player_info->score);
        if ( *(_BYTE *)(((unsigned __int64)&context->source_entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&context->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_trigger_entity_id(
          (proto::GalleryBalloonShootNotify *const)(v4 + 160),
          context->source_entity_id);
        v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Player::sendProto(v37, (const google::protobuf::Message *)(v4 + 160));
        BalloonGallery::notifyAllPlayerScore(this);
        v8 = 0;
        proto::GalleryBalloonShootNotify::~GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v4 + 160));
        goto LABEL_64;
      }
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "updatePlayerScore",
        130);
      v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v47,
              (const char (*)[54])"[GALLERY] balloon gadget_id not in config, gadget_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->gallery_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v8 = -1;
    }
LABEL_64:
    std::optional<GalleryBalloonParam>::~optional((std::optional<GalleryBalloonParam> *const)(v4 + 240));
    goto LABEL_65;
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/balloon_gallery.cpp",
    "updatePlayerScore",
    94);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v47,
         (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 64) = this->stage_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v47);
  v8 = -1;
LABEL_66:
  result = v8;
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 178: range 0000000017FAEEA2-0000000017FAF202
__int64 __fastcall BalloonGallery::getComboUpRatio(
        const std::map<unsigned int,float> *combo_ratio_config_map,
        uint32_t cur_combo,
        unsigned __int64 ratio)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v6; // rdx
  float second; // xmm0_4
  bool v8; // dl
  std::map<unsigned int,float>::const_iterator v9; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v11; // rdx
  float v12; // xmm0_4
  bool v13; // dl
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 cur_combo:177 64 8 8 iter:179 96 8 14 valid_iter:186";
  *(_QWORD *)(v3 + 16) = BalloonGallery::getComboUpRatio;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = cur_combo;
  *(std::map<unsigned int,float>::const_iterator *)(v3 + 64) = std::map<unsigned int,float>::find(
                                                                 combo_ratio_config_map,
                                                                 (const std::map<unsigned int,float>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,float>::end(combo_ratio_config_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    second = v6->second;
    v8 = *(_BYTE *)((ratio >> 3) + 0x7FFF8000) != 0 && (char)((ratio & 7) + 3) >= *(_BYTE *)((ratio >> 3) + 0x7FFF8000);
    if ( v8 )
      __asan_report_store4(ratio, (unsigned int)(ratio & 7) + 3, v8);
    *(float *)ratio = second;
  }
  else
  {
    v9._M_node = std::map<unsigned int,float>::lower_bound(
                   combo_ratio_config_map,
                   (const std::map<unsigned int,float>::key_type *)(v3 + 48))._M_node;
    *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *)(v3 + 96) = std::prev<std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>>(
                                                                                         v9,
                                                                                         1LL);
    __y._M_node = std::map<unsigned int,float>::end(combo_ratio_config_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "getComboUpRatio",
        189);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v16,
        (const char (*)[43])"[GALLERY] balloon combo ratio iter invalid");
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
      goto LABEL_18;
    }
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v12 = v11->second;
    v13 = *(_BYTE *)((ratio >> 3) + 0x7FFF8000) != 0 && (char)((ratio & 7) + 3) >= *(_BYTE *)((ratio >> 3) + 0x7FFF8000);
    if ( v13 )
      __asan_report_store4(ratio, (unsigned int)(ratio & 7) + 3, v13);
    *(float *)ratio = v12;
  }
  result = 0LL;
LABEL_18:
  if ( v17 == (char *)v3 )
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

// Line 198: range 0000000017FAF204-0000000017FAF35C
BalloonPlayerInfo *__fastcall BalloonGallery::findPlayerBalloonInfo(BalloonGallery *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BalloonPlayerInfo *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:197 64 8 8 iter:199";
  *(_QWORD *)(v2 + 16) = BalloonGallery::findPlayerBalloonInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::map<unsigned int,BalloonPlayerInfo>::iterator *)(v2 + 64) = std::map<unsigned int,BalloonPlayerInfo>::find(
                                                                       &this->uid_balloon_info_map_,
                                                                       (const std::map<unsigned int,BalloonPlayerInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,BalloonPlayerInfo>::end(&this->uid_balloon_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
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

// Line 208: range 0000000017FAF35E-0000000017FAF645
void __cdecl BalloonGallery::notifyAllPlayerScore(BalloonGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t score; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *v5; // rsi
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  char v8; // cl
  std::map<unsigned int,BalloonPlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,BalloonPlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *score_map; // [rsp+28h] [rbp-F8h]
  std::map<unsigned int,BalloonPlayerInfo> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,BalloonPlayerInfo> *v13; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *uid; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *player_info; // [rsp+48h] [rbp-D8h]
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 notify:209";
  *(_QWORD *)(v1 + 16) = BalloonGallery::notifyAllPlayerScore;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::GalleryBalloonScoreNotify::GalleryBalloonScoreNotify((proto::GalleryBalloonScoreNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GalleryBalloonScoreNotify::set_gallery_id(
    (proto::GalleryBalloonScoreNotify *const)(v1 + 32),
    this->gallery_id_);
  score_map = proto::GalleryBalloonScoreNotify::mutable_uid_score_map((proto::GalleryBalloonScoreNotify *const)(v1 + 32));
  __for_range = &this->uid_balloon_info_map_;
  __for_begin._M_node = std::map<unsigned int,BalloonPlayerInfo>::begin(&this->uid_balloon_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BalloonPlayerInfo>::end(&this->uid_balloon_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,BalloonPlayerInfo>(v13);
    player_info = (std::tuple_element<1,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *)std::get<1ul,unsigned int const,BalloonPlayerInfo>(v13);
    if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    score = player_info->score;
    v5 = uid;
    v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](score_map, uid);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v6, v5, (_BYTE)v6);
    }
    *v7 = score;
    std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator++(&__for_begin);
  }
  BaseGallery::notifyToGalleryPlayers<proto::GalleryBalloonScoreNotify>(
    this,
    (proto::GalleryBalloonScoreNotify *)(v1 + 32));
  proto::GalleryBalloonScoreNotify::~GalleryBalloonScoreNotify((proto::GalleryBalloonScoreNotify *const)(v1 + 32));
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 220: range 0000000017FAF646-0000000017FB013D
// local variable allocation has failed, the output may be wrong!
void __cdecl BalloonGallery::onStop(BalloonGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  bool *v10; // r8
  bool *v11; // r9
  __int64 v12; // rcx
  std::__shared_ptr_access<GalleryBalloonSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // r14
  Player *v22; // rax
  PlayerEventComp *EventComp; // r14
  std::string v24; // [rsp+0h] [rbp-1C0h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> >::_Self __y; // [rsp+28h] [rbp-198h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+30h] [rbp-190h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+38h] [rbp-188h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v29; // [rsp+40h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+48h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *online_player_info; // [rsp+50h] [rbp-170h]
  proto::BalloonSettleInfo *proto_info; // [rsp+58h] [rbp-168h]
  proto::OnlinePlayerInfo *proto_online_player_info; // [rsp+60h] [rbp-160h]
  BalloonPlayerInfo *player_balloon_info; // [rsp+68h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+90h] [rbp-130h] BYREF
  char v38[272]; // [rsp+B0h] [rbp-110h] BYREF

  v24._M_string_length = (std::string::size_type)this;
  HIDWORD(v24._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 16 is_interrupt:221 48 1 10 holder:237 64 8 21 balloon_info_iter:247 96 16 20 owner_playe"
                        "r_ptr:224 128 16 13 event_ptr:239 160 16 14 player_ptr:242 192 16 11 log_ptr:254";
  *(_QWORD *)(v2 + 16) = BalloonGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_BYTE *)(v2 + 32) = 0;
  common::milog::MiLogStream::create(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/balloon_gallery.cpp",
    "onStop",
    222);
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v37, (const char (*)[17])"[GALLERY] onStop");
  common::milog::MiLogStream::~MiLogStream(&v37);
  M_string_length = v24._M_string_length;
  if ( *(_BYTE *)((v24._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(_QWORD *)v24._M_string_length + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v6)(v2 + 96, M_string_length);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/balloon_gallery.cpp",
      "onStop",
      227);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v37,
      (const char (*)[25])"owner_player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  else
  {
    gallery_config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v24._M_string_length);
    if ( gallery_config_ptr )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v8);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v37, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC4Fu, v24);
      std::string::~string(&v37);
      common::tools::perf::make_shared<GalleryBalloonSettleEvent,unsigned int &,bool &,bool &>(
        (unsigned int *)(v2 + 128),
        (bool *)(v24._M_string_length + 32),
        (bool *)(v2 + 32),
        (unsigned int *)(v24._M_string_length + 36),
        v10,
        v11);
      __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v24._M_string_length + 144);
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v24._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v24._M_string_length + 144));
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v24._M_string_length + 144))._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v24._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v24._anon_0._M_allocated_capacity
              + 1);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v29);
        online_player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v29);
        if ( *(_BYTE *)(((v24._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = *(_QWORD *)(v24._M_string_length + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 160), v12, *uid);
        v13 = std::__shared_ptr_access<GalleryBalloonSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GalleryBalloonSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_info = std::map<unsigned int,proto::BalloonSettleInfo>::operator[](&v13->player_settle_info_map, uid);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::BalloonSettleInfo::set_uid(proto_info, *uid);
        proto_online_player_info = proto::BalloonSettleInfo::mutable_player_info(proto_info);
        proto::OnlinePlayerInfo::CopyFrom(proto_online_player_info, online_player_info);
        *(std::map<unsigned int,BalloonPlayerInfo>::iterator *)(v2 + 64) = std::map<unsigned int,BalloonPlayerInfo>::find(
                                                                             (std::map<unsigned int,BalloonPlayerInfo> *const)(v24._M_string_length + 304),
                                                                             uid);
        __y._M_node = std::map<unsigned int,BalloonPlayerInfo>::end((std::map<unsigned int,BalloonPlayerInfo> *const)(v24._M_string_length + 304))._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> >::_Self *)(v2 + 64),
               &__y) )
        {
          player_balloon_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo> > *const)(v2 + 64))->second;
          BalloonPlayerInfo::toSettleInfo(player_balloon_info, proto_info);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 160), 0LL) )
          {
            common::tools::perf::make_shared<proto_log::PlayerLogBodyGalleryBalloonStop>();
            v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((v24._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((v24._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_gallery_id(v14, *(_DWORD *)(v24._M_string_length + 32));
            v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_duration(v15, gallery_config_ptr->duration);
            v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((v24._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
              && ((LOBYTE(v24._M_string_length) + 36) & 7) >= *(_BYTE *)(((v24._M_string_length + 36) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v24._M_string_length + 36);
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_is_single(v16, *(_BYTE *)(v24._M_string_length + 36));
            v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&player_balloon_info->max_combo >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)player_balloon_info + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_balloon_info->max_combo >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_max_combo(v17, player_balloon_info->max_combo);
            v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&player_balloon_info->shoot_balloon_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&player_balloon_info->shoot_balloon_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_shoot_num(v18, player_balloon_info->shoot_balloon_count);
            v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)player_balloon_info >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)player_balloon_info >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyGalleryBalloonStop::set_score(v19, player_balloon_info->score);
            v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGalleryBalloonStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            proto_log::PlayerLogBodyGalleryBalloonStop::set_transaction(
              v20,
              (const std::string *)(v24._M_string_length + 64));
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStop,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStop> *)(v2 + 192));
            Player::printStatLog(v21, &p_body_ptr, &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
            std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGalleryBalloonStop> *const)(v2 + 192));
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v24._anon_0._M_allocated_capacity
        + 1);
      }
      if ( *(_BYTE *)(v2 + 32) != 1 && std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        EventComp = Player::getEventComp(v22);
        std::shared_ptr<BaseEvent>::shared_ptr<GalleryBalloonSettleEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
          (const std::shared_ptr<GalleryBalloonSettleEvent> *)(v2 + 128));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
      }
      std::map<unsigned int,BalloonPlayerInfo>::clear((std::map<unsigned int,BalloonPlayerInfo> *const)(v24._M_string_length + 304));
      std::shared_ptr<GalleryBalloonSettleEvent>::~shared_ptr((std::shared_ptr<GalleryBalloonSettleEvent> *const)(v2 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "onStop",
        233);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v37,
             (const char (*)[50])"[GALLERY] gallery_config_ptr is null, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v24._M_string_length + 32));
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 279: range 0000000017FB013E-0000000017FB02CA
void __cdecl BalloonGallery::toClient(BalloonGallery *const this, proto::SceneGalleryInfo *client_info)
{
  std::map<unsigned int,BalloonPlayerInfo>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,BalloonPlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::SceneGalleryBalloonInfo *balloon_info; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::BalloonPlayerInfo> *player_map; // [rsp+30h] [rbp-30h]
  std::map<unsigned int,BalloonPlayerInfo> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,BalloonPlayerInfo> *v7; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *uid; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *info; // [rsp+50h] [rbp-10h]
  proto::BalloonPlayerInfo *proto_info; // [rsp+58h] [rbp-8h]

  BaseGallery::toClient(this, client_info);
  balloon_info = proto::SceneGalleryInfo::mutable_balloon_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryBalloonInfo::set_end_time(balloon_info, this->end_time_);
  player_map = proto::SceneGalleryBalloonInfo::mutable_scene_player_balloon_info_map(balloon_info);
  __for_range = &this->uid_balloon_info_map_;
  __for_begin._M_node = std::map<unsigned int,BalloonPlayerInfo>::begin(&this->uid_balloon_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BalloonPlayerInfo>::end(&this->uid_balloon_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,BalloonPlayerInfo>(v7);
    info = (std::tuple_element<1,const std::pair<unsigned int const,BalloonPlayerInfo> >::type *)std::get<1ul,unsigned int const,BalloonPlayerInfo>(v7);
    proto_info = google::protobuf::Map<unsigned int,proto::BalloonPlayerInfo>::operator[](player_map, uid);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BalloonPlayerInfo::set_uid(proto_info, *uid);
    BalloonPlayerInfo::toClient(info, proto_info);
    std::_Rb_tree_iterator<std::pair<unsigned int const,BalloonPlayerInfo>>::operator++(&__for_begin);
  }
};

// Line 293: range 0000000017FB02CC-0000000017FB0B72
__int64 __fastcall BalloonGallery::addComboByGm(BalloonGallery *const this, uint32_t uid, uint32_t combo)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t *p_max_combo; // rsi
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  bool v15; // dl
  uint64_t v16; // rcx
  Player *v17; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-1ACh] BYREF
  const GalleryBalloonParam *param; // [rsp+18h] [rbp-1A8h]
  BalloonPlayerInfo *player_info; // [rsp+20h] [rbp-1A0h]
  uint64_t now; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-190h] BYREF
  char v25[368]; // [rsp+50h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:292 64 16 14 player_ptr:300 96 48 10 notify:327 176 112 13 param_opt:313";
  *(_QWORD *)(v3 + 16) = BalloonGallery::addComboByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 64), (__int64)this->scene_, *(_DWORD *)(v3 + 48));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "addComboByGm",
        303);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v24,
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "addComboByGm",
        309);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v24,
             (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = -1;
    }
    else
    {
      BaseGallery::getParam<GalleryBalloonParam>((std::optional<GalleryBalloonParam> *)(v3 + 176), this);
      if ( !std::optional<GalleryBalloonParam>::has_value((const std::optional<GalleryBalloonParam> *const)(v3 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/balloon_gallery.cpp",
          "addComboByGm",
          316);
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v24,
                (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v7 = -1;
      }
      else
      {
        param = std::optional<GalleryBalloonParam>::value((std::optional<GalleryBalloonParam> *const)(v3 + 176));
        player_info = std::map<unsigned int,BalloonPlayerInfo>::operator[](
                        &this->uid_balloon_info_map_,
                        (const std::map<unsigned int,BalloonPlayerInfo>::key_type *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        player_info->cur_combo += combo;
        p_max_combo = &player_info->max_combo;
        v12 = (uint32_t *)std::max<unsigned int>(&player_info->cur_combo, &player_info->max_combo);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((unsigned __int64)&player_info->max_combo >> 3) + 0x7FFF8000);
        LOBYTE(p_max_combo) = v14 != 0;
        v15 = v14 != 0 && (char)((((_BYTE)player_info + 20) & 7) + 3) >= v14;
        if ( v15 )
          __asan_report_store4(&player_info->max_combo, p_max_combo, v15);
        player_info->max_combo = v13;
        now = common::tools::TimeUtils::getNowMs();
        if ( *(_BYTE *)(((unsigned __int64)&param->combo_duration >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->combo_duration >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v16 = 1000LL * param->combo_duration + now;
        if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
          __asan_report_store8(&player_info->combo_disable_time, p_max_combo);
        player_info->combo_disable_time = v16;
        proto::GalleryBalloonShootNotify::GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_gallery_id(
          (proto::GalleryBalloonShootNotify *const)(v3 + 96),
          this->gallery_id_);
        if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_combo(
          (proto::GalleryBalloonShootNotify *const)(v3 + 96),
          player_info->cur_combo);
        if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        proto::GalleryBalloonShootNotify::set_combo_disable_time(
          (proto::GalleryBalloonShootNotify *const)(v3 + 96),
          player_info->combo_disable_time);
        if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::GalleryBalloonShootNotify::set_cur_score(
          (proto::GalleryBalloonShootNotify *const)(v3 + 96),
          player_info->score);
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::sendProto(v17, (const google::protobuf::Message *)(v3 + 96));
        BalloonGallery::notifyAllPlayerScore(this);
        v7 = 0;
        proto::GalleryBalloonShootNotify::~GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v3 + 96));
      }
      std::optional<GalleryBalloonParam>::~optional((std::optional<GalleryBalloonParam> *const)(v3 + 176));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/balloon_gallery.cpp",
      "addComboByGm",
      296);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v24,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
  }
  result = v7;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 339: range 0000000017FB0B74-0000000017FB1150
__int64 __fastcall BalloonGallery::addScoreByGm(BalloonGallery *const this, uint32_t uid, int32_t score)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  BalloonPlayerInfo *player_info; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:338 48 16 14 player_ptr:346 80 48 10 notify:362";
  *(_QWORD *)(v3 + 16) = BalloonGallery::addScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::findPlayer((const Scene *const)(v3 + 48), (__int64)this->scene_, *(_DWORD *)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "addScoreByGm",
        349);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v15,
             (const char (*)[33])"[GALLERY] player not found, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = -1;
    }
    else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
                 &this->player_info_map_,
                 (const unsigned int *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/balloon_gallery.cpp",
        "addScoreByGm",
        355);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v15,
             (const char (*)[31])"[GALLERY] unknown player, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = -1;
    }
    else
    {
      player_info = std::map<unsigned int,BalloonPlayerInfo>::operator[](
                      &this->uid_balloon_info_map_,
                      (const std::map<unsigned int,BalloonPlayerInfo>::key_type *)(v3 + 32));
      BalloonPlayerInfo::addScore(player_info, score);
      proto::GalleryBalloonShootNotify::GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GalleryBalloonShootNotify::set_gallery_id(
        (proto::GalleryBalloonShootNotify *const)(v3 + 80),
        this->gallery_id_);
      proto::GalleryBalloonShootNotify::set_add_score((proto::GalleryBalloonShootNotify *const)(v3 + 80), score);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&player_info->cur_combo >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GalleryBalloonShootNotify::set_combo(
        (proto::GalleryBalloonShootNotify *const)(v3 + 80),
        player_info->cur_combo);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->combo_disable_time >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::GalleryBalloonShootNotify::set_combo_disable_time(
        (proto::GalleryBalloonShootNotify *const)(v3 + 80),
        player_info->combo_disable_time);
      if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GalleryBalloonShootNotify::set_cur_score(
        (proto::GalleryBalloonShootNotify *const)(v3 + 80),
        player_info->score);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      Player::sendProto(v10, (const google::protobuf::Message *)(v3 + 80));
      BalloonGallery::notifyAllPlayerScore(this);
      v7 = 0;
      proto::GalleryBalloonShootNotify::~GalleryBalloonShootNotify((proto::GalleryBalloonShootNotify *const)(v3 + 80));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/balloon_gallery.cpp",
      "addScoreByGm",
      342);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"[GALLERY] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
