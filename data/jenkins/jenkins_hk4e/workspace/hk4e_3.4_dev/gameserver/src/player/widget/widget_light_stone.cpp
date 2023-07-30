// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_light_stone.cpp

// Line 30: range 000000001621265A-000000001621282A
int32_t __cdecl WidgetLightStone::fromDetailBin(
        WidgetLightStone *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  const proto::WidgetDetailBin *v3; // rax
  bool is_hint_valid; // cl
  char v5; // dl
  __int64 v6; // rdx
  const proto::VectorBin *v7; // rax
  char v8; // dl
  __int64 v9; // rsi
  uint32_t v10; // edx
  char v11; // al
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  const proto::WidgetLightStoneBin *bin; // [rsp+28h] [rbp-18h]
  Vector3 v17; // [rsp+34h] [rbp-Ch] BYREF

  v3 = proto::WidgetBin::detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::light_stone(v3);
  is_hint_valid = proto::WidgetLightStoneBin::is_hint_valid(bin);
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000);
  LOBYTE(detail_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_hint_valid_, detail_bin, v6);
  this->is_hint_valid_ = is_hint_valid;
  v7 = proto::WidgetLightStoneBin::hint_center_pos(bin);
  Vector3::Vector3(&v17, v7);
  v8 = *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( ((((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)this - 97) & 7) >= v8) )
  {
    v9 = 12LL;
    __asan_report_store_n(&this->hint_center_pos_, 12LL);
  }
  this->hint_center_pos_ = v17;
  v10 = proto::WidgetLightStoneBin::group_id(bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->group_id_, v9, v10);
  }
  this->group_id_ = v10;
  v12 = proto::WidgetLightStoneBin::config_id(bin);
  v13 = *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->config_id_, v9, v14);
  this->config_id_ = v12;
  return 0;
};

// Line 40: range 000000001621282C-000000001621297E
int32_t __cdecl WidgetLightStone::toDetailBin(
        const WidgetLightStone *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetDetailBin *v3; // rax
  proto::VectorBin *v4; // rax
  proto::WidgetLightStoneBin *bin; // [rsp+28h] [rbp-18h]

  v3 = proto::WidgetBin::mutable_detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::mutable_light_stone(v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  proto::WidgetLightStoneBin::set_is_hint_valid(bin, this->is_hint_valid_);
  v4 = proto::WidgetLightStoneBin::mutable_hint_center_pos(bin);
  Vector3::toBin(&this->hint_center_pos_, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::WidgetLightStoneBin::set_group_id(bin, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  proto::WidgetLightStoneBin::set_config_id(bin, this->config_id_);
  return 0;
};

// Line 50: range 0000000016212980-0000000016212A42
int32_t __cdecl WidgetLightStone::init(WidgetLightStone *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetLightStone,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetLightStone>(0LL, (const std::shared_ptr<data::ConfigWidgetLightStone> *)&__r);
  std::shared_ptr<data::ConfigWidgetLightStone>::~shared_ptr((std::shared_ptr<data::ConfigWidgetLightStone> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_light_stone.cpp",
    "init",
    53);
  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
    &v5,
    (const char (*)[50])"convert to ConfigWidgetLightStone pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 60: range 0000000016212A44-0000000016212A74
void __cdecl WidgetLightStone::fillAllWidgetNotifyData(
        const WidgetLightStone *const this,
        proto::AllWidgetDataNotify *notify)
{
  proto::SkyCrystalDetectorData *v2; // rdx

  v2 = proto::AllWidgetDataNotify::mutable_sky_crystal_detector_data(notify);
  WidgetLightStone::toSkyCrystalDetectorData(this, v2);
};

// Line 65: range 0000000016212A76-0000000016212D0A
void __cdecl WidgetLightStone::onLogin(WidgetLightStone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  std::string *p_ability_group_name; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:69";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::onLogin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  WidgetBase::onLogin((WidgetBase *const)this);
  if ( WidgetBase::isSlotOccupied((WidgetBase *const)this, ActionPanel) )
  {
    WidgetLightStone::getConfig((const WidgetLightStone *const)(v1 + 32));
    if ( std::operator==<data::ConfigWidgetLightStone const>(
           0LL,
           (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_light_stone.cpp",
        "onLogin",
        72);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v9,
             (const char (*)[29])"getConfig fail, material_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      p_ability_group_name = &std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->ability_group_name;
      v8 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(char *)(((unsigned __int64)&v8->is_team >> 3) + 0x7FFF8000) < 0 )
        v8 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v8->is_team);
      WidgetLightStone::tryAddAbilityGroup(this, v8->is_team, p_ability_group_name);
    }
    std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v1 + 32));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 80: range 0000000016212D0C-0000000016212EDE
int32_t __cdecl WidgetLightStone::onSetActionPanel(WidgetLightStone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  LightStoneRegionalPlay *v5; // rax
  std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  bool is_light_stone_regional_play_enabled; // [rsp+1Fh] [rbp-81h]
  std::shared_ptr<BaseRegionalPlay> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 32 light_stone_regional_play_ptr:82";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::onSetActionPanel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  is_light_stone_regional_play_enabled = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getRegionalPlayComp(this->player_);
  PlayerRegionalPlayComp::getLastRegionalPlayPtr((const PlayerRegionalPlayComp *const)&v9);
  std::dynamic_pointer_cast<LightStoneRegionalPlay,BaseRegionalPlay>((const std::shared_ptr<BaseRegionalPlay> *)(v1 + 32));
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr(&v9);
  if ( std::operator!=<LightStoneRegionalPlay>(0LL, (const std::shared_ptr<LightStoneRegionalPlay> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    LightStoneRegionalPlay::checkUpdateRelatedTeamEntitySgv(v4);
    v5 = std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    LightStoneRegionalPlay::checkLogLightStoneStateChange(v5);
    v6 = std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    is_light_stone_regional_play_enabled = BaseRegionalPlay::getIsEnabled(v6);
  }
  WidgetLightStone::checkAndRefreshLightStoneAbilityGroup(this, is_light_stone_regional_play_enabled);
  std::shared_ptr<LightStoneRegionalPlay>::~shared_ptr((std::shared_ptr<LightStoneRegionalPlay> *const)(v1 + 32));
  result = 0;
  if ( v10 == (char *)v1 )
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

// Line 94: range 0000000016212EE0-000000001621309D
int32_t __cdecl WidgetLightStone::onClearActionPanel(WidgetLightStone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  LightStoneRegionalPlay *v4; // rax
  std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  bool is_light_stone_regional_play_enabled; // [rsp+1Fh] [rbp-81h]
  std::shared_ptr<BaseRegionalPlay> v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 32 light_stone_regional_play_ptr:96";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::onClearActionPanel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  is_light_stone_regional_play_enabled = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getRegionalPlayComp(this->player_);
  PlayerRegionalPlayComp::getLastRegionalPlayPtr((const PlayerRegionalPlayComp *const)&v8);
  std::dynamic_pointer_cast<LightStoneRegionalPlay,BaseRegionalPlay>((const std::shared_ptr<BaseRegionalPlay> *)(v1 + 32));
  std::shared_ptr<BaseRegionalPlay>::~shared_ptr(&v8);
  if ( std::operator!=<LightStoneRegionalPlay>(0LL, (const std::shared_ptr<LightStoneRegionalPlay> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    LightStoneRegionalPlay::checkLogLightStoneStateChange(v4);
    v5 = std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LightStoneRegionalPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    is_light_stone_regional_play_enabled = BaseRegionalPlay::getIsEnabled(v5);
  }
  WidgetLightStone::checkAndRefreshLightStoneAbilityGroup(this, is_light_stone_regional_play_enabled);
  std::shared_ptr<LightStoneRegionalPlay>::~shared_ptr((std::shared_ptr<LightStoneRegionalPlay> *const)(v1 + 32));
  result = 0;
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

// Line 107: range 000000001621309E-000000001621352F
void __cdecl WidgetLightStone::tryAddAbilityGroup(
        WidgetLightStone *const this,
        bool is_team,
        const std::string *ability_group_name)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  PlayerAbilityGroupComp *AbilityGroupComp; // rdx
  PlayerAbilityGroupComp *v7; // r12
  common::milog::MiLogStream *i; // rbx
  PlayerAbilityGroupComp *v9; // rdx
  PlayerAbilityGroupComp *v10; // r14
  common::milog::MiLogStream *j; // rbx
  PlayerAbilityGroupComp *v12; // rax
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-71h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-70h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-50h] BYREF
  _BYTE v17[48]; // [rsp+70h] [rbp-30h] BYREF

  if ( (unsigned __int8)std::string::empty(ability_group_name) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "tryAddAbilityGroup",
      110);
    v3 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v16,
           (const char (*)[42])"ability_group_name is empty, material_id:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->material_id_);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return;
  }
  if ( !is_team )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, ability_group_name) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v7 = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v16, ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v16), &__a);
      PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v7, &group_vec, 0);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)v17; i != &v16; std::string::~string(i) )
        --i;
LABEL_22:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v12 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v12);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getAbilityGroupComp(this->player_);
    if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(v9, ability_group_name) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v10 = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v16, ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v16), &__a);
      PlayerAbilityGroupComp::addTeamAbilityGroup(v10, &group_vec, 0);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( j = (common::milog::MiLogStream *)v17; j != &v16; std::string::~string(j) )
        --j;
      goto LABEL_22;
    }
  }
};

// Line 133: range 0000000016213530-00000000162139BD
void __cdecl WidgetLightStone::tryRemoveAbilityGroup(
        WidgetLightStone *const this,
        bool is_team,
        const std::string *ability_group_name)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  PlayerAbilityGroupComp *AbilityGroupComp; // rdx
  PlayerAbilityGroupComp *v7; // r12
  common::milog::MiLogStream *i; // rbx
  PlayerAbilityGroupComp *v9; // rdx
  PlayerAbilityGroupComp *v10; // r14
  common::milog::MiLogStream *j; // rbx
  PlayerAbilityGroupComp *v12; // rax
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-71h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-70h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-50h] BYREF
  _BYTE v17[48]; // [rsp+70h] [rbp-30h] BYREF

  if ( (unsigned __int8)std::string::empty(ability_group_name) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "tryRemoveAbilityGroup",
      136);
    v3 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v16,
           (const char (*)[42])"ability_group_name is empty, material_id:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->material_id_);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return;
  }
  if ( !is_team )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, ability_group_name) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v7 = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v16, ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v16), &__a);
      PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v7, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)v17; i != &v16; std::string::~string(i) )
        --i;
LABEL_22:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v12 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v12);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getAbilityGroupComp(this->player_);
    if ( PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(v9, ability_group_name) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v10 = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(&v16, ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v16), &__a);
      PlayerAbilityGroupComp::delTeamAbilityGroup(v10, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( j = (common::milog::MiLogStream *)v17; j != &v16; std::string::~string(j) )
        --j;
      goto LABEL_22;
    }
  }
};

// Line 159: range 00000000162139BE-0000000016213CD8
void __cdecl WidgetLightStone::checkAndRefreshLightStoneAbilityGroup(
        WidgetLightStone *const this,
        bool is_light_stone_regional_play_enabled)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::string *p_ability_group_name; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string *v11; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:160";
  *(_QWORD *)(v2 + 16) = WidgetLightStone::checkAndRefreshLightStoneAbilityGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v2 + 32));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "checkAndRefreshLightStoneAbilityGroup",
      163);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v13,
           (const char (*)[29])"getConfig fail, material_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->material_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else if ( WidgetBase::isSlotOccupied((WidgetBase *const)this, ActionPanel) && is_light_stone_regional_play_enabled )
  {
    p_ability_group_name = &std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->ability_group_name;
    v10 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(char *)(((unsigned __int64)&v10->is_team >> 3) + 0x7FFF8000) < 0 )
      v10 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->is_team);
    WidgetLightStone::tryAddAbilityGroup(this, v10->is_team, p_ability_group_name);
  }
  else
  {
    v11 = &std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->ability_group_name;
    v12 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(char *)(((unsigned __int64)&v12->is_team >> 3) + 0x7FFF8000) < 0 )
      v12 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v12->is_team);
    WidgetLightStone::tryRemoveAbilityGroup(this, v12->is_team, v11);
  }
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v2 + 32));
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

// Line 177: range 0000000016213CDA-0000000016214193
uint32_t __cdecl WidgetLightStone::getQuickUseCdGroupId(const WidgetLightStone *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  uint32_t v7; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::size_type v11; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v21; // rax
  uint32_t *v22; // rdx
  uint32_t result; // eax
  common::milog::MiLogStream v24; // [rsp+10h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 21 light_stone_level:189 64 16 14 config_ptr:178";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::getQuickUseCdGroupId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v1 + 64));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "getQuickUseCdGroupId",
      181);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v24,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = 0;
    goto LABEL_19;
  }
  v8 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( std::vector<unsigned int>::empty(&v8->level_cd_group_id_array) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_light_stone.cpp",
      "getQuickUseCdGroupId",
      186);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v24,
           (const char (*)[47])"level_cd_group_id_array is empty! material_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(_DWORD *)(v1 + 48) = WidgetLightStone::getLightStoneLevel(this);
  v11 = *(unsigned int *)(v1 + 48);
  v12 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( v11 < std::vector<unsigned int>::size(&v12->level_cd_group_id_array) )
  {
    v20 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v21 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &v20->level_cd_group_id_array,
                                                                                                *(unsigned int *)(v1 + 48));
    v22 = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    v7 = *v22;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_light_stone.cpp",
      "getQuickUseCdGroupId",
      192);
    v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v24,
            (const char (*)[47])"level and config not match! light_stone_level:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v14,
            (const char (*)[26])" level_cd_group_id_array:");
    v16 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    common::milog::MiLogStream::operator<<<unsigned int>(v15, &v16->level_cd_group_id_array);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v17 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::back(&v17->level_cd_group_id_array);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v7 = *v19;
  }
LABEL_19:
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v1 + 64));
  result = v7;
  if ( v25 == (char *)v1 )
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

// Line 200: range 0000000016214194-0000000016214225
int32_t __cdecl WidgetLightStone::onClientReport(WidgetLightStone *const this, const proto::WidgetReportReq *req)
{
  if ( proto::WidgetReportReq::is_clear_sky_crystal_hint(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_hint_valid_);
    }
    if ( !this->is_hint_valid_ )
      return 1596;
    WidgetLightStone::clearSkyCrystalDetectorData(this);
    WidgetLightStone::notifySkyCrystalDetectorData(this);
  }
  return 0;
};

// Line 214: range 0000000016214226-0000000016214936
int32_t __cdecl WidgetLightStone::onQuickUse(
        WidgetLightStone *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  __m128 v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<unsigned int>::size_type v16; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  uint32_t *v24; // rdx
  PlayerRegionalPlayComp *v25; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  uint32_t *p_sky_crystal_detector_open_level; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  int32_t v30; // edx
  int32_t result; // eax
  uint32_t energy_type; // [rsp+28h] [rbp-C8h]
  uint32_t light_stone_energy; // [rsp+2Ch] [rbp-C4h]
  uint32_t cd_group_id; // [rsp+30h] [rbp-C0h]
  int32_t ret; // [rsp+34h] [rbp-BCh]
  proto::SkyCrystalDetectorQuickUseResult *proto_detector_result; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 21 light_stone_level:222 64 16 14 config_ptr:215";
  *(_QWORD *)(v4 + 16) = WidgetLightStone::onQuickUse;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v4 + 64));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "onQuickUse",
      218);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v38,
           (const char (*)[29])"getConfig fail, material_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v10 = 5;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = WidgetLightStone::getLightStoneLevel(this);
    v11 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v11->quick_use_open_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->quick_use_open_level >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->quick_use_open_level);
    }
    if ( v11->quick_use_open_level <= *(_DWORD *)(v4 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        v10 = 1201;
      }
      else
      {
        v13 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v13->energy_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->energy_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->energy_type);
        }
        energy_type = v13->energy_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
        light_stone_energy = (int)(float)(PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, energy_type)
                                        + 0.00000011920929);
        v15 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v15->quick_use_cost_energy >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->quick_use_cost_energy >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->quick_use_cost_energy);
        }
        if ( light_stone_energy >= v15->quick_use_cost_energy )
        {
          v16 = *(unsigned int *)(v4 + 48);
          v17 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( v16 < std::vector<unsigned int>::size(&v17->level_cd_group_id_array) )
          {
            v22 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&v22->level_cd_group_id_array, *(unsigned int *)(v4 + 48));
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            cd_group_id = *v24;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v25 = Player::getRegionalPlayComp(this->player_);
            v26 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v26->quick_use_cost_energy >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v26->quick_use_cost_energy >> 3) + 0x7FFF8000) <= 3 )
            {
              v26 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->quick_use_cost_energy);
            }
            v3.m128_f32[0] = (float)(int)(light_stone_energy - v26->quick_use_cost_energy);
            ret = PlayerRegionalPlayComp::setVarValue(v25, energy_type, v3);
            if ( ret )
            {
              v10 = ret;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->widget_comp_);
              PlayerWidgetComp::updateWidgetGroupCoolDown(this->widget_comp_, cd_group_id, 1);
              v27 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              p_sky_crystal_detector_open_level = &v27->sky_crystal_detector_open_level;
              if ( *(_BYTE *)(((unsigned __int64)p_sky_crystal_detector_open_level >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_sky_crystal_detector_open_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_sky_crystal_detector_open_level >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(p_sky_crystal_detector_open_level);
              }
              if ( v27->sky_crystal_detector_open_level <= *(_DWORD *)(v4 + 48) )
              {
                proto_detector_result = proto::QuickUseWidgetRsp::mutable_sky_crystal_detector_quick_use_result(rsp_0);
                v29 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                v30 = WidgetLightStone::doSkyCrystalDetector(this, v29, proto_detector_result);
                proto::SkyCrystalDetectorQuickUseResult::set_retcode(proto_detector_result, v30);
              }
              v10 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/widget/widget_light_stone.cpp",
              "onQuickUse",
              247);
            v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v38,
                    (const char (*)[47])"level and config not match! light_stone_level:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v4 + 48));
            v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v19,
                    (const char (*)[26])" level_cd_group_id_array:");
            v21 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            common::milog::MiLogStream::operator<<<unsigned int>(v20, &v21->level_cd_group_id_array);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v10 = 5;
          }
        }
        else
        {
          v10 = 1597;
        }
      }
    }
    else
    {
      v10 = 1599;
    }
  }
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v4 + 64));
  result = v10;
  if ( v39 == (char *)v4 )
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

// Line 270: range 0000000016214938-0000000016214C10
uint32_t __cdecl WidgetLightStone::getLightStoneLevel(const WidgetLightStone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  uint32_t v7; // r14d
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 chain_level:277 64 16 14 config_ptr:271";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::getLightStoneLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v1 + 64));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "getLightStoneLevel",
      274);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v11,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(v1 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    v9 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v9->gadget_chain_id);
    }
    if ( PlayerSceneComp::findGadgetChainLevel(SceneComp, v9->gadget_chain_id, (uint32_t *)(v1 + 48)) )
      v7 = 0;
    else
      v7 = *(_DWORD *)(v1 + 48);
  }
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v1 + 64));
  result = v7;
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
  return result;
};

// Line 286: range 0000000016214C12-00000000162150AD
uint32_t __cdecl WidgetLightStone::getLightStoneEnergyLimit(const WidgetLightStone *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  uint32_t v7; // r14d
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::vector<unsigned int>::size_type v12; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  uint32_t *v20; // rdx
  uint32_t result; // eax
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 21 light_stone_level:293 64 16 14 config_ptr:287";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::getLightStoneEnergyLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v1 + 64));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "getLightStoneEnergyLimit",
      290);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v22,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(v1 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    v9 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->gadget_chain_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v9->gadget_chain_id);
    }
    if ( PlayerSceneComp::findGadgetChainLevel(SceneComp, v9->gadget_chain_id, (uint32_t *)(v1 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_light_stone.cpp",
        "getLightStoneEnergyLimit",
        296);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v22,
              (const char (*)[44])"findGadgetChainLevel fail, gadget_chain_id:");
      v11 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v11->gadget_chain_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v7 = 0;
    }
    else
    {
      v12 = *(unsigned int *)(v1 + 48);
      v13 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( v12 < std::vector<unsigned int>::size(&v13->level_energy_limit_array) )
      {
        v18 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &v18->level_energy_limit_array,
                                                                                                    *(unsigned int *)(v1 + 48));
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v7 = *v20;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/widget/widget_light_stone.cpp",
          "getLightStoneEnergyLimit",
          301);
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v22,
                (const char (*)[47])"level and config not match! light_stone_level:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v1 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v15,
                (const char (*)[27])" level_energy_limit_array:");
        v17 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::milog::MiLogStream::operator<<<unsigned int>(v16, &v17->level_energy_limit_array);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v7 = 0;
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v1 + 64));
  result = v7;
  if ( v23 == (char *)v1 )
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

// Line 309: range 00000000162150AE-0000000016215190
std::shared_ptr<const data::ConfigWidgetLightStone> __cdecl WidgetLightStone::getConfig(
        const WidgetLightStone *const this)
{
  const WidgetLightStone *v1; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  std::shared_ptr<const data::ConfigWidgetLightStone> result; // rax
  const WidgetLightStone *thisa; // [rsp+0h] [rbp-30h]
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  thisa = v1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v2->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->material_id_);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, WidgetNewConfig);
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetLightStone const>(
    (const WidgetJsonNewConfig *const)this,
    (uint32_t)WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(v6);
  result._M_ptr = (std::__shared_ptr<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 314: range 0000000016215192-00000000162154CA
void __cdecl WidgetLightStone::onOneoffGatherCollected(
        WidgetLightStone *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t point_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 config_ptr:315";
  *(_QWORD *)(v4 + 16) = WidgetLightStone::onOneoffGatherCollected;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  WidgetLightStone::getConfig((const WidgetLightStone *const)(v4 + 32));
  if ( std::operator==<data::ConfigWidgetLightStone const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetLightStone> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "onOneoffGatherCollected",
      318);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v13,
           (const char (*)[29])"getConfig fail, material_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v10 = std::__shared_ptr_access<data::ConfigWidgetLightStone const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->gather_point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<const data::ConfigWidgetLightStone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->gather_point_type);
    }
    if ( point_type == v10->gather_point_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_id_);
      }
      if ( group_id == this->group_id_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->config_id_);
        }
        if ( config_id == this->config_id_ )
        {
          WidgetLightStone::clearSkyCrystalDetectorData(this);
          WidgetLightStone::notifySkyCrystalDetectorData(this);
        }
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetLightStone const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetLightStone> *const)(v4 + 32));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 337: range 00000000162164B4-00000000162172FF
int32_t __cdecl WidgetLightStone::doSkyCrystalDetector(
        WidgetLightStone *const this,
        const data::ConfigWidgetLightStone *config,
        proto::SkyCrystalDetectorQuickUseResult *proto_detector_result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const PlayerSceneComp *SceneComp; // rdi
  uint32_t config_id; // ecx
  uint32_t group_id; // edx
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  PlayerSceneComp *v17; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 Position; // rax
  uint32_t gather_point_type; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  __m128i v34; // xmm0
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rcx
  proto::SkyCrystalDetectorData *v45; // rdx
  int32_t result; // eax
  int val; // [rsp+20h] [rbp-1D0h] BYREF
  float cur_height; // [rsp+24h] [rbp-1CCh]
  float rand_angle; // [rsp+28h] [rbp-1C8h]
  float rand_offset; // [rsp+2Ch] [rbp-1C4h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+30h] [rbp-1C0h]
  const SceneScriptConfig *scene_script_config; // [rsp+38h] [rbp-1B8h]
  common::milog::MiLogStream v55; // [rsp+40h] [rbp-1B0h] BYREF
  char v56[400]; // [rsp+60h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 min_dist:382 64 4 16 search_count:383 80 12 12 position:381 112 16 14 avatar_ptr:358 1"
                        "44 16 13 scene_ptr:363 176 16 9 timer:376 208 32 22 search_gadget_func:421 272 48 22 single_gadget_func:384";
  *(_QWORD *)(v3 + 16) = WidgetLightStone::doSkyCrystalDetector;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  if ( this->is_hint_valid_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
    {
      SceneComp = (const PlayerSceneComp *)&this->config_id_;
      __asan_report_load4(&this->config_id_);
    }
    config_id = this->config_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      SceneComp = (const PlayerSceneComp *)&this->group_id_;
      __asan_report_load4(&this->group_id_);
    }
    group_id = this->group_id_;
    if ( *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      SceneComp = (const PlayerSceneComp *)&config->gather_point_type;
      __asan_report_load4(&config->gather_point_type);
    }
    if ( !PlayerSceneComp::isGotOneoffGatherPointByGroupConfigId(
            SceneComp,
            config->gather_point_type,
            group_id,
            config_id) )
    {
      v9 = 1594;
      goto LABEL_60;
    }
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "doSkyCrystalDetector",
      349);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v55,
            (const char (*)[19])"gather_point_type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gather_point_type);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" group_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->group_id_);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" config_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->config_id_);
    v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v15,
            (const char (*)[22])" already got, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v16, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v55);
    WidgetLightStone::clearSkyCrystalDetectorData(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v17 = Player::getSceneComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->gather_point_type);
  }
  if ( PlayerSceneComp::isGotAllOneoffGatherByPointType(v17, config->gather_point_type, 1) )
  {
    v9 = 1593;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 112));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 112)) )
    {
      v9 = 104;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 144));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 144)) )
      {
        v9 = 555;
      }
      else
      {
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        scene_script_config_ptr = Scene::getScriptConfig(v18);
        if ( scene_script_config_ptr )
        {
          common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 176));
          common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v3 + 176));
          scene_script_config = scene_script_config_ptr;
          v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          Position = (unsigned __int64)Entity::getPosition((const Entity *const)v23);
          if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
            && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
          {
            Position = __asan_report_load_n(Position, 12LL);
          }
          *(_QWORD *)(v3 + 80) = *(_QWORD *)Position;
          *(_DWORD *)(v3 + 88) = *(_DWORD *)(Position + 8);
          *(_DWORD *)(v3 + 48) = 0;
          *(_DWORD *)(v3 + 64) = 0;
          *(_QWORD *)(v3 + 272) = this;
          *(_QWORD *)(v3 + 280) = config;
          *(_QWORD *)(v3 + 288) = scene_script_config;
          *(_QWORD *)(v3 + 296) = v3 + 80;
          *(_QWORD *)(v3 + 304) = v3 + 48;
          *(_QWORD *)(v3 + 312) = v3 + 64;
          cur_height = *(float *)(v3 + 88);
          *(_QWORD *)(v3 + 208) = this;
          *(float *)(v3 + 216) = cur_height;
          *(_QWORD *)(v3 + 224) = config;
          *(_QWORD *)(v3 + 232) = v3 + 272;
          std::function<bool ()(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)>::function<WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#2},void,void>(
            (std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *const)&v55,
            *(WidgetLightStone::doSkyCrystalDetector::<lambda(const OneoffGatherPointTypeGridConfigMap&)> *)(v3 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->gather_point_type);
          }
          gather_point_type = config->gather_point_type;
          if ( *(_BYTE *)(((unsigned __int64)&config->grid_search_range >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->grid_search_range >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->grid_search_range);
          }
          SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(
            scene_script_config,
            (const Vector3 *)(v3 + 80),
            config->grid_search_range,
            gather_point_type,
            (const std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *)&v55);
          std::function<bool ()(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)>::~function((std::function<bool(const std::multimap<float,OneoffGatherPointTypeGridConfig>&)> *const)&v55);
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/widget_light_stone.cpp",
            "doSkyCrystalDetector",
            441);
          v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v55, (const char (*)[10])"position:");
          v27 = operator<<(v26, (const Vector3 *)(v3 + 80));
          v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])" grid_range:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &config->grid_search_range);
          v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v29,
                  (const char (*)[15])" search_count:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v3 + 64));
          v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" cost_time:");
          val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 176));
          v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &val);
          common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v33, (const char (*)[3])"us");
          common::milog::MiLogStream::~MiLogStream(&v55);
          if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_hint_valid_);
          }
          if ( !this->is_hint_valid_ )
          {
            v9 = 1595;
          }
          else
          {
            v34 = 0LL;
            *(float *)v34.m128i_i32 = common::tools::RandomUtils::rand<float>(0.0, 6.2831855);
            LODWORD(rand_angle) = _mm_cvtsi128_si32(v34);
            v35 = common::tools::RandomUtils::rand<float>(0.0, 0.5);
            if ( *(_BYTE *)(((unsigned __int64)&config->hint_radius >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->hint_radius >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->hint_radius);
            }
            rand_offset = (float)(int)config->hint_radius * v35;
            v36 = std::cos(rand_angle) * rand_offset;
            if ( *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->hint_center_pos_);
            }
            this->hint_center_pos_.x = this->hint_center_pos_.x + v36;
            v37 = std::sin(rand_angle) * rand_offset;
            if ( *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.y >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.y >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->hint_center_pos_.y);
            }
            this->hint_center_pos_.y = this->hint_center_pos_.y + v37;
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_light_stone.cpp",
              "doSkyCrystalDetector",
              454);
            v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v55,
                    (const char (*)[13])"hint_center:");
            v39 = operator<<(v38, &this->hint_center_pos_);
            v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])" group_id:");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->group_id_);
            v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v41,
                    (const char (*)[12])" config_id:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &this->config_id_);
            v44 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v43, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v44, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v55);
            v45 = proto::SkyCrystalDetectorQuickUseResult::mutable_sky_crystal_detector_data(proto_detector_result);
            WidgetLightStone::toSkyCrystalDetectorData(this, v45);
            v9 = 0;
          }
          common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 176));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/widget_light_stone.cpp",
            "doSkyCrystalDetector",
            371);
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v55,
                  (const char (*)[29])"getScriptConfig fail, scene:");
          v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          v21 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v19, v20);
          v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v22, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v55);
          v9 = -1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
  }
LABEL_60:
  result = v9;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 384: range 00000000162154CC-0000000016215FC4
void __cdecl WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(OneoffGatherPointTypeGridConfig const&)#1}::operator()(
        const WidgetLightStone::doSkyCrystalDetector::<lambda(const OneoffGatherPointTypeGridConfig&)> *const __closure,
        const OneoffGatherPointTypeGridConfig *grid_config)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 search_count; // rax
  WidgetLightStone *this; // rax
  PlayerSceneComp *SceneComp; // r8
  uint32_t v9; // ecx
  uint32_t v10; // esi
  const data::ConfigWidgetLightStone *config; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *p_player; // rdi
  WidgetLightStone *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const Vector3 *p_pos; // rdx
  const Vector3 *v29; // rsi
  const data::ConfigWidgetLightStone *v30; // rax
  WidgetLightStone *v31; // rdx
  char v32; // cl
  float *min_dist; // rdx
  float *v34; // rdx
  char v35; // cl
  WidgetLightStone *v36; // rdx
  char v37; // cl
  WidgetLightStone *n; // rax
  char v39; // cl
  bool v40; // r8
  char v41; // cl
  __int64 v42; // rax
  __int64 v43; // rsi
  char v44; // dl
  bool v45; // dl
  WidgetLightStone *v46; // rdx
  __int64 v47; // rsi
  char v48; // cl
  float dist; // [rsp+1Ch] [rbp-B4h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-B0h]
  const GadgetScriptConfig *gadget_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v53; // [rsp+30h] [rbp-A0h] BYREF
  char v54[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 group_id:387 64 4 13 config_id:388";
  *(_QWORD *)(v3 + 16) = WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(OneoffGatherPointTypeGridConfig const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__search_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__search_count);
  search_count = (unsigned __int64)__closure->__search_count;
  if ( *(_BYTE *)((search_count >> 3) + 0x7FFF8000) != 0
    && (char)((search_count & 7) + 3) >= *(_BYTE *)((search_count >> 3) + 0x7FFF8000) )
  {
    search_count = __asan_report_load4(__closure->__search_count);
  }
  ++*(_DWORD *)search_count;
  if ( *(_BYTE *)(((unsigned __int64)grid_config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)grid_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)grid_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(grid_config);
  }
  *(_DWORD *)(v3 + 48) = grid_config->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&grid_config->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)grid_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&grid_config->config_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&grid_config->config_id);
  }
  *(_DWORD *)(v3 + 64) = grid_config->config_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
    this = (WidgetLightStone *)__asan_report_load8(&__closure->__this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  v9 = *(_DWORD *)(v3 + 64);
  v10 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__config);
  config = __closure->__config;
  if ( *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->gather_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    config = (const data::ConfigWidgetLightStone *)__asan_report_load4(&config->gather_point_type);
  }
  if ( PlayerSceneComp::isGotOneoffGatherPointByGroupConfigId(SceneComp, config->gather_point_type, v10, v9) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_light_stone.cpp",
      "operator()",
      391);
    v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v53,
            (const char (*)[19])"gather_point_type:");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__config);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v12,
            &__closure->__config->gather_point_type);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" group_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" config_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" already got");
    common::milog::MiLogStream::~MiLogStream(&v53);
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__scene_script_config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__scene_script_config);
  group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(
                              __closure->__scene_script_config,
                              *(_DWORD *)(v3 + 48));
  if ( !group_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "operator()",
      397);
    v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v53,
            (const char (*)[38])"findGroupScriptConfig fail, group_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" config_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    p_player = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)__closure;
      __asan_report_load8(__closure);
    }
    v23 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)&__closure->__this->player_;
      v23 = (WidgetLightStone *)__asan_report_load8(p_player);
    }
LABEL_31:
    operator<<(p_player, v23->player_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    goto LABEL_72;
  }
  gadget_config_ptr = GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *(_DWORD *)(v3 + 64));
  if ( !gadget_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_light_stone.cpp",
      "operator()",
      403);
    v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v53,
            (const char (*)[33])"findGadgetConfig fail, group_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
    v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" config_id:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 64));
    p_player = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)__closure;
      __asan_report_load8(__closure);
    }
    v23 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
    {
      p_player = (common::milog::MiLogStream *)&__closure->__this->player_;
      v23 = (WidgetLightStone *)__asan_report_load8(p_player);
    }
    goto LABEL_31;
  }
  p_pos = &gadget_config_ptr->pos;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__position >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__position);
  v29 = p_pos;
  *(float *)v2.m128i_i32 = getDistance(__closure->__position, p_pos);
  dist = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__config);
  v30 = __closure->__config;
  if ( *(_BYTE *)(((unsigned __int64)&v30->nearby_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->nearby_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    v30 = (const data::ConfigWidgetLightStone *)__asan_report_load4(&v30->nearby_radius);
  }
  if ( dist < (float)(int)v30->nearby_radius )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v31 = __closure->__this;
    v32 = *(_BYTE *)(((unsigned __int64)&__closure->__this->is_hint_valid_ >> 3) + 0x7FFF8000);
    if ( v32 != 0 && ((LOBYTE(__closure->__this) - 111) & 7) >= v32 )
      __asan_report_load1(&__closure->__this->is_hint_valid_);
    if ( !v31->is_hint_valid_ )
      goto LABEL_77;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__min_dist >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__min_dist);
    min_dist = __closure->__min_dist;
    if ( *(_BYTE *)(((unsigned __int64)min_dist >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)min_dist & 7) + 3) >= *(_BYTE *)(((unsigned __int64)min_dist >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__min_dist);
    }
    if ( *min_dist > dist )
    {
LABEL_77:
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__min_dist >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__min_dist);
      v34 = __closure->__min_dist;
      v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
      if ( v35 != 0 && (char)(((unsigned __int8)v34 & 7) + 3) >= v35 )
      {
        LOBYTE(v29) = v35 != 0;
        __asan_report_store4(__closure->__min_dist, v29, (_BYTE)v34);
      }
      *v34 = dist;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v36 = __closure->__this;
      v37 = *(_BYTE *)(((unsigned __int64)&__closure->__this->is_hint_valid_ >> 3) + 0x7FFF8000);
      if ( v37 != 0 && ((LOBYTE(__closure->__this) - 111) & 7) >= v37 )
      {
        LOBYTE(v29) = v37 != 0;
        __asan_report_store1(&__closure->__this->is_hint_valid_, v29, v36);
      }
      v36->is_hint_valid_ = 1;
      n = __closure->__this;
      v39 = *(_BYTE *)(((unsigned __int64)&__closure->__this->hint_center_pos_ >> 3) + 0x7FFF8000);
      v40 = ((LOBYTE(__closure->__this) - 108) & 7) >= v39 && v39 != 0;
      v41 = *(_BYTE *)((((unsigned __int64)&__closure->__this->hint_center_pos_.z + 3) >> 3) + 0x7FFF8000);
      if ( v40 || v41 != 0 && ((LOBYTE(__closure->__this) - 97) & 7) >= v41 )
        n = (WidgetLightStone *)__asan_report_store_n(&__closure->__this->hint_center_pos_, 12LL);
      if ( (((unsigned __int8)gadget_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3)
                                                                       + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)gadget_config_ptr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        n = (WidgetLightStone *)__asan_report_load_n(&gadget_config_ptr->pos, 12LL);
      }
      *(_QWORD *)&n->hint_center_pos_.x = *(_QWORD *)&gadget_config_ptr->pos.x;
      n->hint_center_pos_.z = gadget_config_ptr->pos.z;
      v42 = (__int64)__closure->__this;
      v43 = *(unsigned int *)(v3 + 48);
      v44 = *(_BYTE *)(((unsigned __int64)&__closure->__this->group_id_ >> 3) + 0x7FFF8000);
      v45 = v44 != 0 && v44 <= 3;
      if ( v45 )
        v42 = __asan_report_store4(&__closure->__this->group_id_, v43, v45);
      *(_DWORD *)(v42 + 160) = v43;
      v46 = __closure->__this;
      v47 = *(unsigned int *)(v3 + 64);
      v48 = *(_BYTE *)(((unsigned __int64)&__closure->__this->config_id_ >> 3) + 0x7FFF8000);
      if ( v48 != 0 && (char)(((LOBYTE(__closure->__this) - 92) & 7) + 3) >= v48 )
        __asan_report_store4(&__closure->__this->config_id_, v47, (_BYTE)v46);
      v46->config_id_ = v47;
    }
  }
LABEL_72:
  if ( v54 == (char *)v3 )
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

// Line 421: range 0000000016215FC6-00000000162164B2
bool __cdecl WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#2}::operator()(
        const WidgetLightStone::doSkyCrystalDetector::<lambda(const OneoffGatherPointTypeGridConfigMap&)> *const __closure,
        const OneoffGatherPointTypeGridConfigMap *grid_config_map)
{
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::pointer v5; // rax
  float *p_first; // rdx
  float v7; // xmm1_4
  const data::ConfigWidgetLightStone *config; // rax
  float nearby_radius; // xmm0_4
  char v10; // al
  WidgetLightStone::doSkyCrystalDetector::<lambda(const OneoffGatherPointTypeGridConfig&)> *single_gadget_func; // r14
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::pointer v12; // rax
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::pointer v13; // rax
  float *v14; // rdx
  float v15; // xmm2_4
  float cur_height; // xmm1_4
  const data::ConfigWidgetLightStone *v17; // rax
  char v18; // al
  WidgetLightStone::doSkyCrystalDetector::<lambda(const OneoffGatherPointTypeGridConfig&)> *v19; // r14
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::pointer v20; // rax
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v23[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> > *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)"2 32 8 8 iter:423 64 8 6 it:428";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(std::multimap<float,OneoffGatherPointTypeGridConfig> const&)#2}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v2[4]._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::lower_bound(
                    grid_config_map,
                    &__closure->__cur_height)._M_node;
  v2[8]._M_node = v2[4]._M_node;
  while ( 1 )
  {
    __y._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::end(grid_config_map)._M_node;
    if ( !std::operator!=(v2 + 8, &__y) )
      goto LABEL_16;
    v5 = std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator->(v2 + 8);
    p_first = (float *)&v5->first;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *p_first;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__config);
    config = __closure->__config;
    if ( *(_BYTE *)(((unsigned __int64)&config->nearby_radius >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->nearby_radius >> 3) + 0x7FFF8000) <= 3 )
    {
      config = (const data::ConfigWidgetLightStone *)__asan_report_load4(&config->nearby_radius);
    }
    nearby_radius = (float)(int)config->nearby_radius;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_height >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__cur_height >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__cur_height);
    }
    if ( (float)(nearby_radius + __closure->__cur_height) > v7 )
      v10 = 1;
    else
LABEL_16:
      v10 = 0;
    if ( !v10 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__single_gadget_func >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__single_gadget_func);
    single_gadget_func = __closure->__single_gadget_func;
    v12 = std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator->(v2 + 8);
    WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(OneoffGatherPointTypeGridConfig const&)#1}::operator()(
      single_gadget_func,
      &v12->second);
    std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator++(v2 + 8);
  }
  v2[8]._M_node = v2[4]._M_node;
  while ( 1 )
  {
    __y._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::begin(grid_config_map)._M_node;
    if ( !std::operator!=(v2 + 8, &__y) )
      break;
    std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator--(v2 + 8);
    __y._M_node = std::multimap<float,OneoffGatherPointTypeGridConfig>::end(grid_config_map)._M_node;
    if ( std::operator==(v2 + 8, &__y) )
      goto LABEL_33;
    v13 = std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator->(v2 + 8);
    v14 = (float *)&v13->first;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_height >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__cur_height >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__cur_height);
    }
    cur_height = __closure->__cur_height;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__config);
    v17 = __closure->__config;
    if ( *(_BYTE *)(((unsigned __int64)&v17->nearby_radius >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v17->nearby_radius >> 3) + 0x7FFF8000) <= 3 )
    {
      v17 = (const data::ConfigWidgetLightStone *)__asan_report_load4(&v17->nearby_radius);
    }
    if ( (float)(cur_height - (float)(int)v17->nearby_radius) >= v15 )
LABEL_33:
      v18 = 1;
    else
      v18 = 0;
    if ( v18 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__single_gadget_func >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__single_gadget_func);
    v19 = __closure->__single_gadget_func;
    v20 = std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig>>::operator->(v2 + 8);
    WidgetLightStone::doSkyCrystalDetector(data::ConfigWidgetLightStone const&,proto::SkyCrystalDetectorQuickUseResult &)::{lambda(OneoffGatherPointTypeGridConfig const&)#1}::operator()(
      v19,
      &v20->second);
  }
  result = 1;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<float const,OneoffGatherPointTypeGridConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 462: range 0000000016217300-0000000016217432
void __cdecl WidgetLightStone::toSkyCrystalDetectorData(
        const WidgetLightStone *const this,
        proto::SkyCrystalDetectorData *proto)
{
  proto::Vector *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  proto::SkyCrystalDetectorData::set_is_hint_valid(proto, this->is_hint_valid_);
  v2 = proto::SkyCrystalDetectorData::mutable_hint_center_pos(proto);
  Vector3::toClient(&this->hint_center_pos_, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::SkyCrystalDetectorData::set_group_id(proto, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  proto::SkyCrystalDetectorData::set_config_id(proto, this->config_id_);
};

// Line 470: range 0000000016217434-0000000016217612
void __cdecl WidgetLightStone::clearSkyCrystalDetectorData(WidgetLightStone *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  char v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  v1 = ((_BYTE)this - 111) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_hint_valid_, v1, v2);
  this->is_hint_valid_ = 0;
  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->hint_center_pos_, 12LL);
  }
  v3 = *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3) + 0x7FFF8000);
  v4 = v3 != 0;
  if ( ((char)((unsigned __int64)&Vector3::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v4 & ((((unsigned __int8)&Vector3::zero.z + 3) & 7) >= v3) )
  {
    v4 = 12LL;
    __asan_report_load_n(&Vector3::zero, 12LL);
  }
  this->hint_center_pos_ = Vector3::zero;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v4, (_BYTE)this - 96);
  }
  this->group_id_ = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->config_id_, (((_BYTE)this - 92) & 7u) + 3, v5);
  this->config_id_ = 0;
};

// Line 478: range 0000000016217614-000000001621777C
void __cdecl WidgetLightStone::notifySkyCrystalDetectorData(const WidgetLightStone *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::SkyCrystalDetectorData *v4; // rdx
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:479";
  *(_QWORD *)(v1 + 16) = WidgetLightStone::notifySkyCrystalDetectorData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::SkyCrystalDetectorDataUpdateNotify::SkyCrystalDetectorDataUpdateNotify((proto::SkyCrystalDetectorDataUpdateNotify *const)(v1 + 32));
  v4 = proto::SkyCrystalDetectorDataUpdateNotify::mutable_sky_crystal_detector_data((proto::SkyCrystalDetectorDataUpdateNotify *const)(v1 + 32));
  WidgetLightStone::toSkyCrystalDetectorData(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::SkyCrystalDetectorDataUpdateNotify::~SkyCrystalDetectorDataUpdateNotify((proto::SkyCrystalDetectorDataUpdateNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};
