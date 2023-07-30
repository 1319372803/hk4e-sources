// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_attach_ability_group.cpp

// Line 27: range 0000000017986A18-0000000017986BA7
int32_t __cdecl WidgetAttachAbilityGroup::init(
        WidgetAttachAbilityGroup *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 41 config_widget_ability_group_config_ptr:28";
  *(_QWORD *)(v2 + 16) = WidgetAttachAbilityGroup::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetUseAttachAbilityGroup>(
         (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v2 + 32),
         0LL) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "init",
      33);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v7,
      (const char (*)[54])"convert ConfigWidgetUseAttachAbilityGroup ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v2 + 32));
  result = v5;
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

// Line 40: range 0000000017986BA8-0000000017986FD4
int32_t __cdecl WidgetAttachAbilityGroup::onQuickUse(
        WidgetAttachAbilityGroup *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int32_t v11; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerWidgetComp *WidgetComp; // rax
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerWidgetComp *v16; // rax
  int32_t result; // eax
  uint32_t cd_group_id; // [rsp+28h] [rbp-A8h]
  int32_t ret; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 config_ptr:41";
  *(_QWORD *)(v3 + 16) = WidgetAttachAbilityGroup::onQuickUse;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetUseAttachAbilityGroup>(
    (const WidgetJsonNewConfig *const)(v3 + 32),
    WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityGroup> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "onQuickUse",
      44);
    v8 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
           &v21,
           (const char (*)[82])"findWidgetConfigById<ConfigWidgetUseAttachAbilityGroup> fail, widget_material_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_id_);
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v11 = 5;
  }
  else
  {
    v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->cd_group);
    }
    cd_group_id = v12->cd_group;
    if ( !cd_group_id )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WidgetComp = Player::getWidgetComp(this->player_);
    ret = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, cd_group_id);
    if ( ret )
    {
      v11 = ret;
    }
    else
    {
LABEL_17:
      v14 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      WidgetAttachAbilityGroup::useAttachAbilityGroupWidget(this, v14);
      v15 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(char *)(((unsigned __int64)&v15->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
        v15 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v15->is_update_cdafter_ability_trigger);
      if ( !v15->is_update_cdafter_ability_trigger )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v16 = Player::getWidgetComp(this->player_);
        PlayerWidgetComp::updateWidgetGroupCoolDown(v16, cd_group_id, 1);
      }
      v11 = 0;
    }
  }
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityGroup> *const)(v3 + 32));
  result = v11;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 69: range 0000000017986FD6-00000000179875D1
int32_t __cdecl WidgetAttachAbilityGroup::useAttachAbilityGroupWidget(
        WidgetAttachAbilityGroup *const this,
        const data::ConfigWidgetUseAttachAbilityGroup *config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  char *i; // r14
  char *j; // r14
  PlayerAbilityGroupComp *v8; // rax
  int32_t result; // eax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-E0h]
  PlayerAbilityGroupComp *__la; // [rsp+10h] [rbp-E0h]
  std::allocator<std::string > __a; // [rsp+3Fh] [rbp-B1h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 notify:89";
  *(_QWORD *)(v2 + 16) = WidgetAttachAbilityGroup::useAttachAbilityGroupWidget;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
  }
  if ( this->is_attach_ability_group_widget_attached_ )
  {
    if ( (unsigned __int8)std::string::empty(&config->ability_group_name_second) != 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      std::string::basic_string(v2 + 32, &config->ability_group_name_second);
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 32);
      __l._M_len = 1LL;
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, __l, &__a);
      PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (char *)(v2 + 64); i != (char *)(v2 + 32); std::string::~string(i) )
        i -= 32;
    }
  }
  else if ( (unsigned __int8)std::string::empty(&config->ability_group_name_second) != 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __la = Player::getAbilityGroupComp(this->player_);
    std::string::basic_string(v2 + 32, &config->ability_group_name_second);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, v2 + 32), &__a);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(__la, &group_vec, 0);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( j = (char *)(v2 + 64); j != (char *)(v2 + 32); std::string::~string(j) )
      j -= 32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
  }
  this->is_attach_ability_group_widget_attached_ ^= 1u;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::getAbilityGroupComp(this->player_);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v8);
  proto::WidgetUseAttachAbilityGroupChangeNotify::WidgetUseAttachAbilityGroupChangeNotify((proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&config->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->material_id);
  }
  proto::WidgetUseAttachAbilityGroupChangeNotify::set_material_id(
    (proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v2 + 32),
    config->material_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
  }
  proto::WidgetUseAttachAbilityGroupChangeNotify::set_is_attach(
    (proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v2 + 32),
    this->is_attach_ability_group_widget_attached_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::WidgetUseAttachAbilityGroupChangeNotify::~WidgetUseAttachAbilityGroupChangeNotify((proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v2 + 32));
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 97: range 00000000179875D2-0000000017987B75
int32_t __cdecl WidgetAttachAbilityGroup::onClearActionPanel(WidgetAttachAbilityGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int32_t result; // eax
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+10h] [rbp-F0h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 24 config_new_widget_ptr:98 64 16 35 attach_ability_group_config_ptr:105";
  *(_QWORD *)(v1 + 16) = WidgetAttachAbilityGroup::onClearActionPanel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "onClearActionPanel",
      101);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v19, (const char (*)[14])"material_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_26257AC0);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v8 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
    if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "onClearActionPanel",
        108);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v19,
        (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
      }
      if ( this->is_attach_ability_group_widget_attached_ )
      {
        v9 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( (unsigned __int8)std::string::empty(&v9->ability_group_name_second) != 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          std::string::basic_string(&v19, &v10->ability_group_name_second);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &v19),
            &__a);
          PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (common::milog::MiLogStream *)v20; i != &v19; std::string::~string(i) )
            --i;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v12 = Player::getAbilityGroupComp(this->player_);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v12);
        }
        v13 = ((_BYTE)this - 111) & 7;
        v14 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v14 )
          __asan_report_store1(&this->is_attach_ability_group_widget_attached_, v13, v14);
        this->is_attach_ability_group_widget_attached_ = 0;
      }
      v8 = 0;
    }
    std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 64));
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = v8;
  if ( v20 == (char *)v1 )
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

// Line 126: range 0000000017987B76-000000001798851A
int32_t __cdecl WidgetAttachAbilityGroup::onAttachAvatar(WidgetAttachAbilityGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerWidgetComp *WidgetComp; // rax
  uint32_t ItemComp; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v20; // rax
  int32_t result; // eax
  bool v22; // [rsp+10h] [rbp-120h]
  bool v23; // [rsp+10h] [rbp-120h]
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+10h] [rbp-120h]
  std::allocator<std::string > v25; // [rsp+27h] [rbp-109h] BYREF
  uint32_t cd_group_id; // [rsp+28h] [rbp-108h]
  int32_t ret; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<Material> __a; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 config_ptr:139 64 16 25 config_new_widget_ptr:161 96 16 35 attach_ability_group_config_ptr:168";
  *(_QWORD *)(v1 + 16) = WidgetAttachAbilityGroup::onAttachAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  if ( this->material_id_ )
  {
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 96));
    v22 = std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
    if ( v22 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "onAttachAvatar",
        135);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v30,
        (const char (*)[23])"getCurScene is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v4 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 96));
      v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
      if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->material_id_);
      }
      WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetUseAttachAbilityGroup>(
        (const WidgetJsonNewConfig *const)(v1 + 32),
        WidgetNewConfig);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
      if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup const>(
             0LL,
             (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_attach_ability_group.cpp",
          "onAttachAvatar",
          142);
        v7 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
               &v30,
               (const char (*)[82])"findWidgetConfigById<ConfigWidgetUseAttachAbilityGroup> fail, widget_material_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
        v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])", player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v4 = 5;
      }
      else
      {
        v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v10->cd_group >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->cd_group >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->cd_group);
        }
        cd_group_id = v10->cd_group;
        if ( !cd_group_id )
          goto LABEL_55;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WidgetComp = Player::getWidgetComp(this->player_);
        ret = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, cd_group_id);
        if ( ret )
        {
          v4 = ret;
        }
        else
        {
LABEL_55:
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = (unsigned int)Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->material_id_);
          }
          PlayerItemComp::findMaterial((PlayerItemComp *const)&__a, ItemComp);
          v23 = std::operator==<Material>(0LL, &__a);
          std::shared_ptr<Material>::~shared_ptr(&__a);
          if ( v23 )
          {
            v4 = 647;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v1 + 96));
            v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v14 = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v13->design_config.json_config_mgr);
            if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->material_id_);
            }
            WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 64), v14);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
            if ( std::operator==<data::ConfigBaseWidgetToy>(
                   0LL,
                   (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_attach_ability_group.cpp",
                "onAttachAvatar",
                164);
              v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      &v30,
                      (const char (*)[14])"material_id: ");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->material_id_);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])off_26257AC0);
              common::milog::MiLogStream::~MiLogStream(&v30);
              v4 = -1;
            }
            else
            {
              std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 96));
              if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
                     0LL,
                     (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 96)) )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/widget/widget_attach_ability_group.cpp",
                  "onAttachAvatar",
                  171);
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v30,
                  (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
                common::milog::MiLogStream::~MiLogStream(&v30);
                v4 = -1;
              }
              else
              {
                v17 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                if ( (unsigned __int8)std::string::empty(&v17->ability_group_name) != 1 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
                  v18 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                  std::string::basic_string(&v30, &v18->ability_group_name);
                  std::allocator<std::string>::allocator(&v25);
                  std::vector<std::string>::vector(
                    &group_vec,
                    (std::initializer_list<std::string >)__PAIR128__(1LL, &v30),
                    &v25);
                  PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 0);
                  std::vector<std::string>::~vector(&group_vec);
                  std::allocator<std::string>::~allocator(&v25);
                  for ( i = (common::milog::MiLogStream *)v31; i != &v30; std::string::~string(i) )
                    --i;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v20 = Player::getAbilityGroupComp(this->player_);
                  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v20);
                }
                v4 = 0;
              }
              std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 96));
            }
            std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 64));
          }
        }
      }
      std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 32));
    }
  }
  result = v4;
  if ( v31 == (char *)v1 )
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

// Line 187: range 000000001798851C-0000000017988B1D
int32_t __cdecl WidgetAttachAbilityGroup::onDetachAvatar(WidgetAttachAbilityGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v12; // rax
  int32_t result; // eax
  bool v14; // [rsp+10h] [rbp-F0h]
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+10h] [rbp-F0h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 25 config_new_widget_ptr:195 64 16 35 attach_ability_group_config_ptr:202";
  *(_QWORD *)(v1 + 16) = WidgetAttachAbilityGroup::onDetachAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
  v14 = std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v14 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "onDetachAvatar",
      191);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v18, (const char (*)[23])"getCurScene is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v4 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 64));
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "onDetachAvatar",
        198);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"material_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])off_26257AC0);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v4 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
      if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
             0LL,
             (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_attach_ability_group.cpp",
          "onDetachAvatar",
          205);
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v18,
          (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
        common::milog::MiLogStream::~MiLogStream(&v18);
        v4 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( (unsigned __int8)std::string::empty(&v9->ability_group_name) != 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          std::string::basic_string(&v18, &v10->ability_group_name);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &v18),
            &__a);
          PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 0);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (common::milog::MiLogStream *)v19; i != &v18; std::string::~string(i) )
            --i;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v12 = Player::getAbilityGroupComp(this->player_);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v12);
        }
        v4 = 0;
      }
      std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 64));
    }
    std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  }
  result = v4;
  if ( v19 == (char *)v1 )
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

// Line 219: range 0000000017988B1E-00000000179891F1
void __cdecl WidgetAttachAbilityGroup::takeoffUseAttachAbilityGroupWidget(WidgetAttachAbilityGroup *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char *i; // r14
  PlayerAbilityGroupComp *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+10h] [rbp-110h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 25 config_new_widget_ptr:220 64 16 35 attach_ability_group_config_ptr:227 96 32 10 notify:244";
  *(_QWORD *)(v1 + 16) = WidgetAttachAbilityGroup::takeoffUseAttachAbilityGroupWidget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "takeoffUseAttachAbilityGroupWidget",
      223);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
           (common::milog::MiLogStream *const)(v1 + 96),
           (const char (*)[14])"material_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_26257AC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
  }
  else
  {
    std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
    if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "takeoffUseAttachAbilityGroupWidget",
        230);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)(v1 + 96),
        (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
      }
      if ( this->is_attach_ability_group_widget_attached_ )
      {
        v8 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( (unsigned __int8)std::string::empty(&v8->ability_group_name_second) != 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          v9 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          std::string::basic_string(v1 + 96, &v9->ability_group_name_second);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, v1 + 96),
            &__a);
          PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (char *)(v1 + 128); i != (char *)(v1 + 96); std::string::~string(i) )
            i -= 32;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v11 = Player::getAbilityGroupComp(this->player_);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
        }
        v12 = ((_BYTE)this - 111) & 7;
        v13 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
          __asan_report_store1(&this->is_attach_ability_group_widget_attached_, v12, v13);
        this->is_attach_ability_group_widget_attached_ = 0;
      }
      proto::WidgetUseAttachAbilityGroupChangeNotify::WidgetUseAttachAbilityGroupChangeNotify((proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->material_id_);
      }
      proto::WidgetUseAttachAbilityGroupChangeNotify::set_material_id(
        (proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v1 + 96),
        this->material_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_ability_group_widget_attached_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_attach_ability_group_widget_attached_);
      }
      proto::WidgetUseAttachAbilityGroupChangeNotify::set_is_attach(
        (proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v1 + 96),
        this->is_attach_ability_group_widget_attached_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 96));
      proto::WidgetUseAttachAbilityGroupChangeNotify::~WidgetUseAttachAbilityGroupChangeNotify((proto::WidgetUseAttachAbilityGroupChangeNotify *const)(v1 + 96));
    }
    std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 64));
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 251: range 00000000179891F2-0000000017989867
void __cdecl WidgetAttachAbilityGroup::onLoseItemEvent(
        WidgetAttachAbilityGroup *const this,
        const LoseItemEvent *lose_item_event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t item_id; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerWidgetComp *WidgetComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  PlayerItemComp *ItemComp; // rcx
  char v15; // al
  unsigned __int64 v16; // rax
  PlayerWidgetComp *v17; // rax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 25 config_new_widget_ptr:257 64 16 35 attach_ability_group_config_ptr:264";
  *(_QWORD *)(v2 + 16) = WidgetAttachAbilityGroup::onLoseItemEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&lose_item_event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lose_item_event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lose_item_event->item_id);
  }
  item_id = lose_item_event->item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  if ( item_id == this->material_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v2 + 32), WidgetNewConfig);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "onLoseItemEvent",
        260);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"material_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_id_);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])off_26257AC0);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 64));
      if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
             0LL,
             (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_attach_ability_group.cpp",
          "onLoseItemEvent",
          267);
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v18,
          (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(char *)(((unsigned __int64)&v10->is_update_cdafter_ability_trigger >> 3) + 0x7FFF8000) < 0 )
          v10 = (std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->is_update_cdafter_ability_trigger);
        if ( v10->is_update_cdafter_ability_trigger )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          WidgetComp = Player::getWidgetComp(this->player_);
          v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v12->cd_group >> 3) + 0x7FFF8000) <= 3 )
          {
            v12 = (std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->cd_group);
          }
          PlayerWidgetComp::updateWidgetGroupCoolDown(WidgetComp, v12->cd_group, 1);
          WidgetAttachAbilityGroup::takeoffUseAttachAbilityGroupWidget(this);
        }
        v13 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v13->is_consume_material >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v13 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&v13->is_consume_material >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&v13->is_consume_material);
        }
        if ( !v13->is_consume_material )
          goto LABEL_32;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->material_id_);
        }
        if ( !PlayerItemComp::hasItemById(ItemComp, this->material_id_) )
          v15 = 1;
        else
LABEL_32:
          v15 = 0;
        if ( v15 )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v16 = (unsigned __int64)(this->_vptr_WidgetBase + 13);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(this->_vptr_WidgetBase + 13);
          (*(void (__fastcall **)(WidgetAttachAbilityGroup *const))v16)(this);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v17 = Player::getWidgetComp(this->player_);
          PlayerWidgetComp::sendWidgetSlotChangeNotify(v17, WIDGET_SLOT_OP_DETACH, WIDGET_SLOT_ATTACH_AVATAR, 0, 0);
        }
      }
      std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v2 + 64));
    }
    std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v2 + 32));
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
};

// Line 284: range 0000000017989868-0000000017989D64
void __cdecl WidgetAttachAbilityGroup::checkAndRepairAttachAbilityGroupWidget(WidgetAttachAbilityGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  PlayerItemComp *ItemComp; // rcx
  char v10; // al
  unsigned __int64 v11; // rax
  PlayerWidgetComp *WidgetComp; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 25 config_new_widget_ptr:285 64 16 35 attach_ability_group_config_ptr:292";
  *(_QWORD *)(v1 + 16) = WidgetAttachAbilityGroup::checkAndRepairAttachAbilityGroupWidget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_attach_ability_group.cpp",
      "checkAndRepairAttachAbilityGroupWidget",
      288);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"material_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_26257AC0);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityGroup,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
    if ( std::operator==<data::ConfigWidgetUseAttachAbilityGroup>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_attach_ability_group.cpp",
        "checkAndRepairAttachAbilityGroupWidget",
        295);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v13,
        (const char (*)[48])"convert ConfigWidgetUseAttachAbilityGroup fail.");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v8 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->is_consume_material >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v8 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->is_consume_material >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&v8->is_consume_material);
      }
      if ( !v8->is_consume_material )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->material_id_);
      }
      if ( !PlayerItemComp::hasItemById(ItemComp, this->material_id_) )
        v10 = 1;
      else
LABEL_19:
        v10 = 0;
      if ( v10 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v11 = (unsigned __int64)(this->_vptr_WidgetBase + 13);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(this->_vptr_WidgetBase + 13);
        (*(void (__fastcall **)(WidgetAttachAbilityGroup *const))v11)(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WidgetComp = Player::getWidgetComp(this->player_);
        PlayerWidgetComp::sendWidgetSlotChangeNotify(WidgetComp, WIDGET_SLOT_OP_DETACH, WIDGET_SLOT_ATTACH_AVATAR, 0, 0);
      }
    }
    std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityGroup> *const)(v1 + 64));
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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
