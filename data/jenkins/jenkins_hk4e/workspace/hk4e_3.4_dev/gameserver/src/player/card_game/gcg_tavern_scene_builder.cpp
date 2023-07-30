// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_tavern_scene_builder.cpp

// Line 30: range 00000000175AE664-00000000175AE852
int32_t __cdecl GCGTavernSceneBuilder::fromBin(
        GCGTavernSceneBuilder *const this,
        const proto::GCGTavernSceneBuilderBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t refresh_game_time; // ecx
  char v5; // dl
  __int64 v6; // rdx
  unsigned int *v7; // rcx
  unsigned int *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rbx
  const proto::GCGTavernSceneBuilderBin *bina; // [rsp+0h] [rbp-70h]
  unsigned int v13; // [rsp+18h] [rbp-58h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGConstNpcBin>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGConstNpcBin>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGConstNpcBin> *__for_range; // [rsp+30h] [rbp-40h]
  const proto::GCGConstNpcBin *const_npc_bin; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-30h] BYREF

  bina = bin;
  v2 = proto::GCGTavernSceneBuilderBin::distribution_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(&this->distribution_id_, bin, v2);
  }
  this->distribution_id_ = v2;
  refresh_game_time = proto::GCGTavernSceneBuilderBin::last_refresh_game_time(bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->last_refresh_game_time_, bin, v6);
  this->last_refresh_game_time_ = refresh_game_time;
  __for_range = proto::GCGTavernSceneBuilderBin::const_npc_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGConstNpcBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGConstNpcBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGConstNpcBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    const_npc_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGConstNpcBin const>::operator*(&__for_begin);
    val = proto::GCGConstNpcBin::scene_point_id(const_npc_bin);
    v13 = proto::GCGConstNpcBin::npc_id(const_npc_bin);
    v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
           &this->const_npc_point_map_,
           &v13,
           &val,
           v7,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "fromBin",
        37);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v19,
              (const char (*)[50])"const npc data fromBin failed, duplicated npc_id:");
      val = proto::GCGConstNpcBin::npc_id(const_npc_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGConstNpcBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 44: range 00000000175AE854-00000000175AEA30
int32_t __cdecl GCGTavernSceneBuilder::toBin(
        const GCGTavernSceneBuilder *const this,
        proto::GCGTavernSceneBuilderBin *bin)
{
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *npc_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *scene_point_id; // [rsp+40h] [rbp-10h]
  proto::GCGConstNpcBin *const_npc_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  proto::GCGTavernSceneBuilderBin::set_distribution_id(bin, this->distribution_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_game_time_);
  }
  proto::GCGTavernSceneBuilderBin::set_last_refresh_game_time(bin, this->last_refresh_game_time_);
  __for_range = &this->const_npc_point_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->const_npc_point_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->const_npc_point_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    npc_id = std::get<0ul,unsigned int const,unsigned int>(v6);
    scene_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    const_npc_bin = proto::GCGTavernSceneBuilderBin::add_const_npc_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(npc_id);
    }
    proto::GCGConstNpcBin::set_npc_id(const_npc_bin, *npc_id);
    if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(scene_point_id);
    }
    proto::GCGConstNpcBin::set_scene_point_id(const_npc_bin, *scene_point_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 57: range 00000000175AEA32-00000000175AEA4C
void __cdecl GCGTavernSceneBuilder::onLogin(GCGTavernSceneBuilder *const this)
{
  GCGTavernSceneBuilder::updateConstNpcQuestSet(this);
};

// Line 62: range 00000000175AEA4E-00000000175AEBB0
void __cdecl GCGTavernSceneBuilder::notifyNpcInfo(GCGTavernSceneBuilder *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 80 9 notify:63";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::notifyNpcInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -202116109;
  proto::GCGTavernNpcInfoNotify::GCGTavernNpcInfoNotify((proto::GCGTavernNpcInfoNotify *const)(v2 + 48));
  GCGTavernSceneBuilder::fillNpcInfo(this, (proto::GCGTavernNpcInfoNotify *)(v2 + 48));
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::GCGTavernNpcInfoNotify::~GCGTavernNpcInfoNotify((proto::GCGTavernNpcInfoNotify *const)(v2 + 48));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 69: range 00000000175AEBB2-00000000175AEF00
void __cdecl GCGTavernSceneBuilder::broadNpcInfo(GCGTavernSceneBuilder *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  uint32_t SceneComp; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  Scene *v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-124h] BYREF
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-110h] BYREF
  char v11[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 12 scene_ptr:70 80 80 9 notify:76";
  *(_QWORD *)(v1 + 16) = GCGTavernSceneBuilder::broadNpcInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  ConstValueExcelConfigMgr::getGCGTavernSceneId(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v1 + 48), SceneComp);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "broadNpcInfo",
      73);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v10,
           (const char (*)[30])"find tavern scene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    proto::GCGTavernNpcInfoNotify::GCGTavernNpcInfoNotify((proto::GCGTavernNpcInfoNotify *const)(v1 + 80));
    GCGTavernSceneBuilder::fillNpcInfo(this, (proto::GCGTavernNpcInfoNotify *)(v1 + 80));
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    Scene::notifyAllPlayer<proto::GCGTavernNpcInfoNotify>(v7, (proto::GCGTavernNpcInfoNotify *)(v1 + 80), 0);
    proto::GCGTavernNpcInfoNotify::~GCGTavernNpcInfoNotify((proto::GCGTavernNpcInfoNotify *const)(v1 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 00000000175AEF02-00000000175AF410
void __cdecl GCGTavernSceneBuilder::fillNpcInfo(
        const GCGTavernSceneBuilder *const this,
        proto::GCGTavernNpcInfoNotify *notify)
{
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v3; // rbx
  const GCGPlayingExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  GCGWeekChallenge *WeekChallenge; // rdx
  GCGTavernChallenge *TavernChallenge; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-80h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  PlayerGCGComp *gcg_comp; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *npc_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *scene_point_id; // [rsp+58h] [rbp-58h]
  const data::GCGSceneConstNpcExcelConfig *const_npc_config_ptr; // [rsp+60h] [rbp-50h]
  proto::GCGTavernNpcInfo *npc_info; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEDu) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "fillNpcInfo",
      85);
    v3 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v22,
           (const char (*)[73])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER not open, not need fillNpcInfo, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    __for_range = &this->const_npc_point_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->const_npc_point_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->const_npc_point_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      npc_id = std::get<0ul,unsigned int const,unsigned int>(v16);
      scene_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
      v4 = gcg_playing_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(npc_id);
      }
      const_npc_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneConstNpcExcelConfig(v4, *npc_id);
      if ( const_npc_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(npc_id);
        }
        if ( GCGTavernSceneBuilder::isConstNpcCondQuestAllValid(this, *npc_id) )
        {
          npc_info = proto::GCGTavernNpcInfoNotify::add_const_npc_list(notify);
          if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(npc_id);
          }
          proto::GCGTavernNpcInfo::set_id(npc_info, *npc_id);
          if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(scene_point_id);
          }
          proto::GCGTavernNpcInfo::set_scene_point_id(npc_info, *scene_point_id);
          if ( *(_BYTE *)(((unsigned __int64)&const_npc_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&const_npc_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&const_npc_config_ptr->level_id);
          }
          proto::GCGTavernNpcInfo::set_level_id(npc_info, const_npc_config_ptr->level_id);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "fillNpcInfo",
          97);
        v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v22,
               (const char (*)[47])"findGCGSceneConstNpcExcelConfig fails, npc_id:");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, npc_id);
        v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    WeekChallenge = PlayerGCGComp::getWeekChallenge(gcg_comp);
    GCGWeekChallenge::fillNpcInfo(WeekChallenge, notify);
    TavernChallenge = PlayerGCGComp::getTavernChallenge(gcg_comp);
    GCGTavernChallenge::fillNpcInfo(TavernChallenge, notify);
  }
};

// Line 117: range 00000000175AF412-00000000175AF922
void __cdecl GCGTavernSceneBuilder::onEnterScene(
        GCGTavernSceneBuilder *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  Player *v10; // rax
  PlayerGCGComp *GCGComp; // rax
  char v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerDungeonComp *DungeonComp; // rax
  uint32_t LastDungeonId; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char v17; // r15
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  unsigned int Uid; // [rsp+20h] [rbp-B0h] BYREF
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  GCGTavernSceneBuilder *owner_scene_builder; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-90h] BYREF
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 20 owner_player_ptr:129";
  *(_QWORD *)(v3 + 16) = GCGTavernSceneBuilder::onEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Scene>(0LL, p_scene_ptr) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    SceneId = Scene::getSceneId(v6);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    LOBYTE(SceneId) = SceneId != ConstValueExcelConfigMgr::getGCGTavernSceneId(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( !(_BYTE)SceneId )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
      Scene::getOwnPlayer((const Scene *const)(v3 + 32));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "onEnterScene",
          132);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v26,
               (const char (*)[38])"scene_ptr->getOwnerPlayer fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        GCGComp = Player::getGCGComp(v10);
        owner_scene_builder = PlayerGCGComp::getTavernSceneBuilder(GCGComp);
        v12 = 0;
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
        if ( Scene::getPlayerCount(v13) > 1 )
          goto LABEL_16;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        DungeonComp = Player::getDungeonComp(this->player_);
        LastDungeonId = PlayerDungeonComp::getLastDungeonId(DungeonComp);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v12 = 1;
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        if ( LastDungeonId == ConstValueExcelConfigMgr::getGCGDungeonId(&v16->design_config.txt_config_mgr.const_value_config_mgr)
          || !GCGTavernSceneBuilder::checkCanRefreshScene(owner_scene_builder) )
        {
LABEL_16:
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
        if ( v12 )
          std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( v17 )
        {
          GCGTavernSceneBuilder::refreshNpcInfo(owner_scene_builder);
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "onEnterScene",
            143);
          v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v26,
                  (const char (*)[27])"refreshNpcInfo, owner_uid:");
          v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          Uid = Player::getUid(v19);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Uid);
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGTavernSceneBuilder::notifyNpcInfo(owner_scene_builder, this->player_);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 00000000175AF924-00000000175AFB12
void __cdecl GCGTavernSceneBuilder::onQuestStateChangeEvent(
        GCGTavernSceneBuilder *const this,
        const QuestStateChangeEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->quest_state);
  }
  if ( event->quest_state == 2 )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&event->old_quest_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->old_quest_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->old_quest_state);
  }
  if ( event->old_quest_state == 2 )
  {
LABEL_13:
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->const_npc_quest_set_,
           &event->quest_id) )
    {
      GCGTavernSceneBuilder::broadNpcInfo(this);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "onQuestStateChangeEvent",
        160);
      v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v10,
             (const char (*)[35])"onQuestStateChangeEvent, quest_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->quest_id);
      v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" quest_state:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->quest_state);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])" old_quest_state:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->old_quest_state);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
  }
};

// Line 166: range 00000000175AFB14-00000000175AFFFB
void __cdecl GCGTavernSceneBuilder::onOpenStateChange(
        GCGTavernSceneBuilder *const this,
        const OpenStateChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  uint32_t SceneComp; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:170";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::onOpenStateChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3309 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "onOpenStateChange",
        169);
      v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v12,
             (const char (*)[50])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER is open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v11);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
      ConstValueExcelConfigMgr::getGCGTavernSceneId(&v7->design_config.txt_config_mgr.const_value_config_mgr);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 32), SceneComp);
      std::shared_ptr<Config>::~shared_ptr(&v11);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "onOpenStateChange",
          173);
        v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v12,
               (const char (*)[30])"find tavern scene fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
      }
      else
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( !Scene::getPlayerCount(v9) )
        {
LABEL_22:
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
          goto LABEL_23;
        }
        GCGTavernSceneBuilder::refreshNpcInfo(this);
        GCGTavernSceneBuilder::broadNpcInfo(this);
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "onOpenStateChange",
          181);
        v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
               &v12,
               (const char (*)[68])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER open, need refreshNpcInfo, uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 187: range 00000000175AFFFC-00000000175B08E4
__int64 __fastcall GCGTavernSceneBuilder::startConstLevel(
        GCGTavernSceneBuilder *const this,
        uint32_t npc_id,
        uint32_t level_id,
        char is_restart)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GCGLevelChallenge *LevelChallenge; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-158h]
  const data::GCGSceneConstNpcExcelConfig *const_npc_config_ptr; // [rsp+30h] [rbp-150h]
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v36; // [rsp+70h] [rbp-110h] BYREF
  char v37[240]; // [rsp+90h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 11 retcode:222 64 4 10 npc_id:186 80 4 12 level_id:186 96 12 10 option:218 128 24 13 param_vec:228";
  *(_QWORD *)(v4 + 16) = GCGTavernSceneBuilder::startConstLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = npc_id;
  *(_DWORD *)(v4 + 80) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEDu) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "startConstLevel",
      190);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v36,
           (const char (*)[51])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = 141;
    goto LABEL_33;
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
          &this->const_npc_point_map_,
          (const unsigned int *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "startConstLevel",
      195);
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v36,
            (const char (*)[22])"invalid const npc_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = -1;
    goto LABEL_33;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  const_npc_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneConstNpcExcelConfig(
                           gcg_playing_config_mgr,
                           *(_DWORD *)(v4 + 64));
  if ( !const_npc_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "startConstLevel",
      202);
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v36,
            (const char (*)[48])"findGCGSceneConstNpcExcelConfig fails, npc_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_17:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = -1;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&const_npc_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&const_npc_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&const_npc_config_ptr->level_id);
  }
  if ( const_npc_config_ptr->level_id != *(_DWORD *)(v4 + 80) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "startConstLevel",
      207);
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v36, (const char (*)[14])"const npc_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])" config level_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &const_npc_config_ptr->level_id);
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" req level_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  gcg_comp = Player::getGCGComp(this->player_);
  LevelChallenge = PlayerGCGComp::getLevelChallenge(gcg_comp);
  if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(LevelChallenge, *(_DWORD *)(v4 + 80)) != 1 )
  {
    v9 = 12131;
  }
  else
  {
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 80);
    *(_BYTE *)(v4 + 104) = is_restart;
    *(_BYTE *)(v4 + 103) = 1;
    *(_DWORD *)(v4 + 48) = PlayerGCGComp::checkCanEnterGame(gcg_comp, (const GCGEnterCheckOption *)(v4 + 96));
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "startConstLevel",
        225);
      v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v35,
              (const char (*)[26])"checkCanEnter fail. ret: ");
      v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v4 + 48));
      GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v36, (GCGEnterCheckOption *const)(v4 + 96));
      v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)&v36);
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      std::string::~string(&v36);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v9 = *(_DWORD *)(v4 + 48);
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v4 + 128),
        (const std::vector<unsigned int>::value_type *)(v4 + 64));
      PlayerGCGComp::startSingleGame(
        gcg_comp,
        *(_DWORD *)(v4 + 80),
        GCG_GAME_CONST_CHALLENGE,
        (const std::vector<unsigned int> *)(v4 + 128));
      v9 = 0;
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
    }
  }
LABEL_33:
  result = v9;
  if ( v37 == (char *)v4 )
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

// Line 235: range 00000000175B08E6-00000000175B0EF7
bool __cdecl GCGTavernSceneBuilder::checkCanRefreshScene(const GCGTavernSceneBuilder *const this)
{
  __m128i v1; // xmm0
  common::milog::MiLogStream *v2; // rbx
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // rbx
  GCGTavernChallenge *TavernChallenge; // rax
  PlayerDungeonComp *DungeonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // bl
  unsigned int val; // [rsp+18h] [rbp-68h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-64h]
  float refresh_interval; // [rsp+20h] [rbp-60h]
  uint32_t interval_seconds; // [rsp+24h] [rbp-5Ch]
  uint32_t cur_game_time; // [rsp+28h] [rbp-58h]
  uint32_t dungeon_id; // [rsp+2Ch] [rbp-54h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+30h] [rbp-50h]
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-30h] BYREF

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( now >= this->last_refresh_time_ + 12 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.const_value_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getGCGTavernRefreshInterval(const_value_config_mgr);
    refresh_interval = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    interval_seconds = (int)(float)((float)(int)ConstValueExcelConfigMgr::getGameHourSeconds(const_value_config_mgr)
                                  * refresh_interval);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    BasicComp = Player::getBasicComp(this->player_);
    cur_game_time = PlayerBasicComp::getGameTime(BasicComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_refresh_game_time_);
    }
    if ( this->last_refresh_game_time_ && cur_game_time < this->last_refresh_game_time_ + interval_seconds )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "checkCanRefreshScene",
        250);
      v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v19,
             (const char (*)[34])"refresh game time not reach, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      gcg_comp = Player::getGCGComp(this->player_);
      TavernChallenge = PlayerGCGComp::getTavernChallenge(gcg_comp);
      if ( GCGTavernChallenge::isCharacterInvited(TavernChallenge) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "checkCanRefreshScene",
          258);
        v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v19, (const char (*)[28])off_26154C80);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        DungeonComp = Player::getDungeonComp(this->player_);
        dungeon_id = PlayerDungeonComp::getCurDungeonId(DungeonComp);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v18);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
        v9 = dungeon_id == ConstValueExcelConfigMgr::getGCGDungeonId(&v8->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v18);
        if ( v9 )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "checkCanRefreshScene",
            266);
          v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v19,
                 (const char (*)[27])"owner in gcg dungeon, uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
        }
        else
        {
          if ( !PlayerGCGComp::isInGame(gcg_comp) )
            return 1;
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "checkCanRefreshScene",
            273);
          v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 &v19,
                 (const char (*)[24])"owner in gcg game, uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
        }
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return 0;
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_tavern_scene_builder.cpp",
    "checkCanRefreshScene",
    240);
  v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v19,
         (const char (*)[29])"refresh time not reach, uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  return 0;
};

// Line 281: range 00000000175B0EF8-00000000175B10D3
bool __cdecl GCGTavernSceneBuilder::isTavernSceneEmpty(const GCGTavernSceneBuilder *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t SceneComp; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // al
  bool v8; // r14
  bool result; // al
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:282";
  *(_QWORD *)(v1 + 16) = GCGTavernSceneBuilder::isTavernSceneEmpty;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  ConstValueExcelConfigMgr::getGCGTavernSceneId(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v1 + 32), SceneComp);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  v7 = 1;
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Scene::getPlayerCount(v6) )
      v7 = 0;
  }
  v8 = v7;
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v8;
  if ( v11 == (char *)v1 )
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

// Line 291: range 00000000175B10D4-00000000175B17F5
void __cdecl GCGTavernSceneBuilder::refreshNpcInfo(GCGTavernSceneBuilder *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // rbx
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  uint32_t v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  GCGWeekChallenge *WeekChallenge; // rax
  GCGWeekChallenge *v16; // rax
  __int64 Now; // rsi
  PlayerBasicComp *v18; // rax
  uint32_t GameTime; // ecx
  char v20; // dl
  __int64 v21; // rdx
  unsigned int val; // [rsp+14h] [rbp-15Ch] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-158h]
  const data::GCGSceneDistributionExcelConfig *distribution_config_ptr; // [rsp+20h] [rbp-150h]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-130h] BYREF
  char v28[272]; // [rsp+60h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 19 distribution_id:299 64 48 17 const_npc_set:311 144 48 16 week_npc_set:318";
  *(_QWORD *)(v1 + 16) = GCGTavernSceneBuilder::refreshNpcInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEDu) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "refreshNpcInfo",
      294);
    v5 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
           &v27,
           (const char (*)[75])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER not open, can not refreshNpcInfo, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    *(_DWORD *)(v1 + 48) = GCGTavernSceneBuilder::getRandomDistributionId(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    v6 = *(unsigned int *)(v1 + 48);
    distribution_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneDistributionExcelConfig(
                                gcg_playing_config_mgr,
                                v6);
    if ( distribution_config_ptr )
    {
      v10 = *(_DWORD *)(v1 + 48);
      v11 = *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v6) = v11 != 0;
        __asan_report_store4(&this->distribution_id_, v6, &this->distribution_id_);
      }
      this->distribution_id_ = v10;
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "refreshNpcInfo",
        308);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v27,
              (const char (*)[25])"getRandomDistributionId:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 64));
      GCGTavernSceneBuilder::getRandomConstNpc(this, (std::set<unsigned int> *)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      gcg_comp = Player::getGCGComp(this->player_);
      WeekChallenge = PlayerGCGComp::getWeekChallenge(gcg_comp);
      GCGWeekChallenge::onTavernSceneRefresh(WeekChallenge);
      v16 = PlayerGCGComp::getWeekChallenge(gcg_comp);
      GCGWeekChallenge::getAppearNpcSet((std::set<unsigned int> *)(v1 + 144), v16);
      GCGTavernSceneBuilder::fillNpcScenePoint(
        this,
        (const std::set<unsigned int> *)(v1 + 64),
        (const std::set<unsigned int> *)(v1 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&distribution_config_ptr->cat_suite_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&distribution_config_ptr->cat_suite_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&distribution_config_ptr->cat_suite_index);
      }
      GCGTavernSceneBuilder::notifyGroupRefreshSuite(this, distribution_config_ptr->cat_suite_index);
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_refresh_time_, Now, &this->last_refresh_time_);
      }
      this->last_refresh_time_ = Now;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v18 = Player::getBasicComp(this->player_);
      GameTime = PlayerBasicComp::getGameTime(v18);
      v20 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_game_time_ >> 3) + 0x7FFF8000);
      LOBYTE(Now) = v20 != 0;
      v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= v20);
      if ( (_BYTE)v21 )
        __asan_report_store4(&this->last_refresh_game_time_, Now, v21);
      this->last_refresh_game_time_ = GameTime;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "refreshNpcInfo",
        304);
      v7 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v27,
             (const char (*)[61])"findGCGSceneDistributionExcelConfig fails, distribution_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 332: range 00000000175B17F6-00000000175B1C0E
uint32_t __cdecl GCGTavernSceneBuilder::getRandomDistributionId(const GCGTavernSceneBuilder *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  uint32_t v5; // r14d
  std::vector<unsigned int>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::reference v9; // rax
  uint32_t *v10; // rdx
  uint32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 select_idx:336 64 24 20 distribution_vec:333";
  *(_QWORD *)(v1 + 16) = GCGTavernSceneBuilder::getRandomDistributionId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  GCGPlayingExcelConfigMgr::getTavernSceneDistributionVec(
    gcg_playing_config_mgr,
    this->distribution_id_,
    (std::vector<unsigned int> *)(v1 + 64));
  *(_DWORD *)(v1 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
         (const std::vector<unsigned int> *)(v1 + 64),
         (uint32_t *)(v1 + 48),
         0) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "getRandomDistributionId",
      339);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"weightSelectOne fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = 0;
    goto LABEL_17;
  }
  v6 = *(unsigned int *)(v1 + 48);
  if ( v6 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "getRandomDistributionId",
      344);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v15,
           (const char (*)[25])"rand fails, select_idx: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  v9 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 64), *(unsigned int *)(v1 + 48));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v5 = *v10;
LABEL_17:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v5;
  if ( v16 == (char *)v1 )
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
  return result;
};

// Line 351: range 00000000175B1C10-00000000175B2508
int32_t __cdecl GCGTavernSceneBuilder::getRandomConstNpc(
        const GCGTavernSceneBuilder *const this,
        std::set<unsigned int> *npc_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t *p_pre_quest_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<unsigned int>::size_type v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t v21; // r14d
  unsigned int *M_current; // r14
  unsigned int *v23; // rcx
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  const PlayerQuestComp *quest_comp; // [rsp+30h] [rbp-150h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-148h]
  const std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig> *__for_range; // [rsp+40h] [rbp-140h]
  const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> *v37; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *npc_id; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *npc_config; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v40; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-110h] BYREF
  char v42[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 19 const_npc_count:352 48 4 19 extra_npc_count:392 64 24 16 free_npc_vec:354 128 24 20 oc"
                        "cupied_npc_vec:355";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::getRandomConstNpc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getGCGTavernConstNpcCount(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v40);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  quest_comp = Player::getQuestComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v40);
  __for_range = &gcg_playing_config_mgr->gcg_scene_const_npc_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::begin(&gcg_playing_config_mgr->gcg_scene_const_npc_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGSceneConstNpcExcelConfig>::end(&gcg_playing_config_mgr->gcg_scene_const_npc_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator*(&__for_begin);
    npc_id = std::get<0ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v37);
    npc_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGSceneConstNpcExcelConfig>(v37);
    p_pre_quest_id = &npc_config->pre_quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_pre_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_pre_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_pre_quest_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_pre_quest_id);
    }
    *(_DWORD *)(v2 + 48) = npc_config->pre_quest_id;
    if ( *(_DWORD *)(v2 + 48)
      && PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v2 + 48)) != QUEST_STATE_FINISHED )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "getRandomConstNpc",
        363);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v41, (const char (*)[14])"const npc_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, npc_id);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v9,
              (const char (*)[26])" not finish pre_quest_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(npc_id);
      }
      if ( GCGTavernSceneBuilder::isConstNpcCondQuestAllValid(this, *npc_id) )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), npc_id);
      else
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), npc_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false,false>::operator++(&__for_begin);
  }
  v13 = *(unsigned int *)(v2 + 32);
  if ( v13 > std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64)) )
  {
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    v23 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      npc_set,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v23,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    LODWORD(M_current) = *(_DWORD *)(v2 + 32);
    *(_DWORD *)(v2 + 48) = (_DWORD)M_current
                         - std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64));
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 128),
      npc_set,
      *(_DWORD *)(v2 + 48));
    if ( std::set<unsigned int>::size(npc_set) != *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "getRandomConstNpc",
        396);
      v24 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v41,
              (const char (*)[43])"randomSelect fails, occupied_npc_vec size:");
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
      v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v24,
              (const unsigned __int64 *)&__for_begin);
      v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v25, (const char (*)[15])" npc_set size:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>::__node_type *)std::set<unsigned int>::size(npc_set);
      v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v26,
              (const unsigned __int64 *)&__for_end);
      v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v27,
              (const char (*)[18])" extra_npc_count:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_28;
    }
  }
  else
  {
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 64),
      npc_set,
      *(_DWORD *)(v2 + 32));
    if ( std::set<unsigned int>::size(npc_set) != *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "getRandomConstNpc",
        383);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v41,
              (const char (*)[39])"randomSelect fails, free_npc_vec size:");
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64));
      v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v14,
              (const unsigned __int64 *)&__for_begin);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" npc_set size:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GCGSceneConstNpcExcelConfig>,false>::__node_type *)std::set<unsigned int>::size(npc_set);
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v16,
              (const unsigned __int64 *)&__for_end);
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v17,
              (const char (*)[18])" const_npc_count:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
LABEL_28:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v21 = -1;
      goto LABEL_34;
    }
  }
  v21 = 0;
LABEL_34:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v21;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 406: range 00000000175B250A-00000000175B2908
void __cdecl GCGTavernSceneBuilder::updateConstNpcQuestSet(GCGTavernSceneBuilder *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const GCGPlayingExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-D8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *npc_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-B8h]
  const data::GCGSceneConstNpcExcelConfig *const_npc_config_ptr; // [rsp+60h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-90h] BYREF
  char v23[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 quest_id:417";
  *(_QWORD *)(v1 + 16) = GCGTavernSceneBuilder::updateConstNpcQuestSet;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::unordered_set<unsigned int>::clear(&this->const_npc_quest_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_range = &this->const_npc_point_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->const_npc_point_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->const_npc_point_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    npc_id = std::get<0ul,unsigned int const,unsigned int>(v16);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
    v4 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(npc_id);
    }
    const_npc_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneConstNpcExcelConfig(v4, *npc_id);
    if ( const_npc_config_ptr )
    {
      __for_range_0 = &const_npc_config_ptr->cond_quest_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&const_npc_config_ptr->cond_quest_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v1 + 32) = *v9;
        std::unordered_set<unsigned int>::insert(
          &this->const_npc_quest_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v1 + 32));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "updateConstNpcQuestSet",
        414);
      v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v22,
             (const char (*)[48])"findGCGSceneConstNpcExcelConfig fails, npc_id: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, npc_id);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 425: range 00000000175B290A-00000000175B2D94
__int64 __fastcall GCGTavernSceneBuilder::isConstNpcCondQuestAllValid(
        const GCGTavernSceneBuilder *const this,
        uint32_t npc_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-D0h]
  const data::GCGSceneConstNpcExcelConfig *const_npc_config_ptr; // [rsp+38h] [rbp-C8h]
  PlayerQuestComp *quest_comp; // [rsp+40h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 quest_id:434 64 4 10 npc_id:424";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::isConstNpcCondQuestAllValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = npc_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  const_npc_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneConstNpcExcelConfig(
                           gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 64));
  if ( const_npc_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    quest_comp = Player::getQuestComp(this->player_);
    __for_range = &const_npc_config_ptr->cond_quest_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&const_npc_config_ptr->cond_quest_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&const_npc_config_ptr->cond_quest_list)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 1LL;
        goto LABEL_20;
      }
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 48) = *v10;
      if ( PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v2 + 48)) == QUEST_STATE_UNFINISHED )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "isConstNpcCondQuestAllValid",
      438);
    v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v24,
            (const char (*)[29])"quest unfinished, quest_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" const_npc_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "isConstNpcCondQuestAllValid",
      430);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v24,
           (const char (*)[48])"findGCGSceneConstNpcExcelConfig fails, npc_id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
LABEL_20:
  if ( v25 == (char *)v2 )
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

// Line 446: range 00000000175B2D96-00000000175B419D
void __cdecl GCGTavernSceneBuilder::fillNpcScenePoint(
        GCGTavernSceneBuilder *const this,
        const std::set<unsigned int> *const_npc_set,
        const std::set<unsigned int> *week_npc_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const GCGPlayingExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  unsigned int *v16; // rax
  uint32_t *v17; // rdx
  char *v18; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  char v21; // cl
  char *v22; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  char v25; // cl
  int v26; // r14d
  const unsigned int *M_current; // r15
  const unsigned int *v28; // r14
  const unsigned int *v29; // r15
  const unsigned int *v30; // r14
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  uint32_t v34; // r14d
  char *v35; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v36; // rax
  uint32_t *v37; // rdx
  char v38; // cl
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  __int64 v44; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v45; // rax
  _DWORD *v46; // rdx
  common::milog::MiLogStream *v47; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  int v50; // r14d
  char *v51; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v52; // rax
  _DWORD *v53; // rdx
  char v54; // cl
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  int v60; // r14d
  char *v61; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v62; // rax
  _DWORD *v63; // rdx
  char v64; // cl
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // r14
  std::unordered_map<unsigned int,unsigned int> *v73; // rax
  GCGWeekChallenge *WeekChallenge; // rax
  uint32_t scene_point_count; // [rsp+30h] [rbp-320h]
  uint32_t npc_id; // [rsp+34h] [rbp-31Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-318h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+40h] [rbp-310h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-308h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+50h] [rbp-300h]
  const data::GCGSceneDistributionExcelConfig *distribution_config_ptr; // [rsp+58h] [rbp-2F8h]
  const std::set<unsigned int> *__for_range; // [rsp+60h] [rbp-2F0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-2E8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-2E0h]
  uint32_t *scene_point_id; // [rsp+78h] [rbp-2D8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+80h] [rbp-2D0h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+88h] [rbp-2C8h]
  PlayerGCGComp *gcg_comp; // [rsp+90h] [rbp-2C0h]
  const std::pair<unsigned int const,unsigned int> *v90; // [rsp+98h] [rbp-2B8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *npc_id_0; // [rsp+A0h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+A8h] [rbp-2A8h]
  std::shared_ptr<Config> v93; // [rsp+B0h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v94; // [rsp+C0h] [rbp-290h] BYREF
  common::milog::MiLogStream v95; // [rsp+E0h] [rbp-270h] BYREF
  common::milog::MiLogStream v96; // [rsp+100h] [rbp-250h] BYREF
  char v97[560]; // [rsp+120h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 18 scene_point_id:510 48 4 17 select_npc_id:520 64 4 17 result_npc_id:535 80 4 10 npc_id:"
                        "458 96 24 19 scene_point_vec:476 160 48 22 all_npc_weight_map:456 240 48 24 stand_npc_weight_map"
                        ":457 320 56 22 week_npc_point_map:473 416 56 23 const_npc_point_map:474";
  *(_QWORD *)(v3 + 16) = GCGTavernSceneBuilder::fillNpcScenePoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862729] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v93);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v93)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v93);
  v6 = gcg_playing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  distribution_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneDistributionExcelConfig(
                              v6,
                              this->distribution_id_);
  if ( distribution_config_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 160));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 240));
    __for_range = const_npc_set;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::begin(const_npc_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(const_npc_set)._M_node;
    while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0, &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 80) = *v11;
      v12 = (char *)(v3 + 80);
      v13 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 160),
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12, v13);
      }
      *v14 = 1;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    __for_range_0 = week_npc_set;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::begin(week_npc_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0, &__for_end) )
    {
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      npc_id = *v17;
      *(_DWORD *)(v3 + 80) = *v17 + 1000000;
      v18 = (char *)(v3 + 80);
      v19 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 160),
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      v20 = v19;
      v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(v19, v18, v19);
      }
      *v20 = 1;
      if ( GCGPlayingExcelConfigMgr::isUseStandScenePointNpc(gcg_playing_config_mgr, npc_id) )
      {
        v22 = (char *)(v3 + 80);
        v23 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 240),
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        v24 = v23;
        v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
        if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
        {
          LOBYTE(v22) = v25 != 0;
          __asan_report_store4(v23, v22, v23);
        }
        *v24 = 1;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320));
    std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 416));
    v26 = std::vector<unsigned int>::size(&distribution_config_ptr->basic_scene_point_list);
    scene_point_count = v26 + std::vector<unsigned int>::size(&distribution_config_ptr->extra_scene_point_list);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
    std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v3 + 96), scene_point_count);
    M_current = std::vector<unsigned int>::end(&distribution_config_ptr->basic_scene_point_list)._M_current;
    v28 = std::vector<unsigned int>::begin(&distribution_config_ptr->basic_scene_point_list)._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0);
    std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      (std::vector<unsigned int> *const)(v3 + 96),
      (std::vector<unsigned int>::const_iterator)__for_end._M_node,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v28,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v29 = std::vector<unsigned int>::end(&distribution_config_ptr->extra_scene_point_list)._M_current;
    v30 = std::vector<unsigned int>::begin(&distribution_config_ptr->extra_scene_point_list)._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0);
    std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      (std::vector<unsigned int> *const)(v3 + 96),
      (std::vector<unsigned int>::const_iterator)__for_end._M_node,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v30,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v29);
    __for_range_1 = (std::vector<unsigned int> *)(v3 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0) )
    {
      scene_point_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v3 + 240)) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(scene_point_id);
      }
      if ( GCGPlayingExcelConfigMgr::isStandScenePoint(gcg_playing_config_mgr, *scene_point_id) )
      {
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v3 + 240),
               (unsigned int *)(v3 + 48),
               0) )
        {
          common::milog::MiLogStream::create(
            &v95,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillNpcScenePoint",
            497);
          v31 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v95,
                  (const char (*)[34])"weightSelectOne failed, map size:");
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 240));
          v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v31,
                  (const unsigned __int64 *)&__for_end);
          v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v95);
        }
        else
        {
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v3 + 160),
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v3 + 240),
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
          *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48) - 1000000;
          if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(scene_point_id);
          }
          v34 = *scene_point_id;
          v35 = (char *)(v3 + 64);
          v36 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320),
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
          v37 = v36;
          v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
          if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
          {
            LOBYTE(v35) = v38 != 0;
            __asan_report_store4(v36, v35, v36);
          }
          *v37 = v34;
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillNpcScenePoint",
            504);
          v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v96,
                  (const char (*)[19])"stand week npc_id:");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v3 + 64));
          v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v40,
                  (const char (*)[17])" scene_point_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, scene_point_id);
          v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v96);
          v44 = (*(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v44 )
            __asan_report_store4(scene_point_id, ((unsigned __int8)scene_point_id & 7u) + 3, v44);
          *scene_point_id = 0;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_2 = (std::vector<unsigned int> *)(v3 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_2)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0) )
    {
      v45 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v46 = v45;
      if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v45);
      }
      *(_DWORD *)(v3 + 32) = *v46;
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v3 + 160)) )
        break;
      if ( *(_DWORD *)(v3 + 32) )
      {
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v3 + 160),
               (unsigned int *)(v3 + 48),
               0) )
        {
          common::milog::MiLogStream::create(
            &v94,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillNpcScenePoint",
            523);
          v47 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v94,
                  (const char (*)[34])"weightSelectOne failed, map size:");
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 160));
          v48 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v47,
                  (const unsigned __int64 *)&__for_end);
          v49 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v48, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v94);
        }
        else
        {
          if ( *(_DWORD *)(v3 + 48) >= 0xF4240u )
          {
            *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48) - 1000000;
            v60 = *(_DWORD *)(v3 + 32);
            v61 = (char *)(v3 + 64);
            v62 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320),
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
            v63 = v62;
            v64 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
            if ( v64 != 0 && (char)(((unsigned __int8)v62 & 7) + 3) >= v64 )
            {
              LOBYTE(v61) = v64 != 0;
              __asan_report_store4(v62, v61, v62);
            }
            *v63 = v60;
            common::milog::MiLogStream::create(
              &v96,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_tavern_scene_builder.cpp",
              "fillNpcScenePoint",
              537);
            v65 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v96,
                    (const char (*)[13])"week npc_id:");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v3 + 64));
            v67 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v66,
                    (const char (*)[17])" scene_point_id:");
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v67,
                    (const unsigned int *)(v3 + 32));
            v69 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v68, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v96);
          }
          else
          {
            v50 = *(_DWORD *)(v3 + 32);
            v51 = (char *)(v3 + 48);
            v52 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 416),
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
            v53 = v52;
            v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
            if ( v54 != 0 && (char)(((unsigned __int8)v52 & 7) + 3) >= v54 )
            {
              LOBYTE(v51) = v54 != 0;
              __asan_report_store4(v52, v51, v52);
            }
            *v53 = v50;
            common::milog::MiLogStream::create(
              &v95,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_tavern_scene_builder.cpp",
              "fillNpcScenePoint",
              530);
            v55 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    &v95,
                    (const char (*)[14])"const npc_id:");
            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v55,
                    (const unsigned int *)(v3 + 48));
            v57 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v56,
                    (const char (*)[17])" scene_point_id:");
            v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v57,
                    (const unsigned int *)(v3 + 32));
            v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v58, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v95);
          }
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v3 + 160),
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 160);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 160))._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v90 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      npc_id_0 = std::get<0ul,unsigned int const,unsigned int>(v90);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v90);
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "fillNpcScenePoint",
        545);
      v70 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v96, (const char (*)[9])" npc_id:");
      v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, npc_id_0);
      v72 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v71,
              (const char (*)[28])" not have scene point, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v96);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    v73 = std::move<std::unordered_map<unsigned int,unsigned int> &>((std::unordered_map<unsigned int,unsigned int> *)(v3 + 416));
    std::unordered_map<unsigned int,unsigned int>::operator=(&this->const_npc_point_map_, v73);
    GCGTavernSceneBuilder::updateConstNpcQuestSet(this);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    WeekChallenge = PlayerGCGComp::getWeekChallenge(gcg_comp);
    GCGWeekChallenge::setNpcScenePoint(WeekChallenge, (const std::unordered_map<unsigned int,unsigned int> *)(v3 + 320));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 416));
    std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 320));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 240));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 160));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "fillNpcScenePoint",
      451);
    v7 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v96,
           (const char (*)[61])"findGCGSceneDistributionExcelConfig fails, distribution_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->distribution_id_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v96);
  }
  if ( v97 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 559: range 00000000175B419E-00000000175B50F5
int32_t __cdecl GCGTavernSceneBuilder::fillBlankScenePoint(
        GCGTavernSceneBuilder *const this,
        const std::unordered_set<unsigned int> *npc_id_set,
        const std::unordered_set<unsigned int> *used_point_set,
        std::unordered_map<unsigned int,unsigned int> *npc_point_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const GCGPlayingExcelConfigMgr *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v12; // rax
  _DWORD *v13; // rdx
  char *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  char *v18; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  char v21; // cl
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v22; // rax
  _DWORD *v23; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v24; // rax
  _DWORD *v25; // rdx
  std::unordered_set<unsigned int>::size_type v26; // r14
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  uint32_t v35; // r14d
  char *v36; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v37; // rax
  uint32_t *v38; // rdx
  char v39; // cl
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  __int64 v45; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v46; // rax
  uint32_t *v47; // rdx
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  char *v51; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v52; // rax
  uint32_t *v53; // rdx
  char v54; // cl
  int32_t result; // eax
  uint32_t scene_point_id_0; // [rsp+24h] [rbp-1FCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-1F0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-1E8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+40h] [rbp-1E0h]
  const data::GCGSceneDistributionExcelConfig *distribution_config_ptr; // [rsp+48h] [rbp-1D8h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+50h] [rbp-1D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-1B8h]
  uint32_t *scene_point_id; // [rsp+70h] [rbp-1B0h]
  std::vector<unsigned int> *__for_range_3; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v71; // [rsp+80h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v72; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v73; // [rsp+B0h] [rbp-170h] BYREF
  char v74[336]; // [rsp+D0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 17 select_npc_id:638 48 4 10 npc_id:570 64 24 19 scene_point_vec:579 128 48 18 npc_weight"
                        "_map:568 208 48 24 stand_npc_weight_map:569";
  *(_QWORD *)(v4 + 16) = GCGTavernSceneBuilder::fillBlankScenePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v71);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v71);
  v7 = gcg_playing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  distribution_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneDistributionExcelConfig(
                              v7,
                              this->distribution_id_);
  if ( distribution_config_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 208));
    __for_range = npc_id_set;
    __for_end_0._M_current = (unsigned int *)std::unordered_set<unsigned int>::begin(npc_id_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(npc_id_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
              &__for_end) )
    {
      v12 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v4 + 48) = *v13;
      v14 = (char *)(v4 + 48);
      v15 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v4 + 128),
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14, v15);
      }
      *v16 = 1;
      if ( GCGPlayingExcelConfigMgr::isUseStandScenePointNpc(gcg_playing_config_mgr, *(_DWORD *)(v4 + 48)) )
      {
        v18 = (char *)(v4 + 48);
        v19 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 208),
                (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
        v20 = v19;
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        {
          LOBYTE(v18) = v21 != 0;
          __asan_report_store4(v19, v18, v19);
        }
        *v20 = 1;
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 64));
    __for_range_0 = &distribution_config_ptr->basic_scene_point_list;
    __for_end_0._M_current = (unsigned int *)std::vector<unsigned int>::begin(&distribution_config_ptr->basic_scene_point_list)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v22 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      *(_DWORD *)(v4 + 48) = *v23;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              used_point_set,
              (const unsigned int *)(v4 + 48)) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 64),
          (const std::vector<unsigned int>::value_type *)(v4 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
    }
    __for_range_1 = &distribution_config_ptr->extra_scene_point_list;
    __for_end_0._M_current = (unsigned int *)std::vector<unsigned int>::begin(&distribution_config_ptr->extra_scene_point_list)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v24 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      *(_DWORD *)(v4 + 48) = *v25;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              used_point_set,
              (const unsigned int *)(v4 + 48)) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 64),
          (const std::vector<unsigned int>::value_type *)(v4 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
    }
    v26 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64));
    if ( v26 < std::unordered_set<unsigned int>::size(npc_id_set) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "fillBlankScenePoint",
        598);
      v27 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v73,
              (const char (*)[25])"blank scene point count:");
      __for_end_0._M_current = (unsigned int *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 64));
      v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v27,
              (const unsigned __int64 *)&__for_end_0);
      v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v28,
              (const char (*)[25])" smaller than npc count:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_set<unsigned int>::size(npc_id_set);
      v30 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v29,
              (const unsigned __int64 *)&__for_end);
      v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v73);
    }
    __for_range_2 = (std::vector<unsigned int> *)(v4 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 64))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
    {
      scene_point_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 208)) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(scene_point_id);
      }
      if ( GCGPlayingExcelConfigMgr::isStandScenePoint(gcg_playing_config_mgr, *scene_point_id) )
      {
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v4 + 208),
               (unsigned int *)(v4 + 32),
               0) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillBlankScenePoint",
            615);
          v32 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v72,
                  (const char (*)[34])"weightSelectOne failed, map size:");
          __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v4 + 208));
          v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v32,
                  (const unsigned __int64 *)&__for_end);
          v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v72);
        }
        else
        {
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v4 + 128),
            (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v4 + 208),
            (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
          if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(scene_point_id);
          }
          v35 = *scene_point_id;
          v36 = (char *)(v4 + 32);
          v37 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  npc_point_map,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
          v38 = v37;
          v39 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
          if ( v39 != 0 && (char)(((unsigned __int8)v37 & 7) + 3) >= v39 )
          {
            LOBYTE(v36) = v39 != 0;
            __asan_report_store4(v37, v36, v37);
          }
          *v38 = v35;
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillBlankScenePoint",
            621);
          v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v73,
                  (const char (*)[13])"stand_point:");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, scene_point_id);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v41,
                  (const char (*)[16])" select_npc_id:");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v42,
                  (const unsigned int *)(v4 + 32));
          v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v73);
          v45 = (*(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v45 )
            __asan_report_store4(scene_point_id, ((unsigned __int8)scene_point_id & 7u) + 3, v45);
          *scene_point_id = 0;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_3 = (std::vector<unsigned int> *)(v4 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 64))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_3)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
    {
      v46 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v47 = v46;
      if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v46);
      }
      scene_point_id_0 = *v47;
      if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 128)) )
        break;
      if ( scene_point_id_0 )
      {
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v4 + 128),
               (unsigned int *)(v4 + 32),
               0) )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_tavern_scene_builder.cpp",
            "fillBlankScenePoint",
            641);
          v48 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v73,
                  (const char (*)[34])"weightSelectOne failed, map size:");
          __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v4 + 128));
          v49 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v48,
                  (const unsigned __int64 *)&__for_end);
          v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v73);
        }
        else
        {
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v4 + 128),
            (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
          v51 = (char *)(v4 + 32);
          v52 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  npc_point_map,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 32));
          v53 = v52;
          v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
          if ( v54 != 0 && (char)(((unsigned __int8)v52 & 7) + 3) >= v54 )
          {
            LOBYTE(v51) = v54 != 0;
            __asan_report_store4(v52, v51, v52);
          }
          *v53 = scene_point_id_0;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v11 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 208));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "fillBlankScenePoint",
      564);
    v8 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v73,
           (const char (*)[61])"findGCGSceneDistributionExcelConfig fails, distribution_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->distribution_id_);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v73);
    v11 = -1;
  }
  result = v11;
  if ( v74 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 651: range 00000000175B50F6-00000000175B5784
void __cdecl GCGTavernSceneBuilder::notifyGroupRefreshSuite(GCGTavernSceneBuilder *const this, uint32_t suite_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t SceneComp; // r14d
  common::milog::MiLogStream *v6; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  char *v14; // rsi
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  char v20; // cl
  Group *v21; // rax
  unsigned int SceneId; // [rsp+10h] [rbp-100h] BYREF
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 group_id:659 64 16 13 scene_ptr:653 96 16 13 group_ptr:660 128 16 13 event_ptr:666";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::notifyGroupRefreshSuite;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  ConstValueExcelConfigMgr::getGCGTavernSceneId(const_value_config_mgr);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "notifyGroupRefreshSuite",
      656);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v26,
           (const char (*)[30])"find tavern scene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getGCGTavernGroupId(const_value_config_mgr);
    v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Scene::findGroup((Scene *const)(v2 + 96), v7);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "notifyGroupRefreshSuite",
        663);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v26,
             (const char (*)[29])"find group failed, group_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" scene_id:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SceneId = Scene::getSceneId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &SceneId);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      EventUtil::createEvent((data::EventType)(v2 + 128));
      v14 = (char *)(v2 + 128);
      if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_tavern_scene_builder.cpp",
          "notifyGroupRefreshSuite",
          669);
        v15 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v26,
                (const char (*)[55])"createEvent EVENT_GCG_TAVERN_SCENE_REFRESH fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v17 = *(_BYTE *)(((unsigned __int64)&v16->param1 >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)((((_BYTE)v16 + 44) & 7) + 3) >= v17 )
        {
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(&v16->param1, v14, v16);
        }
        v16->param1 = suite_index;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Uid = Player::getUid(this->player_);
        v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v20 = *(_BYTE *)(((unsigned __int64)&v19->uid >> 3) + 0x7FFF8000);
        if ( v20 != 0 && (char)((((_BYTE)v19 + 60) & 7) + 3) >= v20 )
        {
          LOBYTE(v14) = v20 != 0;
          __asan_report_store4(&v19->uid, v14, v19);
        }
        v19->uid = Uid;
        v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Group::handleEvent(v21, (EventPtr *)(v2 + 128));
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v27 == (char *)v2 )
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

// Line 678: range 00000000175B5786-00000000175B5C7B
void __cdecl GCGTavernSceneBuilder::appendWeekNpcScenePointInfo(
        GCGTavernSceneBuilder *const this,
        const std::unordered_set<unsigned int> *npc_id_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // r12
  GCGWeekChallenge *WeekChallenge; // rax
  common::milog::MiLogStream *v7; // r14
  GCGWeekChallenge *v8; // rax
  unsigned int val; // [rsp+14h] [rbp-16Ch] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-150h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *scene_point_id; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-130h] BYREF
  char v18[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 56 18 used_point_set:688 128 56 17 npc_point_map:695";
  *(_QWORD *)(v2 + 16) = GCGTavernSceneBuilder::appendWeekNpcScenePointInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  if ( this->distribution_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    WeekChallenge = PlayerGCGComp::getWeekChallenge(gcg_comp);
    GCGWeekChallenge::getNpcScenePointSet((std::unordered_set<unsigned int> *)(v2 + 32), WeekChallenge);
    __for_range = &this->const_npc_point_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->const_npc_point_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->const_npc_point_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,unsigned int>(v14);
      scene_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 32), scene_point_id);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 128));
    if ( GCGTavernSceneBuilder::fillBlankScenePoint(
           this,
           npc_id_set,
           (const std::unordered_set<unsigned int> *)(v2 + 32),
           (std::unordered_map<unsigned int,unsigned int> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_scene_builder.cpp",
        "appendWeekNpcScenePointInfo",
        698);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v17,
             (const char (*)[33])"fillBlankScenePoint failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v8 = PlayerGCGComp::getWeekChallenge(gcg_comp);
      GCGWeekChallenge::setNpcScenePoint(v8, (const std::unordered_map<unsigned int,unsigned int> *)(v2 + 128));
    }
    std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 128));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "appendWeekNpcScenePointInfo",
      682);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v17,
           (const char (*)[27])"distribution_id is 0, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 705: range 00000000175B5C7C-00000000175B5E42
uint32_t __cdecl GCGTavernSceneBuilder::getCharacterNpcSitPoint(const GCGTavernSceneBuilder *const this)
{
  const GCGPlayingExcelConfigMgr *v1; // rdx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-50h]
  const data::GCGSceneDistributionExcelConfig *distribution_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  v1 = gcg_playing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distribution_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distribution_id_);
  }
  distribution_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGSceneDistributionExcelConfig(
                              v1,
                              this->distribution_id_);
  if ( distribution_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&distribution_config_ptr->invite_scene_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)distribution_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&distribution_config_ptr->invite_scene_point >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&distribution_config_ptr->invite_scene_point);
    }
    return distribution_config_ptr->invite_scene_point;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_scene_builder.cpp",
      "getCharacterNpcSitPoint",
      710);
    v2 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v10,
           (const char (*)[61])"findGCGSceneDistributionExcelConfig fails, distribution_id: ");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->distribution_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
};

// Line 717: range 00000000175B5E44-00000000175B5ED2
uint32_t __cdecl GCGTavernSceneBuilder::getCharacterNpcStandPoint(const GCGTavernSceneBuilder *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t GCGCharacterNpcStandPoint; // ebx
  uint32_t sit_point_id; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  sit_point_id = GCGTavernSceneBuilder::getCharacterNpcSitPoint(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  GCGCharacterNpcStandPoint = ConstValueExcelConfigMgr::findGCGCharacterNpcStandPoint(
                                &v1->design_config.txt_config_mgr.const_value_config_mgr,
                                sit_point_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return GCGCharacterNpcStandPoint;
};

// Line 723: range 00000000175B5ED4-00000000175B5EFE
int32_t __cdecl GCGTavernSceneBuilder::refreshNpcInfoByGM(GCGTavernSceneBuilder *const this)
{
  GCGTavernSceneBuilder::refreshNpcInfo(this);
  GCGTavernSceneBuilder::broadNpcInfo(this);
  return 0;
};
