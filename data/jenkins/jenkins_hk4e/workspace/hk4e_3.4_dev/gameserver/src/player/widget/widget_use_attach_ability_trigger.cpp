// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_use_attach_ability_trigger.cpp

// Line 24: range 0000000016220146-0000000016220208
int32_t __cdecl WidgetUseAttachAbilityTrigger::init(
        WidgetUseAttachAbilityTrigger *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetUseAttachAbilityTrigger,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetUseAttachAbilityTrigger>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger> *)&__r);
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger>::~shared_ptr((std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_use_attach_ability_trigger.cpp",
    "init",
    27);
  common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
    &v5,
    (const char (*)[63])"convert to ConfigWidgetUseAttachAbilityTrigger pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 34: range 000000001622020A-000000001622099C
void __cdecl WidgetUseAttachAbilityTrigger::onLogin(WidgetUseAttachAbilityTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerAbilityGroupComp *v13; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *i; // r13
  PlayerAbilityGroupComp *v16; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerAbilityGroupComp *v18; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *j; // r13
  PlayerAbilityGroupComp *v21; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-F0h]
  std::initializer_list<std::string > v23; // [rsp+10h] [rbp-E0h]
  std::allocator<std::string > __a; // [rsp+3Fh] [rbp-B1h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-90h] BYREF
  char v27[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:38";
  *(_QWORD *)(v1 + 16) = WidgetUseAttachAbilityTrigger::onLogin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  WidgetBase::onLogin(this);
  if ( WidgetBase::isSlotOccupied(this, ActionPanel) )
  {
    WidgetUseAttachAbilityTrigger::getConfig((const WidgetUseAttachAbilityTrigger *const)(v1 + 32));
    if ( std::operator==<data::ConfigWidgetUseAttachAbilityTrigger const>(
           0LL,
           (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_use_attach_ability_trigger.cpp",
        "onLogin",
        41);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v26,
             (const char (*)[29])"getConfig fail, material_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v7 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( !(unsigned __int8)std::string::empty(&v7->ability_group_name) )
      {
        v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(char *)(((unsigned __int64)&v10->is_team >> 3) + 0x7FFF8000) < 0 )
          v10 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->is_team);
        if ( !v10->is_team )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &v12->ability_group_name) )
            goto LABEL_38;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v13 = Player::getAbilityGroupComp(this->player_);
          v14 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          std::string::basic_string(&v26, &v14->ability_group_name);
          __l._M_array = (std::initializer_list<std::string >::iterator)&v26;
          __l._M_len = 1LL;
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(&group_vec, __l, &__a);
          PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v13, &group_vec, 0);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (common::milog::MiLogStream *)v27; i != &v26; std::string::~string(i) )
            --i;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v16 = Player::getAbilityGroupComp(this->player_);
          v17 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(v16, &v17->ability_group_name) )
            goto LABEL_38;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v18 = Player::getAbilityGroupComp(this->player_);
          v19 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          std::string::basic_string(&v26, &v19->ability_group_name);
          v23._M_array = (std::initializer_list<std::string >::iterator)&v26;
          v23._M_len = 1LL;
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(&group_vec, v23, &__a);
          PlayerAbilityGroupComp::addTeamAbilityGroup(v18, &group_vec, 0);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( j = (common::milog::MiLogStream *)v27; j != &v26; std::string::~string(j) )
            --j;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        v21 = Player::getAbilityGroupComp(this->player_);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v21);
LABEL_38:
        std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *const)(v1 + 32));
        goto LABEL_39;
      }
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_use_attach_ability_trigger.cpp",
        "onLogin",
        46);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v26,
             (const char (*)[42])"ability_group_name is empty, material_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_id_);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    goto LABEL_38;
  }
LABEL_39:
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 73: range 000000001622099E-0000000016221126
int32_t __cdecl WidgetUseAttachAbilityTrigger::onSetActionPanel(WidgetUseAttachAbilityTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r13d
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerAbilityGroupComp *v15; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *i; // r13
  PlayerAbilityGroupComp *v18; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerAbilityGroupComp *v20; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *j; // r13
  PlayerAbilityGroupComp *v23; // rax
  int32_t result; // eax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-F0h]
  std::initializer_list<std::string > v26; // [rsp+10h] [rbp-E0h]
  std::allocator<std::string > __a; // [rsp+3Fh] [rbp-B1h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-90h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:74";
  *(_QWORD *)(v1 + 16) = WidgetUseAttachAbilityTrigger::onSetActionPanel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  WidgetUseAttachAbilityTrigger::getConfig((const WidgetUseAttachAbilityTrigger *const)(v1 + 32));
  if ( std::operator==<data::ConfigWidgetUseAttachAbilityTrigger const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_use_attach_ability_trigger.cpp",
      "onSetActionPanel",
      77);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v29,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = 5;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( (unsigned __int8)std::string::empty(&v8->ability_group_name) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_use_attach_ability_trigger.cpp",
        "onSetActionPanel",
        82);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v29,
             (const char (*)[42])"ability_group_name is empty, material_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(char *)(((unsigned __int64)&v12->is_team >> 3) + 0x7FFF8000) < 0 )
        v12 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v12->is_team);
      if ( !v12->is_team )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        v14 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &v14->ability_group_name) )
        {
          v7 = -1;
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v15 = Player::getAbilityGroupComp(this->player_);
        v16 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::string::basic_string(&v29, &v16->ability_group_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v29;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v15, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v30; i != &v29; std::string::~string(i) )
          --i;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v18 = Player::getAbilityGroupComp(this->player_);
        v19 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(v18, &v19->ability_group_name) )
        {
          v7 = -1;
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v20 = Player::getAbilityGroupComp(this->player_);
        v21 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::string::basic_string(&v29, &v21->ability_group_name);
        v26._M_array = (std::initializer_list<std::string >::iterator)&v29;
        v26._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, v26, &__a);
        PlayerAbilityGroupComp::addTeamAbilityGroup(v20, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( j = (common::milog::MiLogStream *)v30; j != &v29; std::string::~string(j) )
          --j;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      v23 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v23);
      v7 = 0;
    }
  }
LABEL_39:
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *const)(v1 + 32));
  result = v7;
  if ( v30 == (char *)v1 )
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

// Line 108: range 0000000016221128-00000000162218AC
int32_t __cdecl WidgetUseAttachAbilityTrigger::onClearActionPanel(WidgetUseAttachAbilityTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r13d
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerAbilityGroupComp *v15; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *i; // r13
  PlayerAbilityGroupComp *v18; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerAbilityGroupComp *v20; // r13
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *j; // r13
  PlayerAbilityGroupComp *v23; // rax
  int32_t result; // eax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-F0h]
  std::initializer_list<std::string > v26; // [rsp+10h] [rbp-E0h]
  std::allocator<std::string > __a; // [rsp+3Fh] [rbp-B1h] BYREF
  std::vector<std::string> group_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-90h] BYREF
  char v30[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:109";
  *(_QWORD *)(v1 + 16) = WidgetUseAttachAbilityTrigger::onClearActionPanel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  WidgetUseAttachAbilityTrigger::getConfig((const WidgetUseAttachAbilityTrigger *const)(v1 + 32));
  if ( std::operator==<data::ConfigWidgetUseAttachAbilityTrigger const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_use_attach_ability_trigger.cpp",
      "onClearActionPanel",
      112);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v29,
           (const char (*)[29])"getConfig fail, material_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = 5;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( (unsigned __int8)std::string::empty(&v8->ability_group_name) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_use_attach_ability_trigger.cpp",
        "onClearActionPanel",
        117);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v29,
             (const char (*)[42])"ability_group_name is empty, material_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(char *)(((unsigned __int64)&v12->is_team >> 3) + 0x7FFF8000) < 0 )
        v12 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v12->is_team);
      if ( !v12->is_team )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        v14 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &v14->ability_group_name) )
        {
          v7 = -1;
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v15 = Player::getAbilityGroupComp(this->player_);
        v16 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::string::basic_string(&v29, &v16->ability_group_name);
        __l._M_array = (std::initializer_list<std::string >::iterator)&v29;
        __l._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, __l, &__a);
        PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v15, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( i = (common::milog::MiLogStream *)v30; i != &v29; std::string::~string(i) )
          --i;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v18 = Player::getAbilityGroupComp(this->player_);
        v19 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(v18, &v19->ability_group_name) )
        {
          v7 = -1;
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v20 = Player::getAbilityGroupComp(this->player_);
        v21 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        std::string::basic_string(&v29, &v21->ability_group_name);
        v26._M_array = (std::initializer_list<std::string >::iterator)&v29;
        v26._M_len = 1LL;
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, v26, &__a);
        PlayerAbilityGroupComp::delTeamAbilityGroup(v20, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        for ( j = (common::milog::MiLogStream *)v30; j != &v29; std::string::~string(j) )
          --j;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      v23 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v23);
      v7 = 0;
    }
  }
LABEL_39:
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *const)(v1 + 32));
  result = v7;
  if ( v30 == (char *)v1 )
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

// Line 143: range 00000000162218AE-0000000016221B52
int32_t __cdecl WidgetUseAttachAbilityTrigger::onQuickUse(
        WidgetUseAttachAbilityTrigger *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  uint32_t cd_group_id; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 config_ptr:144";
  *(_QWORD *)(v3 + 16) = WidgetUseAttachAbilityTrigger::onQuickUse;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  WidgetUseAttachAbilityTrigger::getConfig((const WidgetUseAttachAbilityTrigger *const)(v3 + 32));
  if ( std::operator==<data::ConfigWidgetUseAttachAbilityTrigger const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_use_attach_ability_trigger.cpp",
      "onQuickUse",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v13,
           (const char (*)[29])"getConfig fail, material_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = 5;
  }
  else
  {
    v10 = std::__shared_ptr_access<data::ConfigWidgetUseAttachAbilityTrigger const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->cd_group);
    }
    cd_group_id = v10->cd_group;
    if ( cd_group_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->widget_comp_);
      PlayerWidgetComp::updateWidgetGroupCoolDown(this->widget_comp_, cd_group_id, 1);
    }
    v9 = 0;
  }
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *const)(v3 + 32));
  result = v9;
  if ( v14 == (char *)v3 )
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

// Line 162: range 0000000016221B54-0000000016221CB3
std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> __cdecl WidgetUseAttachAbilityTrigger::getConfig(
        const WidgetUseAttachAbilityTrigger *const this)
{
  const WidgetUseAttachAbilityTrigger *v1; // rsi
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> result; // rax
  const WidgetUseAttachAbilityTrigger *thisa; // [rsp+0h] [rbp-50h]
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  thisa = v1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_use_attach_ability_trigger.cpp",
    "getConfig",
    163);
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
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetUseAttachAbilityTrigger const>(
    (const WidgetJsonNewConfig *const)this,
    (uint32_t)WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  result._M_ptr = (std::__shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
