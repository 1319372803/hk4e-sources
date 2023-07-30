// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_mgr.cpp

// Line 26: range 000000001620ABF6-000000001620AD99
void __cdecl WidgetGadgetMgr::WidgetGadgetMgr(WidgetGadgetMgr *const this, Player *player)
{
  WidgetGadgetMgr **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  WidgetGadgetMgr *v4; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(WidgetGadgetMgr *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (WidgetGadgetMgr::*)(long unsigned int),WidgetGadgetMgr*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  std::enable_shared_from_this<WidgetGadgetMgr>::enable_shared_from_this(this);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->gadget_entity_id_map_);
  std::unordered_map<unsigned int,WidgetGadgetData>::unordered_map(&this->gadget_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v4 = this;
  __f[0] = (void (*)(WidgetGadgetMgr *, unsigned __int64))WidgetGadgetMgr::onTimer;
  __f[1] = 0LL;
  std::bind<void (WidgetGadgetMgr::*)(unsigned long),WidgetGadgetMgr*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v4,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v2,
    v3);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (WidgetGadgetMgr::*)(unsigned long) ()(WidgetGadgetMgr*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->gadget_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 33: range 000000001620AD9A-000000001620ADC4
int32_t __cdecl WidgetGadgetMgr::init(WidgetGadgetMgr *const this)
{
  WidgetGadgetMgr::initEventObservers(this);
  WidgetGadgetMgr::tryStartTimer(this);
  return 0;
};

// Line 41: range 000000001620ADC6-000000001620AEBE
void __cdecl WidgetGadgetMgr::tryStartTimer(WidgetGadgetMgr *const this)
{
  common::milog::MiLogStream *v1; // rcx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerUnixTimer::startS(
         &this->gadget_timer_,
         5u,
         1,
         "./src/player/widget/widget_gadget_mgr.cpp",
         "tryStartTimer",
         42) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "tryStartTimer",
      44);
    v1 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v2,
           (const char (*)[22])" start timer failed !");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v1, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 49: range 000000001620AEC0-000000001620AED3
int32_t __cdecl WidgetGadgetMgr::onLogin(WidgetGadgetMgr *const this, bool is_new_player)
{
  return 0;
};

// Line 54: range 000000001620AED4-000000001620AEF2
int32_t __cdecl WidgetGadgetMgr::onLogout(WidgetGadgetMgr *const this)
{
  WidgetGadgetMgr::destroyAllGadget(this);
  return 0;
};

// Line 60: range 000000001620AEF4-000000001620AF12
int32_t __cdecl WidgetGadgetMgr::notifyAllData(WidgetGadgetMgr *const this)
{
  WidgetGadgetMgr::notifyAllGadgetData(this);
  return 0;
};

// Line 66: range 000000001620AF14-000000001620AF54
void __cdecl WidgetGadgetMgr::onTimer(WidgetGadgetMgr *const this, uint64_t now_ms)
{
  WidgetGadgetMgr::destroyGadgetInvalid(this);
  if ( !std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::empty(&this->gadget_entity_id_map_) )
    WidgetGadgetMgr::destroyGadgetFarAway(this);
};

// Line 76: range 000000001620AF56-000000001620B3BF
void __cdecl WidgetGadgetMgr::initEventObservers(WidgetGadgetMgr *const this)
{
  unsigned __int64 p_M_last; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // r12
  unsigned int val; // [rsp+44h] [rbp-CCh] BYREF
  PlayerEventComp *event_comp; // [rsp+48h] [rbp-C8h]
  PlayerEventComp varC0; // [rsp+50h] [rbp-C0h] BYREF

  p_M_last = (unsigned __int64)&varC0.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "1 32 16 11 this_wtr:79";
  *(_QWORD *)(p_M_last + 16) = WidgetGadgetMgr::initEventObservers;
  v3 = p_M_last >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&varC0.event_center_.context_.pending_que_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_mgr.cpp",
    "initEventObservers",
    77);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&varC0.event_center_.context_.pending_que_,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0.event_center_.context_.pending_que_);
  std::enable_shared_from_this<WidgetGadgetMgr>::weak_from_this((std::enable_shared_from_this<WidgetGadgetMgr> *const)(p_M_last + 32));
  if ( std::__weak_ptr<WidgetGadgetMgr,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<WidgetGadgetMgr,(__gnu_cxx::_Lock_policy)2> *const)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0.event_center_.context_.pending_que_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "initEventObservers",
      82);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)&varC0.event_center_.context_.pending_que_,
      (const char (*)[51])"WidgetGadgetMgr must be managed by std::shared_ptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0.event_center_.context_.pending_que_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<WidgetGadgetMgr>::weak_ptr(
      (std::weak_ptr<WidgetGadgetMgr> *const)&varC0.event_center_,
      (const std::weak_ptr<WidgetGadgetMgr> *)(p_M_last + 32));
    PlayerEventComp::registerObserver<WidgetGadgetMgr,EnterCombatEvent>(
      &varC0,
      (std::weak_ptr<WidgetGadgetMgr> *)event_comp,
      (void (*)(WidgetGadgetMgr *, const EnterCombatEvent *))&varC0.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<WidgetGadgetMgr>::~weak_ptr((std::weak_ptr<WidgetGadgetMgr> *const)&varC0.event_center_);
    std::weak_ptr<WidgetGadgetMgr>::weak_ptr(
      (std::weak_ptr<WidgetGadgetMgr> *const)&varC0.event_center_,
      (const std::weak_ptr<WidgetGadgetMgr> *)(p_M_last + 32));
    PlayerEventComp::registerObserver<WidgetGadgetMgr,LeaveSceneEvent>(
      (PlayerEventComp *const)&varC0._M_weak_this._M_refcount,
      (std::weak_ptr<WidgetGadgetMgr> *)event_comp,
      (void (*)(WidgetGadgetMgr *, const LeaveSceneEvent *))&varC0.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0._M_weak_this._M_refcount);
    std::weak_ptr<WidgetGadgetMgr>::~weak_ptr((std::weak_ptr<WidgetGadgetMgr> *const)&varC0.event_center_);
    std::weak_ptr<WidgetGadgetMgr>::weak_ptr(
      (std::weak_ptr<WidgetGadgetMgr> *const)&varC0._M_weak_this._M_refcount,
      (const std::weak_ptr<WidgetGadgetMgr> *)(p_M_last + 32));
    PlayerEventComp::registerObserver<WidgetGadgetMgr,LeaveWorldEvent>(
      (PlayerEventComp *const)&varC0.event_center_,
      (std::weak_ptr<WidgetGadgetMgr> *)event_comp,
      (void (*)(WidgetGadgetMgr *, const LeaveWorldEvent *))&varC0._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0.event_center_);
    std::weak_ptr<WidgetGadgetMgr>::~weak_ptr((std::weak_ptr<WidgetGadgetMgr> *const)&varC0._M_weak_this._M_refcount);
  }
  std::weak_ptr<WidgetGadgetMgr>::~weak_ptr((std::weak_ptr<WidgetGadgetMgr> *const)(p_M_last + 32));
  if ( &varC0.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 93: range 000000001620B3C0-000000001620B6AB
void __cdecl WidgetGadgetMgr::onEnterCombat(WidgetGadgetMgr *const this, const EnterCombatEvent *enter_combat_event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // r14
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 scene_ptr:94";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::onEnterCombat;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "onEnterCombat",
      97);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v8,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "onEnterCombat",
      100);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"onEnterCombat....");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    WidgetGadgetMgr::destroyGadgetCombatNearBy(this);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000001620B6AC-000000001620B776
void __cdecl WidgetGadgetMgr::onLeaveSceneEvent(WidgetGadgetMgr *const this, const LeaveSceneEvent *leave_scene_event)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_mgr.cpp",
    "onLeaveSceneEvent",
    106);
  v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v3, (const char (*)[19])"onLeaveSceneEvent ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v2, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v3);
  WidgetGadgetMgr::destroyGadgetByScene(this);
};

// Line 111: range 000000001620B778-000000001620B842
void __cdecl WidgetGadgetMgr::onLeaveWorldEvent(WidgetGadgetMgr *const this, const LeaveWorldEvent *leave_world_event)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_mgr.cpp",
    "onLeaveWorldEvent",
    113);
  v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v3, (const char (*)[19])"onLeaveWorldEvent ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v2, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v3);
  WidgetGadgetMgr::destroyAllGadget(this);
};

// Line 118: range 000000001620B844-000000001620BF87
void __cdecl WidgetGadgetMgr::destroyGadgetInvalid(WidgetGadgetMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::pointer v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  unsigned int *v16; // rax
  uint32_t *v17; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-1A8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+30h] [rbp-1A0h]
  std::set<unsigned int> *__for_range_1; // [rsp+38h] [rbp-198h]
  std::pair<unsigned int const,std::unordered_set<unsigned int> > *__in; // [rsp+40h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+48h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+50h] [rbp-180h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-178h]
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-170h] BYREF
  char v28[336]; // [rsp+80h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 entity_id:122 64 4 13 entity_id:135 80 8 8 iter:120 112 48 24 delete_entity_id_set:119"
                        " 192 56 15 temp_id_set:134";
  *(_QWORD *)(v1 + 16) = WidgetGadgetMgr::destroyGadgetInvalid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 112));
  *(std::unordered_map<unsigned int,WidgetGadgetData>::iterator *)(v1 + 80) = std::unordered_map<unsigned int,WidgetGadgetData>::begin(&this->gadget_data_map_);
  while ( 1 )
  {
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,WidgetGadgetData>::end(&this->gadget_data_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,WidgetGadgetData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> *)(v1 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> *)&__for_end_0) )
      break;
    v4 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v1 + 80));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v4 >> 3) + 0x7FFF8000) <= 3 )
      v4 = __asan_report_load4(v4);
    *(_DWORD *)(v1 + 48) = *(_DWORD *)v4;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::pointer)__asan_report_load4(&v5->second);
    }
    *(_DWORD *)(v1 + 64) = v5->second.gadget_id;
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v1 + 80));
    if ( std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::expired(&v6->second.gadget_wtr) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "destroyGadgetInvalid",
        126);
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v27,
             (const char (*)[38])"destroy gadget by invalid. scene_id: ");
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v1 + 80));
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->second.scene_id);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" gadget_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" entity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      *(std::unordered_map<unsigned int,WidgetGadgetData>::iterator *)(v1 + 80) = std::unordered_map<unsigned int,WidgetGadgetData>::erase(
                                                                                    &this->gadget_data_map_,
                                                                                    *(std::unordered_map<unsigned int,WidgetGadgetData>::iterator *)(v1 + 80));
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v1 + 80));
    }
  }
  __for_range = &this->gadget_entity_id_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(__in);
    entity_id_set = std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(__in);
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 192), entity_id_set);
    __for_range_0 = (const std::unordered_set<unsigned int> *)(v1 + 192);
    *(std::unordered_set<unsigned int>::const_iterator *)(v1 + 80) = std::unordered_set<unsigned int>::begin((const std::unordered_set<unsigned int> *const)(v1 + 192));
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v1 + 80),
              &__for_end_0) )
    {
      v13 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v1 + 80));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v1 + 64) = *v14;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WidgetGadgetData>,unsigned int>(
              &this->gadget_data_map_,
              (const unsigned int *)(v1 + 64)) )
      {
        std::unordered_set<unsigned int>::erase(
          entity_id_set,
          (const std::unordered_set<unsigned int>::key_type *)(v1 + 64));
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v1 + 112),
          (const std::set<unsigned int>::value_type *)(v1 + 64));
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v1 + 80));
    }
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 192));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "destroyGadgetInvalid",
      148);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v27, (const char (*)[16])"delete entity: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::set<unsigned int> *)(v1 + 112));
    common::milog::MiLogStream::~MiLogStream(&v27);
    __for_range_1 = (std::set<unsigned int> *)(v1 + 112);
    *(std::set<unsigned int>::iterator *)(v1 + 80) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 112));
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 80),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
    {
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 80));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      WidgetGadgetMgr::notifyGadgetDestroy(this, *v17);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v1 + 80));
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 112));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 156: range 000000001620BF88-000000001620C6D3
void __cdecl WidgetGadgetMgr::destroyGadgetByScene(WidgetGadgetMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  uint32_t *v12; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  const JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-168h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-160h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-158h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v20; // [rsp+50h] [rbp-150h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+58h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+60h] [rbp-140h]
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+68h] [rbp-138h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+70h] [rbp-130h]
  const WidgetGadgetData *gadget_data; // [rsp+78h] [rbp-128h]
  std::shared_ptr<Scene> v26; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-110h] BYREF
  char v28[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 entity_id:174 64 16 12 curScene:157 96 16 14 gadget_ptr:177 128 24 17 entity_id_vec:159";
  *(_QWORD *)(v1 + 16) = WidgetGadgetMgr::destroyGadgetByScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.json_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
  __for_range = &this->gadget_entity_id_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->gadget_entity_id_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v20);
    entity_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v20);
    if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gadget_id);
    }
    config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(json_config_mgr, *gadget_id);
    if ( config_widget_gadget_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_leave_scene_destroy >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_widget_gadget_ptr + 56) & 7) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_leave_scene_destroy >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load1(&config_widget_gadget_ptr->is_leave_scene_destroy);
      }
      if ( config_widget_gadget_ptr->is_leave_scene_destroy )
      {
        __for_range_0 = entity_id_set;
        __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
        __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
        {
          v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
          v6 = v5;
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v5);
          }
          *(_DWORD *)(v1 + 48) = *v6;
          gadget_data = std::unordered_map<unsigned int,WidgetGadgetData>::operator[](
                          &this->gadget_data_map_,
                          (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v1 + 48));
          std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 96));
          if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v1 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/widget_gadget_mgr.cpp",
              "destroyGadgetByScene",
              181);
            v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   &v27,
                   (const char (*)[34])"gadget_ptr is nullptr. entity_id:");
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v7,
                   (const unsigned int *)(v1 + 48));
            v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" gadget id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, gadget_id);
            common::milog::MiLogStream::~MiLogStream(&v27);
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v1 + 128),
              (const std::vector<unsigned int>::value_type *)(v1 + 48));
          }
          else
          {
            std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            Entity::getScene((const Entity *const)&v26);
            v10 = std::operator!=<Scene,Scene>(&v26, (const std::shared_ptr<Scene> *)(v1 + 64));
            std::shared_ptr<Scene>::~shared_ptr(&v26);
            if ( v10 )
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v1 + 128),
                (const std::vector<unsigned int>::value_type *)(v1 + 48));
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 96));
          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "destroyGadgetByScene",
        167);
      v4 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v27,
             (const char (*)[57])"WidgetGadgetMgr findWidgetGadgetConfig fail. gadget_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, gadget_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = (std::vector<unsigned int> *)(v1 + 128);
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
  {
    v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, *v12);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 200: range 000000001620C6D4-000000001620D076
void __cdecl WidgetGadgetMgr::destroyGadgetFarAway(WidgetGadgetMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 Position; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  float Distance; // xmm0_4
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  uint32_t *v16; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1A8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  const JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-198h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-190h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-188h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v24; // [rsp+50h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+58h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+60h] [rbp-170h]
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+68h] [rbp-168h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+70h] [rbp-160h]
  const WidgetGadgetData *gadget_data; // [rsp+78h] [rbp-158h]
  std::shared_ptr<Scene> __a; // [rsp+80h] [rbp-150h] BYREF
  std::shared_ptr<Scene> v31; // [rsp+90h] [rbp-140h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-130h] BYREF
  char v33[272]; // [rsp+C0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 entity_id:225 64 12 11 cur_pos:207 96 16 14 avatar_ptr:201 128 16 14 gadget_ptr:228 16"
                        "0 24 17 entity_id_vec:210";
  *(_QWORD *)(v1 + 16) = WidgetGadgetMgr::destroyGadgetFarAway;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 96));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "destroyGadgetFarAway",
      204);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v32,
           (const char (*)[28])"avatar_ptr is null, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    Position = (unsigned __int64)Entity::getPosition((const Entity *const)v5);
    if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
      && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
    {
      Position = __asan_report_load_n(Position, 12LL);
    }
    *(_QWORD *)(v1 + 64) = *(_QWORD *)Position;
    *(_DWORD *)(v1 + 72) = *(_DWORD *)(Position + 8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.json_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 160));
    __for_range = &this->gadget_entity_id_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->gadget_entity_id_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
      gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v24);
      entity_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v24);
      if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(gadget_id);
      }
      config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(json_config_mgr, *gadget_id);
      if ( config_widget_gadget_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_distance_destroy >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config_widget_gadget_ptr + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_distance_destroy >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load1(&config_widget_gadget_ptr->is_distance_destroy);
        }
        if ( config_widget_gadget_ptr->is_distance_destroy )
        {
          __for_range_0 = entity_id_set;
          __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
          __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
          while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
          {
            v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
            v9 = v8;
            if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v8);
            }
            *(_DWORD *)(v1 + 48) = *v9;
            gadget_data = std::unordered_map<unsigned int,WidgetGadgetData>::operator[](
                            &this->gadget_data_map_,
                            (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v1 + 48));
            std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 128));
            if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v1 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_gadget_mgr.cpp",
                "destroyGadgetFarAway",
                232);
              v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v32,
                      (const char (*)[34])"gadget_ptr is nullptr. entity_id:");
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      (const unsigned int *)(v1 + 48));
              v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v11,
                      (const char (*)[13])" gadget id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, gadget_id);
              common::milog::MiLogStream::~MiLogStream(&v32);
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v1 + 160),
                (const std::vector<unsigned int>::value_type *)(v1 + 48));
            }
            else
            {
              std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Entity::getScene((const Entity *const)&v31);
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              Entity::getScene((const Entity *const)&__a);
              v13 = std::operator!=<Scene,Scene>(&__a, &v31);
              std::shared_ptr<Scene>::~shared_ptr(&__a);
              std::shared_ptr<Scene>::~shared_ptr(&v31);
              if ( v13 )
                goto LABEL_31;
              Distance = getDistance(&gadget_data->pos, (const Vector3 *)(v1 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->distance_destroy_distance >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_widget_gadget_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->distance_destroy_distance >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(&config_widget_gadget_ptr->distance_destroy_distance);
              }
              if ( Distance > config_widget_gadget_ptr->distance_destroy_distance )
LABEL_31:
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v1 + 160),
                  (const std::vector<unsigned int>::value_type *)(v1 + 48));
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 128));
            std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "destroyGadgetFarAway",
          218);
        v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               &v32,
               (const char (*)[57])"WidgetGadgetMgr findWidgetGadgetConfig fail. gadget_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, gadget_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v1 + 160);
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 160))._M_current;
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, *v16);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 160));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 96));
  if ( v33 == (char *)v1 )
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

// Line 255: range 000000001620D078-000000001620DA0A
void __cdecl WidgetGadgetMgr::destroyGadgetCombatNearBy(WidgetGadgetMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 Position; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  float Distance; // xmm0_4
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  uint32_t *v16; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1A8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  const JsonConfigMgr *json_config_mgr; // [rsp+38h] [rbp-198h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-190h]
  std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-188h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v24; // [rsp+50h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+58h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+60h] [rbp-170h]
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+68h] [rbp-168h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+70h] [rbp-160h]
  const WidgetGadgetData *gadget_data; // [rsp+78h] [rbp-158h]
  std::shared_ptr<Scene> __a; // [rsp+80h] [rbp-150h] BYREF
  std::shared_ptr<Scene> v31; // [rsp+90h] [rbp-140h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-130h] BYREF
  char v33[272]; // [rsp+C0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 entity_id:280 64 12 11 cur_pos:262 96 16 14 avatar_ptr:256 128 16 14 gadget_ptr:283 16"
                        "0 24 17 entity_id_vec:265";
  *(_QWORD *)(v1 + 16) = WidgetGadgetMgr::destroyGadgetCombatNearBy;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 96));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "destroyGadgetCombatNearBy",
      259);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v32,
           (const char (*)[28])"avatar_ptr is null, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    Position = (unsigned __int64)Entity::getPosition((const Entity *const)v5);
    if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
      && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
    {
      Position = __asan_report_load_n(Position, 12LL);
    }
    *(_QWORD *)(v1 + 64) = *(_QWORD *)Position;
    *(_DWORD *)(v1 + 72) = *(_DWORD *)(Position + 8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.json_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 160));
    __for_range = &this->gadget_entity_id_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->gadget_entity_id_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
      gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v24);
      entity_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v24);
      if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(gadget_id);
      }
      config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(json_config_mgr, *gadget_id);
      if ( config_widget_gadget_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_combat_destroy >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config_widget_gadget_ptr + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_combat_destroy >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load1(&config_widget_gadget_ptr->is_combat_destroy);
        }
        if ( config_widget_gadget_ptr->is_combat_destroy )
        {
          __for_range_0 = entity_id_set;
          __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
          __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
          while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
          {
            v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
            v9 = v8;
            if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v8);
            }
            *(_DWORD *)(v1 + 48) = *v9;
            gadget_data = std::unordered_map<unsigned int,WidgetGadgetData>::operator[](
                            &this->gadget_data_map_,
                            (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v1 + 48));
            std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 128));
            if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v1 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_gadget_mgr.cpp",
                "destroyGadgetCombatNearBy",
                287);
              v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v32,
                      (const char (*)[34])"gadget_ptr is nullptr. entity_id:");
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      (const unsigned int *)(v1 + 48));
              v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v11,
                      (const char (*)[13])" gadget id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, gadget_id);
              common::milog::MiLogStream::~MiLogStream(&v32);
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v1 + 160),
                (const std::vector<unsigned int>::value_type *)(v1 + 48));
            }
            else
            {
              std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Entity::getScene((const Entity *const)&v31);
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
              Entity::getScene((const Entity *const)&__a);
              v13 = std::operator!=<Scene,Scene>(&__a, &v31);
              std::shared_ptr<Scene>::~shared_ptr(&__a);
              std::shared_ptr<Scene>::~shared_ptr(&v31);
              if ( !v13 )
              {
                Distance = getDistance(&gadget_data->pos, (const Vector3 *)(v1 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_widget_gadget_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->combat_destroy_distance >> 3)
                                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4(&config_widget_gadget_ptr->combat_destroy_distance);
                }
                if ( config_widget_gadget_ptr->combat_destroy_distance >= Distance )
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v1 + 160),
                    (const std::vector<unsigned int>::value_type *)(v1 + 48));
              }
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 128));
            std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "destroyGadgetCombatNearBy",
          273);
        v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               &v32,
               (const char (*)[57])"WidgetGadgetMgr findWidgetGadgetConfig fail. gadget_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, gadget_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v1 + 160);
    __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 160))._M_current;
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, *v16);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 160));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 96));
  if ( v33 == (char *)v1 )
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

// Line 310: range 000000001620DA0C-000000001620DDDB
void __cdecl WidgetGadgetMgr::destroyAllGadget(WidgetGadgetMgr *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::const_iterator v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+28h] [rbp-F8h]
  std::unordered_map<unsigned int,WidgetGadgetData> *__for_range_0; // [rsp+30h] [rbp-F0h]
  std::set<unsigned int> *__for_range_1; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,WidgetGadgetData> *v13; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,WidgetGadgetData> >::type *entity_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,WidgetGadgetData> >::type *gadget_data; // [rsp+50h] [rbp-D0h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v16; // [rsp+58h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+60h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+68h] [rbp-B8h]
  char v19[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (std::set<unsigned int> *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 10 id_set:311";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)WidgetGadgetMgr::destroyAllGadget;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::set<unsigned int>::set(v1 + 1);
  __for_range = &this->gadget_entity_id_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->gadget_entity_id_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v16);
    entity_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v16);
    M_cur = std::unordered_set<unsigned int>::end(entity_id_set)._M_cur;
    v5._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
    std::set<unsigned int>::insert<std::__detail::_Node_const_iterator<unsigned int,true,false>>(
      v1 + 1,
      v5,
      (std::__detail::_Node_const_iterator<unsigned int,true,false>)M_cur);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->gadget_data_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,WidgetGadgetData>::begin(&this->gadget_data_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,WidgetGadgetData>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WidgetGadgetData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> *)&__for_end) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)&__for_begin);
    entity_id = std::get<0ul,unsigned int const,WidgetGadgetData>(v13);
    gadget_data = (std::tuple_element<1,const std::pair<unsigned int const,WidgetGadgetData> >::type *)std::get<1ul,unsigned int const,WidgetGadgetData>(v13);
    std::set<unsigned int>::insert(v1 + 1, entity_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)&__for_begin);
  }
  __for_range_1 = v1 + 1;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)std::set<unsigned int>::begin(v1 + 1)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::unordered_map<unsigned int,WidgetGadgetData>::clear(&this->gadget_data_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::clear(&this->gadget_entity_id_map_);
  std::set<unsigned int>::~set(v1 + 1);
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 331: range 000000001620DDDC-000000001620E496
__int64 __fastcall WidgetGadgetMgr::onCreate(
        WidgetGadgetMgr *const this,
        uint32_t material_id,
        const Vector3 *pos,
        const Vector3 *rot)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerWidgetComp *WidgetComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerWidgetComp *v20; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+24h] [rbp-ECh]
  int32_t reta; // [rsp+24h] [rbp-ECh]
  int32_t retb; // [rsp+24h] [rbp-ECh]
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 13 gadget_id:339 64 4 12 cd_group:354 80 4 15 material_id:330 96 16 21 gadget_config_ptr:332";
  *(_QWORD *)(v4 + 16) = WidgetGadgetMgr::onCreate;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 80) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v4 + 96), v7 + 93080);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v4 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "onCreate",
      335);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v29,
           (const char (*)[45])"gadget_config_ptr can't find widget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v9 = 5;
  }
  else
  {
    v10 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->gadget_id);
    }
    *(_DWORD *)(v4 + 48) = v10->gadget_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(
                                 &v11->design_config.json_config_mgr,
                                 *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( config_widget_gadget_ptr )
    {
      ret = WidgetGadgetMgr::checkBeforeUse(this, *(_DWORD *)(v4 + 80));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "onCreate",
          350);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v29,
                (const char (*)[34])"checkBeforeUse fail material_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v9 = ret;
      }
      else
      {
        v14 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v14->cd_group >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->cd_group >> 3) + 0x7FFF8000) <= 3 )
        {
          v14 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->cd_group);
        }
        *(_DWORD *)(v4 + 64) = v14->cd_group;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WidgetComp = Player::getWidgetComp(this->player_);
        reta = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, *(_DWORD *)(v4 + 64));
        if ( reta )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/widget_gadget_mgr.cpp",
            "onCreate",
            358);
          v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v29,
                  (const char (*)[44])"checkWidgetGroupCoolDown fail material_id: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 80));
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" cd_group: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v29);
          v9 = reta;
        }
        else
        {
          retb = WidgetGadgetMgr::checkGadgetCreate(this, *(_DWORD *)(v4 + 48), pos);
          if ( retb )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_gadget_mgr.cpp",
              "onCreate",
              367);
            v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v29,
                    (const char (*)[34])"checkBeforeUse fail material_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v29);
          }
          else
          {
            retb = WidgetGadgetMgr::createGadgetAndEnterScene(
                     this,
                     *(_DWORD *)(v4 + 80),
                     *(_DWORD *)(v4 + 48),
                     pos,
                     rot);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v20 = Player::getWidgetComp(this->player_);
          PlayerWidgetComp::updateWidgetGroupCoolDown(v20, *(_DWORD *)(v4 + 64), retb == 0);
          v9 = retb;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "onCreate",
        344);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v29,
              (const char (*)[57])"WidgetGadgetMgr findWidgetGadgetConfig fail. gadget_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v9 = 5;
    }
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v4 + 96));
  result = v9;
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 380: range 000000001620E498-000000001620E4B9
int32_t __cdecl WidgetGadgetMgr::onRetract(WidgetGadgetMgr *const this, uint32_t entity_id)
{
  return WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, entity_id);
};

// Line 385: range 000000001620E4BA-000000001620E834
__int64 __fastcall WidgetGadgetMgr::findOldestEntityId(WidgetGadgetMgr *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t select_entity_id; // [rsp+10h] [rbp-D0h]
  uint32_t select_entity_timestamp; // [rsp+14h] [rbp-CCh]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int> *entity_id_set_ptr; // [rsp+28h] [rbp-B8h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const WidgetGadgetData *gadget_data; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 entity_id:397 64 4 13 gadget_id:384";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::findOldestEntityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = gadget_id;
  entity_id_set_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>(
                        &this->gadget_entity_id_map_,
                        (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 64));
  if ( entity_id_set_ptr )
  {
    if ( std::unordered_set<unsigned int>::empty(entity_id_set_ptr) )
    {
      result = 0LL;
    }
    else
    {
      select_entity_id = 0;
      select_entity_timestamp = -1;
      __for_range = entity_id_set_ptr;
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set_ptr)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(entity_id_set_ptr)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v6 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        *(_DWORD *)(v2 + 48) = *v7;
        gadget_data = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,WidgetGadgetData>>(
                        &this->gadget_data_map_,
                        (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v2 + 48));
        if ( gadget_data )
        {
          if ( !std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::expired(&gadget_data->gadget_wtr) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&gadget_data->timestamp >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gadget_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_data->timestamp >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4(&gadget_data->timestamp);
            }
            if ( select_entity_timestamp > gadget_data->timestamp )
            {
              select_entity_timestamp = gadget_data->timestamp;
              select_entity_id = *(_DWORD *)(v2 + 48);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/widget/widget_gadget_mgr.cpp",
            "findOldestEntityId",
            402);
          v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v18, (const char (*)[36])off_25B9EFA0);
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v2 + 48));
          v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" gadget_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      result = select_entity_id;
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v19 == (char *)v2 )
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

// Line 419: range 000000001620E836-000000001620EAF4
__int64 __fastcall WidgetGadgetMgr::checkWidgetGroupCoolDown(WidgetGadgetMgr *const this, uint32_t material_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  PlayerWidgetComp *WidgetComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v11; // [rsp+10h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 15 material_id:418 64 16 21 gadget_config_ptr:420";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::checkWidgetGroupCoolDown;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v5 + 93080);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "checkWidgetGroupCoolDown",
      423);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v12,
           (const char (*)[45])"gadget_config_ptr can't find widget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WidgetComp = Player::getWidgetComp(this->player_);
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->cd_group);
    }
    v7 = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, v9->cd_group);
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v2 + 64));
  result = v7;
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

// Line 431: range 000000001620EAF6-000000001620EDBC
__int64 __fastcall WidgetGadgetMgr::updateWidgetGroupCoolDown(WidgetGadgetMgr *const this, uint32_t material_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  PlayerWidgetComp *WidgetComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v11; // [rsp+10h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 15 material_id:430 64 16 21 gadget_config_ptr:432";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::updateWidgetGroupCoolDown;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v5 + 93080);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "updateWidgetGroupCoolDown",
      435);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v12,
           (const char (*)[45])"gadget_config_ptr can't find widget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WidgetComp = Player::getWidgetComp(this->player_);
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->cd_group);
    }
    PlayerWidgetComp::updateWidgetGroupCoolDown(WidgetComp, v9->cd_group, 1);
    v7 = 0;
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v2 + 64));
  result = v7;
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

// Line 443: range 000000001620EDBE-000000001620F25D
__int64 __fastcall WidgetGadgetMgr::foreachWidgetGadgetData(
        const WidgetGadgetMgr *const this,
        uint32_t material_id,
        std::function<ForeachPolicy(const WidgetGadgetData&)> *p_func)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // eax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  const std::unordered_set<unsigned int> *entity_id_set_ptr; // [rsp+38h] [rbp-F8h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-F0h]
  const WidgetGadgetData *gadget_data; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 gadget_id:450 64 4 13 entity_id:460 80 4 15 material_id:442 96 16 21 gadget_config_ptr:444";
  *(_QWORD *)(v3 + 16) = WidgetGadgetMgr::foreachWidgetGadgetData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 80) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v3 + 96), v6 + 93080);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v3 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "foreachWidgetGadgetData",
      447);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v23,
           (const char (*)[45])"gadget_config_ptr can't find widget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = 5;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v9->gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->gadget_id);
    }
    *(_DWORD *)(v3 + 48) = v9->gadget_id;
    entity_id_set_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_set<unsigned int>> const>(
                          &this->gadget_entity_id_map_,
                          (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 48));
    if ( entity_id_set_ptr )
    {
      if ( std::unordered_set<unsigned int>::empty(entity_id_set_ptr) )
      {
        v8 = 0;
      }
      else
      {
        __for_range = entity_id_set_ptr;
        __for_begin._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set_ptr)._M_cur;
        __for_end._M_cur = std::unordered_set<unsigned int>::end(entity_id_set_ptr)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
        {
          v10 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v3 + 64) = *v11;
          gadget_data = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,WidgetGadgetData> const>(
                          &this->gadget_data_map_,
                          (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v3 + 64));
          if ( gadget_data )
          {
            if ( std::function<ForeachPolicy ()(WidgetGadgetData const&)>::operator()(p_func, gadget_data) == FOREACH_BREAK )
            {
              v8 = -1;
              goto LABEL_22;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/widget/widget_gadget_mgr.cpp",
              "foreachWidgetGadgetData",
              465);
            v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v23,
                    (const char (*)[36])off_25B9EFA0);
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v3 + 64));
            v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v13,
                    (const char (*)[13])" gadget_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
        }
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
    }
  }
LABEL_22:
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v3 + 96));
  result = v8;
  if ( v24 == (char *)v3 )
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

// Line 477: range 000000001620F25E-000000001620F697
void __fastcall WidgetGadgetMgr::destroyGadgetByMaterialId(WidgetGadgetMgr *const this, uint32_t material_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::const_iterator v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  uint32_t *v11; // rdx
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-105h] BYREF
  uint32_t entity_id; // [rsp+1Ch] [rbp-104h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::unordered_set<unsigned int> *entity_id_set_ptr; // [rsp+30h] [rbp-F0h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> v19; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 gadget_id:484 48 4 15 material_id:476 64 16 21 gadget_config_ptr:478";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::destroyGadgetByMaterialId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v5 + 93080);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "destroyGadgetByMaterialId",
      481);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v20,
           (const char (*)[45])"gadget_config_ptr can't find widget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v7 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v7->gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->gadget_id);
    }
    *(_DWORD *)(v2 + 32) = v7->gadget_id;
    entity_id_set_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>(
                          &this->gadget_entity_id_map_,
                          (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
    if ( entity_id_set_ptr && !std::unordered_set<unsigned int>::empty(entity_id_set_ptr) )
    {
      std::allocator<unsigned int>::allocator(&__a);
      M_cur = std::unordered_set<unsigned int>::cend(entity_id_set_ptr)._M_cur;
      v9._M_cur = std::unordered_set<unsigned int>::cbegin(entity_id_set_ptr)._M_cur;
      std::vector<unsigned int>::vector<std::__detail::_Node_const_iterator<unsigned int,true,false>,void>(
        &v19,
        v9,
        (std::__detail::_Node_const_iterator<unsigned int,true,false>)M_cur,
        &__a);
      __for_range = &v19;
      std::allocator<unsigned int>::~allocator(&__a);
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        entity_id = *v11;
        WidgetGadgetMgr::destroyGadgetAndLeaveScene(this, entity_id);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::~vector(&v19);
    }
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v2 + 64));
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

// Line 501: range 000000001620F698-000000001620FA74
void __fastcall WidgetGadgetMgr::onGadgetDie(WidgetGadgetMgr *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::unordered_set<unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 gadget_id:510 48 4 13 entity_id:500 64 16 14 gadget_ptr:502";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::onGadgetDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = entity_id;
  WidgetGadgetMgr::findGadgetByEntityId((WidgetGadgetMgr *const)(v2 + 64), (uint32_t)this);
  std::unordered_map<unsigned int,WidgetGadgetData>::erase(
    &this->gadget_data_map_,
    (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v2 + 48));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "onGadgetDie",
      506);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v15,
           (const char (*)[43])"onGadgetDie gadget_ptr is null. entity_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  else
  {
    v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = Gadget::getGadgetId(v8);
    WidgetGadgetMgr::notifyGadgetDestroy(this, *(_DWORD *)(v2 + 48));
    v9 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
           &this->gadget_entity_id_map_,
           (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
    if ( std::unordered_set<unsigned int>::erase(v9, (const std::unordered_set<unsigned int>::key_type *)(v2 + 48)) )
      WidgetGadgetMgr::notifyGadgetData(this, *(_DWORD *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "onGadgetDie",
      516);
    v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v15,
            (const char (*)[23])"onGadgetDie gadget id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" entity_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  if ( v16 == (char *)v2 )
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

// Line 520: range 000000001620FA76-000000001620FF39
__int64 __fastcall WidgetGadgetMgr::checkBeforeUse(WidgetGadgetMgr *const this, uint32_t material_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t ItemComp; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 material_id:519 64 16 16 material_ptr:522 96 16 13 scene_ptr:528";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::checkBeforeUse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = material_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = (unsigned int)Player::getItemComp(this->player_);
  PlayerItemComp::findMaterial((PlayerItemComp *const)(v2 + 64), ItemComp);
  if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "checkBeforeUse",
      525);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v15,
           (const char (*)[34])"findMaterial failed, material_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v9 = 609;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "checkBeforeUse",
        531);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v15,
              (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v9 = 522;
    }
    else
    {
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( Scene::getSceneType(v11) == SCENE_DUNGEON )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "checkBeforeUse",
          536);
        v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v15, (const char (*)[55])off_25B9F4E0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v15);
        v9 = 522;
      }
      else
      {
        v9 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v2 + 64));
  result = v9;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 544: range 000000001620FF3A-0000000016210949
__int64 __fastcall WidgetGadgetMgr::checkGadgetCreate(
        WidgetGadgetMgr *const this,
        uint32_t gadget_id,
        const Vector3 *pos)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const Vector3 *Position; // rax
  float Distance; // xmm0_4
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const Vector3 *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  Scene *v21; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Vector3 *n; // rax
  const std::shared_ptr<Player> *v24; // rax
  Player *v25; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  int v30; // r15d
  int v31; // r15d
  __int64 result; // rax
  float sight_range; // [rsp+14h] [rbp-17Ch]
  unsigned int val; // [rsp+38h] [rbp-158h] BYREF
  int32_t ret; // [rsp+3Ch] [rbp-154h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+40h] [rbp-150h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+48h] [rbp-148h] BYREF
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+50h] [rbp-140h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-130h] BYREF
  char v42[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 gadget_id:543 64 16 13 scene_ptr:551 96 16 14 avatar_ptr:563 128 16 14 player_ptr:579 "
                        "160 24 23 surround_player_vec:578";
  *(_QWORD *)(v4 + 16) = WidgetGadgetMgr::checkGadgetCreate;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = gadget_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(
                               &v7->design_config.json_config_mgr,
                               *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  if ( config_widget_gadget_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "checkGadgetCreate",
        554);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v41,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v3 = 522;
    }
    else
    {
      ret = WidgetGadgetMgr::checkGadgetPlayerCount(this, *(_DWORD *)(v4 + 48));
      if ( ret )
      {
        v3 = ret;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v4 + 96));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/widget_gadget_mgr.cpp",
            "checkGadgetCreate",
            566);
          v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v41,
                  (const char (*)[28])"avatar_ptr is null, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v10, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v41);
          v3 = 104;
        }
        else
        {
          v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          Position = Entity::getPosition((const Entity *const)v11);
          Distance = getDistance(pos, Position);
          if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->distance_destroy_distance >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_widget_gadget_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->distance_destroy_distance >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&config_widget_gadget_ptr->distance_destroy_distance);
          }
          if ( Distance <= config_widget_gadget_ptr->distance_destroy_distance )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_combat_destroy >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)config_widget_gadget_ptr + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->is_combat_destroy >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load1(&config_widget_gadget_ptr->is_combat_destroy);
            }
            if ( !config_widget_gadget_ptr->is_combat_destroy )
              goto LABEL_47;
            v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->combat_destroy_distance >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_widget_gadget_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->combat_destroy_distance >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&config_widget_gadget_ptr->combat_destroy_distance);
            }
            sight_range = config_widget_gadget_ptr->combat_destroy_distance;
            v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            n = (Vector3 *)Entity::getPosition((const Entity *const)v22);
            if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) )
            {
              n = (Vector3 *)__asan_report_load_n(n, 12LL);
            }
            Scene::getSurroundPlayersInRange((std::vector<std::shared_ptr<Player>> *)(v4 + 160), v21, *n, sight_range);
            __for_range = (std::vector<std::shared_ptr<Player>> *)(v4 + 160);
            __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 160))._M_current;
            __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v4 + 160))._M_current;
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                      &__for_begin,
                      &__for_end) )
              {
                v31 = 1;
                goto LABEL_46;
              }
              v24 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
              std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 128), v24);
              if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 128))
                && (v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
                    AvatarComp = Player::getAvatarComp(v25),
                    PlayerAvatarComp::isInCombat(AvatarComp)) )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/widget/widget_gadget_mgr.cpp",
                  "checkGadgetCreate",
                  583);
                v28 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v41,
                        (const char (*)[28])"RET_WIDGET_IN_COMBAT. uid: ");
                v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                val = Player::getUid(v29);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
                common::milog::MiLogStream::~MiLogStream(&v41);
                v3 = 688;
                v30 = 0;
              }
              else
              {
                v30 = 1;
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
              if ( v30 != 1 )
                break;
              __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
            }
            v31 = 0;
LABEL_46:
            std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 160));
            if ( v31 == 1 )
LABEL_47:
              v3 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/widget/widget_gadget_mgr.cpp",
              "checkGadgetCreate",
              572);
            v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v41,
                    (const char (*)[27])"distance is too long, pos:");
            v15 = operator<<(v14, pos);
            v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v15,
                    (const char (*)[13])" avatar_pos:");
            v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v18 = Entity::getPosition((const Entity *const)v17);
            v19 = operator<<(v16, v18);
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v20, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v41);
            v3 = 520;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "checkGadgetCreate",
      548);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v41,
           (const char (*)[43])"WidgetGadgetMgr can't find gadget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = 5;
  }
  result = v3;
  if ( v42 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 592: range 000000001621094A-0000000016210C1E
__int64 __fastcall WidgetGadgetMgr::checkGadgetPlayerCount(WidgetGadgetMgr *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *v8; // rax
  std::unordered_set<unsigned int>::size_type v9; // rcx
  common::milog::MiLogStream *v10; // rax
  const data::ConfigWidgetGadget *config_widget_gadget_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gadget_id:591";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::checkGadgetPlayerCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  config_widget_gadget_ptr = JsonConfigMgr::findWidgetGadgetConfig(
                               &v5->design_config.json_config_mgr,
                               *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( config_widget_gadget_ptr )
  {
    v8 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
           &this->gadget_entity_id_map_,
           (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
    v9 = std::unordered_set<unsigned int>::size(v8);
    if ( *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->max_count_by_player >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_widget_gadget_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_widget_gadget_ptr->max_count_by_player >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config_widget_gadget_ptr->max_count_by_player);
    }
    if ( v9 < config_widget_gadget_ptr->max_count_by_player )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "checkGadgetPlayerCount",
        601);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v13,
              (const char (*)[22])"max_count_by_player: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        &config_widget_gadget_ptr->max_count_by_player);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 696LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "checkGadgetPlayerCount",
      596);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v13,
           (const char (*)[43])"WidgetGadgetMgr can't find gadget config: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 5LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 608: range 0000000016210C20-00000000162116DE
__int64 __fastcall WidgetGadgetMgr::createGadgetAndEnterScene(
        WidgetGadgetMgr *const this,
        uint32_t material_id,
        uint32_t gadget_id,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  Scene *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::unordered_set<unsigned int> *v20; // rax
  WidgetGadgetData *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-515h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+3Ch] [rbp-514h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-4F0h] BYREF
  char v32[1232]; // [rsp+80h] [rbp-4D0h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1184LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 4 7 ret:630 48 4 13 entity_id:637 64 4 13 gadget_id:607 80 16 13 scene_ptr:609 112 16 14 ga"
                        "dget_ptr:623 144 56 15 gadget_data:638 240 816 16 gadget_param:615";
  *(_QWORD *)(v5 + 16) = WidgetGadgetMgr::createGadgetAndEnterScene;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862726] = -218959360;
  v7[536862727] = 62194;
  v7[536862753] = -202116109;
  v7[536862754] = -202116109;
  v7[536862755] = -202116109;
  v7[536862756] = -202116109;
  *(_DWORD *)(v5 + 64) = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 80));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "createGadgetAndEnterScene",
      612);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v31,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = 522;
  }
  else
  {
    GadgetParam::GadgetParam((GadgetParam *const)(v5 + 240));
    *(_DWORD *)(v5 + 240) = *(_DWORD *)(v5 + 64);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    *(_DWORD *)(v5 + 248) = Scene::genNewEntityId(v10, PROT_ENTITY_GADGET);
    if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(pos, 12LL);
    }
    *(_QWORD *)(v5 + 252) = *(_QWORD *)pos;
    *(_DWORD *)(v5 + 260) = *(_DWORD *)(pos + 8);
    if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(rot, 12LL);
    }
    *(_QWORD *)(v5 + 264) = *(_QWORD *)rot;
    *(_DWORD *)(v5 + 272) = *(_DWORD *)(rot + 8);
    *(_DWORD *)(v5 + 332) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v5 + 1048) = Player::getUid(this->player_);
    std::allocator<unsigned int>::allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    LODWORD(__l._M_array) = Player::getUid(this->player_);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    std::vector<unsigned int>::operator=(
      (std::vector<unsigned int> *const)(v5 + 400),
      (std::vector<unsigned int> *)((char *)&__l._M_array + 4));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
    std::allocator<unsigned int>::~allocator(&__a);
    EntityMgr::createGadget((const GadgetParam *)(v5 + 112));
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v5 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "createGadgetAndEnterScene",
        626);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v31,
              (const char (*)[38])"gadget_ptr craete failed. gadget_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v31);
      v9 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      v14 = *(_QWORD *)v13->baseclass_0 + 56LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(*(_QWORD *)v13->baseclass_0 + 56LL);
      v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v14;
      v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
      *(_DWORD *)(v5 + 32) = v15(v13, v16, &VisionContext::meet_context);
      if ( *(_DWORD *)(v5 + 32) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "createGadgetAndEnterScene",
          633);
        v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v31,
                (const char (*)[35])"gadget_ptr enterScene failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
        v9 = *(_DWORD *)(v5 + 32);
      }
      else
      {
        v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        *(_DWORD *)(v5 + 48) = Entity::getEntityId((const Entity *const)v18);
        WidgetGadgetData::WidgetGadgetData((WidgetGadgetData *const)(v5 + 144));
        *(_DWORD *)(v5 + 148) = material_id;
        *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 64);
        v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        *(_DWORD *)(v5 + 152) = Scene::getSceneId(v19);
        std::weak_ptr<Gadget>::operator=<Gadget>(
          (std::weak_ptr<Gadget> *const)(v5 + 184),
          (const std::shared_ptr<Gadget> *)(v5 + 112));
        if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(pos, 12LL);
        }
        *(_QWORD *)(v5 + 160) = *(_QWORD *)pos;
        *(_DWORD *)(v5 + 168) = *(_DWORD *)(pos + 8);
        if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(rot, 12LL);
        }
        *(_QWORD *)(v5 + 172) = *(_QWORD *)rot;
        *(_DWORD *)(v5 + 180) = *(_DWORD *)(rot + 8);
        *(_DWORD *)(v5 + 156) = common::tools::TimeUtils::getNow();
        v20 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                &this->gadget_entity_id_map_,
                (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v5 + 64));
        std::unordered_set<unsigned int>::insert(v20, (const std::unordered_set<unsigned int>::value_type *)(v5 + 48));
        v21 = std::unordered_map<unsigned int,WidgetGadgetData>::operator[](
                &this->gadget_data_map_,
                (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v5 + 48));
        WidgetGadgetData::operator=(v21, (const WidgetGadgetData *)(v5 + 144));
        WidgetGadgetMgr::notifyGadgetData(this, *(_DWORD *)(v5 + 64));
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_gadget_mgr.cpp",
          "createGadgetAndEnterScene",
          653);
        v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v31,
                (const char (*)[34])"createGadget success. gadget_id: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v5 + 64));
        v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        LODWORD(__l._M_array) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)&__l);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v9 = 0;
        WidgetGadgetData::~WidgetGadgetData((WidgetGadgetData *const)(v5 + 144));
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 112));
    GadgetParam::~GadgetParam((GadgetParam *const)(v5 + 240));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 80));
  if ( v32 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1184LL, v32);
  }
  return v9;
};

// Line 658: range 00000000162116E0-0000000016211A4E
void __fastcall WidgetGadgetMgr::notifyGadgetData(WidgetGadgetMgr *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int val; // [rsp+18h] [rbp-F8h] BYREF
  uint32_t entity_id; // [rsp+1Ch] [rbp-F4h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  proto::WidgetGadgetData *widget_gadget_data; // [rsp+30h] [rbp-E0h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 gadget_id:657 64 32 10 notify:659";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::notifyGadgetData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = gadget_id;
  proto::WidgetGadgetDataNotify::WidgetGadgetDataNotify((proto::WidgetGadgetDataNotify *const)(v2 + 64));
  widget_gadget_data = proto::WidgetGadgetDataNotify::mutable_widget_gadget_data((proto::WidgetGadgetDataNotify *const)(v2 + 64));
  proto::WidgetGadgetData::set_gadget_id(widget_gadget_data, *(_DWORD *)(v2 + 48));
  __for_range = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                  &this->gadget_entity_id_map_,
                  (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    entity_id = *v6;
    proto::WidgetGadgetData::add_gadget_entity_id_list(widget_gadget_data, entity_id);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_mgr.cpp",
    "notifyGadgetData",
    669);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v16, (const char (*)[12])"gadget_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  proto::WidgetGadgetDataNotify::~WidgetGadgetDataNotify((proto::WidgetGadgetDataNotify *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 674: range 0000000016211A50-0000000016211DA7
void __cdecl WidgetGadgetMgr::notifyAllGadgetData(WidgetGadgetMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v11; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *gadget_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *entity_id_set; // [rsp+58h] [rbp-B8h]
  proto::WidgetGadgetData *widget_gadget_data; // [rsp+60h] [rbp-B0h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  char v16[160]; // [rsp+70h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:675";
  *(_QWORD *)(v1 + 16) = WidgetGadgetMgr::notifyAllGadgetData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::WidgetGadgetAllDataNotify::WidgetGadgetAllDataNotify((proto::WidgetGadgetAllDataNotify *const)(v1 + 48));
  __for_range = &this->gadget_entity_id_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->gadget_entity_id_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->gadget_entity_id_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v11);
    entity_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v11);
    widget_gadget_data = proto::WidgetGadgetAllDataNotify::add_widget_gadget_data((proto::WidgetGadgetAllDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gadget_id);
    }
    proto::WidgetGadgetData::set_gadget_id(widget_gadget_data, *gadget_id);
    __for_range_0 = entity_id_set;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(entity_id_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
    {
      v4 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      proto::WidgetGadgetData::add_gadget_entity_id_list(widget_gadget_data, *v5);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::WidgetGadgetAllDataNotify::~WidgetGadgetAllDataNotify((proto::WidgetGadgetAllDataNotify *const)(v1 + 48));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 690: range 0000000016211DA8-0000000016211F55
WidgetGadgetMgr *__fastcall WidgetGadgetMgr::findGadgetByEntityId(
        WidgetGadgetMgr *const this,
        __int64 entity_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 entity_id:689 64 8 8 iter:691";
  *(_QWORD *)(v3 + 16) = WidgetGadgetMgr::findGadgetByEntityId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,WidgetGadgetData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,WidgetGadgetData>::find(
                                                                                (std::unordered_map<unsigned int,WidgetGadgetData> *const)(entity_id + 72),
                                                                                (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,WidgetGadgetData>::cend((const std::unordered_map<unsigned int,WidgetGadgetData> *const)(entity_id + 72))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,WidgetGadgetData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WidgetGadgetData>,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
  }
  else
  {
    std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,WidgetGadgetData>,false,false> *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  }
  if ( v9 == (char *)v3 )
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
  return this;
};

// Line 700: range 0000000016211F56-00000000162124E7
__int64 __fastcall WidgetGadgetMgr::destroyGadgetAndLeaveScene(WidgetGadgetMgr *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::unordered_set<unsigned int> *v23; // rax
  __int64 result; // rax
  unsigned int GadgetId; // [rsp+2Ch] [rbp-C4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-C0h] BYREF
  VisionContext v27; // [rsp+34h] [rbp-BCh] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 gadget_id:712 48 4 13 entity_id:699 64 16 14 gadget_ptr:702";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::destroyGadgetAndLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = entity_id;
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_mgr.cpp",
    "destroyGadgetAndLeaveScene",
    701);
  v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v28,
         (const char (*)[27])"destroyGadget entity_id : ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v28);
  WidgetGadgetMgr::findGadgetByEntityId((WidgetGadgetMgr *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  std::unordered_map<unsigned int,WidgetGadgetData>::erase(
    &this->gadget_data_map_,
    (const std::unordered_map<unsigned int,WidgetGadgetData>::key_type *)(v2 + 48));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_gadget_mgr.cpp",
      "destroyGadgetAndLeaveScene",
      708);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v28,
           (const char (*)[43])"WidgetGadgetData gadget_ptr is null. uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = Gadget::getGadgetId(v10);
    v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( Entity::isOnScene((const Entity *const)v11) )
    {
      v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Creature::changeLifeState(v12, LIFE_DEAD, 0LL, 1);
      v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = *(_QWORD *)v14->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(*(_QWORD *)v14->baseclass_0 + 128LL);
      v16 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v15;
      VisionContext::VisionContext(&v27, VISION_DIE);
      v16(v14, &v27);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_gadget_mgr.cpp",
        "destroyGadgetAndLeaveScene",
        721);
      v17 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v28,
              (const char (*)[54])"WidgetGadgetData gadget_ptr not on scene. gadget id: ");
      v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GadgetId = Gadget::getGadgetId(v18);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &GadgetId);
      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])"entity_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    WidgetGadgetMgr::notifyGadgetDestroy(this, *(_DWORD *)(v2 + 48));
    v23 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
            &this->gadget_entity_id_map_,
            (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
    if ( std::unordered_set<unsigned int>::erase(v23, (const std::unordered_set<unsigned int>::key_type *)(v2 + 48)) )
      WidgetGadgetMgr::notifyGadgetData(this, *(_DWORD *)(v2 + 32));
    v9 = 0;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  result = v9;
  if ( v29 == (char *)v2 )
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

// Line 733: range 00000000162124E8-0000000016212658
void __cdecl WidgetGadgetMgr::notifyGadgetDestroy(WidgetGadgetMgr *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:734";
  *(_QWORD *)(v2 + 16) = WidgetGadgetMgr::notifyGadgetDestroy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::WidgetGadgetDestroyNotify::WidgetGadgetDestroyNotify((proto::WidgetGadgetDestroyNotify *const)(v2 + 32));
  proto::WidgetGadgetDestroyNotify::set_entity_id((proto::WidgetGadgetDestroyNotify *const)(v2 + 32), entity_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::WidgetGadgetDestroyNotify::~WidgetGadgetDestroyNotify((proto::WidgetGadgetDestroyNotify *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
