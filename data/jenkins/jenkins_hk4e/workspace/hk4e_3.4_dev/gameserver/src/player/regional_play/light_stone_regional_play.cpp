// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/light_stone_regional_play.cpp

// Line 26: range 0000000015CA4FB4-0000000015CA5112
bool __cdecl LightStoneRegionalPlay::isVarCanBeModified(const LightStoneRegionalPlay *const this, uint32_t var_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  WidgetBase *v6; // rax
  bool v7; // al
  bool result; // al
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 widget_ptr:31";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::isVarCanBeModified;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( var_type == 2600 )
  {
    LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v2 + 32));
    v7 = 1;
    if ( !std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v2 + 32)) )
    {
      v6 = (WidgetBase *)std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( WidgetBase::isSlotOccupied(v6, ActionPanel) )
        v7 = 0;
    }
    v5 = !v7;
    std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v2 + 32));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 40: range 0000000015CA5114-0000000015CA5284
float __cdecl LightStoneRegionalPlay::getMaxVarValue(const LightStoneRegionalPlay *const this, uint32_t var_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  float result; // xmm0_4
  float LightStoneEnergyLimit; // [rsp+0h] [rbp-70h]
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 widget_ptr:45";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::getMaxVarValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( var_type == 2600 )
  {
    LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v2 + 32));
    if ( std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v2 + 32)) )
    {
      LightStoneEnergyLimit = 0.0;
    }
    else
    {
      v5 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      LightStoneEnergyLimit = (float)(int)WidgetLightStone::getLightStoneEnergyLimit(v5);
    }
    std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v2 + 32));
  }
  else
  {
    LightStoneEnergyLimit = 0.0;
  }
  result = LightStoneEnergyLimit;
  if ( v8 == (char *)v2 )
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

// Line 54: range 0000000015CA5286-0000000015CA5296
float __cdecl LightStoneRegionalPlay::getMinVarValue(const LightStoneRegionalPlay *const this, uint32_t var_type)
{
  return 0.0;
};

// Line 59: range 0000000015CA5298-0000000015CA55E7
void __fastcall LightStoneRegionalPlay::onVarChanged(LightStoneRegionalPlay *const this, uint32_t var_type, __m128i a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerRegionalPlayComp *v14; // rax
  std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  float val; // [rsp+18h] [rbp-B8h] BYREF
  float value; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 var_type:58 64 16 13 config_ptr:64";
  *(_QWORD *)(v3 + 16) = LightStoneRegionalPlay::onVarChanged;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = var_type;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/light_stone_regional_play.cpp",
    "onVarChanged",
    60);
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"play_name:");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->play_name_);
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" play_type:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_type_);
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" var_type:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" val:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)a3.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, *(_DWORD *)(v3 + 48));
  LODWORD(val) = _mm_cvtsi128_si32(a3);
  common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( *(_DWORD *)(v3 + 48) == 2600 )
  {
    LightStoneRegionalPlay::getConfig((const LightStoneRegionalPlay *const)(v3 + 64));
    if ( std::operator!=<data::ConfigRegionalPlayLightStone const>(
           0LL,
           (const std::shared_ptr<const data::ConfigRegionalPlayLightStone> *)(v3 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v14 = Player::getRegionalPlayComp(this->player_);
      *(float *)a3.m128i_i32 = PlayerRegionalPlayComp::getVarValue(v14, *(_DWORD *)(v3 + 48));
      LODWORD(value) = _mm_cvtsi128_si32(a3);
      v15 = std::__shared_ptr_access<data::ConfigRegionalPlayLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      LightStoneRegionalPlay::updateTeamEntitySgv(this, &v15->energy_sgv, value);
    }
    LightStoneRegionalPlay::checkLogLightStoneStateChange(this);
    std::shared_ptr<data::ConfigRegionalPlayLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigRegionalPlayLightStone> *const)(v3 + 64));
  }
  BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
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

// Line 76: range 0000000015CA55E8-0000000015CA5A02
void __cdecl LightStoneRegionalPlay::onEnabled(LightStoneRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerMpComp *MpComp; // rax
  PlayerSceneComp *SceneComp; // rax
  char v7; // al
  WidgetLightStone *v8; // r14
  bool IsEnabled; // al
  std::weak_ptr<LightStoneRegionalPlay> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  PlayerRegionalPlayComp *regional_play_comp; // [rsp+28h] [rbp-A8h]
  std::weak_ptr<LightStoneRegionalPlay> v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 this_wtr:91 64 16 13 widget_ptr:95";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::onEnabled;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    regional_play_comp = Player::getRegionalPlayComp(this->player_);
    *(float *)v1.m128i_i32 = PlayerRegionalPlayComp::getVariableInVarMap(regional_play_comp, 0xA28u);
    PlayerRegionalPlayComp::setVarValue(regional_play_comp, 0xA28u, COERCE_FLOAT(_mm_cvtsi128_si32(v1)));
  }
  LightStoneRegionalPlay::checkUpdateRelatedTeamEntitySgv(this);
  LightStoneRegionalPlay::checkLogLightStoneStateChange(this);
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
  {
    toThisPtr<LightStoneRegionalPlay>((LightStoneRegionalPlay *)(v2 + 64));
    std::weak_ptr<LightStoneRegionalPlay>::weak_ptr<LightStoneRegionalPlay,void>(
      (std::weak_ptr<LightStoneRegionalPlay> *const)(v2 + 32),
      (const std::shared_ptr<LightStoneRegionalPlay> *)(v2 + 64));
    std::shared_ptr<LightStoneRegionalPlay>::~shared_ptr((std::shared_ptr<LightStoneRegionalPlay> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<LightStoneRegionalPlay> *)Player::getEventComp(this->player_);
    std::weak_ptr<LightStoneRegionalPlay>::weak_ptr(&v12, (const std::weak_ptr<LightStoneRegionalPlay> *)(v2 + 32));
    PlayerEventComp::registerObserver<LightStoneRegionalPlay,OfferingLevelupEvent>(
      (PlayerEventComp *const)(v2 + 64),
      p_this_wtr,
      (void (*)(LightStoneRegionalPlay *, const OfferingLevelupEvent *))&v12);
    std::weak_ptr<Observer>::operator=(&this->offering_levelup_wtr_, (std::weak_ptr<Observer> *)(v2 + 64));
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)(v2 + 64));
    std::weak_ptr<LightStoneRegionalPlay>::~weak_ptr(&v12);
    std::weak_ptr<LightStoneRegionalPlay>::~weak_ptr((std::weak_ptr<LightStoneRegionalPlay> *const)(v2 + 32));
  }
  LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v2 + 64));
  if ( std::operator!=<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v2 + 64)) )
  {
    v8 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    IsEnabled = BaseRegionalPlay::getIsEnabled(this);
    WidgetLightStone::checkAndRefreshLightStoneAbilityGroup(v8, IsEnabled);
  }
  std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v2 + 64));
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
};

// Line 103: range 0000000015CA5A04-0000000015CA5BE8
void __cdecl LightStoneRegionalPlay::onDisabled(LightStoneRegionalPlay *const this)
{
  ObserverWtr *p_offering_levelup_wtr; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerEventComp *EventComp; // rax
  WidgetLightStone *v6; // r14
  bool IsEnabled; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 widget_ptr:111";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::onDisabled;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    p_offering_levelup_wtr = &this->offering_levelup_wtr_;
    PlayerEventComp::unregisterObserver(EventComp, &this->offering_levelup_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->offering_levelup_wtr_);
  }
  if ( *(char *)(((unsigned __int64)&this->has_light_stone_energy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_light_stone_energy_, p_offering_levelup_wtr, &this->has_light_stone_energy_);
  this->has_light_stone_energy_ = 0;
  LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v2 + 32));
  if ( std::operator!=<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v2 + 32)) )
  {
    v6 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    IsEnabled = BaseRegionalPlay::getIsEnabled(this);
    WidgetLightStone::checkAndRefreshLightStoneAbilityGroup(v6, IsEnabled);
  }
  std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v2 + 32));
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

// Line 119: range 0000000015CA5BEA-0000000015CA6148
void __cdecl LightStoneRegionalPlay::checkUpdateRelatedTeamEntitySgv(const LightStoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  WidgetBase *v4; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  float value; // [rsp+4h] [rbp-ECh]
  float valuea; // [rsp+4h] [rbp-ECh]
  PlayerRegionalPlayComp *regional_play_comp; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 widget_ptr:124 64 16 14 config_ptr:129 96 16 26 avatar_team_entity_ptr:135";
  *(_QWORD *)(v1 + 16) = LightStoneRegionalPlay::checkUpdateRelatedTeamEntitySgv;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  if ( this->is_enabled_ )
  {
    LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v1 + 32));
    if ( !std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v1 + 32)) )
    {
      v4 = (WidgetBase *)std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( WidgetBase::isSlotOccupied(v4, ActionPanel) )
      {
        LightStoneRegionalPlay::getConfig((const LightStoneRegionalPlay *const)(v1 + 64));
        if ( std::operator==<data::ConfigRegionalPlayLightStone const>(
               0LL,
               (const std::shared_ptr<const data::ConfigRegionalPlayLightStone> *)(v1 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/regional_play/light_stone_regional_play.cpp",
            "checkUpdateRelatedTeamEntitySgv",
            132);
          v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 &v16,
                 (const char (*)[24])"getConfig fail, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v6, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
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
              "./src/player/regional_play/light_stone_regional_play.cpp",
              "checkUpdateRelatedTeamEntitySgv",
              138);
            v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                   &v16,
                   (const char (*)[28])"getTeamEntity fail, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v7, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v16);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            regional_play_comp = Player::getRegionalPlayComp(this->player_);
            v8 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            value = PlayerRegionalPlayComp::getVarValue(regional_play_comp, 0xA28u);
            v9 = std::__shared_ptr_access<data::ConfigRegionalPlayLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            Creature::setServerGlobalValue(v8, &v9->energy_sgv, value, 1);
            v10 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v11 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
            valuea = (float)(int)WidgetLightStone::getLightStoneLevel(v11);
            v12 = std::__shared_ptr_access<data::ConfigRegionalPlayLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            Creature::setServerGlobalValue(v10, &v12->level_sgv, valuea, 1);
          }
          std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 96));
        }
        std::shared_ptr<data::ConfigRegionalPlayLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigRegionalPlayLightStone> *const)(v1 + 64));
      }
    }
    std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v1 + 32));
  }
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

// Line 147: range 0000000015CA614A-0000000015CA6342
bool __cdecl LightStoneRegionalPlay::hasLightStoneEnergy(const LightStoneRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  WidgetBase *v6; // rax
  bool v7; // al
  bool result; // al
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 widget_ptr:156";
  *(_QWORD *)(v1 + 16) = LightStoneRegionalPlay::hasLightStoneEnergy;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  if ( !this->is_enabled_ )
  {
    v4 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
    if ( PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0xA28u) >= 0.5 )
    {
      LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v1 + 32));
      v7 = 1;
      if ( !std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v1 + 32)) )
      {
        v6 = (WidgetBase *)std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( WidgetBase::isSlotOccupied(v6, ActionPanel) )
          v7 = 0;
      }
      v4 = !v7;
      std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v1 + 32));
    }
    else
    {
      v4 = 0;
    }
  }
  result = v4;
  if ( v9 == (char *)v1 )
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

// Line 165: range 0000000015CA6344-0000000015CA646F
uint32_t __cdecl LightStoneRegionalPlay::getLightStoneWidgetLevel(const LightStoneRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t LightStoneLevel; // r14d
  std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 widget_ptr:166";
  *(_QWORD *)(v1 + 16) = LightStoneRegionalPlay::getLightStoneWidgetLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  LightStoneRegionalPlay::findWidgetLightStone((const LightStoneRegionalPlay *const)(v1 + 32));
  if ( std::operator==<WidgetLightStone>(0LL, (const std::shared_ptr<WidgetLightStone> *)(v1 + 32)) )
  {
    LightStoneLevel = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    LightStoneLevel = WidgetLightStone::getLightStoneLevel(v5);
  }
  std::shared_ptr<WidgetLightStone>::~shared_ptr((std::shared_ptr<WidgetLightStone> *const)(v1 + 32));
  result = LightStoneLevel;
  if ( v7 == (char *)v1 )
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

// Line 175: range 0000000015CA6470-0000000015CA6829
void __cdecl LightStoneRegionalPlay::checkLogLightStoneStateChange(LightStoneRegionalPlay *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::uint32 v8; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  uint32_t LightStoneWidgetLevel; // eax
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-F0h]
  LightStoneRegionalPlay *thisa; // [rsp+8h] [rbp-E8h]
  bool has_energy; // [rsp+1Fh] [rbp-D1h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:183 64 16 11 log_ptr:184";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::checkLogLightStoneStateChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  v12._anon_0._M_local_buf[15] = LightStoneRegionalPlay::hasLightStoneEnergy(this);
  if ( *(char *)(((unsigned __int64)&this->has_light_stone_energy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_light_stone_energy_);
  if ( v12._anon_0._M_local_buf[15] != this->has_light_stone_energy_ )
  {
    if ( *(char *)(((unsigned __int64)&this->has_light_stone_energy_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->has_light_stone_energy_, v1, &this->has_light_stone_energy_);
    this->has_light_stone_energy_ = v12._anon_0._M_local_buf[15];
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v17, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x618u, v12);
    std::string::~string(&v17);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyLightStoneStateChange>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyLightStoneStateChange::set_transaction(v6, &thisa->regional_play_transaction_);
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( has_energy )
      v8 = 1;
    else
      v8 = 2;
    proto_log::PlayerLogBodyLightStoneStateChange::set_state(v7, v8);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLightStoneStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LightStoneWidgetLevel = LightStoneRegionalPlay::getLightStoneWidgetLevel(thisa);
    proto_log::PlayerLogBodyLightStoneStateChange::set_level(v9, LightStoneWidgetLevel);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLightStoneStateChange,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyLightStoneStateChange> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyLightStoneStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLightStoneStateChange> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v18 == (char *)v2 )
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

// Line 192: range 0000000015CA682A-0000000015CA6B11
void __fastcall LightStoneRegionalPlay::updateTeamEntitySgv(
        const LightStoneRegionalPlay *const this,
        const std::string *sgv_name,
        float value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 value:191 64 16 26 avatar_team_entity_ptr:193";
  *(_QWORD *)(v3 + 16) = LightStoneRegionalPlay::updateTeamEntitySgv;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(float *)(v3 + 48) = value;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v3 + 64));
  if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/light_stone_regional_play.cpp",
      "updateTeamEntitySgv",
      196);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"getTeamEntity fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = operator<<(v6, this->player_);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" play_name:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &this->play_name_);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" sgv_name:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, sgv_name);
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" value:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v13 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Creature::setServerGlobalValue(v13, sgv_name, *(float *)(v3 + 48), 1);
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v3 + 64));
  if ( v15 == (char *)v3 )
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

// Line 203: range 0000000015CA6B12-0000000015CA6BD9
std::shared_ptr<const data::ConfigRegionalPlayLightStone> __cdecl LightStoneRegionalPlay::getConfig(
        const LightStoneRegionalPlay *const this)
{
  JsonConfigMgr *p_json_config_mgr; // rsi
  std::shared_ptr<const data::ConfigRegionalPlayLightStone> result; // rax
  std::shared_ptr<Config> v3; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<data::ConfigRegionalPlayBase> v4; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.json_config_mgr;
  JsonConfigMgr::findRegionalPlayConfig((const JsonConfigMgr *const)&v4, (const std::string *)p_json_config_mgr);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, p_json_config_mgr);
  std::dynamic_pointer_cast<data::ConfigRegionalPlayLightStone const,data::ConfigRegionalPlayBase>((const std::shared_ptr<data::ConfigRegionalPlayBase> *)this);
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr(&v4);
  std::shared_ptr<Config>::~shared_ptr(&v3);
  result._M_ptr = (std::__shared_ptr<const data::ConfigRegionalPlayLightStone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 208: range 0000000015CA6BDA-0000000015CA6E95
std::shared_ptr<WidgetLightStone> __cdecl LightStoneRegionalPlay::findWidgetLightStone(
        const LightStoneRegionalPlay *const this)
{
  const LightStoneRegionalPlay *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char *v6; // rsi
  uint32_t WidgetComp; // r14d
  std::__shared_ptr_access<data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v9; // dl
  std::shared_ptr<WidgetLightStone> result; // rax
  const LightStoneRegionalPlay *thisa; // [rsp+0h] [rbp-B0h]
  std::shared_ptr<Config> v12; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  thisa = v1;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 config_widget_ptr:209";
  *(_QWORD *)(v2 + 16) = LightStoneRegionalPlay::findWidgetLightStone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetLightStone>((const WidgetJsonNewConfig *const)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  v6 = (char *)(v2 + 32);
  if ( std::operator==<data::ConfigWidgetLightStone>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetLightStone> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/regional_play/light_stone_regional_play.cpp",
      "findWidgetLightStone",
      212);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      &v13,
      (const char (*)[48])"findWidgetConfig of ConfigWidgetLightStone fail");
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<WidgetLightStone>::shared_ptr((std::shared_ptr<WidgetLightStone> *const)this, 0LL);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    WidgetComp = (unsigned int)Player::getWidgetComp(thisa->player_);
    v8 = std::__shared_ptr_access<data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = *(_BYTE *)(((unsigned __int64)&v8->material_id >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_load4(&v8->material_id);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v6);
    PlayerWidgetComp::findWidget<WidgetLightStone>((PlayerWidgetComp *const)this, WidgetComp);
  }
  std::shared_ptr<data::ConfigWidgetLightStone>::~shared_ptr((std::shared_ptr<data::ConfigWidgetLightStone> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<WidgetLightStone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 219: range 0000000015CA6E96-0000000015CA6EB4
void __cdecl LightStoneRegionalPlay::onOfferingLevelupEvent(
        LightStoneRegionalPlay *const this,
        const OfferingLevelupEvent *a2)
{
  LightStoneRegionalPlay::checkUpdateRelatedTeamEntitySgv(this);
};
