// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp

// Line 38: range 000000001513D142-000000001513D323
std::string *__cdecl IrodoriChessMultistagePlay::getDesc[abi:cxx11](
        std::string *retstr,
        const IrodoriChessMultistagePlay *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:39";
  *(_QWORD *)(v2 + 16) = IrodoriChessMultistagePlay::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[Irodori Chess] ");
  SceneMultistagePlay::getDesc[abi:cxx11](&v, this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, &v);
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 45: range 000000001513D324-000000001513D4BD
int32_t __cdecl IrodoriChessMultistagePlay::initByParamTable(
        IrodoriChessMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v2; // rax
  unsigned __int64 Play; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<IrodoriTowerDefensePlay>(&this->EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "initByParamTable",
      48);
    v2 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v7, this);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v2,
      (const char (*)[40])" add irodori tower defense comp failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    Play = (unsigned __int64)IrodoriChessMultistagePlay::getPlay(this);
    if ( *(_BYTE *)((Play >> 3) + 0x7FFF8000) )
      Play = __asan_report_load8();
    v5 = *(_QWORD *)Play + 24LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      Play = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v5)(Play) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
        "initByParamTable",
        53);
      v6 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v7, this);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        v6,
        (const char (*)[41])" irodori tower defense play init failed.");
      common::milog::MiLogStream::~MiLogStream(&v7);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 60: range 000000001513D4BE-000000001513D67E
int32_t __cdecl IrodoriChessMultistagePlay::initStage(
        IrodoriChessMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  char *val; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned int)(stage_type - 9) <= 1 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "initStage",
      73);
    v9 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v18, this);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" init stage: ");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, stage_name);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])off_25725940);
    val = (char *)data::getDescription(stage_type);
    v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&val);
    v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" with duration: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, duration);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "initStage",
      68);
    v5 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v18, this);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" stage type: ");
    val = (char *)data::getDescription(stage_type);
    v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not supported.");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
};

// Line 78: range 000000001513D680-000000001513D8C9
int32_t __cdecl IrodoriChessMultistagePlay::toClient(
        const IrodoriChessMultistagePlay *const this,
        proto::MultistagePlayInfo *info)
{
  common::milog::MiLogStream *v2; // rax
  IrodoriTowerDefensePlay *Play; // rax
  uint32_t BuildingPoints; // eax
  IrodoriTowerDefensePlay *v6; // rax
  uint32_t SettleScore; // eax
  IrodoriTowerDefensePlay *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  proto::IrodoriChessMysteryInfo *v10; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::InBattleIrodoriChessInfo *irodori_chess_info; // [rsp+28h] [rbp-48h]
  const std::set<unsigned int> *equiped_card_id_set; // [rsp+30h] [rbp-40h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-30h] BYREF

  if ( SceneMultistagePlay::toClient(this, info) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "toClient",
      81);
    v2 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v16, this);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v2,
      (const char (*)[39])" SceneMultistagePlay::toClient failed.");
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else
  {
    irodori_chess_info = proto::MultistagePlayInfo::mutable_irodori_chess_info(info);
    Play = IrodoriChessMultistagePlay::getPlay(this);
    BuildingPoints = IrodoriTowerDefensePlay::getBuildingPoints(Play);
    proto::InBattleIrodoriChessInfo::set_building_points(irodori_chess_info, BuildingPoints);
    if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InBattleIrodoriChessInfo::set_left_monsters(irodori_chess_info, this->left_monsters_);
    v6 = IrodoriChessMultistagePlay::getPlay(this);
    SettleScore = IrodoriTowerDefensePlay::getSettleScore(v6);
    proto::InBattleIrodoriChessInfo::set_settle_score(irodori_chess_info, SettleScore);
    v8 = IrodoriChessMultistagePlay::getPlay(this);
    equiped_card_id_set = IrodoriTowerDefensePlay::getEquipedCardIdSet(v8);
    __for_range = equiped_card_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(equiped_card_id_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(equiped_card_id_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InBattleIrodoriChessInfo::add_selected_card_id_list(irodori_chess_info, *v9);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v10 = proto::InBattleIrodoriChessInfo::mutable_mystery_info(irodori_chess_info);
    IrodoriChessMultistagePlay::fillMysteryInfo(this, v10);
    return 0;
  }
};

// Line 102: range 000000001513D8CA-000000001513D9B5
void __cdecl IrodoriChessMultistagePlay::regValueSetters(IrodoriChessMultistagePlay *const this)
{
  IrodoriChessMultistagePlay **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  std::function<void(unsigned int)> *v3; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-69h] BYREF
  IrodoriChessMultistagePlay *v5; // [rsp+18h] [rbp-68h] BYREF
  void (*__f[2])(IrodoriChessMultistagePlay *, unsigned int); // [rsp+20h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (IrodoriChessMultistagePlay::*)(unsigned int),IrodoriChessMultistagePlay*,const std::_Placeholder<1>&>::type v7; // [rsp+30h] [rbp-50h] BYREF
  std::string __k; // [rsp+50h] [rbp-30h] BYREF

  v5 = this;
  __f[0] = (void (*)(IrodoriChessMultistagePlay *, unsigned int))IrodoriChessMultistagePlay::setLeftMonsters;
  __f[1] = 0LL;
  std::bind<void (IrodoriChessMultistagePlay::*)(unsigned int),IrodoriChessMultistagePlay*,std::_Placeholder<1> const&>(
    &v7,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "left_monsters", &__a);
  v3 = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::operator[](&this->value_setter_map_, &__k);
  std::function<void ()(unsigned int)>::operator=<std::_Bind<void (IrodoriChessMultistagePlay::*)(unsigned int) ()(IrodoriChessMultistagePlay*,std::_Placeholder<1>)>>(
    v3,
    &v7);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
};

// Line 107: range 000000001513D9B6-000000001513DAA4
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriChessMultistagePlay::onStageEnd(IrodoriChessMultistagePlay *const this, bool is_succ)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_IRODORI_CHESS_KILL )
  {
    if ( *(char *)(((unsigned __int64)&this->is_kill_stage_end_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_kill_stage_end_);
    if ( !this->is_kill_stage_end_ )
    {
      IrodoriChessMultistagePlay::calculateKillStageTime(this);
      if ( *(char *)(((unsigned __int64)&this->is_kill_stage_end_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_kill_stage_end_, is_succ, &this->is_kill_stage_end_);
      this->is_kill_stage_end_ = 1;
    }
  }
};

// Line 119: range 000000001513DACE-000000001513DD6C
void __cdecl IrodoriChessMultistagePlay::onEnd(IrodoriChessMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *p_play_index; // rdi
  bool v6; // cl
  uint32_t play_index; // edx
  uint32_t group_id; // esi
  IrodoriTowerDefensePlay *Play; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(IrodoriTowerDefensePlay *, std::function<ForeachPolicy(FoundationComp&)> *); // r15
  std::function<ForeachPolicy(FoundationComp&)> v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:120";
  *(_QWORD *)(v2 + 16) = IrodoriChessMultistagePlay::onEnd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v2 + 32));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    p_play_index = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = is_succ;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      p_play_index = (DungeonScene *)&this->play_index_;
      __asan_report_load4();
    }
    play_index = this->play_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_play_index = (DungeonScene *)&this->group_id_;
      __asan_report_load4();
    }
    group_id = this->group_id_;
    DungeonScene::onMultistagePlayEnd(p_play_index, group_id, play_index, v6);
    Play = IrodoriChessMultistagePlay::getPlay(this);
    if ( *(_BYTE *)(((unsigned __int64)Play >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(Play->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(void (__fastcall **)(IrodoriTowerDefensePlay *, std::function<ForeachPolicy(FoundationComp&)> *))v10;
    std::function<ForeachPolicy ()(FoundationComp &)>::function<IrodoriChessMultistagePlay::onEnd(bool)::{lambda(FoundationComp &)#1},void,void>(
      &v13,
      (IrodoriChessMultistagePlay::onEnd::<lambda(FoundationComp&)>)group_id);
    v11(Play, &v13);
    std::function<ForeachPolicy ()(FoundationComp &)>::~function(&v13);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 126: range 000000001513DAA6-000000001513DACD
ForeachPolicy __cdecl IrodoriChessMultistagePlay::onEnd(bool)::{lambda(FoundationComp &)#1}::operator()(
        const IrodoriChessMultistagePlay::onEnd::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  FoundationComp::setIsPlayEnd(foundation_comp, 1);
  return 0;
};

// Line 135: range 000000001513DD6E-000000001513DDEF
void __cdecl IrodoriChessMultistagePlay::onPlayerEnter(IrodoriChessMultistagePlay *const this, Player *player)
{
  unsigned __int64 Play; // rax
  unsigned __int64 v3; // rdx

  SceneMultistagePlay::notifyStage(this);
  Play = (unsigned __int64)IrodoriChessMultistagePlay::getPlay(this);
  if ( *(_BYTE *)((Play >> 3) + 0x7FFF8000) )
    Play = __asan_report_load8();
  v3 = *(_QWORD *)Play + 120LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    Play = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Player *))v3)(Play, player);
};

// Line 141: range 000000001513DDF0-000000001513DE20
void __cdecl IrodoriChessMultistagePlay::onPostEnterScene(IrodoriChessMultistagePlay *const this, Player *player)
{
  IrodoriTowerDefensePlay *Play; // rdx

  Play = IrodoriChessMultistagePlay::getPlay(this);
  IrodoriTowerDefensePlay::onPostEnterScene(Play, player);
};

// Line 146: range 000000001513DE22-000000001513DE52
void __cdecl IrodoriChessMultistagePlay::onLeaveScene(IrodoriChessMultistagePlay *const this, Player *player)
{
  IrodoriTowerDefensePlay *Play; // rdx

  Play = IrodoriChessMultistagePlay::getPlay(this);
  IrodoriTowerDefensePlay::onLeaveScene(Play, player);
};

// Line 151: range 000000001513DEAE-000000001513DF3A
void __cdecl IrodoriChessMultistagePlay::onClear(IrodoriChessMultistagePlay *const this)
{
  Scene *scene; // rbx
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  std::function<ForeachPolicy ()(Player &)>::function<IrodoriChessMultistagePlay::onClear(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (IrodoriChessMultistagePlay::onClear::<lambda(Player&)>)this);
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 153: range 000000001513DE54-000000001513DEAC
ForeachPolicy __cdecl IrodoriChessMultistagePlay::onClear(void)::{lambda(Player &)#1}::operator()(
        const IrodoriChessMultistagePlay::onClear::<lambda(Player&)> *const __closure,
        Player *player)
{
  IrodoriTowerDefensePlay *Play; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Play = IrodoriChessMultistagePlay::getPlay(__closure->__this);
  IrodoriTowerDefensePlay::onClearPlayer(Play, player);
  return 0;
};

// Line 161: range 000000001513DF3C-000000001513E0F1
void __cdecl IrodoriChessMultistagePlay::fillMysteryInfo(
        const IrodoriChessMultistagePlay *const this,
        proto::IrodoriChessMysteryInfo *proto_mystery_info)
{
  IrodoriTowerDefensePlay *Play; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rbx
  proto::IrodoriChessEntranceDetailInfo *v6; // rcx
  bool v7; // bl
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  const IrodoriChessMystery *mystery_data; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  Play = IrodoriChessMultistagePlay::getPlay(this);
  mystery_data = IrodoriTowerDefensePlay::getMysteryData(Play);
  v3 = proto::IrodoriChessMysteryInfo::mutable_entrance_point_id_list(proto_mystery_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&mystery_data->entrance_point_id_vec, v3);
  v4 = proto::IrodoriChessMysteryInfo::mutable_exit_point_id_list(proto_mystery_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&mystery_data->exit_point_id_vec, v4);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_irodori_config_mgr;
  v6 = proto::IrodoriChessMysteryInfo::mutable_entrance_detail_info(proto_mystery_info);
  if ( *(_BYTE *)(((unsigned __int64)mystery_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)mystery_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7 = !ActivityIrodoriExcelConfigMgr::fillIrodoriChessMapEntranceDetailInfoProto(
          p_activity_irodori_config_mgr,
          mystery_data->map_id,
          v6);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "fillMysteryInfo",
      167);
    v8 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v12, this);
    v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           v8,
           (const char (*)[60])" fillIrodoriChessMapEntranceDetailInfoProto failed for map:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &mystery_data->map_id);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 172: range 000000001513E0F2-000000001513E553
void __fastcall IrodoriChessMultistagePlay::setLeftMonsters(IrodoriChessMultistagePlay *const this, uint32_t value)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t *p_left_monsters; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  uint32_t *v15; // rsi
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  char v18; // al
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-C0h] BYREF
  char v20[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 value:171 64 24 10 notify:180";
  *(_QWORD *)(v2 + 16) = IrodoriChessMultistagePlay::setLeftMonsters;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = value;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
    "setLeftMonsters",
    173);
  v5 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v19, this);
  v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])" setLeftMonsters: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v19);
  p_left_monsters = (uint32_t *)((((_BYTE)this + 100) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->left_monsters_ < *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
      "setLeftMonsters",
      176);
    v8 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(&v19, this);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v8,
           (const char (*)[27])" set bigger left_monsters:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
    p_left_monsters = &this->left_monsters_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->left_monsters_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  v12 = *(_DWORD *)(v2 + 48);
  v13 = *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(p_left_monsters) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->left_monsters_, p_left_monsters, v14);
  this->left_monsters_ = v12;
  v15 = &this->left_monsters_;
  v16 = (uint32_t *)std::max<unsigned int>(&this->max_monsters_, &this->left_monsters_);
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v17 = *v16;
  v18 = *(_BYTE *)(((unsigned __int64)&this->max_monsters_ >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v15) = v18 != 0;
    __asan_report_store4(&this->max_monsters_, v15, (_BYTE)this + 96);
  }
  this->max_monsters_ = v17;
  proto::IrodoriChessLeftMonsterNotify::IrodoriChessLeftMonsterNotify((proto::IrodoriChessLeftMonsterNotify *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriChessLeftMonsterNotify::set_left_monsters(
    (proto::IrodoriChessLeftMonsterNotify *const)(v2 + 64),
    this->left_monsters_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v2 + 64), 0);
  proto::IrodoriChessLeftMonsterNotify::~IrodoriChessLeftMonsterNotify((proto::IrodoriChessLeftMonsterNotify *const)(v2 + 64));
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

// Line 186: range 000000001513E554-000000001513E9DC
void __cdecl IrodoriChessMultistagePlay::onDungeonSettle(
        IrodoriChessMultistagePlay *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  IrodoriTowerDefensePlay *Play; // rax
  uint32_t SettleScore; // edx
  uint64_t SceneTimeMs; // rdx
  IrodoriTowerDefensePlay *v10; // rdi
  uint32_t kill_monsters; // ecx
  proto::InBattleIrodoriChessSettleInfo *settle_info; // [rsp+28h] [rbp-C8h]
  char v15[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 17 is_new_record:202 64 1 19 is_activity_end:203 80 40 17 settle_notify:196";
  *(_QWORD *)(v4 + 16) = IrodoriChessMultistagePlay::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61953;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->stage_type_ == MULTISTAGE_STAGE_IRODORI_CHESS_KILL )
  {
    if ( *(char *)(((unsigned __int64)&this->is_kill_stage_end_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_kill_stage_end_);
    if ( !this->is_kill_stage_end_ )
    {
      IrodoriChessMultistagePlay::calculateKillStageTime(this);
      if ( *(char *)(((unsigned __int64)&this->is_kill_stage_end_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_kill_stage_end_, player, &this->is_kill_stage_end_);
      this->is_kill_stage_end_ = 1;
    }
  }
  proto::MultistagePlaySettleNotify::MultistagePlaySettleNotify((proto::MultistagePlaySettleNotify *const)(v4 + 80));
  settle_info = proto::MultistagePlaySettleNotify::mutable_irodori_chess_settle_info((proto::MultistagePlaySettleNotify *const)(v4 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::InBattleIrodoriChessSettleInfo::set_kill_monster_num(settle_info, this->kill_monsters_);
  Play = IrodoriChessMultistagePlay::getPlay(this);
  SettleScore = IrodoriTowerDefensePlay::getSettleScore(Play);
  proto::InBattleIrodoriChessSettleInfo::set_settle_score(settle_info, SettleScore);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneTimeMs = Scene::getSceneTimeMs(this->scene_);
  proto::InBattleIrodoriChessSettleInfo::set_scene_time_ms(settle_info, SceneTimeMs);
  *(_BYTE *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  v10 = IrodoriChessMultistagePlay::getPlay(this);
  IrodoriTowerDefensePlay::onDungeonSettle(v10, player, (bool *)(v4 + 64), (bool *)(v4 + 48));
  proto::InBattleIrodoriChessSettleInfo::set_is_new_record(settle_info, *(_BYTE *)(v4 + 48));
  proto::InBattleIrodoriChessSettleInfo::set_is_activity_end(settle_info, *(_BYTE *)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  kill_monsters = this->kill_monsters_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::InBattleIrodoriChessSettleInfo::set_is_perfect(settle_info, kill_monsters == this->max_monsters_);
  Player::sendProto(player, (const google::protobuf::Message *)(v4 + 80));
  IrodoriChessMultistagePlay::writeSettleLog(this, player, use_time);
  proto::MultistagePlaySettleNotify::~MultistagePlaySettleNotify((proto::MultistagePlaySettleNotify *const)(v4 + 80));
  if ( v15 == (char *)v4 )
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
};

// Line 214: range 000000001513E9DE-000000001513EABC
void __cdecl IrodoriChessMultistagePlay::onMonsterDie(
        IrodoriChessMultistagePlay *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  uint32_t v3; // ecx
  char v4; // dl
  __int64 v5; // rsi
  bool v6; // dl
  IrodoriTowerDefensePlay *Play; // rbx
  uint32_t KillScore; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v5 = 1LL;
  v3 = SAFE_ADD<unsigned int,int>(this->kill_monsters_, 1);
  v4 = *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v4 != 0;
  v6 = v4 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v4;
  if ( v6 )
    __asan_report_store4(&this->kill_monsters_, v5, v6);
  this->kill_monsters_ = v3;
  Play = IrodoriChessMultistagePlay::getPlay(this);
  KillScore = Monster::getKillScore(monster);
  IrodoriTowerDefensePlay::addSettleScore(Play, KillScore);
};

// Line 220: range 000000001513EABE-000000001513EB06
IrodoriTowerDefensePlay *__cdecl IrodoriChessMultistagePlay::getPlay(const IrodoriChessMultistagePlay *const this)
{
  IrodoriTowerDefensePlay *v1; // rbx
  std::shared_ptr<IrodoriTowerDefensePlay> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::findComp<IrodoriTowerDefensePlay>((const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const)v3);
  v1 = std::__shared_ptr_access<IrodoriTowerDefensePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<IrodoriTowerDefensePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<IrodoriTowerDefensePlay>::~shared_ptr(v3);
  return v1;
};

// Line 225: range 000000001513EB08-000000001513EBE3
void __cdecl IrodoriChessMultistagePlay::calculateKillStageTime(IrodoriChessMultistagePlay *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // al
  uint32_t current_scene_time; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  current_scene_time = Scene::getSceneTimeSeconds(this->scene_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( current_scene_time > this->stage_begin_scene_time_ )
  {
    v2 = current_scene_time - this->stage_begin_scene_time_;
    v3 = *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000);
    if ( v3 != 0 && v3 <= 3 )
    {
      LOBYTE(v1) = v3 != 0;
      __asan_report_store4(&this->kill_stage_cost_time_, v1, (_BYTE)this + 112);
    }
    this->kill_stage_cost_time_ = v2;
  }
};

// Line 234: range 000000001513EDD6-000000001513F95C
void __cdecl IrodoriChessMultistagePlay::writeSettleLog(
        IrodoriChessMultistagePlay *const this,
        Player *player,
        uint32_t use_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  DungeonScene *v9; // rax
  const std::string *v10; // rax
  IrodoriTowerDefensePlay *Play; // rax
  uint32_t SettleScore; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  IrodoriTowerDefensePlay *v16; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v17; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v21; // rax
  std::pair<unsigned int const,unsigned int> *v22; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t v26; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v27; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  google::protobuf::RepeatedField<unsigned int> *v30; // rax
  std::string v31; // [rsp+0h] [rbp-1D0h]
  void (__fastcall *v32)(IrodoriTowerDefensePlay *, std::string *); // [rsp+8h] [rbp-1C8h]
  IrodoriTowerDefensePlay *v33; // [rsp+10h] [rbp-1C0h]
  uint32_t entrance_point_id; // [rsp+30h] [rbp-1A0h]
  uint32_t card_id; // [rsp+34h] [rbp-19Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-198h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-190h] BYREF
  const std::set<unsigned int> *selected_card_set; // [rsp+48h] [rbp-188h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-180h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-178h]
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+60h] [rbp-170h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-168h]
  const data::IrodoriChessMapPointExcelConfig *point_config_ptr; // [rsp+70h] [rbp-160h]
  proto_log::IrodoriChessEntranceInfo *entrance_info; // [rsp+78h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+80h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+88h] [rbp-148h]
  proto_log::IrodoriChessGearInfo *gear_info; // [rsp+90h] [rbp-140h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+98h] [rbp-138h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+A0h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v50; // [rsp+B0h] [rbp-120h] BYREF
  std::string v51; // [rsp+C0h] [rbp-110h] BYREF
  char v52[240]; // [rsp+E0h] [rbp-F0h] BYREF

  *((_DWORD *)&v31._anon_0._M_allocated_capacity + 3) = use_time;
  v3 = (unsigned __int64)v52;
  v31._M_dataplus._M_p = v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 10 holder:240 48 16 21 dungeon_scene_ptr:235 80 16 11 log_ptr:241 112 48 16 gear_num_map:257";
  *(_QWORD *)(v3 + 16) = IrodoriChessMultistagePlay::writeSettleLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<DungeonScene,Scene>((Scene *)(v3 + 48));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 48)) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v51, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE0Du, v31);
    std::string::~string(&v51);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyIrodoriChessDungeonSettle>();
    if ( !std::operator==<proto_log::PlayerLogBodyIrodoriChessDungeonSettle>(
            0LL,
            (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriChessDungeonSettle> *)(v3 + 80)) )
    {
      v31._anon_0._M_allocated_capacity = (std::string::size_type)std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      DungeonId = DungeonScene::getDungeonId(v7);
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_dungeon_id(
        (proto_log::PlayerLogBodyIrodoriChessDungeonSettle *const)v31._anon_0._M_allocated_capacity,
        DungeonId);
      v31._anon_0._M_allocated_capacity = (std::string::size_type)std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v10 = DungeonScene::getTransaction[abi:cxx11](v9);
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_transaction(
        (proto_log::PlayerLogBodyIrodoriChessDungeonSettle *const)v31._anon_0._M_allocated_capacity,
        v10);
      v31._anon_0._M_allocated_capacity = (std::string::size_type)std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      Play = IrodoriChessMultistagePlay::getPlay(this);
      SettleScore = IrodoriTowerDefensePlay::getSettleScore(Play);
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_settle_score(
        (proto_log::PlayerLogBodyIrodoriChessDungeonSettle *const)v31._anon_0._M_allocated_capacity,
        SettleScore);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_use_time(
        v13,
        *((google::protobuf::uint32 *)&v31._anon_0._M_allocated_capacity + 3));
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_kill_stage_cost_time(v14, this->kill_stage_cost_time_);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyIrodoriChessDungeonSettle::set_kill_monster_num(v15, this->kill_monsters_);
      v16 = IrodoriChessMultistagePlay::getPlay(this);
      selected_card_set = IrodoriTowerDefensePlay::getSelectedCardsSet(v16);
      __for_range = selected_card_set;
      __for_begin._M_current = (const unsigned int *)std::set<unsigned int>::begin(selected_card_set)._M_node;
      __for_end = (std::pair<unsigned int const,unsigned int>)std::set<unsigned int>::end(selected_card_set)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      {
        v17 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        card_id = *v17;
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        proto_log::PlayerLogBodyIrodoriChessDungeonSettle::add_selected_card_id_list(v18, card_id);
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
      v33 = IrodoriChessMultistagePlay::getPlay(this);
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = (unsigned __int64)(v33->_vptr_DescribalBase + 13);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      v32 = *(void (__fastcall **)(IrodoriTowerDefensePlay *, std::string *))v19;
      std::function<ForeachPolicy ()(FoundationComp &)>::function<IrodoriChessMultistagePlay::writeSettleLog(Player &,unsigned int)::{lambda(FoundationComp &)#1},void,void>(
        (std::function<ForeachPolicy(FoundationComp&)> *const)&v51,
        (IrodoriChessMultistagePlay::writeSettleLog::<lambda(FoundationComp&)>)__PAIR128__(
                                                                                 v3 + 112,
                                                                                 (unsigned __int64)this));
      v32(v33, &v51);
      std::function<ForeachPolicy ()(FoundationComp &)>::~function((std::function<ForeachPolicy(FoundationComp&)> *const)&v51);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.cpp",
        "writeSettleLog",
        272);
      v20 = common::milog::MiLogStream::operator<<<IrodoriChessMultistagePlay,(IrodoriChessMultistagePlay*)0>(
              (common::milog::MiLogStream *const)&v51,
              this);
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v20,
        (const std::map<unsigned int,unsigned int> *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v51);
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 112);
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 112))._M_node;
      __for_begin._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                &__for_begin_0,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin) )
      {
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        v22 = v21;
        if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v21 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v21, 8LL);
        }
        __for_end = *v22;
        gear_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
        num = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        gear_info = proto_log::PlayerLogBodyIrodoriChessDungeonSettle::add_gear_info_list(v23);
        if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::IrodoriChessGearInfo::set_gear_id(gear_info, *gear_id);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::IrodoriChessGearInfo::set_num(gear_info, *num);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v50);
      p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->design_config.txt_config_mgr.activity_irodori_config_mgr;
      v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v26 = DungeonScene::getDungeonId(v25);
      map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId(
                         p_activity_irodori_config_mgr,
                         v26);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
      if ( map_config_ptr )
      {
        __for_range_1 = &map_config_ptr->entrance_point_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&map_config_ptr->entrance_point_list)._M_current;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
        {
          v27 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          entrance_point_id = *v27;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v50);
          v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
          point_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessMapPointExcelConfig(
                               &v28->design_config.txt_config_mgr.activity_irodori_config_mgr,
                               entrance_point_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
          if ( point_config_ptr )
          {
            v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            entrance_info = proto_log::PlayerLogBodyIrodoriChessDungeonSettle::add_entrance_info_list(v29);
            proto_log::IrodoriChessEntranceInfo::set_entrance_point_id(entrance_info, entrance_point_id);
            v30 = proto_log::IrodoriChessEntranceInfo::mutable_pool_id_list(entrance_info);
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              &point_config_ptr->monster_pool_list,
              v30);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v50, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriChessDungeonSettle,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriChessDungeonSettle> *)(v3 + 80));
      Player::printStatLog(player, &p_body_ptr, &v50, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v50);
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
    }
    std::shared_ptr<proto_log::PlayerLogBodyIrodoriChessDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIrodoriChessDungeonSettle> *const)(v3 + 80));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 48));
  if ( v31._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 258: range 000000001513EBE4-000000001513EDD4
ForeachPolicy __cdecl IrodoriChessMultistagePlay::writeSettleLog(Player &,unsigned int)::{lambda(FoundationComp &)#1}::operator()(
        const IrodoriChessMultistagePlay::writeSettleLog::<lambda(FoundationComp&)> *const __closure,
        FoundationComp *foundation_comp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool GearIdByGadgetId; // r14
  unsigned __int64 v8; // rax
  uint32_t gear_gadget_id; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 gear_id:265";
  *(_QWORD *)(v2 + 16) = IrodoriChessMultistagePlay::writeSettleLog(Player &,unsigned int)::{lambda(FoundationComp &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  gear_gadget_id = FoundationComp::getGearGadgetId(foundation_comp);
  if ( gear_gadget_id )
  {
    *(_DWORD *)(v2 + 32) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    GearIdByGadgetId = ActivityIrodoriExcelConfigMgr::getGearIdByGadgetId(
                         &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                         gear_gadget_id,
                         (uint32_t *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( GearIdByGadgetId )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__gear_num_map >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                               __closure->__gear_num_map,
                               (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load4();
      ++*(_DWORD *)v8;
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
    result = FOREACH_CONTINUE;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
