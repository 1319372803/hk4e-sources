// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_ability_group_generator.cpp

// Line 25: range 00000000179856A0-000000001798582F
int32_t __cdecl WidgetAbilityGroupGenerator::init(
        WidgetAbilityGroupGenerator *const this,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:26";
  *(_QWORD *)(v2 + 16) = WidgetAbilityGroupGenerator::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyAbilityGroupGenerator,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyAbilityGroupGenerator>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_ability_group_generator.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      &v7,
      (const char (*)[57])"convert ConfigWidgetToyAbilityGroupGenerator ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *const)(v2 + 32));
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

// Line 36: range 0000000017985830-000000001798585F
void __cdecl WidgetAbilityGroupGenerator::onLogin(WidgetAbilityGroupGenerator *const this)
{
  if ( WidgetBase::isSlotOccupied(this, FlyAttach) )
    WidgetAbilityGroupGenerator::addAbilityGroup(this);
};

// Line 44: range 0000000017985860-000000001798600E
int32_t __cdecl WidgetAbilityGroupGenerator::addAbilityGroup(WidgetAbilityGroupGenerator *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAbilityGroupComp *v11; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *i; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *j; // r14
  PlayerAbilityGroupComp *v17; // rax
  int32_t result; // eax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-100h]
  PlayerAbilityGroupComp *__la; // [rsp+0h] [rbp-100h]
  PlayerAbilityGroupComp *__lb; // [rsp+0h] [rbp-100h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 25 widget_base_config_ptr:45 64 16 16 generator_ptr:51";
  *(_QWORD *)(v1 + 16) = WidgetAbilityGroupGenerator::addAbilityGroup;
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
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_ability_group_generator.cpp",
      "addAbilityGroup",
      48);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v24,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = 5;
    goto LABEL_38;
  }
  std::dynamic_pointer_cast<data::ConfigWidgetToyAbilityGroupGenerator,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
  if ( !std::operator==<data::ConfigWidgetToyAbilityGroupGenerator>(
          0LL,
          (const std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *)(v1 + 64)) )
  {
    v8 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(char *)(((unsigned __int64)&v8->is_team >> 3) + 0x7FFF8000) < 0 )
      v8 = (std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v8->is_team);
    if ( !v8->is_team )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
      v10 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &v10->ability_group_name) )
      {
        v7 = -1;
        goto LABEL_37;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v11 = Player::getAbilityGroupComp(this->player_);
      v12 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::string::basic_string(&v24, &v12->ability_group_name);
      __l._M_array = (std::initializer_list<std::string >::iterator)&v24;
      __l._M_len = 1LL;
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, __l, &__a);
      PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v11, &group_vec, 1);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( i = (common::milog::MiLogStream *)v25; i != &v24; std::string::~string(i) )
        --i;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      __la = Player::getAbilityGroupComp(this->player_);
      v14 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(__la, &v14->ability_group_name) )
      {
        v7 = -1;
        goto LABEL_37;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      __lb = Player::getAbilityGroupComp(this->player_);
      v15 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::string::basic_string(&v24, &v15->ability_group_name);
      std::allocator<std::string>::allocator(&__a);
      std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v24), &__a);
      PlayerAbilityGroupComp::addTeamAbilityGroup(__lb, &group_vec, 1);
      std::vector<std::string>::~vector(&group_vec);
      std::allocator<std::string>::~allocator(&__a);
      for ( j = (common::milog::MiLogStream *)v25; j != &v24; std::string::~string(j) )
        --j;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    v17 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v17);
    v7 = 0;
    goto LABEL_37;
  }
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_ability_group_generator.cpp",
    "addAbilityGroup",
    54);
  common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
    &v24,
    (const char (*)[57])"convert ConfigWidgetToyAbilityGroupGenerator ptr failed.");
  common::milog::MiLogStream::~MiLogStream(&v24);
  v7 = 5;
LABEL_37:
  std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *const)(v1 + 64));
LABEL_38:
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
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

// Line 80: range 0000000017986010-0000000017986029
int32_t __cdecl WidgetAbilityGroupGenerator::onAttachAvatar(WidgetAbilityGroupGenerator *const this)
{
  return WidgetAbilityGroupGenerator::addAbilityGroup(this);
};

// Line 85: range 000000001798602A-00000000179866F6
int32_t __cdecl WidgetAbilityGroupGenerator::onDetachAvatar(WidgetAbilityGroupGenerator *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *i; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *j; // r14
  PlayerAbilityGroupComp *v14; // rax
  int32_t result; // eax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-100h]
  PlayerAbilityGroupComp *__la; // [rsp+0h] [rbp-100h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 25 widget_base_config_ptr:86 64 16 16 generator_ptr:92";
  *(_QWORD *)(v1 + 16) = WidgetAbilityGroupGenerator::onDetachAvatar;
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
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_ability_group_generator.cpp",
      "onDetachAvatar",
      89);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v20,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = 5;
  }
  else
  {
    std::dynamic_pointer_cast<data::ConfigWidgetToyAbilityGroupGenerator,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 64));
    if ( std::operator==<data::ConfigWidgetToyAbilityGroupGenerator>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_ability_group_generator.cpp",
        "onDetachAvatar",
        95);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        &v20,
        (const char (*)[57])"convert ConfigWidgetToyAbilityGroupGenerator ptr failed.");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 5;
    }
    else
    {
      v8 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(char *)(((unsigned __int64)&v8->is_team >> 3) + 0x7FFF8000) < 0 )
        v8 = (std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v8->is_team);
      if ( !v8->is_team )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        v10 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        std::string::basic_string(&v20, &v10->ability_group_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v20;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v21; i != &v20; std::string::~string(i) )
          --i;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        __la = Player::getAbilityGroupComp(this->player_);
        v12 = std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyAbilityGroupGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        std::string::basic_string(&v20, &v12->ability_group_name);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &v20), &__a);
        PlayerAbilityGroupComp::delTeamAbilityGroup(__la, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( j = (common::milog::MiLogStream *)v21; j != &v20; std::string::~string(j) )
          --j;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      v14 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v14);
      v7 = 0;
    }
    std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyAbilityGroupGenerator> *const)(v1 + 64));
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = v7;
  if ( v21 == (char *)v1 )
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
