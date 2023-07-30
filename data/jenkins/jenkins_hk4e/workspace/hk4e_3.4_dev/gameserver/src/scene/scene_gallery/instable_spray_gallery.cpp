// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/instable_spray_gallery.cpp

// Line 24: range 00000000145C2650-00000000145C2A5E
void __cdecl InstableSprayGallery::toClient(InstableSprayGallery *const this, proto::SceneGalleryInfo *client_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t score; // ecx
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  proto::SceneGalleryInstaleSprayInfo *gallery_info; // [rsp+28h] [rbp-A8h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const unsigned int *buff_id; // [rsp+38h] [rbp-98h]
  const InstableSprayGallery::BuffInfo *info; // [rsp+40h] [rbp-90h]
  proto::SceneGalleryInstableSprayBuffInfo *buff_info; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-80h] BYREF
  char v16[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:31";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  BaseGallery::toClient((BaseGallery *const)this, client_info);
  gallery_info = proto::SceneGalleryInfo::mutable_instable_spray_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  score = this->score_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryInstaleSprayInfo::set_score(gallery_info, score + this->cached_prev_score_);
  __for_range = &this->cached_buff_id_list_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->cached_buff_id_list_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->cached_buff_id_list_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    buff_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    *(std::map<unsigned int,InstableSprayGallery::BuffInfo>::iterator *)(v2 + 32) = std::map<unsigned int,InstableSprayGallery::BuffInfo>::find(
                                                                                      &this->buff_info_map_,
                                                                                      buff_id);
    __y._M_node = std::map<unsigned int,InstableSprayGallery::BuffInfo>::end(&this->buff_info_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "toClient",
        34);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v15,
             (const char (*)[18])"invalid buff id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, buff_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      info = &std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> > *const)(v2 + 32))->second;
      buff_info = proto::SceneGalleryInstaleSprayInfo::add_buff_info_list(gallery_info);
      if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneGalleryInstableSprayBuffInfo::set_buff_id(buff_info, *buff_id);
      if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::SceneGalleryInstableSprayBuffInfo::set_buff_end_time(buff_info, info->buff_end_time);
      if ( *(_BYTE *)(((unsigned __int64)&info->buff_max_time >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::SceneGalleryInstableSprayBuffInfo::set_buff_max_time(buff_info, info->buff_max_time);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 00000000145C2A60-00000000145C2AAE
void __cdecl InstableSprayGallery::onStart(InstableSprayGallery *const this)
{
  uint32_t LevelId; // edx

  InstableSprayGallery::clearGalleryData(this);
  InstableSprayGallery::updateCacheParams(this);
  LevelId = InstableSprayGallery::getLevelId(this);
  InstableSprayGallery::addTeamAbilityGroup(this, LevelId);
  InstableSprayGallery::initBuffState(this);
};

// Line 57: range 00000000145C2B16-00000000145C395B
void __cdecl InstableSprayGallery::onStop(InstableSprayGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t LevelId; // edx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  DungeonScene *v10; // rax
  const std::string *v11; // rax
  Player *v12; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  uint32_t last_gacha_time; // ecx
  uint32_t v23; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  Player *v27; // r14
  std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *v30; // r14
  std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> *v31; // rax
  uint32_t v32; // ecx
  DungeonScene *v33; // r14
  std::remove_reference<InstableSprayDungeonContext&>::type *v34; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  DungeonScene *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t round; // edx
  __int64 stage_id; // rsi
  DungeonScene *v41; // r14
  std::remove_reference<InstableSprayDungeonContext&>::type *v42; // rax
  std::string v43; // [rsp+0h] [rbp-190h]
  proto::GalleryStopReason reasona; // [rsp+4h] [rbp-18Ch]
  InstableSprayGallery *thisa; // [rsp+8h] [rbp-188h]
  google::protobuf::uint32 interval; // [rsp+14h] [rbp-17Ch]
  InstableSprayDungeonContext *context; // [rsp+18h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-170h] BYREF
  std::enable_shared_from_this<Scene> v49; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v50; // [rsp+40h] [rbp-150h] BYREF
  char v51[304]; // [rsp+60h] [rbp-130h] BYREF

  v43._M_string_length = (std::string::size_type)this;
  HIDWORD(v43._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 holder:83 48 16 20 dungeon_scene_ptr:62 80 16 13 player_ptr:75 112 16 10 log_ptr:84 144"
                        " 80 14 context_opt:68";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862727] = -202116109;
  LevelId = InstableSprayGallery::getLevelId(this);
  InstableSprayGallery::delTeamAbilityGroup(this, LevelId);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::enable_shared_from_this<Scene>::shared_from_this(&v49);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 48));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v49);
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "onStop",
      65);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v50, (const char (*)[25])off_25417300);
    common::milog::MiLogStream::~MiLogStream(&v50);
  }
  else
  {
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
      (std::optional<InstableSprayDungeonContext> *)(v2 + 144),
      v6);
    if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "onStop",
        71);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v50, (const char (*)[42])off_253F7620);
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      *(&v43._anon_0._M_allocated_capacity + 1) = (std::string::size_type)std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v2 + 80));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/instable_spray_gallery.cpp",
          "onStop",
          78);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v50, (const char (*)[15])"player is null");
        common::milog::MiLogStream::~MiLogStream(&v50);
      }
      else
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        BasicComp = Player::getBasicComp(v7);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v50, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xE56u, v43);
        std::string::~string(&v50);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyInstableSprayGallerySettle>();
        v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v11 = DungeonScene::getTransaction[abi:cxx11](v10);
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_transaction(v9, v11);
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        AvatarComp = Player::getAvatarComp(v12);
        std::function<ForeachPolicy ()(Avatar &)>::function<InstableSprayGallery::onStop(proto::GalleryStopReason)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v50,
          (InstableSprayGallery::onStop::<lambda(Avatar&)>)(v2 + 112));
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v50);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v50);
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->baseclass_0[32] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->baseclass_0[32] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_gallery_id(v14, *(_DWORD *)&thisa->baseclass_0[32]);
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        DungeonId = DungeonScene::getDungeonId(v16);
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_dungeon_id(v15, DungeonId);
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_difficulty(v18, context->difficulty);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_is_success(v19, 1);
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_draw_times(v20, thisa->gacha_times_);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( thisa->gacha_times_ )
        {
          if ( thisa->gacha_times_ == 1 )
          {
            v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->first_gacha_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->first_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyInstableSprayGallerySettle::set_draw_interval_time(v21, thisa->first_gacha_time_);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)thisa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->last_gacha_time_ >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            last_gacha_time = thisa->last_gacha_time_;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->first_gacha_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->first_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v23 = last_gacha_time - thisa->first_gacha_time_;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            interval = v23 / (thisa->gacha_times_ - 1);
            v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            proto_log::PlayerLogBodyInstableSprayGallerySettle::set_draw_interval_time(v24, interval);
          }
        }
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->score_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayGallerySettle::set_score(v25, thisa->score_);
        if ( reasona == GALLERY_STOP_LUA_INTERRUPT_SUCCESS || reasona == GALLERY_STOP_TIMEUP )
        {
          v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          proto_log::PlayerLogBodyInstableSprayGallerySettle::set_is_success(v29, 1);
          v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)&v49,
            0LL);
          v31 = std::move<std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> &>((std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> *)(v2 + 112));
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle,void>(
            &p_body_ptr,
            v31);
          Player::printStatLog(v30, &p_body_ptr, (MessagePtr *)&v49, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v49);
          std::vector<unsigned int>::emplace_back<unsigned int &>(&context->score_vec, &thisa->score_, &thisa->score_);
          if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v32 = ++context->round;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->cached_max_round_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->cached_max_round_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v32 == thisa->cached_max_round_ )
          {
            v33 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            v34 = std::move<InstableSprayDungeonContext &>(context);
            DungeonScene::setDungeonExtraData<InstableSprayDungeonContext>(v33, v34);
            v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            if ( DungeonScene::getDungeonResult(v35) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/instable_spray_gallery.cpp",
                "onStop",
                139);
              v37 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v50,
                      (const char (*)[38])"dungeon is already finished, dungeon:");
              v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
              common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v37, v38);
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
            else
            {
              v36 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
              DungeonScene::settle(v36, DUNGEON_RESULT_SUCCEED);
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            round = context->round;
            if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            stage_id = context->stage_id;
            InstableSprayGallery::notifyNextLevelInfo(thisa, stage_id, round);
            if ( *(char *)(((unsigned __int64)&context->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&context->is_need_switch_team, stage_id, &context->is_need_switch_team);
            context->is_need_switch_team = 1;
            v41 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            v42 = std::move<InstableSprayDungeonContext &>(context);
            DungeonScene::setDungeonExtraData<InstableSprayDungeonContext>(v41, v42);
          }
        }
        else
        {
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          proto_log::PlayerLogBodyInstableSprayGallerySettle::set_is_success(v26, 0);
          v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)&v49,
            0LL);
          v28 = std::move<std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> &>((std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> *)(v2 + 112));
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle,void>(
            &p_body_ptr,
            v28);
          Player::printStatLog(v27, &p_body_ptr, (MessagePtr *)&v49, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v49);
        }
        std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyInstableSprayGallerySettle> *const)(v2 + 112));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
    }
    std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v2 + 144));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 86: range 00000000145C2AB0-00000000145C2B15
ForeachPolicy __cdecl InstableSprayGallery::onStop(proto::GalleryStopReason)::{lambda(Avatar &)#1}::operator()(
        const InstableSprayGallery::onStop::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  v3 = proto_log::PlayerLogBodyInstableSprayGallerySettle::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 153: range 00000000145C395C-00000000145C3F0B
int32_t __cdecl InstableSprayGallery::updatePlayerScore(
        InstableSprayGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r14
  int32_t result; // eax
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  uint32_t score; // ecx
  char v14; // r15
  bool v16; // [rsp+22h] [rbp-12Eh]
  char v17; // [rsp+23h] [rbp-12Dh]
  std::allocator<char> v18; // [rsp+3Ah] [rbp-116h] BYREF
  std::allocator<char> __a; // [rsp+3Bh] [rbp-115h] BYREF
  unsigned int monster_score; // [rsp+3Ch] [rbp-114h]
  std::string v21; // [rsp+40h] [rbp-110h] BYREF
  std::string name; // [rsp+60h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 monster_id:155 64 4 11 buff_id:172 80 4 13 buff_time:173 96 24 10 notify:165";
  *(_QWORD *)(v4 + 16) = InstableSprayGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "monster_id", &__a);
  v7 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v4 + 48)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v7 )
  {
    monster_score = InstableSprayGallery::getMonsterScore(this, *(_DWORD *)(v4 + 48));
    if ( !monster_score )
    {
      result = -1;
      goto LABEL_29;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = monster_score;
    v9 = SAFE_ADD<unsigned int,unsigned int>(this->score_, monster_score);
    v10 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10;
    if ( v12 )
      __asan_report_store4(&this->score_, v11, v12);
    this->score_ = v9;
    proto::InstableSprayGalleryInfoNotify::InstableSprayGalleryInfoNotify((proto::InstableSprayGalleryInfoNotify *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    score = this->score_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InstableSprayGalleryInfoNotify::set_score(
      (proto::InstableSprayGalleryInfoNotify *const)(v4 + 96),
      score + this->cached_prev_score_);
    BaseGallery::notifyToGalleryPlayers<proto::InstableSprayGalleryInfoNotify>(
      (BaseGallery *const)this,
      (proto::InstableSprayGalleryInfoNotify *)(v4 + 96));
    proto::InstableSprayGalleryInfoNotify::~InstableSprayGalleryInfoNotify((proto::InstableSprayGalleryInfoNotify *const)(v4 + 96));
  }
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  v14 = 0;
  v17 = 0;
  std::allocator<char>::allocator(&v18);
  std::string::basic_string<std::allocator<char>>(&v21, "buff_id", &v18);
  v16 = 0;
  if ( !ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          &v21,
          (unsigned int *)(v4 + 64)) )
  {
    std::allocator<char>::allocator(&__a);
    v14 = 1;
    std::string::basic_string<std::allocator<char>>(&name, "buff_max_time", &__a);
    v17 = 1;
    if ( !ScriptUtil::getTableValue<unsigned int>(
            &ScriptUtil::no_exception_instance,
            param_table,
            &name,
            (unsigned int *)(v4 + 80)) )
      v16 = 1;
  }
  if ( v17 )
    std::string::~string(&name);
  if ( v14 )
    std::allocator<char>::~allocator(&__a);
  std::string::~string(&v21);
  std::allocator<char>::~allocator(&v18);
  if ( v16 )
  {
    InstableSprayGallery::updateBuff(this, *(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 80));
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
  }
  result = 0;
LABEL_29:
  if ( v23 == (char *)v4 )
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

// Line 184: range 00000000145C3F0C-00000000145C412A
void __cdecl InstableSprayGallery::initBuffState(InstableSprayGallery *const this)
{
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const unsigned int *v3; // rsi
  unsigned __int64 v4; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-58h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const unsigned int *buff_id; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_instable_spray_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                       p_activity_instable_spray_mgr,
                       this->cached_level_id_);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( level_config_ptr )
  {
    __for_range = &level_config_ptr->buff_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&level_config_ptr->buff_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&level_config_ptr->buff_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      buff_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v3 = buff_id;
      v4 = (unsigned __int64)std::map<unsigned int,InstableSprayGallery::BuffInfo>::operator[](
                               &this->buff_info_map_,
                               buff_id);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8(v4, v3);
      *(_QWORD *)v4 = 0LL;
      if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8(v4 + 8, v3);
      *(_QWORD *)(v4 + 8) = 0LL;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "initBuffState",
      188);
    v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"level config not found, level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->cached_level_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 198: range 00000000145C412C-00000000145C44B2
void __fastcall InstableSprayGallery::updateBuff(
        InstableSprayGallery *const this,
        uint32_t buff_id,
        uint32_t buff_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::pointer v10; // r13
  SelectType_5 v11; // rax
  uint64_t v12; // rcx
  __int64 v13; // rsi
  unsigned int buff_timeb; // [rsp+0h] [rbp-C0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int64 scene_time; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 buff_id:197 64 8 8 iter:205";
  *(_QWORD *)(v3 + 16) = InstableSprayGallery::updateBuff;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = buff_id;
  if ( !common::tools::MiscUtils::isContains<unsigned int>(&this->buff_id_vec_, (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "updateBuff",
      202);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v18,
           (const char (*)[39])"didn't get buff_id but update by lua: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    *(std::map<unsigned int,InstableSprayGallery::BuffInfo>::iterator *)(v3 + 64) = std::map<unsigned int,InstableSprayGallery::BuffInfo>::find(
                                                                                      &this->buff_info_map_,
                                                                                      (const std::map<unsigned int,InstableSprayGallery::BuffInfo>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,InstableSprayGallery::BuffInfo>::end(&this->buff_info_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "updateBuff",
        208);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v18,
             (const char (*)[37])"buff is not in this level, buff_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cached_level_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      buff_timeb = SAFE_MULTIPLY<unsigned int,int>(buff_time, 1000);
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene_time = Scene::getSceneTimeMs(*(Scene *const *)&this->baseclass_0[24]);
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> > *const)(v3 + 64));
      v11 = SAFE_ADD<unsigned long,unsigned int>(scene_time, buff_timeb);
      v12 = buff_timeb;
      v13 = *(unsigned __int8 *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000);
      if ( (_BYTE)v13 )
        v11 = __asan_report_store8(&v10->second, v13);
      v10->second.buff_end_time = v11;
      if ( *(_BYTE *)(((unsigned __int64)&v10->second.buff_max_time >> 3) + 0x7FFF8000) )
        __asan_report_store8(&v10->second.buff_max_time, v13);
      v10->second.buff_max_time = v12;
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 218: range 00000000145C44B4-00000000145C478C
void __fastcall InstableSprayGallery::updateBuffByGm(
        InstableSprayGallery *const this,
        uint32_t buff_id,
        uint32_t buff_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::pointer v9; // r13
  SelectType_5 v10; // rax
  uint64_t v11; // rcx
  __int64 v12; // rsi
  unsigned int buff_timeb; // [rsp+0h] [rbp-C0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int64 scene_time; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 buff_id:217 64 8 8 iter:219";
  *(_QWORD *)(v3 + 16) = InstableSprayGallery::updateBuffByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = buff_id;
  *(std::map<unsigned int,InstableSprayGallery::BuffInfo>::iterator *)(v3 + 64) = std::map<unsigned int,InstableSprayGallery::BuffInfo>::find(
                                                                                    &this->buff_info_map_,
                                                                                    (const std::map<unsigned int,InstableSprayGallery::BuffInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,InstableSprayGallery::BuffInfo>::end(&this->buff_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "updateBuffByGm",
      222);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v17,
           (const char (*)[37])"buff is not in this level, buff_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])", level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cached_level_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    buff_timeb = SAFE_MULTIPLY<unsigned int,int>(buff_time, 1000);
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene_time = Scene::getSceneTimeMs(*(Scene *const *)&this->baseclass_0[24]);
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayGallery::BuffInfo> > *const)(v3 + 64));
    v10 = SAFE_ADD<unsigned long,unsigned int>(scene_time, buff_timeb);
    v11 = buff_timeb;
    v12 = *(unsigned __int8 *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000);
    if ( (_BYTE)v12 )
      v10 = __asan_report_store8(&v9->second, v12);
    v9->second.buff_end_time = v10;
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.buff_max_time >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v9->second.buff_max_time, v12);
    v9->second.buff_max_time = v11;
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

// Line 232: range 00000000145C478E-00000000145C4AD7
__int64 __fastcall InstableSprayGallery::getMonsterScore(InstableSprayGallery *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  float b; // [rsp+0h] [rbp-C0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 monster_id:231 64 8 8 iter:233";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::getMonsterScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->cached_normal_monster_score_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->cached_normal_monster_score_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    b = InstableSprayGallery::getScoreRatio(this);
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
LABEL_7:
    result = (unsigned int)(int)SAFE_MULTIPLY<unsigned int,float>(v5->second, b);
    goto LABEL_13;
  }
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->cached_special_monster_score_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->cached_special_monster_score_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    b = InstableSprayGallery::getScoreRatio(this);
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    goto LABEL_7;
  }
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/scene/scene_gallery/instable_spray_gallery.cpp",
    "getMonsterScore",
    243);
  v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v12,
         (const char (*)[39])"monster not in score map, gallery_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
         v7,
         (const unsigned int *)&this->baseclass_0[32]);
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", mosnter_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v12);
  result = 0LL;
LABEL_13:
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
  return result;
};

// Line 248: range 00000000145C4AD8-00000000145C57FC
void __cdecl InstableSprayGallery::updateCacheParams(InstableSprayGallery *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  InstableSprayDungeonContext *v5; // rax
  unsigned int *M_current; // r14
  InstableSprayDungeonContext *v7; // rax
  std::vector<unsigned int>::iterator v8; // rax
  __int64 v9; // rsi
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v11; // rdx
  std::vector<unsigned int>::size_type round; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  __int64 v16; // rsi
  const std::vector<unsigned int> *p_level_id_list; // rcx
  std::vector<unsigned int>::size_type v18; // rsi
  std::vector<unsigned int>::const_reference v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  bool v22; // dl
  ActivityInstableSprayExcelConfigMgr *v23; // rcx
  common::milog::MiLogStream *v24; // rax
  ActivityInstableSprayExcelConfigMgr *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  float score_ratio; // xmm0_4
  bool v28; // dl
  common::milog::MiLogStream *v29; // rax
  GalleryInstableSprayParam *v30; // rax
  std::map<unsigned int,unsigned int> *v31; // rax
  GalleryInstableSprayParam *v32; // rax
  std::map<unsigned int,unsigned int> *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  InstableSprayDungeonContext *context; // [rsp+10h] [rbp-1C0h]
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-1B8h]
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+20h] [rbp-1B0h]
  const data::InstableSprayDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-1A8h]
  std::enable_shared_from_this<Scene> v43; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-190h] BYREF
  char v45[368]; // [rsp+60h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 21 dungeon_scene_ptr:250 64 80 15 context_opt:256 176 104 13 param_opt:300";
  *(_QWORD *)(v1 + 16) = InstableSprayGallery::updateCacheParams;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::enable_shared_from_this<Scene>::shared_from_this(&v43);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 32));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v43);
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "updateCacheParams",
      253);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v44, (const char (*)[25])off_25417300);
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
      (std::optional<InstableSprayDungeonContext> *)(v1 + 64),
      v4);
    if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "updateCacheParams",
        259);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v44, (const char (*)[42])off_253F7620);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v1 + 64));
      v5 = std::optional<InstableSprayDungeonContext>::operator->((std::optional<InstableSprayDungeonContext> *const)(v1 + 64));
      M_current = std::vector<unsigned int>::end(&v5->score_vec)._M_current;
      v7 = std::optional<InstableSprayDungeonContext>::operator->((std::optional<InstableSprayDungeonContext> *const)(v1 + 64));
      v8._M_current = std::vector<unsigned int>::begin(&v7->score_vec)._M_current;
      v9 = (unsigned int)std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                           v8,
                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                           0);
      if ( *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cached_prev_score_, v9, (_BYTE)this - 120);
      }
      this->cached_prev_score_ = v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v43);
      p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_instable_spray_mgr;
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                           p_activity_instable_spray_mgr,
                           context->stage_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        round = context->round;
        if ( round < std::vector<unsigned int>::size(&stage_config_ptr->level_id_list) )
        {
          v16 = (unsigned int)std::vector<unsigned int>::size(&stage_config_ptr->level_id_list);
          if ( *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cached_max_round_, v16, (_BYTE)this - 16);
          }
          this->cached_max_round_ = v16;
          p_level_id_list = &stage_config_ptr->level_id_list;
          if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v18 = context->round;
          v19 = std::vector<unsigned int>::operator[](p_level_id_list, v18);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v20 = *v19;
          v21 = *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v21 != 0;
          v22 = v21 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v21;
          if ( v22 )
            __asan_report_store4(&this->cached_level_id_, v18, v22);
          this->cached_level_id_ = v20;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v43);
          v23 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_instable_spray_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                               v23,
                               this->cached_level_id_);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
          if ( level_config_ptr )
          {
            std::vector<unsigned int>::operator=(&this->cached_buff_id_list_, &level_config_ptr->buff_id_list);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v43);
            v25 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_instable_spray_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            difficulty_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig(
                                      v25,
                                      context->difficulty);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
            if ( difficulty_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              score_ratio = difficulty_config_ptr->score_ratio;
              v28 = *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3) + 0x7FFF8000) != 0
                 && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3)
                                                                      + 0x7FFF8000);
              if ( v28 )
                __asan_report_store4(&this->cached_score_ratio_, (((_BYTE)this - 116) & 7u) + 3, v28);
              this->cached_score_ratio_ = score_ratio;
              BaseGallery::getParam<GalleryInstableSprayParam>(
                (std::optional<GalleryInstableSprayParam> *)(v1 + 176),
                (const BaseGallery *const)this);
              if ( !std::optional<GalleryInstableSprayParam>::has_value((const std::optional<GalleryInstableSprayParam> *const)(v1 + 176)) )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene/scene_gallery/instable_spray_gallery.cpp",
                  "updateCacheParams",
                  303);
                v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v44,
                        (const char (*)[38])"gallery param not found, gallery_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)&this->baseclass_0[32]);
              }
              else
              {
                v30 = std::optional<GalleryInstableSprayParam>::operator->((std::optional<GalleryInstableSprayParam> *const)(v1 + 176));
                v31 = std::move<std::map<unsigned int,unsigned int> &>(&v30->normal_monster_score_map);
                std::map<unsigned int,unsigned int>::operator=(&this->cached_normal_monster_score_map_, v31);
                v32 = std::optional<GalleryInstableSprayParam>::operator->((std::optional<GalleryInstableSprayParam> *const)(v1 + 176));
                v33 = std::move<std::map<unsigned int,unsigned int> &>(&v32->special_monster_score_map);
                std::map<unsigned int,unsigned int>::operator=(&this->cached_special_monster_score_map_, v33);
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/scene_gallery/instable_spray_gallery.cpp",
                  "updateCacheParams",
                  308);
                v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v44,
                        (const char (*)[11])"level_id: ");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        &this->cached_level_id_);
                v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v35,
                        (const char (*)[16])", score_ratio: ");
                v37 = common::milog::MiLogStream::operator<<<float,(float *)0>(v36, &this->cached_score_ratio_);
                v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v37,
                        (const char (*)[15])", prev_score: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &this->cached_prev_score_);
              }
              common::milog::MiLogStream::~MiLogStream(&v44);
              std::optional<GalleryInstableSprayParam>::~optional((std::optional<GalleryInstableSprayParam> *const)(v1 + 176));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/scene/scene_gallery/instable_spray_gallery.cpp",
                "updateCacheParams",
                294);
              v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v44,
                      (const char (*)[42])"difficulty config not found, difficulty: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &context->difficulty);
              common::milog::MiLogStream::~MiLogStream(&v44);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_gallery/instable_spray_gallery.cpp",
              "updateCacheParams",
              285);
            v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v44,
                    (const char (*)[33])"level config is null, level_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->cached_level_id_);
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_gallery/instable_spray_gallery.cpp",
            "updateCacheParams",
            276);
          v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v44, (const char (*)[53])off_25417920);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &context->round);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &context->stage_id);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_gallery/instable_spray_gallery.cpp",
          "updateCacheParams",
          271);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v44,
                (const char (*)[33])"stage config is null, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &context->stage_id);
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
    }
    std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v1 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v45 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 312: range 00000000145C57FE-00000000145C5854
float __cdecl InstableSprayGallery::getScoreRatio(InstableSprayGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->cached_score_ratio_;
};

// Line 317: range 00000000145C5856-00000000145C5D91
std::pair<std::vector<unsigned int>,int> *__cdecl InstableSprayGallery::doBuffGacha(
        std::pair<std::vector<unsigned int>,int> *retstr,
        InstableSprayGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  bool v8; // dl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int __y; // [rsp+14h] [rbp-DCh] BYREF
  unsigned int delta; // [rsp+18h] [rbp-D8h]
  unsigned int stage; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int> __x; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 now:319 64 4 14 start_time:320";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::doBuffGacha;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Scene::getSceneTimeSeconds(*(Scene *const *)&this->baseclass_0[24]);
  *(_DWORD *)(v2 + 64) = BaseGallery::getGalleryStartTime((const BaseGallery *const)this);
  if ( *(_DWORD *)(v2 + 48) >= *(_DWORD *)(v2 + 64) )
  {
    delta = *(_DWORD *)(v2 + 48) - *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->gacha_times_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->first_gacha_time_, this, (_BYTE)this + 120);
      }
      this->first_gacha_time_ = delta;
    }
    v8 = *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3)
                                                           + 0x7FFF8000);
    if ( v8 )
      __asan_report_store4(&this->last_gacha_time_, (((_BYTE)this + 124) & 7u) + 3, v8);
    this->last_gacha_time_ = delta;
    if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++this->gacha_times_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    stage = ActivityInstableSprayExcelConfigMgr::getGachaStageByGalleryTime(
              &v9->design_config.txt_config_mgr.activity_instable_spray_mgr,
              delta);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    InstableSprayGallery::doBuffGachaInternal(retstr, this, stage);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "doBuffGacha",
      323);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v16, (const char (*)[6])"now: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])", start_time: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<unsigned int>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::make_pair<std::vector<unsigned int>,int>(retstr, &__x, &__y);
    std::vector<unsigned int>::~vector(&__x);
  }
  if ( v17 == (char *)v2 )
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
  return retstr;
};

// Line 343: range 00000000145C5D92-00000000145C6E31
std::pair<std::vector<unsigned int>,int> *__fastcall InstableSprayGallery::doBuffGachaInternal(
        std::pair<std::vector<unsigned int>,int> *retstr,
        InstableSprayGallery *const this,
        uint32_t stage)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::vector<unsigned int>::size_type v14; // r14
  std::vector<unsigned int>::const_reference v15; // rdx
  int v16; // ecx
  std::vector<unsigned int>::size_type v17; // r14
  common::milog::MiLogStream *v18; // rax
  unsigned int *v19; // rdx
  std::vector<unsigned int>::reference v20; // rdx
  int v21; // r14d
  __int64 v22; // rsi
  std::vector<unsigned int>::reference v23; // rax
  int *v24; // rdx
  char v25; // cl
  std::vector<unsigned int>::size_type v26; // r14
  std::vector<unsigned int>::size_type v27; // r14
  common::milog::MiLogStream *v29; // rax
  std::vector<unsigned int>::size_type v30; // rsi
  std::vector<unsigned int>::reference v31; // rax
  _DWORD *v32; // rdx
  char v33; // cl
  const unsigned int *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<unsigned int> *v38; // rax
  int __y; // [rsp+2Ch] [rbp-1B4h] BYREF
  uint32_t i; // [rsp+30h] [rbp-1B0h]
  unsigned int i_0; // [rsp+34h] [rbp-1ACh]
  unsigned int buff_count; // [rsp+38h] [rbp-1A8h]
  unsigned int cur_weight_percent; // [rsp+3Ch] [rbp-1A4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-198h] BYREF
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+50h] [rbp-190h]
  const data::InstableSprayGachaExcelConfig *gacha_config_ptr; // [rsp+58h] [rbp-188h]
  const std::vector<unsigned int> *gacha_buff_id_vec; // [rsp+60h] [rbp-180h]
  const data::InstableSprayOverallExcelConfig *overall_config; // [rsp+68h] [rbp-178h]
  std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-170h]
  const unsigned int *prev_buff_id; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Config> v55; // [rsp+80h] [rbp-160h] BYREF
  std::vector<unsigned int> __x; // [rsp+90h] [rbp-150h] BYREF
  common::milog::MiLogStream v57; // [rsp+B0h] [rbp-130h] BYREF
  char v58[272]; // [rsp+D0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 level_id:344 48 4 20 count_weight_idx:360 64 4 12 buff_idx:399 80 4 9 stage:342 96 24 "
                        "14 weight_vec:373 160 24 24 selected_buff_id_vec:396";
  *(_QWORD *)(v3 + 16) = InstableSprayGallery::doBuffGachaInternal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 80) = stage;
  *(_DWORD *)(v3 + 32) = InstableSprayGallery::getLevelId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_instable_spray_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v55);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "doBuffGachaInternal",
      348);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v57,
           (const char (*)[35])"level config not found, level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v57);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<unsigned int>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
LABEL_19:
    std::make_pair<std::vector<unsigned int>,int>(retstr, &__x, &__y);
    std::vector<unsigned int>::~vector(&__x);
    goto LABEL_61;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  gacha_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayGachaExcelConfig(
                       &v8->design_config.txt_config_mgr.activity_instable_spray_mgr,
                       *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v55);
  if ( !gacha_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "doBuffGachaInternal",
      357);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v57,
           (const char (*)[32])"gacha config not found, stage: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v57);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<unsigned int>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    goto LABEL_19;
  }
  *(_DWORD *)(v3 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
         &gacha_config_ptr->buff_count_weight_list,
         (uint32_t *)(v3 + 48),
         0)
    || (v10 = *(unsigned int *)(v3 + 48),
        v10 >= std::vector<unsigned int>::size(&gacha_config_ptr->buff_count_weight_list)) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "doBuffGachaInternal",
      364);
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v57,
            (const char (*)[36])"random select failed, weight_list: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v12, &gacha_config_ptr->buff_count_weight_list);
    common::milog::MiLogStream::~MiLogStream(&v57);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<unsigned int>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    goto LABEL_19;
  }
  buff_count = *(_DWORD *)(v3 + 48) + 1;
  gacha_buff_id_vec = &level_config_ptr->buff_id_list;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96), &level_config_ptr->buff_weight_list);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  overall_config = ActivityInstableSprayExcelConfigMgr::getOverallConfig(&v13->design_config.txt_config_mgr.activity_instable_spray_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v55);
  __for_range = &this->buff_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->buff_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->buff_id_vec_)._M_current;
  while ( 2 )
  {
    if ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      prev_buff_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      for ( i = 0; ; ++i )
      {
        v14 = i;
        if ( v14 >= std::vector<unsigned int>::size(gacha_buff_id_vec) )
          goto LABEL_43;
        v15 = std::vector<unsigned int>::operator[](gacha_buff_id_vec, i);
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v16 = *v15;
        if ( *(_BYTE *)(((unsigned __int64)prev_buff_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)prev_buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prev_buff_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v16 == *prev_buff_id )
          break;
      }
      v17 = i;
      if ( v17 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96)) )
      {
        __y = 0;
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->weight_down_percent >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config->weight_down_percent >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 64) = 100 - overall_config->weight_down_percent;
        v19 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v3 + 64), (const unsigned int *)&__y);
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        cur_weight_percent = *v19;
        v20 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), i);
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v21 = (int)((double)(int)cur_weight_percent * (double)(int)*v20 / 100.0);
        v22 = i;
        v23 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), i);
        v24 = (int *)v23;
        v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
        {
          LOBYTE(v22) = v25 != 0;
          __asan_report_store4(v23, v22, (_BYTE)v23);
        }
        *v24 = v21;
LABEL_43:
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        continue;
      }
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "doBuffGachaInternal",
        385);
      v18 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v57,
              (const char (*)[55])"weight_vec.size less than buff_id_vec.size, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v57);
      __y = -1;
      memset(&__x, 0, sizeof(__x));
      std::vector<unsigned int>::vector(&__x);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      std::make_pair<std::vector<unsigned int>,int>(retstr, &__x, &__y);
      std::vector<unsigned int>::~vector(&__x);
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
      for ( i_0 = 0; ; ++i_0 )
      {
        if ( i_0 >= buff_count )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/instable_spray_gallery.cpp",
            "doBuffGachaInternal",
            412);
          v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v57,
                  (const char (*)[14])"buff_id_vec: ");
          v36 = common::milog::MiLogStream::operator<<<unsigned int>(v35, (const std::vector<unsigned int> *)(v3 + 160));
          v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])", stage: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v57);
          v38 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 160));
          std::vector<unsigned int>::operator=(&this->buff_id_vec_, v38);
          __y = 0;
          std::pair<std::vector<unsigned int>,int>::pair<std::vector<unsigned int>&,int,true>(
            retstr,
            &this->buff_id_vec_,
            &__y);
          goto LABEL_59;
        }
        *(_DWORD *)(v3 + 64) = 0;
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
               (const std::vector<unsigned int> *)(v3 + 96),
               (uint32_t *)(v3 + 64),
               0) )
        {
          break;
        }
        v26 = *(unsigned int *)(v3 + 64);
        if ( v26 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96)) )
          break;
        v27 = *(unsigned int *)(v3 + 64);
        if ( v27 >= std::vector<unsigned int>::size(gacha_buff_id_vec) )
          break;
        v30 = *(unsigned int *)(v3 + 64);
        v31 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), v30);
        v32 = v31;
        v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
        if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
        {
          LOBYTE(v30) = v33 != 0;
          __asan_report_store4(v31, v30, (_BYTE)v31);
        }
        *v32 = 0;
        v34 = std::vector<unsigned int>::operator[](gacha_buff_id_vec, *(unsigned int *)(v3 + 64));
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          (std::vector<unsigned int> *const)(v3 + 160),
          v34,
          v34);
      }
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "doBuffGachaInternal",
        404);
      v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v57,
              (const char (*)[35])"random select failed, weight_vec: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v29, (const std::vector<unsigned int> *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream(&v57);
      __y = -1;
      memset(&__x, 0, sizeof(__x));
      std::vector<unsigned int>::vector(&__x);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      std::make_pair<std::vector<unsigned int>,int>(retstr, &__x, &__y);
      std::vector<unsigned int>::~vector(&__x);
LABEL_59:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
    }
    break;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
LABEL_61:
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 418: range 00000000145C6E32-00000000145C70D4
void __cdecl InstableSprayGallery::clearGalleryData(InstableSprayGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->score_, v1, v2);
  this->score_ = 0;
  std::vector<unsigned int>::clear(&this->buff_id_vec_);
  std::map<unsigned int,InstableSprayGallery::BuffInfo>::clear(&this->buff_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_gacha_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_gacha_time_, v1, (_BYTE)this + 120);
  }
  this->first_gacha_time_ = 0;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_gacha_time_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->last_gacha_time_, v3, v4);
  this->last_gacha_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_times_, v3, (_BYTE)this + 0x80);
  }
  this->gacha_times_ = 0;
  v5 = (((_BYTE)this - 124) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->cached_level_id_, v5, v6);
  this->cached_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_prev_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_prev_score_, v5, (_BYTE)this - 120);
  }
  this->cached_prev_score_ = 0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_score_ratio_ >> 3)
                                                         + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->cached_score_ratio_, v7, v8);
  this->cached_score_ratio_ = 0.0;
  std::map<unsigned int,unsigned int>::clear(&this->cached_normal_monster_score_map_);
  std::map<unsigned int,unsigned int>::clear(&this->cached_special_monster_score_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_max_round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_max_round_, v7, (_BYTE)this - 16);
  }
  this->cached_max_round_ = 0;
  std::vector<unsigned int>::clear(&this->cached_buff_id_list_);
};

// Line 437: range 00000000145C70D6-00000000145C712A
uint32_t __cdecl InstableSprayGallery::getLevelId(InstableSprayGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->cached_level_id_;
};

// Line 442: range 00000000145C712C-00000000145C74D4
std::vector<std::string> *__cdecl InstableSprayGallery::buffIdVecToAbilityGroupVec[abi:cxx11](
        std::vector<std::string> *retstr,
        const std::vector<unsigned int> *buff_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  const unsigned int *buff_id; // [rsp+30h] [rbp-C0h]
  const data::InstableSprayBuffExcelConfig *buff_config_ptr; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 21 ability_group_vec:443";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::buffIdVecToAbilityGroupVec[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  __for_range = buff_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(buff_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(buff_id_vec)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      std::vector<std::string>::vector(retstr, (std::vector<std::string> *)(v2 + 32));
      goto LABEL_14;
    }
    buff_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_instable_spray_mgr;
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    buff_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig(
                        p_activity_instable_spray_mgr,
                        *buff_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( !buff_config_ptr )
      break;
    std::vector<std::string>::emplace_back<std::string const&>(
      (std::vector<std::string> *const)(v2 + 32),
      &buff_config_ptr->ability_group_name,
      &buff_config_ptr->ability_group_name);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_gallery/instable_spray_gallery.cpp",
    "buffIdVecToAbilityGroupVec",
    449);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v14,
         (const char (*)[26])"buff not found, buff_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, buff_id);
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  retstr->_M_impl._M_start = 0LL;
  retstr->_M_impl._M_finish = 0LL;
  retstr->_M_impl._M_end_of_storage = 0LL;
  std::vector<std::string>::vector(retstr);
LABEL_14:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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
  return retstr;
};

// Line 458: range 00000000145C74D6-00000000145C7850
void __fastcall InstableSprayGallery::delTeamAbilityGroup(InstableSprayGallery *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  Player *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:457 64 16 14 player_ptr:459";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::delTeamAbilityGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "delTeamAbilityGroup",
      462);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"player not found");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                         &v5->design_config.txt_config_mgr.activity_instable_spray_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( level_config_ptr )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AbilityGroupComp = Player::getAbilityGroupComp(v7);
      InstableSprayGallery::buffIdVecToAbilityGroupVec[abi:cxx11](&group_vec, &level_config_ptr->buff_id_list);
      PlayerAbilityGroupComp::delTeamAbilityGroup(AbilityGroupComp, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = Player::getAbilityGroupComp(v9);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v10);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "delTeamAbilityGroup",
        469);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v14,
             (const char (*)[35])"level config not found, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v15 == (char *)v2 )
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

// Line 477: range 00000000145C7852-00000000145C7BD1
void __fastcall InstableSprayGallery::addTeamAbilityGroup(InstableSprayGallery *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  Player *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:476 64 16 14 player_ptr:478";
  *(_QWORD *)(v2 + 16) = InstableSprayGallery::addTeamAbilityGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[24] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getOwnPlayer((const Scene *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "addTeamAbilityGroup",
      481);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"player not found");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                         &v5->design_config.txt_config_mgr.activity_instable_spray_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( level_config_ptr )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AbilityGroupComp = Player::getAbilityGroupComp(v7);
      InstableSprayGallery::buffIdVecToAbilityGroupVec[abi:cxx11](&group_vec, &level_config_ptr->buff_id_list);
      PlayerAbilityGroupComp::addTeamAbilityGroup(AbilityGroupComp, &group_vec, 0);
      std::vector<std::string>::~vector(&group_vec);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = Player::getAbilityGroupComp(v9);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v10);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_gallery/instable_spray_gallery.cpp",
        "addTeamAbilityGroup",
        488);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v14,
             (const char (*)[35])"level config not found, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v15 == (char *)v2 )
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

// Line 496: range 00000000145C7BD2-00000000145C8092
void __fastcall InstableSprayGallery::notifyNextLevelInfo(
        InstableSprayGallery *const this,
        uint32_t stage_id,
        uint32_t round)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<unsigned int>::size_type v8; // r15
  std::vector<unsigned int>::const_reference v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-118h]
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 17 next_level_id:509 48 4 12 stage_id:495 64 4 9 round:495 80 40 10 notify:517";
  *(_QWORD *)(v3 + 16) = InstableSprayGallery::notifyNextLevelInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(_DWORD *)(v3 + 64) = round;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_instable_spray_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( stage_config_ptr )
  {
    v8 = *(unsigned int *)(v3 + 64);
    if ( v8 < std::vector<unsigned int>::size(&stage_config_ptr->level_id_list) )
    {
      v9 = std::vector<unsigned int>::operator[](&stage_config_ptr->level_id_list, *(unsigned int *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                           &v10->design_config.txt_config_mgr.activity_instable_spray_mgr,
                           *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( level_config_ptr )
      {
        proto::InstableSprayLevelFinishNotify::InstableSprayLevelFinishNotify((proto::InstableSprayLevelFinishNotify *const)(v3 + 80));
        proto::InstableSprayLevelFinishNotify::set_stage_id(
          (proto::InstableSprayLevelFinishNotify *const)(v3 + 80),
          *(_DWORD *)(v3 + 48));
        proto::InstableSprayLevelFinishNotify::set_round(
          (proto::InstableSprayLevelFinishNotify *const)(v3 + 80),
          *(_DWORD *)(v3 + 64));
        proto::InstableSprayLevelFinishNotify::set_level_id(
          (proto::InstableSprayLevelFinishNotify *const)(v3 + 80),
          *(_DWORD *)(v3 + 32));
        proto::InstableSprayLevelFinishNotify::set_is_need_switch_team(
          (proto::InstableSprayLevelFinishNotify *const)(v3 + 80),
          1);
        BaseGallery::notifyToGalleryPlayers<proto::InstableSprayLevelFinishNotify>(
          (BaseGallery *const)this,
          (proto::InstableSprayLevelFinishNotify *)(v3 + 80));
        proto::InstableSprayLevelFinishNotify::~InstableSprayLevelFinishNotify((proto::InstableSprayLevelFinishNotify *const)(v3 + 80));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/instable_spray_gallery.cpp",
          "notifyNextLevelInfo",
          513);
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v20,
                (const char (*)[35])"level config not found, stage_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", round: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 64));
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", level_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/instable_spray_gallery.cpp",
      "notifyNextLevelInfo",
      500);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v20,
           (const char (*)[35])"stage config not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};
