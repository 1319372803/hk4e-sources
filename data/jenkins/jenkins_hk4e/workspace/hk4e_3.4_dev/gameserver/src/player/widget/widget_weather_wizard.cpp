// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_weather_wizard.cpp

// Line 24: range 0000000016221CB4-0000000016221D2C
int32_t __cdecl WidgetWeatherWizard::fromDetailBin(
        WidgetWeatherWizard *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  uint32_t v3; // edx
  char v4; // al
  const proto::WidgetWeatherWizardBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::weather_wizard(detail_bin);
  v3 = proto::WidgetWeatherWizardBin::shield_value(bin);
  v4 = *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(detail_bin) = v4 != 0;
    __asan_report_store4(&this->shield_value_, detail_bin, v3);
  }
  this->shield_value_ = v3;
  return 0;
};

// Line 31: range 0000000016221D2E-0000000016221DA5
int32_t __cdecl WidgetWeatherWizard::toDetailBin(
        const WidgetWeatherWizard *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetWeatherWizardBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::mutable_weather_wizard(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->shield_value_);
  }
  proto::WidgetWeatherWizardBin::set_shield_value(bin, this->shield_value_);
  return 0;
};

// Line 38: range 0000000016221DA6-0000000016221E68
int32_t __cdecl WidgetWeatherWizard::init(
        WidgetWeatherWizard *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetWeatherWizard,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetWeatherWizard>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetWeatherWizard> *)&__r);
  std::shared_ptr<data::ConfigWidgetWeatherWizard>::~shared_ptr((std::shared_ptr<data::ConfigWidgetWeatherWizard> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_weather_wizard.cpp",
    "init",
    41);
  common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
    &v5,
    (const char (*)[53])"convert to ConfigWidgetWeatherWizard pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 48: range 0000000016221E6A-0000000016221F20
void __cdecl WidgetWeatherWizard::onLogin(WidgetWeatherWizard *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  WidgetAbilityGroupGenerator::onLogin(this);
  if ( WidgetBase::isSlotOccupied(this, FlyAttach) )
  {
    if ( WidgetWeatherWizard::registerEvent(this) )
    {
      common::milog::MiLogStream::create(
        &v1,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_weather_wizard.cpp",
        "onLogin",
        59);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v1, (const char (*)[22])"register event failed");
      common::milog::MiLogStream::~MiLogStream(&v1);
    }
  }
};

// Line 64: range 0000000016221F22-0000000016221F80
int32_t __cdecl WidgetWeatherWizard::onAttachAvatar(WidgetWeatherWizard *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]
  int32_t reta; // [rsp+1Ch] [rbp-4h]

  ret = WidgetAbilityGroupGenerator::onAttachAvatar(this);
  if ( ret )
    return ret;
  reta = WidgetWeatherWizard::registerEvent(this);
  if ( reta )
    return reta;
  WidgetWeatherWizard::updateRelatedTeamEntitySgv(this);
  WidgetWeatherWizard::notifyWidgetShieldInfo(this);
  return 0;
};

// Line 84: range 0000000016221F82-0000000016221FC8
int32_t __cdecl WidgetWeatherWizard::onDetachAvatar(WidgetWeatherWizard *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]
  int32_t reta; // [rsp+1Ch] [rbp-4h]

  ret = WidgetAbilityGroupGenerator::onDetachAvatar(this);
  if ( ret )
    return ret;
  reta = WidgetWeatherWizard::unregisterEvent(this);
  if ( reta )
    return reta;
  else
    return 0;
};

// Line 101: range 0000000016221FCA-0000000016222312
int32_t __cdecl WidgetWeatherWizard::registerEvent(WidgetWeatherWizard *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  PlayerEventComp *event_comp; // [rsp+38h] [rbp-C8h]
  std::weak_ptr<WidgetWeatherWizard> p_this_wtr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v8; // [rsp+50h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:102 64 16 12 this_wtr:108";
  *(_QWORD *)(v1 + 16) = WidgetWeatherWizard::registerEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<WidgetWeatherWizard>((WidgetWeatherWizard *)(v1 + 32));
  if ( std::operator==<WidgetWeatherWizard>(0LL, (const std::shared_ptr<WidgetWeatherWizard> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "registerEvent",
      105);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v8,
      (const char (*)[51])"dynamic_pointer_cast to WidgetWeatherWizard failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<WidgetWeatherWizard>::weak_ptr<WidgetWeatherWizard,void>(
      (std::weak_ptr<WidgetWeatherWizard> *const)(v1 + 64),
      (const std::shared_ptr<WidgetWeatherWizard> *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<WidgetWeatherWizard>::weak_ptr(&p_this_wtr, (const std::weak_ptr<WidgetWeatherWizard> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<WidgetWeatherWizard,GadgetChainSetLevelEvent>(
      event_comp,
      &p_this_wtr,
      (void (*)(WidgetWeatherWizard *, const GadgetChainSetLevelEvent *))WidgetWeatherWizard::onGadgetChainSetLevelEvent,
      0LL);
    std::weak_ptr<WidgetWeatherWizard>::~weak_ptr(&p_this_wtr);
    std::weak_ptr<WidgetWeatherWizard>::weak_ptr(&p_this_wtr, (const std::weak_ptr<WidgetWeatherWizard> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<WidgetWeatherWizard,PostEnterSceneEvent>(
      event_comp,
      &p_this_wtr,
      (void (*)(WidgetWeatherWizard *, const PostEnterSceneEvent *))WidgetWeatherWizard::onPostEnterSceneEvent,
      0LL);
    std::weak_ptr<WidgetWeatherWizard>::~weak_ptr(&p_this_wtr);
    v4 = 0;
    std::weak_ptr<WidgetWeatherWizard>::~weak_ptr((std::weak_ptr<WidgetWeatherWizard> *const)(v1 + 64));
  }
  std::shared_ptr<WidgetWeatherWizard>::~shared_ptr((std::shared_ptr<WidgetWeatherWizard> *const)(v1 + 32));
  result = v4;
  if ( v9 == (char *)v1 )
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

// Line 116: range 0000000016222314-000000001622241C
int32_t __cdecl WidgetWeatherWizard::unregisterEvent(WidgetWeatherWizard *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
  return 0;
};

// Line 129: range 000000001622241E-00000000162226C7
void __cdecl WidgetWeatherWizard::onGadgetChainSetLevelEvent(
        WidgetWeatherWizard *const this,
        const GadgetChainSetLevelEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t chain_id; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:130";
  *(_QWORD *)(v2 + 16) = WidgetWeatherWizard::onGadgetChainSetLevelEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  WidgetWeatherWizard::getConfig((const WidgetWeatherWizard *const)(v2 + 32));
  if ( std::operator==<data::ConfigWidgetWeatherWizard const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetWeatherWizard> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "onGadgetChainSetLevelEvent",
      133);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v10,
           (const char (*)[29])"getConfig fail, material_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->material_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->chain_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->chain_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->chain_id);
    }
    chain_id = event->chain_id;
    v9 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->gadget_chain_id);
    }
    if ( chain_id == v9->gadget_chain_id )
      WidgetWeatherWizard::updateRelatedTeamEntitySgv(this);
  }
  std::shared_ptr<data::ConfigWidgetWeatherWizard const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetWeatherWizard> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 144: range 00000000162226C8-00000000162226F2
void __cdecl WidgetWeatherWizard::onPostEnterSceneEvent(
        WidgetWeatherWizard *const this,
        const PostEnterSceneEvent *event)
{
  WidgetWeatherWizard::updateRelatedTeamEntitySgv(this);
  WidgetWeatherWizard::notifyWidgetShieldInfo(this);
};

// Line 151: range 00000000162226F4-0000000016222C72
void __cdecl WidgetWeatherWizard::updateRelatedTeamEntitySgv(WidgetWeatherWizard *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  float value; // [rsp+4h] [rbp-DCh]
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 26 new_gadget_chain_level:158 64 16 14 config_ptr:152 96 16 26 avatar_team_entity_ptr:164";
  *(_QWORD *)(v1 + 16) = WidgetWeatherWizard::updateRelatedTeamEntitySgv;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  WidgetWeatherWizard::getConfig((const WidgetWeatherWizard *const)(v1 + 64));
  if ( std::operator==<data::ConfigWidgetWeatherWizard const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetWeatherWizard> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "updateRelatedTeamEntitySgv",
      155);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v16,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    goto LABEL_24;
  }
  *(_DWORD *)(v1 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  v8 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v8->gadget_chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->gadget_chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v8 = (std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->gadget_chain_id);
  }
  if ( PlayerSceneComp::findGadgetChainLevel(SceneComp, v8->gadget_chain_id, (uint32_t *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "updateRelatedTeamEntitySgv",
      161);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v16, (const char (*)[17])"gadget chain id:");
    v10 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v10->gadget_chain_id);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" invalid, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 96));
  if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "updateRelatedTeamEntitySgv",
      167);
    v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v16,
            (const char (*)[28])"getTeamEntity fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v13 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    value = (float)*(int *)(v1 + 48);
    v14 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Creature::setServerGlobalValue(v13, &v14->level_sgvkey, value, 1);
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 96));
LABEL_24:
  std::shared_ptr<data::ConfigWidgetWeatherWizard const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetWeatherWizard> *const)(v1 + 64));
  if ( v17 == (char *)v1 )
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

// Line 174: range 0000000016222C74-0000000016222E1A
void __cdecl WidgetWeatherWizard::notifyWidgetShieldInfo(WidgetWeatherWizard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:175";
  *(_QWORD *)(v1 + 16) = WidgetWeatherWizard::notifyWidgetShieldInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::WidgetWeatherWizardDataNotify::WidgetWeatherWizardDataNotify((proto::WidgetWeatherWizardDataNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->shield_value_);
  }
  proto::WidgetWeatherWizardDataNotify::set_shield_value(
    (proto::WidgetWeatherWizardDataNotify *const)(v1 + 32),
    this->shield_value_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::WidgetWeatherWizardDataNotify::~WidgetWeatherWizardDataNotify((proto::WidgetWeatherWizardDataNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 181: range 0000000016222E1C-0000000016222E8B
void __cdecl WidgetWeatherWizard::fillAllWidgetNotifyData(
        const WidgetWeatherWizard *const this,
        proto::AllWidgetDataNotify *notify)
{
  proto::WeatherWizardData *proto; // [rsp+18h] [rbp-8h]

  proto = proto::AllWidgetDataNotify::mutable_weather_wizard_data(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shield_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->shield_value_);
  }
  proto::WeatherWizardData::set_shield_value(proto, this->shield_value_);
};

// Line 187: range 0000000016222E8C-0000000016223260
int32_t __cdecl WidgetWeatherWizard::onClientReport(WidgetWeatherWizard *const this, const proto::WidgetReportReq *req)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_shield_max; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v20; // [rsp+10h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 30 client_report_shield_value:188 64 16 14 config_ptr:189";
  *(_QWORD *)(v2 + 16) = WidgetWeatherWizard::onClientReport;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::WidgetReportReq::weather_wizard_shield_value(req);
  WidgetWeatherWizard::getConfig((const WidgetWeatherWizard *const)(v2 + 64));
  if ( std::operator==<data::ConfigWidgetWeatherWizard const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetWeatherWizard> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_weather_wizard.cpp",
      "onClientReport",
      192);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v20,
           (const char (*)[29])"getConfig fail, material_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->material_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v8 = 5;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_shield_max = &v9->shield_max;
    if ( *(_BYTE *)(((unsigned __int64)p_shield_max >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_shield_max & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_shield_max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_shield_max);
    }
    if ( v9->shield_max >= *(_DWORD *)(v2 + 48) )
    {
      WidgetWeatherWizard::setShieldValue(this, *(_DWORD *)(v2 + 48));
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_weather_wizard.cpp",
        "onClientReport",
        198);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v20,
              (const char (*)[22])"report shield value: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" failed, max: ");
      v14 = std::__shared_ptr_access<data::ConfigWidgetWeatherWizard const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->shield_max);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])", material_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->material_id_);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v8 = -1;
    }
  }
  std::shared_ptr<data::ConfigWidgetWeatherWizard const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetWeatherWizard> *const)(v2 + 64));
  result = v8;
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
  return result;
};

// Line 207: range 0000000016223262-00000000162233C1
std::shared_ptr<const data::ConfigWidgetWeatherWizard> __cdecl WidgetWeatherWizard::getConfig(
        const WidgetWeatherWizard *const this)
{
  const WidgetWeatherWizard *v1; // rsi
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  std::shared_ptr<const data::ConfigWidgetWeatherWizard> result; // rax
  const WidgetWeatherWizard *thisa; // [rsp+0h] [rbp-50h]
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  thisa = v1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_weather_wizard.cpp",
    "getConfig",
    208);
  v2 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v8, (const char (*)[13])"material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &v1->material_id_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v3->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->material_id_);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, WidgetNewConfig);
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetWeatherWizard const>(
    (const WidgetJsonNewConfig *const)this,
    (uint32_t)WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  result._M_ptr = (std::__shared_ptr<const data::ConfigWidgetWeatherWizard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 210: range 000000001622E6D6-000000001622E6EA
void __cdecl GLOBAL__sub_I_merge_merge_tower_defense_effect_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 210: range 000000001622D706-000000001622E6D5
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  const std::type_info *M_target; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_tower_defense_effect.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister(
        &ServerGlobalValue_register,
        CHESS_CARD_EFFECT_SET_SGV);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister(
        &ModifyBuildCost_register,
        CHESS_CARD_EFFECT_MOD_COST);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister(
        &ModifyRefund_register,
        CHESS_CARD_EFFECT_MOD_REFUND);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister(
        &ModifyKillPoints_register,
        CHESS_CARD_EFFECT_MOD_KILL_POINTS);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister(
        &AddGearNum_register,
        CHESS_CARD_EFFECT_ADD_GEAR_NUM);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister(
        &GrantPoints_register,
        CHESS_CARD_EFFECT_GRANT_POINTS);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister(
        &KillGears_register,
        CHESS_CARD_EFFECT_KILL_GEARS);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister(
        &RandomRemove_register,
        CHESS_CARD_EFFECT_RANDOM_REMOVE);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister(
        &PointsOnRoundEnd_register,
        CHESS_CARD_EFFECT_POINTS_ON_ROUND_END);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister(
        &PickCardLTEServerGlobalValue_register,
        CHESS_CARD_EFFECT_SGV_PICK_CARD_LTE);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister(
        &ModifyCardCost_register,
        CHESS_CARD_EFFECT_MOD_CARD_COST);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister(
        &CardTypeCountNoCost_register,
        CHESS_CARD_EFFECT_CARDS_TYPE_COUNT_NO_COST);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister(
        &ModifyCandidateCards_register,
        CHESS_CARD_EFFECT_MOD_CANDIDATE_CARDS);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister(
        &ModifyQualityProb_register,
        CHESS_CARD_EFFECT_MOD_QUALITY_PROB);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister(
        &FreeCardOnRefresh_register,
        CHESS_CARD_EFFECT_FREE_CARD_REFRESH);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister(
        &ModifyRefreshCost_register,
        CHESS_CARD_EFFECT_MOD_REFRESH_COST);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister(
        &CardsCountStackServerGlobalValue_register,
        CHESS_CARD_EFFECT_CARDS_COUNT_STACK_SGV);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister(
        &PointsStackServerGlobalValue_register,
        CHESS_CARD_EFFECT_POINTS_STACK_SGV);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister(
        &CardTypeStackServerGlobalValue_register,
        CHESS_CARD_EFFECT_CARD_TYPE_STACK_SGV);
      common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister(
        &CardTypeForceCurse_register,
        CHESS_CARD_EFFECT_CARD_TYPE_FORCE_CURSE);
      common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister(
        &AddServerGlobalValue_irodori_register,
        IRODORI_CHESS_CARD_EFFECT_ADD_SGV);
      common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister(
        &ModifyRefundByCost_irodori_register,
        IRODORI_CHESS_CARD_EFFECT_MOD_REFUND_BY_COST);
      common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister(
        &AddAbilityGroup_irodori_register,
        IRODORI_CHESS_CARD_EFFECT_ADD_ABILITY_GROUP);
      common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister(
        &AddGearNum_irodori_register,
        IRODORI_CHESS_CARD_EFFECT_ADD_GEAR_NUM);
      common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister(
        &AddTargetGearNum_irodori_register,
        IRODORI_CHESS_CARD_EFFECT_ADD_TARGET_GEAR_NUM);
      std::type_index::type_index(
        &WidgetBackground::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetBackground);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetBackground::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetBackground::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &Background_register,
        WidgetBackground::widget_type);
      std::type_index::type_index(
        &WidgetFishing::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetFishing);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetFishing::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetFishing::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &Fishing_register,
        WidgetFishing::widget_type);
      std::type_index::type_index(
        &WidgetCamera::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyCamera);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetCamera::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetCamera::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &Camera_register,
        WidgetCamera::widget_type);
      std::type_index::type_index(
        &WidgetCaptureAnimal::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetCaptureAnimal);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetCaptureAnimal::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetCaptureAnimal::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &CaptureAnimal_register,
        WidgetCaptureAnimal::widget_type);
      std::type_index::type_index(
        &WidgetClientCollector::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyClintCollector);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetClientCollector::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetClientCollector::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ClientCollector_register,
        WidgetClientCollector::widget_type);
      std::type_index::type_index(
        &WidgetClientDetector::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyClintDetector);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetClientDetector::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetClientDetector::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ClientDetector_register,
        WidgetClientDetector::widget_type);
      std::type_index::type_index(
        &WidgetCoinCollect::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetCoinCollect);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetCoinCollect::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetCoinCollect::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &CoinCollect_register,
        WidgetCoinCollect::widget_type);
      std::type_index::type_index(
        &WidgetDigScanner::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetDigScanner);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetDigScanner::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetDigScanner::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &DigScanner_register,
        WidgetDigScanner::widget_type);
      std::type_index::type_index(
        &WidgetFireworksLauncher::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetFireworksLauncher);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetFireworksLauncher::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetFireworksLauncher::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &FireworksLauncher_register,
        WidgetFireworksLauncher::widget_type);
      std::type_index::type_index(
        &WidgetGadgetBuilder::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyGadgetBuilder);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetGadgetBuilder::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetGadgetBuilder::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &GadgetBuilder_register,
        WidgetGadgetBuilder::widget_type);
      std::type_index::type_index(
        &WidgetTeapotCreator::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyAdeptiAbode);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetTeapotCreator::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetTeapotCreator::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &TeapotCreator_register,
        WidgetTeapotCreator::widget_type);
      std::type_index::type_index(
        &WidgetLightStone::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetLightStone);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetLightStone::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetLightStone::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &LightStone_register,
        WidgetLightStone::widget_type);
      std::type_index::type_index(
        &WidgetLunchBox::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyLunchBox);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetLunchBox::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetLunchBox::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &LunchBox_register,
        WidgetLunchBox::widget_type);
      std::type_index::type_index(
        &WidgetOneoffGatherPointDetector::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyOneoffGatherPointDetector);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetOneoffGatherPointDetector::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetOneoffGatherPointDetector::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &OneoffGatherPointDetector_register,
        WidgetOneoffGatherPointDetector::widget_type);
      std::type_index::type_index(
        &WidgetOpenPage::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyOpenPage);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetOpenPage::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetOpenPage::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &OpenPage_register,
        WidgetOpenPage::widget_type);
      std::type_index::type_index(
        &WidgetQuickHitTree::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyHitTree);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetQuickHitTree::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetQuickHitTree::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &QuickHitTree_register,
        WidgetQuickHitTree::widget_type);
      std::type_index::type_index(
        &WidgetRockBoardDetector::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetRockBoardDetector);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetRockBoardDetector::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetRockBoardDetector::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &RockBoardDetector_register,
        WidgetRockBoardDetector::widget_type);
      std::type_index::type_index(
        &WidgetScanCamera::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetScanCamera);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetScanCamera::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetScanCamera::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ScanCamera_register,
        WidgetScanCamera::widget_type);
      std::type_index::type_index(
        &WidgetTakePhoto::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyTakePhoto);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetTakePhoto::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetTakePhoto::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &TakePhoto_register,
        WidgetTakePhoto::widget_type);
      std::type_index::type_index(
        &WidgetThunderBirdFeather::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyFeather);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetThunderBirdFeather::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetThunderBirdFeather::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ThunderBirdFeather_register,
        WidgetThunderBirdFeather::widget_type);
      std::type_index::type_index(
        &WidgetToyCrystal::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyCrystal);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetToyCrystal::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetToyCrystal::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ToyCrystal_register,
        WidgetToyCrystal::widget_type);
      std::type_index::type_index(
        &WidgetToyInstrument::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyInstrument);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetToyInstrument::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetToyInstrument::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &ToyInstrument_register,
        WidgetToyInstrument::widget_type);
      std::type_index::type_index(
        &WidgetTreasureMapDetector::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetToyTreasureMapDetector);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetTreasureMapDetector::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetTreasureMapDetector::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &TreasureMapDetector_register,
        WidgetTreasureMapDetector::widget_type);
      std::type_index::type_index(
        &WidgetUseAttachAbilityTrigger::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetUseAttachAbilityTrigger);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetUseAttachAbilityTrigger::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetUseAttachAbilityTrigger::widget_type);
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &UseAttachAbilityTrigger_register,
        WidgetUseAttachAbilityTrigger::widget_type);
      std::type_index::type_index(
        &WidgetWeatherWizard::widget_type,
        (const std::type_info *)&`typeinfo for'data::ConfigWidgetWeatherWizard);
      if ( *(_BYTE *)(((unsigned __int64)&WidgetWeatherWizard::widget_type >> 3) + 0x7FFF8000) )
        __asan_report_load8(&WidgetWeatherWizard::widget_type);
      M_target = WidgetWeatherWizard::widget_type._M_target;
      common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        &WeatherWizard_register,
        WidgetWeatherWizard::widget_type);
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            M_target,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        M_target = (const std::type_info *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            M_target,
            v19);
        *v17 = 1;
        M_target = (const std::type_info *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            M_target,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, M_target);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            M_target,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            M_target,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        M_target = (const std::type_info *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(M_target) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            M_target,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, M_target);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
