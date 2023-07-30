// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/coin_collect_gallery.cpp

// Line 29: range 00000000179D4A4C-00000000179D4B2B
void __cdecl CoinCollectGallery::toClient(CoinCollectGallery *const this, proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryCoinCollectInfo *coin_collect_info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  coin_collect_info = proto::SceneGalleryInfo::mutable_coin_collect_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_total_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_total_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryCoinCollectInfo::set_coin_total_num(coin_collect_info, this->coin_total_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_collect_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_collect_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryCoinCollectInfo::set_coin_collect_num(coin_collect_info, this->coin_collect_num_);
};

// Line 39: range 00000000179D4B2C-00000000179D4FB0
int32_t __cdecl CoinCollectGallery::updatePlayerScore(
        CoinCollectGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *contex)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  int32_t result; // eax
  const luabind::adl::object *v9; // rsi
  bool v10; // r14
  uint32_t v11; // ecx
  char v12; // dl
  bool v13; // dl
  float v14; // xmm0_4
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 23 lua_coin_collect_num:46 64 4 34 lua_last_collect_coin_cost_time:47";
  *(_QWORD *)(v4 + 16) = CoinCollectGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_ == START )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v23, "coin_collect_num", &__a);
    v9 = param_table;
    v10 = ScriptUtil::getTableValue<unsigned int,char const(&)[28],float &>(
            &ScriptUtil::no_exception_instance,
            param_table,
            (const std::string *)&v23,
            (unsigned int *)(v4 + 48),
            (const char (*)[28])"last_collect_coin_left_time",
            (float *)(v4 + 64),
            (const char (*)[28])contex,
            (float *)param_table) == 0;
    std::string::~string(&v23);
    std::allocator<char>::~allocator(&__a);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v4 + 48);
      v12 = *(_BYTE *)(((unsigned __int64)&this->coin_collect_num_ >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v12 != 0;
      v13 = v12 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v12;
      if ( v13 )
        __asan_report_store4(&this->coin_collect_num_, v9, v13);
      this->coin_collect_num_ = v11;
      v14 = *(float *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_collect_coin_cost_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_collect_coin_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_collect_coin_cost_time_, v9, (_BYTE)this + 48);
      }
      this->last_collect_coin_cost_time_ = v14;
    }
    BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "updatePlayerScore",
      54);
    v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v23,
            (const char (*)[31])"[COINCOLLECT] coin_total_num_:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->coin_total_num_);
    v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v16,
            (const char (*)[22])", coin_collect_num_: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->coin_collect_num_);
    v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v18,
            (const char (*)[31])", last_collect_coin_cost_time_");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v19, &this->last_collect_coin_cost_time_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "updatePlayerScore",
      42);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v23,
           (const char (*)[46])"[COINCOLLECT] gallery stage incorrect, stage:");
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = this->stage_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
  }
  if ( v24 == (char *)v4 )
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

// Line 60: range 00000000179D538A-00000000179D5C0C
void __cdecl CoinCollectGallery::onStart(CoinCollectGallery *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t total_balloons_num; // ecx
  char v12; // dl
  bool v13; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  google::protobuf::uint32 v17; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo> *v19; // rdx
  __int64 v20; // rcx
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v23; // r14
  std::string v24; // [rsp+0h] [rbp-150h]
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+38h] [rbp-118h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+40h] [rbp-110h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v29; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v33; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+A0h] [rbp-B0h] BYREF
  CoinCollectGallery::onStart::<lambda(Player&)> v36; // 0:esi.4,8:rdx.8

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v1 = (unsigned __int64)v35;
  v24._M_string_length = (std::string::size_type)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 1 10 holder:106 48 4 11 level_id:61 64 16 10 log_ptr:96 96 16 14 player_ptr:103";
  *(_QWORD *)(v1 + 16) = CoinCollectGallery::onStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 48) = ActivityCoinCollectExcelConfigMgr::getLevelIdByGalleryId(
                           p_activity_coin_collect_config_mgr,
                           this->gallery_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
  if ( *(_DWORD *)(v1 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    v8 = *(unsigned int *)(v1 + 48);
    level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                         &v7->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                         v8);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->total_balloons_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->total_balloons_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      total_balloons_num = level_config_ptr->total_balloons_num;
      v12 = *(_BYTE *)(((unsigned __int64)&this->coin_total_num_ >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v12 != 0;
      v13 = v12 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v12;
      if ( v13 )
        __asan_report_store4(&this->coin_total_num_, v8, v13);
      this->coin_total_num_ = total_balloons_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24._anon_0._M_allocated_capacity = (std::string::size_type)this->scene_;
      v36.__this = this;
      v36.__level_id = *(_DWORD *)(v1 + 48);
      std::function<ForeachPolicy ()(Player &)>::function<CoinCollectGallery::onStart(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v34,
        v36);
      Scene::foreachPlayer(
        (Scene *const)v24._anon_0._M_allocated_capacity,
        (std::function<ForeachPolicy(Player&)> *)&v34);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v34);
      CoinCollectGallery::addCoinCollectAbilityGroupToAllPlayer(this);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCoinCollectGalleryStart>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log::PlayerLogBodyCoinCollectGalleryStart::set_level_id(v14, *(_DWORD *)(v1 + 48));
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BaseGallery::getTransaction[abi:cxx11]((std::string *)&v34, (const BaseGallery *const)this);
      proto_log::PlayerLogBodyCoinCollectGalleryStart::set_transaction_no(v15, (std::string *)&v34);
      std::string::~string(&v34);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( std::set<unsigned int>::size(&this->player_uid_set_) <= 1 )
        v17 = 1;
      else
        v17 = 2;
      proto_log::PlayerLogBodyCoinCollectGalleryStart::set_team_mode(v16, v17);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v19 = proto_log::PlayerLogBodyCoinCollectGalleryStart::mutable_player_info_list(v18);
      CoinCollectGallery::fillPlayerLogInfoList(this, v19);
      __for_range = &this->player_info_map_;
      __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v29);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v29);
        if ( *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = *(_QWORD *)(*(&v24._anon_0._M_allocated_capacity + 1) + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v1 + 96), v20, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
        {
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          BasicComp = Player::getBasicComp(v21);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v34, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0xEABu, v24);
          std::string::~string(&v34);
          v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v33, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCoinCollectGalleryStart,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGalleryStart> *)(v1 + 64));
          Player::printStatLog(v23, &p_body_ptr, &v33, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v33);
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
      }
      std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGalleryStart> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "onStart",
        70);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v34,
             (const char (*)[20])"[GALLERY] level_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "onStart",
      64);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v34,
           (const char (*)[22])"[GALLERY] gallery_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])off_26272B40);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  if ( v24._M_string_length == v1 )
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

// Line 76: range 00000000179D4FB2-00000000179D5388
ForeachPolicy __cdecl CoinCollectGallery::onStart(void)::{lambda(Player &)#1}::operator()(
        const CoinCollectGallery::onStart::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  uint32_t ChooseSkillNoByLevelId; // r14d
  char *v11; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  ForeachPolicy result; // eax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 player_uid:78 64 16 15 activity_ptr:84";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::onStart(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &__closure->__this->player_info_map_,
          (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "operator()",
      81);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v16, (const char (*)[9])"player: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])off_26271300);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 64));
    if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "operator()",
        87);
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v16, (const char (*)[9])"player: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" activity is closed");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v9 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ChooseSkillNoByLevelId = CoinCollectActivity::getChooseSkillNoByLevelId(v9, __closure->__level_id);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (char *)(v2 + 48);
      v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &__closure->__this->uid_2_choose_skill_no_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v13 = v12;
      v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(v12, v11, (_BYTE)v12);
      }
      *v13 = ChooseSkillNoByLevelId;
    }
    std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
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
  return result;
};

// Line 113: range 00000000179D5C0E-00000000179D6902
// local variable allocation has failed, the output may be wrong!
void __fastcall CoinCollectGallery::onStop(CoinCollectGallery *const this, proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  const unsigned int *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rcx
  Player *v14; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  google::protobuf::uint32 v21; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo> *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  __int64 v26; // rcx
  Player *v27; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v29; // r14
  std::string v30; // [rsp+0h] [rbp-1F0h] OVERLAPPED BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+20h] [rbp-1D0h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-1C8h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-1C0h]
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v35; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid_0; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+50h] [rbp-1A0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v38; // [rsp+58h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+60h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *online_player_info; // [rsp+68h] [rbp-188h]
  std::shared_ptr<google::protobuf::Message> v41; // [rsp+70h] [rbp-180h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-170h] BYREF
  char v43[336]; // [rsp+A0h] [rbp-150h] BYREF

  v30._M_string_length = (std::string::size_type)this;
  HIDWORD(v30._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 10 holder:170 48 4 23 client_cost_time_ms:118 64 4 12 duration:127 80 4 13 play_time:128"
                        " 96 4 12 level_id:135 112 4 10 reason:112 128 16 13 event_ptr:141 160 16 36 coin_collect_multist"
                        "age_play_ptr:151 192 16 11 log_ptr:157 224 16 14 player_ptr:167 256 16 14 player_ptr:144";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::onStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -202178560;
  *(_DWORD *)(v2 + 112) = HIDWORD(v30._M_dataplus._M_p);
  CoinCollectGallery::delCoinCollectAbilityGroupToAllPlayer((CoinCollectGallery *const)v30._M_string_length);
  if ( *(_BYTE *)(((v30._M_string_length + 304) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v30._M_string_length + 304) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = (int)(float)(1000.0 * *(float *)(v30._M_string_length + 304));
  gallery_config_ptr = BaseGallery::getGalleryExcelConfig((const BaseGallery *const)v30._M_string_length);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = 1000 * gallery_config_ptr->duration;
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 64);
    if ( *(_DWORD *)(v2 + 112) == 3 )
    {
      v6 = std::min<unsigned int>((const unsigned int *)(v2 + 64), (const unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 80) = *v6;
    }
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "onStop",
      133);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v42,
           (const char (*)[30])"[GALLERY] onStop, play_time: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])", stop reason: ");
    common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
      v9,
      (const proto::GalleryStopReason *)(v2 + 112));
    common::milog::MiLogStream::~MiLogStream(&v42);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
    if ( *(_BYTE *)(((v30._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v30._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 96) = ActivityCoinCollectExcelConfigMgr::getLevelIdByGalleryId(
                             p_activity_coin_collect_config_mgr,
                             *(_DWORD *)(v30._M_string_length + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
    if ( *(_DWORD *)(v2 + 96) )
    {
      common::tools::perf::make_shared<CoinCollectGalleryFinishEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &,std::unordered_map<unsigned int,unsigned int> &>(
        (unsigned int *)(v2 + 128),
        (unsigned int *)(v2 + 96),
        (unsigned int *)(v30._M_string_length + 300),
        (unsigned int *)(v2 + 80),
        (std::unordered_map<unsigned int,unsigned int> *)(v30._M_string_length + 308),
        (unsigned int *)(v30._M_string_length + 312),
        (unsigned int *)v30._M_dataplus._M_p,
        (unsigned int *)v30._M_string_length,
        (unsigned int *)v30._anon_0._M_allocated_capacity,
        *((std::unordered_map<unsigned int,unsigned int> **)&v30._anon_0._M_allocated_capacity + 1));
      __for_range = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v30._M_string_length + 144);
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v30._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v30._M_string_length + 144));
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v30._M_string_length + 144))._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v30._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v38 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v30._anon_0._M_allocated_capacity
              + 1);
        uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v38);
        online_player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v38);
        if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = *(_QWORD *)(v30._M_string_length + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 256), v13, *uid);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 256), 0LL) )
        {
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
          EventComp = Player::getEventComp(v14);
          std::shared_ptr<BaseEvent>::shared_ptr<CoinCollectGalleryFinishEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v41,
            (const std::shared_ptr<CoinCollectGalleryFinishEvent> *)(v2 + 128));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v41);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v41);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 256));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v30._anon_0._M_allocated_capacity
        + 1);
      }
      if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getMultistagePlayComp(*(Scene *const *)(v30._M_string_length + 24));
      SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)(v2 + 160));
      if ( std::operator!=<CoinCollectMultistagePlay>(
             (const std::shared_ptr<CoinCollectMultistagePlay> *)(v2 + 160),
             0LL) )
      {
        v16 = std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        if ( *(_BYTE *)(((v30._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v30._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        CoinCollectMultistagePlay::onCoinCollectGalleryStop(v16, *(_DWORD *)(v30._M_string_length + 32));
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCoinCollectGallerySettle>();
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_level_id(v17, *(_DWORD *)(v2 + 96));
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      BaseGallery::getTransaction[abi:cxx11]((std::string *)&v42, (const BaseGallery *const)v30._M_string_length);
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_transaction_no(v18, (std::string *)&v42);
      std::string::~string(&v42);
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_stop_reason(v19, *(_DWORD *)(v2 + 112));
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v30._M_string_length + 240)) <= 1 )
        v21 = 1;
      else
        v21 = 2;
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_team_mode(v20, v21);
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      v23 = proto_log::PlayerLogBodyCoinCollectGallerySettle::mutable_player_info_list(v22);
      CoinCollectGallery::fillPlayerLogInfoList((const CoinCollectGallery *const)v30._M_string_length, v23);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      if ( *(_BYTE *)(((v30._M_string_length + 300) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v30._M_string_length) + 44) & 7) + 3) >= *(_BYTE *)(((v30._M_string_length + 300) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_coin_collect_num(
        v24,
        *(_DWORD *)(v30._M_string_length + 300));
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCoinCollectGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      proto_log::PlayerLogBodyCoinCollectGallerySettle::set_coin_collect_time(v25, *(_DWORD *)(v2 + 80));
      __for_range_0 = (std::map<unsigned int,proto::OnlinePlayerInfo> *)(v30._M_string_length + 144);
      *((std::map<unsigned int,proto::OnlinePlayerInfo>::iterator *)&v30._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::OnlinePlayerInfo>::begin((std::map<unsigned int,proto::OnlinePlayerInfo> *const)(v30._M_string_length + 144));
      __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&v30._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v30._anon_0._M_allocated_capacity
              + 1);
        uid_0 = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v35);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v35);
        if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v26 = *(_QWORD *)(v30._M_string_length + 24);
        if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 224), v26, *uid_0);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 224), 0LL) )
        {
          v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
          BasicComp = Player::getBasicComp(v27);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v42, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEACu, v30);
          std::string::~string(&v42);
          v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v41, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCoinCollectGallerySettle,void>(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 256),
            (const std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGallerySettle> *)(v2 + 192));
          Player::printStatLog(v29, (MessagePtr *)(v2 + 256), &v41, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 256));
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v41);
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 224));
        std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&v30._anon_0._M_allocated_capacity
        + 1);
      }
      std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGallerySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCoinCollectGallerySettle> *const)(v2 + 192));
      std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v2 + 160));
      std::shared_ptr<CoinCollectGalleryFinishEvent>::~shared_ptr((std::shared_ptr<CoinCollectGalleryFinishEvent> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "onStop",
        138);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v42,
              (const char (*)[22])"[GALLERY] gallery_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)(v30._M_string_length + 32));
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v12, (const char (*)[29])off_26272B40);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "onStop",
      123);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v42,
           (const char (*)[48])"[GALLERY] gallery config not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)(v30._M_string_length + 32));
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  if ( v43 == (char *)v2 )
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

// Line 177: range 00000000179D6904-00000000179D6DEA
void __cdecl CoinCollectGallery::onPlayerEnter(CoinCollectGallery *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerMpComp *MpComp; // rdx
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t ChooseSkillNoByLevelId; // r14d
  char *v13; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  char v16; // cl
  unsigned int level_id; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,proto::OnlinePlayerInfo>::mapped_type *online_player_info; // [rsp+18h] [rbp-C8h]
  std::enable_shared_from_this<Player> v19; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 player_uid:178 64 16 16 activity_ptr:203";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::onPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
          &this->player_info_map_,
          (const unsigned int *)(v2 + 48)) )
  {
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &this->player_uid_set_,
            (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "onPlayerEnter",
        187);
      v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v20, (const char (*)[9])"player: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])off_26271300);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      online_player_info = std::map<unsigned int,proto::OnlinePlayerInfo>::operator[](
                             &this->player_info_map_,
                             (const std::map<unsigned int,proto::OnlinePlayerInfo>::key_type *)(v2 + 48));
      MpComp = Player::getMpComp(player);
      PlayerMpComp::fillOnlinePlayerInfo(MpComp, online_player_info);
      BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      level_id = ActivityCoinCollectExcelConfigMgr::getLevelIdByGalleryId(
                   p_activity_coin_collect_config_mgr,
                   this->gallery_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
      if ( level_id )
      {
        Player::getActivityComp(player);
        PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 64));
        if ( !std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 64), 0LL) )
        {
          v11 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          ChooseSkillNoByLevelId = CoinCollectActivity::getChooseSkillNoByLevelId(v11, level_id);
          v13 = (char *)(v2 + 48);
          v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  &this->uid_2_choose_skill_no_map_,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          v15 = v14;
          v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
          {
            LOBYTE(v13) = v16 != 0;
            __asan_report_store4(v14, v13, (_BYTE)v14);
          }
          *v15 = ChooseSkillNoByLevelId;
          std::enable_shared_from_this<Player>::shared_from_this(&v19);
          CoinCollectGallery::addCoinCollectAbilityGroupToPlayer(this, (PlayerPtr *)&v19);
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v19);
        }
        std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/coin_collect_gallery.cpp",
          "onPlayerEnter",
          200);
        v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v20, (const char (*)[10])"gallery: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->gallery_id_);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])off_262413A0);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 216: range 00000000179D6DEC-00000000179D6EB1
void __cdecl CoinCollectGallery::onPlayerLeaveScene(CoinCollectGallery *const this, Player *player)
{
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::enable_shared_from_this<Player> v3; // [rsp+20h] [rbp-20h] BYREF

  BaseGallery::onPlayerLeaveScene((BaseGallery *const)this, player);
  if ( BaseGallery::isStart((BaseGallery *const)this) )
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,proto::OnlinePlayerInfo>,unsigned int>(
           &this->player_info_map_,
           &value) )
    {
      std::enable_shared_from_this<Player>::shared_from_this(&v3);
      CoinCollectGallery::delCoinCollectAbilityGroupToPlayer(this, (PlayerPtr *)&v3);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v3);
    }
  }
};

// Line 232: range 00000000179D6EB2-00000000179D7279
void __cdecl CoinCollectGallery::addCoinCollectAbilityGroupToAllPlayer(CoinCollectGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Scene *scene; // rcx
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  unsigned int GalleryId; // [rsp+1Ch] [rbp-D4h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v15; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Player> p_owner_player_ptr; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-90h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 owner_player_ptr:235";
  *(_QWORD *)(v1 + 16) = CoinCollectGallery::addCoinCollectAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "addCoinCollectAbilityGroupToAllPlayer",
        238);
      v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"scene_id ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
      GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &GalleryId);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v8,
             (const char (*)[22])" doesnot have player ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, uid);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr(&p_owner_player_ptr, (const std::shared_ptr<Player> *)(v1 + 32));
      CoinCollectGallery::addCoinCollectAbilityGroupToPlayer(this, &p_owner_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_owner_player_ptr);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 246: range 00000000179D727A-00000000179D7641
void __cdecl CoinCollectGallery::delCoinCollectAbilityGroupToAllPlayer(CoinCollectGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Scene *scene; // rcx
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  unsigned int GalleryId; // [rsp+1Ch] [rbp-D4h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v15; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Player> p_owner_player_ptr; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-90h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 owner_player_ptr:249";
  *(_QWORD *)(v1 + 16) = CoinCollectGallery::delCoinCollectAbilityGroupToAllPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v1 + 32), (__int64)scene, *uid);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "delCoinCollectAbilityGroupToAllPlayer",
        252);
      v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"scene_id ");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
      GalleryId = BaseGallery::getGalleryId((const BaseGallery *const)this);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &GalleryId);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v8,
             (const char (*)[22])" doesnot have player ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, uid);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr(&p_owner_player_ptr, (const std::shared_ptr<Player> *)(v1 + 32));
      CoinCollectGallery::delCoinCollectAbilityGroupToPlayer(this, &p_owner_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_owner_player_ptr);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 260: range 00000000179D7642-00000000179D7CCB
void __cdecl CoinCollectGallery::addCoinCollectAbilityGroupToPlayer(
        CoinCollectGallery *const this,
        PlayerPtr *p_owner_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v19; // rax
  common::milog::MiLogStream *i; // rbx
  Player *v21; // rax
  PlayerAbilityGroupComp *v22; // rax
  PlayerAbilityGroupComp *v23; // [rsp+8h] [rbp-118h]
  std::allocator<std::string > __a; // [rsp+2Bh] [rbp-F5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  const data::CoinCollectSkillExcelConfig *skill_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 choose_skill_no:272 64 8 24 choose_skill_no_iter:266";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::addCoinCollectAbilityGroupToPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( std::operator==<Player>(p_owner_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "addCoinCollectAbilityGroupToPlayer",
      263);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
    *(_DWORD *)(v2 + 48) = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" player is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
    *(_DWORD *)(v2 + 48) = Player::getUid(v9);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->uid_2_choose_skill_no_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_2_choose_skill_no_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "addCoinCollectAbilityGroupToPlayer",
        269);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])" uid ");
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
      *(_DWORD *)(v2 + 48) = Player::getUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v12, (const char (*)[22])" cannot find skill no");
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = v13->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      skill_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectSkillExcelConfig(
                           &v14->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( skill_config_ptr )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        AbilityGroupComp = Player::getAbilityGroupComp(v17);
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerAbilityGroupComp::markAbilityGroupSource(
          AbilityGroupComp,
          ABILITY_GROUP_SOURCE_GALLERY,
          this->gallery_id_);
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        v23 = Player::getAbilityGroupComp(v19);
        std::string::basic_string(&v30, &skill_config_ptr->ability_name);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v30), &__a);
        PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v23, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v31; i != &v30; std::string::~string(i) )
          --i;
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        v22 = Player::getAbilityGroupComp(v21);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v22);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/coin_collect_gallery.cpp",
          "addCoinCollectAbilityGroupToPlayer",
          276);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v30,
                (const char (*)[25])"player choose skill no: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])off_262413A0);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
  }
  if ( v31 == (char *)v2 )
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

// Line 286: range 00000000179D7CCC-00000000179D8350
void __cdecl CoinCollectGallery::delCoinCollectAbilityGroupToPlayer(
        CoinCollectGallery *const this,
        PlayerPtr *p_owner_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  Player *v19; // rax
  common::milog::MiLogStream *i; // rbx
  Player *v21; // rax
  PlayerAbilityGroupComp *v22; // rax
  PlayerAbilityGroupComp *v23; // [rsp+8h] [rbp-118h]
  std::allocator<std::string > __a; // [rsp+2Bh] [rbp-F5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  const data::CoinCollectSkillExcelConfig *skill_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 choose_skill_no:299 64 8 24 choose_skill_no_iter:293";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::delCoinCollectAbilityGroupToPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( std::operator==<Player>(p_owner_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/coin_collect_gallery.cpp",
      "delCoinCollectAbilityGroupToPlayer",
      289);
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"scene_id ");
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneId(this->scene_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" gallery ");
    *(_DWORD *)(v2 + 48) = BaseGallery::getGalleryId((const BaseGallery *const)this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" player is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
    *(_DWORD *)(v2 + 48) = Player::getUid(v9);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->uid_2_choose_skill_no_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_2_choose_skill_no_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/coin_collect_gallery.cpp",
        "delCoinCollectAbilityGroupToPlayer",
        296);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])" uid ");
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
      *(_DWORD *)(v2 + 48) = Player::getUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v12, (const char (*)[22])" cannot find skill no");
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = v13->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      skill_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectSkillExcelConfig(
                           &v14->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( skill_config_ptr )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        AbilityGroupComp = Player::getAbilityGroupComp(v17);
        if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerAbilityGroupComp::markAbilityGroupSource(
          AbilityGroupComp,
          ABILITY_GROUP_SOURCE_GALLERY,
          this->gallery_id_);
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        v23 = Player::getAbilityGroupComp(v19);
        std::string::basic_string(&v30, &skill_config_ptr->ability_name);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v30), &__a);
        PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v23, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v31; i != &v30; std::string::~string(i) )
          --i;
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_owner_player_ptr);
        v22 = Player::getAbilityGroupComp(v21);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v22);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/coin_collect_gallery.cpp",
          "delCoinCollectAbilityGroupToPlayer",
          303);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v30,
                (const char (*)[25])"player choose skill no: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])off_262413A0);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
  }
  if ( v31 == (char *)v2 )
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

// Line 313: range 00000000179D83AE-00000000179D86D8
void __cdecl CoinCollectGallery::fillPlayerLogInfoList(
        const CoinCollectGallery *const this,
        google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo> *player_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Scene *scene; // rcx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // eax
  Player *v8; // rax
  PlayerAvatarComp *AvatarComp; // r14
  google::protobuf::uint32 v10; // eax
  std::map<unsigned int,proto::OnlinePlayerInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+28h] [rbp-B8h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v14; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+40h] [rbp-A0h]
  proto_log::CoinCollectPlayerLogTeamInfo *new_player_info; // [rsp+48h] [rbp-98h]
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+50h] [rbp-90h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:316";
  *(_QWORD *)(v2 + 16) = CoinCollectGallery::fillPlayerLogInfoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->player_info_map_;
  __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&this->player_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(&this->player_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v14);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 32), (__int64)scene, *uid);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      new_player_info = google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo>::Add(player_info_list);
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v7 = Player::getUid(v6);
      proto_log::CoinCollectPlayerLogTeamInfo::set_player_uid(new_player_info, v7);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      AvatarComp = Player::getAvatarComp(v8);
      std::function<ForeachPolicy ()(Avatar &)>::function<CoinCollectGallery::fillPlayerLogInfoList(google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo> &)::{lambda(Avatar &)#1},void,void>(
        &p_func,
        (CoinCollectGallery::fillPlayerLogInfoList::<lambda(Avatar&)>)new_player_info);
      PlayerAvatarComp::foreachAvatarInSceneTeam(AvatarComp, &p_func);
      std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
      v10 = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
              &this->uid_2_choose_skill_no_map_,
              uid,
              0);
      proto_log::CoinCollectPlayerLogTeamInfo::set_skill_no(new_player_info, v10);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 321: range 00000000179D8352-00000000179D83AC
ForeachPolicy __cdecl CoinCollectGallery::fillPlayerLogInfoList(google::protobuf::RepeatedPtrField<proto_log::CoinCollectPlayerLogTeamInfo> &)const::{lambda(Avatar &)#1}::operator()(
        const CoinCollectGallery::fillPlayerLogInfoList::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  proto_log::CoinCollectPlayerLogTeamInfo *new_player_info; // rbx
  uint32_t AvatarId; // eax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  new_player_info = __closure->__new_player_info;
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::CoinCollectPlayerLogTeamInfo::add_avatar_id_list(new_player_info, AvatarId);
  return 0;
};
