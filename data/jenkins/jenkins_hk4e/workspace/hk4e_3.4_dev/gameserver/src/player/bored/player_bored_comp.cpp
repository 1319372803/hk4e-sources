// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/bored/player_bored_comp.cpp

// Line 28: range 00000000150CB602-00000000150CB690
int32_t __cdecl PlayerBoredComp::fromBin(PlayerBoredComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  char v5; // al
  const proto::PlayerBoredCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  if ( !proto::PlayerDataBin::has_bored_bin(player_data_bin) )
    return 0;
  proto_comp = proto::PlayerDataBin::bored_bin(player_data_bin);
  LOBYTE(v3) = proto::PlayerBoredCompBin::is_open(proto_comp);
  v4 = v3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_open_ >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(player_data_bin) = v5 != 0;
    __asan_report_store1(&this->is_open_, player_data_bin, v4);
  }
  this->is_open_ = v4;
  return 0;
};

// Line 42: range 00000000150CB692-00000000150CB704
int32_t __cdecl PlayerBoredComp::toBin(PlayerBoredComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerBoredCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_bored_bin(player_data_bin);
  if ( *(char *)(((unsigned __int64)&this->is_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_open_);
  proto::PlayerBoredCompBin::set_is_open(proto_comp, this->is_open_);
  return 0;
};

// Line 51: range 00000000150CB706-00000000150CBE0D
int32_t __cdecl PlayerBoredComp::init(PlayerBoredComp *const this)
{
  unsigned __int64 p_M_element_count; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  int32_t v4; // ebx
  int32_t result; // eax
  PlayerEventComp *event_comp; // [rsp+98h] [rbp-138h]
  PlayerEventComp v7; // [rsp+A0h] [rbp-130h] BYREF

  p_M_element_count = (unsigned __int64)&v7.event_center_.observer_list_map_._M_h._M_element_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_element_count = v2;
  }
  *(_QWORD *)p_M_element_count = 1102416563LL;
  *(_QWORD *)(p_M_element_count + 8) = "2 32 16 11 this_ptr:52 64 16 11 this_wtr:58";
  *(_QWORD *)(p_M_element_count + 16) = PlayerBoredComp::init;
  v3 = (_DWORD *)(p_M_element_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerBoredComp>((PlayerBoredComp *)(p_M_element_count + 32));
  if ( std::operator==<PlayerBoredComp>(0LL, (const std::shared_ptr<PlayerBoredComp> *)(p_M_element_count + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "init",
      55);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.event_center_,
      (const char (*)[17])"toThisPtr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.event_center_);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerBoredComp>::weak_ptr<PlayerBoredComp,void>(
      (std::weak_ptr<PlayerBoredComp> *const)(p_M_element_count + 64),
      (const std::shared_ptr<PlayerBoredComp> *)(p_M_element_count + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,KillMonsterEvent>(
      &v7,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const KillMonsterEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,GatherEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const GatherEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,AccelerateEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const AccelerateEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,UseItemEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const UseItemEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,ChangeAvatarEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const ChangeAvatarEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,SkillEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const SkillEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const PostEnterSceneEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::weak_ptr(
      (std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBoredComp> *)(p_M_element_count + 64));
    PlayerEventComp::registerObserver<PlayerBoredComp,MonsterDieEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (std::weak_ptr<PlayerBoredComp> *)event_comp,
      (void (*)(PlayerBoredComp *, const MonsterDieEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    v4 = 0;
    std::weak_ptr<PlayerBoredComp>::~weak_ptr((std::weak_ptr<PlayerBoredComp> *const)(p_M_element_count + 64));
  }
  std::shared_ptr<PlayerBoredComp>::~shared_ptr((std::shared_ptr<PlayerBoredComp> *const)(p_M_element_count + 32));
  result = v4;
  if ( &v7.event_center_.observer_list_map_._M_h._M_element_count == (std::_Hashtable<std::type_index,std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,std::allocator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> > >,std::__detail::_Select1st,std::equal_to<std::type_index>,std::hash<std::type_index>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_element_count )
  {
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_element_count = 1172321806LL;
    *(_QWORD *)((p_M_element_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_element_count >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 75: range 00000000150CBE0E-00000000150CC11D
int32_t __cdecl PlayerBoredComp::onLogin(PlayerBoredComp *const this, bool is_new_player)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  uint64_t v5; // rcx
  PlayerUnixTimer *p_event_game_timer; // rdi
  char v7; // al
  data::BoardEventType val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::BoredEventExcelConfig *event_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  PlayerBoredComp::clear(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  event_config_ptr = BoredExcelConfigMgr::findBoredEventExcelConfig(
                       &v2->design_config.txt_config_mgr.bored_config_mgr,
                       0x65u);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( !event_config_ptr )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->param >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&event_config_ptr->param);
  }
  if ( event_config_ptr->param )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->param >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config_ptr->param);
    }
    v5 = SAFE_MULTIPLY<unsigned int,int>(event_config_ptr->param, 1000);
    if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->check_interval_ms_, 1000LL);
    this->check_interval_ms_ = v5;
  }
  else
  {
LABEL_5:
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "onLogin",
      81);
    v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"findBoredEventExcelConfig ");
    val = BOARD_EVENT_GAME;
    v4 = common::milog::MiLogStream::operator<<<data::BoardEventType,(data::BoardEventType*)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v4, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->check_interval_ms_, " failed");
    this->check_interval_ms_ = 300000LL;
  }
  if ( common::tools::MiTimer::isActive(&this->event_game_timer_) )
    goto LABEL_18;
  p_event_game_timer = &this->event_game_timer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
  {
    p_event_game_timer = (PlayerUnixTimer *)&this->check_interval_ms_;
    __asan_report_load8(&this->check_interval_ms_);
  }
  if ( PlayerUnixTimer::startMS(
         p_event_game_timer,
         this->check_interval_ms_,
         1,
         "./src/player/bored/player_bored_comp.cpp",
         "onLogin",
         89) )
  {
    v7 = 1;
  }
  else
  {
LABEL_18:
    v7 = 0;
  }
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "onLogin",
      91);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v13,
      (const char (*)[30])"event_game_timer start failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  return 0;
};

// Line 98: range 00000000150CC11E-00000000150CC141
void __cdecl PlayerBoredComp::onEventGameTimer(PlayerBoredComp *const this, uint64_t now_ms)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_GAME);
};

// Line 103: range 00000000150CC142-00000000150CC165
void __cdecl PlayerBoredComp::onKillMonster(PlayerBoredComp *const this, const KillMonsterEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_KILL_MONSTER);
};

// Line 108: range 00000000150CC166-00000000150CC189
void __cdecl PlayerBoredComp::onGather(PlayerBoredComp *const this, const GatherEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_GATHER);
};

// Line 113: range 00000000150CC18A-00000000150CC1AD
void __cdecl PlayerBoredComp::onAccelerate(PlayerBoredComp *const this, const AccelerateEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_ACCELERATE);
};

// Line 118: range 00000000150CC1AE-00000000150CC1D1
void __cdecl PlayerBoredComp::onUseItem(PlayerBoredComp *const this, const UseItemEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_USE_ITEM);
};

// Line 123: range 00000000150CC1D2-00000000150CC1F5
void __cdecl PlayerBoredComp::onChangeAvatar(PlayerBoredComp *const this, const ChangeAvatarEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_CHANGE_AVATAR);
};

// Line 128: range 00000000150CC1F6-00000000150CC219
void __cdecl PlayerBoredComp::onSkill(PlayerBoredComp *const this, const SkillEvent *a2)
{
  PlayerBoredComp::onEventHappen(this, BOARD_EVENT_SKILL);
};

// Line 133: range 00000000150CC21A-00000000150CC238
void __cdecl PlayerBoredComp::onPostEnterSceneEvent(PlayerBoredComp *const this, const PostEnterSceneEvent *a2)
{
  PlayerBoredComp::clear(this);
};

// Line 139: range 00000000150CC23A-00000000150CC2D6
void __cdecl PlayerBoredComp::onMonsterDie(PlayerBoredComp *const this, const MonsterDieEvent *event)
{
  uint32_t entity_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->entity_id);
  }
  entity_id = event->entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_monster_entity_id_);
  }
  if ( entity_id == this->create_monster_entity_id_ )
    PlayerBoredComp::monsterActionDie(this);
};

// Line 147: range 00000000150CC2D8-00000000150CCCDE
void __fastcall PlayerBoredComp::onEventHappen(PlayerBoredComp *const this, data::BoardEventType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::unordered_map<unsigned int,int>::mapped_type *v10; // rax
  int32_t *v11; // rdx
  int add_bored; // r14d
  std::unordered_map<unsigned int,int>::mapped_type *v13; // rax
  int *v14; // rdx
  SelectType_8 v15; // r14d
  std::unordered_map<unsigned int,int>::key_type *v16; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v17; // rax
  SelectType_8 *v18; // rdx
  char v19; // cl
  std::unordered_map<unsigned int,int>::mapped_type *v20; // rax
  int32_t *v21; // rdx
  int32_t v22; // ecx
  char v23; // al
  int32_t max_bored; // r14d
  std::unordered_map<unsigned int,int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v26; // rax
  int32_t *v27; // rdx
  char v28; // cl
  std::unordered_map<unsigned int,int>::mapped_type *v29; // rax
  int32_t *v30; // rdx
  int32_t v31; // ecx
  char v32; // al
  int32_t v33; // r14d
  std::unordered_map<unsigned int,int>::key_type *v34; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v35; // rax
  int32_t *v36; // rdx
  char v37; // cl
  std::unordered_map<unsigned int,int>::mapped_type *v38; // rax
  _DWORD *v39; // rdx
  common::milog::MiLogStream *v40; // r14
  std::unordered_map<unsigned int,int>::mapped_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  std::unordered_map<unsigned int,int>::key_type v48; // [rsp+1Ch] [rbp-D4h] BYREF
  std::unordered_map<unsigned int,int>::key_type __k; // [rsp+20h] [rbp-D0h] BYREF
  int32_t old; // [rsp+24h] [rbp-CCh]
  const data::BoredEventExcelConfig *bored_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v52; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v53; // [rsp+40h] [rbp-B0h] BYREF
  char v54[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 add_bored:182 64 4 8 type:146";
  *(_QWORD *)(v2 + 16) = PlayerBoredComp::onEventHappen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = type;
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_action_begin_);
  if ( !this->is_action_begin_ && PlayerBoredComp::isEnabled(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v52);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
    bored_config_ptr = BoredExcelConfigMgr::findBoredEventExcelConfig(
                         &v5->design_config.txt_config_mgr.bored_config_mgr,
                         *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v52);
    if ( bored_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&bored_config_ptr->is_enable >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&bored_config_ptr->is_enable);
      if ( !bored_config_ptr->is_enable )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/bored/player_bored_comp.cpp",
          "onEventHappen",
          165);
        v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v53, (const char (*)[7])"type: ");
        v9 = common::milog::MiLogStream::operator<<<data::BoardEventType,(data::BoardEventType*)0>(
               v8,
               (const data::BoardEventType *)(v2 + 64));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" is_enable false");
        common::milog::MiLogStream::~MiLogStream(&v53);
      }
      else
      {
        __k = *(_DWORD *)(v2 + 64);
        v10 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        old = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->add_bored >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bored_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bored_config_ptr->add_bored >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&bored_config_ptr->add_bored);
        }
        add_bored = bored_config_ptr->add_bored;
        __k = *(_DWORD *)(v2 + 64);
        v13 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = SAFE_ADD<int,int>(*v14, add_bored);
        v48 = *(_DWORD *)(v2 + 64);
        v16 = &v48;
        v17 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &v48);
        v18 = v17;
        v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
        {
          LOBYTE(v16) = v19 != 0;
          __asan_report_store4(v17, v16, v17);
        }
        *v18 = v15;
        if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bored_config_ptr->max_bored);
        }
        if ( bored_config_ptr->max_bored < 0 )
          goto LABEL_31;
        __k = *(_DWORD *)(v2 + 64);
        v20 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = *v21;
        if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bored_config_ptr->max_bored);
        }
        if ( v22 <= bored_config_ptr->max_bored )
LABEL_31:
          v23 = 0;
        else
          v23 = 1;
        if ( v23 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bored_config_ptr->max_bored);
          }
          max_bored = bored_config_ptr->max_bored;
          __k = *(_DWORD *)(v2 + 64);
          p_k = &__k;
          v26 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
          v27 = v26;
          v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
          if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
          {
            LOBYTE(p_k) = v28 != 0;
            __asan_report_store4(v26, p_k, v26);
          }
          *v27 = max_bored;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bored_config_ptr->max_bored);
          }
          if ( bored_config_ptr->max_bored >= 0 )
            goto LABEL_47;
          __k = *(_DWORD *)(v2 + 64);
          v29 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          v31 = *v30;
          if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bored_config_ptr->max_bored);
          }
          if ( v31 >= bored_config_ptr->max_bored )
LABEL_47:
            v32 = 0;
          else
            v32 = 1;
          if ( v32 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&bored_config_ptr->max_bored >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&bored_config_ptr->max_bored);
            }
            v33 = bored_config_ptr->max_bored;
            __k = *(_DWORD *)(v2 + 64);
            v34 = &__k;
            v35 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
            v36 = v35;
            v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
            if ( v37 != 0 && (char)(((unsigned __int8)v35 & 7) + 3) >= v37 )
            {
              LOBYTE(v34) = v37 != 0;
              __asan_report_store4(v35, v34, v35);
            }
            *v36 = v33;
          }
        }
        __k = *(_DWORD *)(v2 + 64);
        v38 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &__k);
        v39 = v38;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v38);
        }
        *(_DWORD *)(v2 + 48) = *v39 - old;
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/bored/player_bored_comp.cpp",
          "onEventHappen",
          183);
        v40 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v53,
                (const char (*)[25])"event_bored_map_[type]: ");
        v48 = *(_DWORD *)(v2 + 64);
        v41 = std::unordered_map<unsigned int,int>::operator[](&this->event_bored_map_, &v48);
        v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, v41);
        v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])" bored_: ");
        v44 = common::milog::MiLogStream::operator<<<int,(int *)0>(v43, &this->bored_);
        v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])" add_bored: ");
        v46 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, (const int *)(v2 + 48));
        v47 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v46, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        __k = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &__k);
        common::milog::MiLogStream::~MiLogStream(&v53);
        PlayerBoredComp::addBored(this, *(_DWORD *)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/bored/player_bored_comp.cpp",
        "onEventHappen",
        160);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v53,
             (const char (*)[27])"findBoredEventExcelConfig ");
      v7 = common::milog::MiLogStream::operator<<<data::BoardEventType,(data::BoardEventType*)0>(
             v6,
             (const data::BoardEventType *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
  }
  if ( v54 == (char *)v2 )
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

// Line 188: range 00000000150CCCE0-00000000150CD09D
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBoredComp::addBored(PlayerBoredComp *const this, int32_t value)
{
  int32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  unsigned int bored; // esi
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  uint32_t min_bored_limit; // [rsp+18h] [rbp-48h]
  uint32_t max_bored_limit; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->bored_);
  }
  *(_QWORD *)&value = (unsigned int)value;
  v2 = SAFE_ADD<int,int>(this->bored_, value);
  v3 = *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000);
  LOBYTE(value) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->bored_, *(_QWORD *)&value, v4);
  this->bored_ = v2;
  if ( this->bored_ >= 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( !PlayerAvatarComp::getMonsterAlertCount(AvatarComp) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      min_bored_limit = ConstValueExcelConfigMgr::getMinBoredLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      max_bored_limit = ConstValueExcelConfigMgr::getMaxBoredLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      v8 = max_bored_limit;
      v9 = common::tools::RandomUtils::rand<unsigned int>(min_bored_limit, max_bored_limit);
      v10 = *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(&this->bored_threshold_, v8, v9);
      }
      this->bored_threshold_ = v9;
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/bored/player_bored_comp.cpp",
        "addBored",
        208);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v21, (const char (*)[9])"bored_: ");
      v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, &this->bored_);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" rand_threshold: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->bored_threshold_);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_action_begin_);
      if ( !this->is_action_begin_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->bored_);
        }
        bored = this->bored_;
        if ( *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->bored_threshold_);
        }
        if ( bored > this->bored_threshold_ )
          PlayerBoredComp::actionBegin(this);
      }
    }
  }
  else
  {
    this->bored_ = 0;
  }
};

// Line 218: range 00000000150CD09E-00000000150CD2BD
bool __cdecl PlayerBoredComp::isEnabled(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v6; // r14
  PlayerSceneComp *SceneComp; // rax
  Scene *v8; // rax
  SceneAreaComp *AreaComp; // rax
  bool result; // al
  uint32_t level2_area_id; // [rsp+1Ch] [rbp-74h]
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:220";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::isEnabled;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32))
    || (v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
        Scene::getSceneType(v4) != SCENE_WORLD) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    level2_area_id = PlayerSceneComp::getLevel2AreaId(SceneComp);
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AreaComp = Scene::getAreaComp(v8);
    v6 = SceneAreaComp::getTerrainType(AreaComp, level2_area_id) == AREA_TERRAIN_OUTDOOR
      && PlayerBoredComp::isOpen(this);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v6;
  if ( v12 == (char *)v1 )
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

// Line 241: range 00000000150CD2BE-00000000150CD474
void __cdecl PlayerBoredComp::actionBegin(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 action_type:243";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::actionBegin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  *(_DWORD *)(v1 + 32) = BoredExcelConfigMgr::randomBoredActionType(&v4->design_config.txt_config_mgr.bored_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/bored/player_bored_comp.cpp",
    "actionBegin",
    244);
  v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v7,
         (const char (*)[24])"randomBoredActionType: ");
  common::milog::MiLogStream::operator<<<data::BoredActionType,(data::BoredActionType*)0>(
    v5,
    (const data::BoredActionType *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  PlayerBoredComp::executeAction(this, *(data::BoredActionType *)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 249: range 00000000150CD476-00000000150CD64A
void __fastcall PlayerBoredComp::executeAction(PlayerBoredComp *const this, __int64 action_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 action_type:248";
  *(_QWORD *)(v2 + 16) = PlayerBoredComp::executeAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = action_type;
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_action_begin_, action_type, &this->is_action_begin_);
  this->is_action_begin_ = 1;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 == 3 )
  {
    PlayerBoredComp::enhanceGatherAction(this);
  }
  else
  {
    if ( v5 > 3 )
      goto LABEL_14;
    if ( v5 == 1 )
    {
      PlayerBoredComp::createMonsterAction(this);
      goto LABEL_15;
    }
    if ( v5 == 2 )
    {
      PlayerBoredComp::ambushAction(this);
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/bored/player_bored_comp.cpp",
        "executeAction",
        264);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v7, (const char (*)[31])off_256FD400);
      common::milog::MiLogStream::operator<<<data::BoredActionType,(data::BoredActionType*)0>(
        v6,
        (const data::BoredActionType *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
LABEL_15:
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 269: range 00000000150CD64C-00000000150CD666
void __cdecl PlayerBoredComp::ambushAction(PlayerBoredComp *const this)
{
  PlayerBoredComp::actionEnd(this);
};

// Line 275: range 00000000150CD668-00000000150CD682
void __cdecl PlayerBoredComp::enhanceGatherAction(PlayerBoredComp *const this)
{
  PlayerBoredComp::actionEnd(this);
};

// Line 281: range 00000000150CD684-00000000150CD722
void __cdecl PlayerBoredComp::createMonsterAction(PlayerBoredComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/bored/player_bored_comp.cpp",
    "createMonsterAction",
    282);
  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
    &v1,
    (const char (*)[37])"PlayerBoredComp::createMonsterAction");
  common::milog::MiLogStream::~MiLogStream(&v1);
  if ( PlayerBoredComp::doCreateMonsterAction(this) )
    PlayerBoredComp::actionEnd(this);
};

// Line 291: range 00000000150CD724-00000000150CE615
int32_t __cdecl PlayerBoredComp::doCreateMonsterAction(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  DropExcelConfigMgr *p_drop_config_mgr; // rcx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const Vector3 *v17; // rax
  Scene *v18; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rsi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __int64 EntityId; // rdx
  char v26; // al
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const Vector3 *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rcx
  std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  Player *player; // r14
  int32_t result; // eax
  uint32_t drop_id; // [rsp+18h] [rbp-348h]
  uint32_t range; // [rsp+1Ch] [rbp-344h]
  uint32_t alive_time; // [rsp+20h] [rbp-340h]
  const data::BoredMonsterPoolConfig *monster_config_ptr; // [rsp+28h] [rbp-338h]
  const data::MonsterDropExcelConfig *monster_drop_config_ptr; // [rsp+30h] [rbp-330h]
  proto::Vector *proto_position; // [rsp+38h] [rbp-328h]
  std::shared_ptr<const google::protobuf::Message> v45; // [rsp+40h] [rbp-320h] BYREF
  common::milog::MiLogStream v46; // [rsp+50h] [rbp-310h] BYREF
  std::string val; // [rsp+70h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v48; // [rsp+90h] [rbp-2D0h] BYREF
  char v49[688]; // [rsp+B0h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 9 level:297 64 16 13 group_ptr:305 96 16 13 scene_ptr:311 128 16 14 avatar_ptr:317 160 16"
                        " 15 monster_ptr:348 192 16 14 notify_ptr:359 224 352 9 param:338";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::doCreateMonsterAction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862738] = -202116109;
  v3[536862739] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
  range = ConstValueExcelConfigMgr::getBoredCreateMonsterRange(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
  alive_time = ConstValueExcelConfigMgr::getBoredCreateMonsterAliveTime(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
  ConstValueExcelConfigMgr::getBoredCreateMonsterMinRange(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
  *(_DWORD *)(v1 + 48) = PlayerBoredComp::getAvatarAvgLevel(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
  monster_config_ptr = BoredExcelConfigMgr::randomBoredMonsterConfig(
                         &v7->design_config.txt_config_mgr.bored_config_mgr,
                         *(_DWORD *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
  if ( monster_config_ptr )
  {
    PlayerBoredComp::findCandidateGroupPtr((PlayerBoredComp *const)(v1 + 64), (uint32_t)this, range);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/bored/player_bored_comp.cpp",
        "doCreateMonsterAction",
        308);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v48,
        (const char (*)[29])"findCandidateGroupPtr failed");
      common::milog::MiLogStream::~MiLogStream(&v48);
      v10 = -1;
    }
    else
    {
      std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Group::getScene((const Group *const)(v1 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/bored/player_bored_comp.cpp",
          "doCreateMonsterAction",
          314);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v48,
          (const char (*)[27])"group_ptr->getScene failed");
        common::milog::MiLogStream::~MiLogStream(&v48);
        v10 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getCurAvatar((Player *const)(v1 + 128));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 128)) )
        {
          v10 = -1;
        }
        else if ( PlayerUnixTimer::startS(
                    &this->create_monster_timer_,
                    alive_time,
                    0,
                    "./src/player/bored/player_bored_comp.cpp",
                    "doCreateMonsterAction",
                    324) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/bored/player_bored_comp.cpp",
            "doCreateMonsterAction",
            326);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v48, (const char (*)[16])"addTimer failed");
          common::milog::MiLogStream::~MiLogStream(&v48);
          v10 = -1;
        }
        else
        {
          drop_id = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v45);
          p_drop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.drop_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&monster_config_ptr->level);
          }
          monster_drop_config_ptr = DropExcelConfigMgr::findMonsterDropConfig(
                                      p_drop_config_mgr,
                                      monster_config_ptr->level,
                                      &monster_config_ptr->drop_tag);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
          if ( monster_drop_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_drop_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&monster_drop_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&monster_drop_config_ptr->drop_id);
            }
            drop_id = monster_drop_config_ptr->drop_id;
          }
          MonsterParam::MonsterParam((MonsterParam *const)(v1 + 224));
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->monster_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&monster_config_ptr->monster_id);
          }
          *(_DWORD *)(v1 + 224) = monster_config_ptr->monster_id;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&monster_config_ptr->level);
          }
          *(_DWORD *)(v1 + 260) = monster_config_ptr->level;
          *(_DWORD *)(v1 + 272) = drop_id;
          if ( *(char *)(((unsigned __int64)&monster_config_ptr->is_elite >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&monster_config_ptr->is_elite);
          *(_BYTE *)(v1 + 313) = monster_config_ptr->is_elite;
          M_current = std::vector<unsigned int>::cend(&monster_config_ptr->affix_vec)._M_current;
          v13._M_current = std::vector<unsigned int>::cbegin(&monster_config_ptr->affix_vec)._M_current;
          std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v1 + 320),
            v13,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
          v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          Position = (unsigned __int64)Group::getPosition(v14);
          if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
            && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
          {
            Position = __asan_report_load_n(Position, 12LL);
          }
          *(_QWORD *)(v1 + 236) = *(_QWORD *)Position;
          *(_DWORD *)(v1 + 244) = *(_DWORD *)(Position + 8);
          v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          v17 = Entity::getPosition((const Entity *const)v16);
          *(Vector3 *)(v1 + 248) = operator-(v17, (const Vector3 *)(v1 + 236));
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          *(_DWORD *)(v1 + 232) = Scene::genNewEntityId(v18, PROT_ENTITY_MONSTER);
          EntityMgr::createMonster((const MonsterParam *)(v1 + 160));
          if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v1 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/bored/player_bored_comp.cpp",
              "doCreateMonsterAction",
              351);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v48,
              (const char (*)[30])"createTemporaryMonster failed");
            common::milog::MiLogStream::~MiLogStream(&v48);
            v10 = -1;
          }
          else
          {
            v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v19);
            v21 = *(_QWORD *)v20->baseclass_0 + 56LL;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8(*(_QWORD *)v20->baseclass_0 + 56LL);
            v22 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v21;
            v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v22(v20, v23, &VisionContext::meet_context);
            v24 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            EntityId = Entity::getEntityId((const Entity *const)v24);
            v26 = *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000);
            if ( v26 != 0 && v26 <= 3 )
            {
              LOBYTE(v23) = v26 != 0;
              __asan_report_store4(&this->create_monster_entity_id_, v23, EntityId);
            }
            this->create_monster_entity_id_ = EntityId;
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/bored/player_bored_comp.cpp",
              "doCreateMonsterAction",
              356);
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v46,
                    (const char (*)[13])"avatar_pos: ");
            v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            v29 = Entity::getPosition((const Entity *const)v28);
            Vector3::toString[abi:cxx11](&val, v29);
            v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &val);
            v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v30,
                    (const char (*)[15])" monster pos: ");
            Vector3::toString[abi:cxx11]((std::string *)&v48, (const Vector3 *const)(v1 + 236));
            v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v48);
            v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" monster: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v33,
              (const unsigned int *)(v1 + 224));
            std::string::~string(&v48);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v46);
            common::tools::perf::make_shared<proto::MarkEntityInMinMapNotify>();
            v34 = std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->create_monster_entity_id_);
            }
            proto::MarkEntityInMinMapNotify::set_entity_id(v34, this->create_monster_entity_id_);
            v35 = std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            proto::MarkEntityInMinMapNotify::set_monster_id(v35, *(_DWORD *)(v1 + 224));
            v36 = std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            proto_position = proto::MarkEntityInMinMapNotify::mutable_position(v36);
            Vector3::operator proto::Vector((proto::Vector *)&v48, (const Vector3 *const)(v1 + 236));
            proto::Vector::operator=(proto_position, (proto::Vector *)&v48);
            proto::Vector::~Vector((proto::Vector *const)&v48);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            player = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::MarkEntityInMinMapNotify>((const std::shared_ptr<proto::MarkEntityInMinMapNotify> *)&v45);
            Player::sendMessage(player, &v45, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v45);
            v10 = 0;
            std::shared_ptr<proto::MarkEntityInMinMapNotify>::~shared_ptr((std::shared_ptr<proto::MarkEntityInMinMapNotify> *const)(v1 + 192));
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v1 + 160));
          MonsterParam::~MonsterParam((MonsterParam *const)(v1 + 224));
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "doCreateMonsterAction",
      301);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v48,
           (const char (*)[26])"randomBoredMonsterConfig ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v10 = -1;
  }
  result = v10;
  if ( v49 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 370: range 00000000150CE67A-00000000150CE9BE
uint32_t __cdecl PlayerBoredComp::getAvatarAvgLevel(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerAvatarComp *AvatarComp; // r14
  unsigned int *M_current; // r15
  unsigned int *v6; // r14
  std::vector<unsigned int>::iterator v7; // rax
  std::greater<unsigned int> v8; // cl
  unsigned int v9; // r14d
  std::vector<unsigned int>::iterator v10; // rax
  uint32_t result; // eax
  uint32_t size; // [rsp+10h] [rbp-E0h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v13; // [rsp+18h] [rbp-D8h] BYREF
  std::function<ForeachPolicy(const Avatar&)> p_func; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 iter:384 64 24 20 avatar_level_vec:377";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::getAvatarAvgLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = Player::getAvatarComp(this->player_);
  std::function<ForeachPolicy ()(Avatar const&)>::function<PlayerBoredComp::getAvatarAvgLevel(void)::{lambda(Avatar const&)#1},void,void>(
    &p_func,
    (PlayerBoredComp::getAvatarAvgLevel::<lambda(const Avatar&)>)(v1 + 64));
  PlayerAvatarComp::foreachAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(Avatar const&)>::~function(&p_func);
  *(std::vector<unsigned int>::iterator *)(v1 + 32) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64));
  size = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64));
  if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64)) > 3 )
  {
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    v13._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(&v13, 4LL)._M_current;
    v7._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    std::nth_element<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::greater<unsigned int>>(
      v7,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v6,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
      v8);
    v13._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 32) = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(
                                                                                             &v13,
                                                                                             4LL);
    size = 4;
  }
  if ( size )
  {
    v10._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
    v9 = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
           v10,
           *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 32),
           0)
       / size;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/bored/player_bored_comp.cpp",
      "getAvatarAvgLevel",
      394);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[13])"size is 0!!!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v9 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v9;
  if ( v15 == (char *)v1 )
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

// Line 378: range 00000000150CE616-00000000150CE678
ForeachPolicy __cdecl PlayerBoredComp::getAvatarAvgLevel(void)::{lambda(Avatar const&)#1}::operator()(
        const PlayerBoredComp::getAvatarAvgLevel::<lambda(const Avatar&)> *const __closure,
        const Avatar *avatar)
{
  std::vector<unsigned int> *avatar_level_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  avatar_level_vec = __closure->__avatar_level_vec;
  __x[0] = Creature::getLevel(avatar);
  std::vector<unsigned int>::push_back(avatar_level_vec, __x);
  return 0;
};

// Line 403: range 00000000150CEC80-00000000150CF2C9
// local variable allocation has failed, the output may be wrong!
GroupPtr __cdecl PlayerBoredComp::findCandidateGroupPtr(
        PlayerBoredComp *const this,
        uint32_t range,
        uint32_t min_range)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 Position; // rax
  Scene *v9; // r14
  common::milog::MiLogStream *v10; // r14
  int v11; // eax
  const std::shared_ptr<Group> *v12; // rax
  GroupPtr result; // rax
  PlayerBoredComp::findCandidateGroupPtr::<lambda(Group&)> v14; // [rsp-20h] [rbp-180h]
  uint32_t min_rangea; // [rsp+8h] [rbp-158h]
  uint32_t selected; // [rsp+24h] [rbp-13Ch]
  unsigned __int64 val; // [rsp+28h] [rbp-138h] BYREF
  std::function<ForeachPolicy(Group&)> p_func; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-110h] BYREF
  char v21[240]; // [rsp+70h] [rbp-F0h] BYREF

  min_rangea = v3;
  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 12 7 pos:418 64 16 14 avatar_ptr:404 96 16 13 scene_ptr:410 128 24 20 nearby_group_vec:419";
  *(_QWORD *)(v4 + 16) = PlayerBoredComp::findCandidateGroupPtr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&range + 24LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&range + 24LL);
  Player::getCurAvatar((Player *const)(v4 + 64));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "findCandidateGroupPtr",
      407);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"getCurAvatar return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&range + 24LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&range + 24LL);
    Player::getSceneComp(*(Player *const *)(*(_QWORD *)&range + 24LL));
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/bored/player_bored_comp.cpp",
        "findCandidateGroupPtr",
        413);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v20,
        (const char (*)[27])"getCurScene return nullptr");
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this);
    }
    else
    {
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v7);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v4 + 32) = *(_QWORD *)Position;
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(Position + 8);
      std::vector<std::shared_ptr<Group>>::vector((std::vector<std::shared_ptr<Group>> *const)(v4 + 128));
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v20.log_ = (common::milog::MiLog *)__PAIR64__(min_rangea, min_range);
      v20.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 32);
      LODWORD(v20.ostr_ptr_._M_refcount._M_pi) = *(_DWORD *)(v4 + 40);
      v20.ostr_ = (common::milog::MilogStringStream *)(v4 + 128);
      v14.__nearby_group_vec = (std::vector<std::shared_ptr<Group>> *)(v4 + 128);
      *(_QWORD *)&v14.__pos.z = v20.ostr_ptr_._M_refcount._M_pi;
      *(_OWORD *)&v14.__range = __PAIR128__((unsigned __int64)v20.ostr_ptr_._M_ptr, __PAIR64__(min_rangea, min_range));
      std::function<ForeachPolicy ()(Group &)>::function<PlayerBoredComp::findCandidateGroupPtr(unsigned int,unsigned int)::{lambda(Group &)#1},void,void>(
        &p_func,
        v14);
      Scene::foreachGroup(v9, &p_func);
      std::function<ForeachPolicy ()(Group &)>::~function(&p_func);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/bored/player_bored_comp.cpp",
        "findCandidateGroupPtr",
        432);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[25])"find nearby group size: ");
      val = std::vector<std::shared_ptr<Group>>::size((const std::vector<std::shared_ptr<Group>> *const)(v4 + 128));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      if ( std::vector<std::shared_ptr<Group>>::empty((const std::vector<std::shared_ptr<Group>> *const)(v4 + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/bored/player_bored_comp.cpp",
          "findCandidateGroupPtr",
          435);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)&p_func,
          (const char (*)[23])"find 0 nearby group!!!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this);
      }
      else
      {
        v11 = std::vector<std::shared_ptr<Group>>::size((const std::vector<std::shared_ptr<Group>> *const)(v4 + 128));
        selected = common::tools::RandomUtils::rand<unsigned int>(0, v11 - 1);
        if ( selected < std::vector<std::shared_ptr<Group>>::size((const std::vector<std::shared_ptr<Group>> *const)(v4 + 128)) )
        {
          v12 = std::vector<std::shared_ptr<Group>>::operator[](
                  (std::vector<std::shared_ptr<Group>> *const)(v4 + 128),
                  selected);
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this, v12);
        }
        else
        {
          std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)this);
        }
      }
      std::vector<std::shared_ptr<Group>>::~vector((std::vector<std::shared_ptr<Group>> *const)(v4 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 420: range 00000000150CE9C0-00000000150CEC7F
ForeachPolicy __cdecl PlayerBoredComp::findCandidateGroupPtr(unsigned int,unsigned int)::{lambda(Group &)#1}::operator()(
        const PlayerBoredComp::findCandidateGroupPtr::<lambda(Group&)> *const __closure,
        Group *group)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 Position; // rax
  char v6; // al
  std::vector<std::shared_ptr<Group>> *nearby_group_vec; // r13
  std::shared_ptr<Group> v8; // rax
  ForeachPolicy result; // eax
  unsigned int distance; // [rsp+14h] [rbp-7Ch]
  const GroupScriptConfig *script_config_ptr; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Group> v12; // [rsp+20h] [rbp-70h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 group_pos:422";
  *(_QWORD *)(v2 + 16) = PlayerBoredComp::findCandidateGroupPtr(unsigned int,unsigned int)::{lambda(Group &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Position = (unsigned __int64)Group::getPosition(group);
  if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000) && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
  {
    Position = __asan_report_load_n(Position, 12LL);
  }
  *(_QWORD *)(v2 + 32) = *(_QWORD *)Position;
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(Position + 8);
  distance = (int)getDistance(&__closure->__pos, (const Vector3 *)(v2 + 32));
  script_config_ptr = Group::getScriptConfig(group);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( distance >= __closure->__range )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__min_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__min_range >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__min_range);
  }
  if ( distance > __closure->__min_range
    && script_config_ptr
    && !std::unordered_map<unsigned int,MonsterScriptConfig>::empty(&script_config_ptr->monster_config_map) )
  {
    v6 = 1;
  }
  else
  {
LABEL_15:
    v6 = 0;
  }
  if ( v6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__nearby_group_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__nearby_group_vec);
    nearby_group_vec = __closure->__nearby_group_vec;
    v8 = toThisPtr<Group>((Group *)&v12);
    std::vector<std::shared_ptr<Group>>::emplace_back<std::shared_ptr<Group>>(
      nearby_group_vec,
      &v12,
      (std::shared_ptr<Group> *)v8._M_refcount._M_pi);
    std::shared_ptr<Group>::~shared_ptr(&v12);
  }
  result = FOREACH_CONTINUE;
  if ( v13 == (char *)v2 )
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

// Line 449: range 00000000150CF2CA-00000000150CF401
void __cdecl PlayerBoredComp::monsterActionTimeout(PlayerBoredComp *const this, uint64_t now_ms)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/bored/player_bored_comp.cpp",
    "monsterActionTimeout",
    450);
  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
    &v2,
    (const char (*)[38])"monsterActionTimeout, and clear bored");
  common::milog::MiLogStream::~MiLogStream(&v2);
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_action_begin_);
  if ( !this->is_action_begin_ )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "monsterActionTimeout",
      453);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v2, (const char (*)[18])"something wrong!!");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  else
  {
    PlayerBoredComp::actionEnd(this);
  }
};

// Line 461: range 00000000150CF402-00000000150CF587
void __cdecl PlayerBoredComp::monsterActionDie(PlayerBoredComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/bored/player_bored_comp.cpp",
    "monsterActionDie",
    462);
  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
    &v1,
    (const char (*)[34])"monsterActionDie, and clear bored");
  common::milog::MiLogStream::~MiLogStream(&v1);
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_action_begin_);
  if ( !this->is_action_begin_ )
  {
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/bored/player_bored_comp.cpp",
      "monsterActionDie",
      465);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v1, (const char (*)[18])"something wrong!!");
    common::milog::MiLogStream::~MiLogStream(&v1);
  }
  else
  {
    PlayerBoredComp::notifyMonsterActionDie(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(
        &this->create_monster_entity_id_,
        "monsterActionDie, and clear bored",
        &this->create_monster_entity_id_);
    }
    this->create_monster_entity_id_ = 0;
    PlayerBoredComp::actionEnd(this);
  }
};

// Line 476: range 00000000150CF588-00000000150CF74A
void __cdecl PlayerBoredComp::notifyMonsterActionDie(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::UnmarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  Player *player; // r14
  std::shared_ptr<proto::UnmarkEntityInMinMapNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:477";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::notifyMonsterActionDie;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::UnmarkEntityInMinMapNotify>();
  v4 = std::__shared_ptr_access<proto::UnmarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UnmarkEntityInMinMapNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_monster_entity_id_);
  }
  proto::UnmarkEntityInMinMapNotify::set_entity_id(v4, this->create_monster_entity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::UnmarkEntityInMinMapNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::UnmarkEntityInMinMapNotify>::~shared_ptr((std::shared_ptr<proto::UnmarkEntityInMinMapNotify> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 483: range 00000000150CF74C-00000000150CF7A1
void __cdecl PlayerBoredComp::actionEnd(PlayerBoredComp *const this)
{
  __int64 v1; // rsi

  PlayerBoredComp::clear(this);
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_action_begin_, v1, &this->is_action_begin_);
  this->is_action_begin_ = 0;
};

// Line 490: range 00000000150CF7A2-00000000150CF990
void __cdecl PlayerBoredComp::clear(PlayerBoredComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/bored/player_bored_comp.cpp",
    "clear",
    491);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v3, (const char (*)[19])"clear bored system");
  common::milog::MiLogStream::~MiLogStream(&v3);
  v1 = (((_BYTE)this + 36) & 7u) + 3;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->bored_, v1, v2);
  this->bored_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bored_threshold_, v1, &this->bored_threshold_);
  }
  this->bored_threshold_ = 0;
  std::unordered_map<unsigned int,int>::clear(&this->event_bored_map_);
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_action_begin_, v1, &this->is_action_begin_);
  this->is_action_begin_ = 0;
  common::tools::MiTimer::cancel(&this->create_monster_timer_);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_monster_entity_id_);
  }
  if ( this->create_monster_entity_id_ )
  {
    PlayerBoredComp::monsterActionClear(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->create_monster_entity_id_, v1, &this->create_monster_entity_id_);
    }
    this->create_monster_entity_id_ = 0;
  }
};

// Line 508: range 00000000150CF992-00000000150CFCF6
void __cdecl PlayerBoredComp::monsterActionClear(PlayerBoredComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // esi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  VisionContext v10; // [rsp+14h] [rbp-BCh] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 32 16 24 main_world_scene_ptr:510 64 16 15 monster_ptr:515";
  *(_QWORD *)(v1 + 16) = PlayerBoredComp::monsterActionClear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/bored/player_bored_comp.cpp",
    "monsterActionClear",
    509);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])"monsterActionClear");
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
  if ( !std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v1 + 32), 0LL) )
  {
    v4 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->create_monster_entity_id_);
    }
    Scene::findEntity<Monster>((const Scene *const)(v1 + 64), v4);
    if ( !std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v1 + 64)) )
    {
      v5 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Creature::changeLifeState(v5, LIFE_DEAD, 0LL, 1);
      v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v8 = *(_QWORD *)v7->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(_QWORD *)v7->baseclass_0 + 128LL);
      v9 = *(void (__fastcall **)(std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v8;
      VisionContext::VisionContext(&v10, VISION_DIE);
      v9(v7, &v10);
      PlayerBoredComp::notifyMonsterActionDie(this);
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v1 + 64));
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
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

// Line 526: range 00000000150CFCF8-00000000150CFD50
bool __cdecl PlayerBoredComp::isOpen(PlayerBoredComp *const this)
{
  if ( PlayerGmComp::isGlobalOpenBored() )
    return 1;
  if ( *(char *)(((unsigned __int64)&this->is_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_open_);
  return this->is_open_;
};

// Line 535: range 00000000150CFD52-00000000150CFD74
void __cdecl PlayerBoredComp::addBoredGm(PlayerBoredComp *const this, uint32_t value)
{
  PlayerBoredComp::addBored(this, value);
};

// Line 540: range 00000000150CFD76-00000000150CFDE0
void __cdecl PlayerBoredComp::setBoredGm(PlayerBoredComp *const this, uint32_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->bored_);
  }
  PlayerBoredComp::addBored(this, value - this->bored_);
};
