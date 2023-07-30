// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_toy_crystal.cpp

// Line 24: range 000000001621E324-000000001621E3E6
int32_t __cdecl WidgetToyCrystal::init(WidgetToyCrystal *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetToyCrystal,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetToyCrystal>(0LL, (const std::shared_ptr<data::ConfigWidgetToyCrystal> *)&__r);
  std::shared_ptr<data::ConfigWidgetToyCrystal>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCrystal> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_toy_crystal.cpp",
    "init",
    27);
  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
    &v5,
    (const char (*)[50])"convert to ConfigWidgetToyCrystal pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 34: range 000000001621E3E8-000000001621E820
int32_t __cdecl WidgetToyCrystal::onQuickUse(
        WidgetToyCrystal *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  PlayerRegionalPlayComp *RegionalPlayComp; // r15
  std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  float energy_cost; // r14d
  std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int32_t result; // eax
  uint32_t cd_group_id; // [rsp+2Ch] [rbp-A4h]
  WidgetUseAttachAbilityTrigger v17; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)&v17.occupied_array_._M_elems[4];
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 config_ptr:35";
  *(_QWORD *)(v3 + 16) = WidgetToyCrystal::onQuickUse;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  WidgetUseAttachAbilityTrigger::getConfig(&v17);
  std::dynamic_pointer_cast<data::ConfigWidgetToyCrystal const,data::ConfigWidgetUseAttachAbilityTrigger const>((const std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *)(v3 + 32));
  std::shared_ptr<data::ConfigWidgetUseAttachAbilityTrigger const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetUseAttachAbilityTrigger> *const)&v17);
  if ( std::operator==<data::ConfigWidgetToyCrystal const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetToyCrystal> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v17._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_toy_crystal.cpp",
      "onQuickUse",
      38);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)&v17._M_weak_this._M_refcount,
           (const char (*)[29])"getConfig fail, material_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v17._M_weak_this._M_refcount);
    v9 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
    v11 = std::__shared_ptr_access<data::ConfigWidgetToyCrystal const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v11->energy_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v11 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->energy_cost >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v11->energy_cost);
    }
    energy_cost = v11->energy_cost;
    v13 = std::__shared_ptr_access<data::ConfigWidgetToyCrystal const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v13->meter_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->meter_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v13 = (std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->meter_type);
    }
    if ( (unsigned int)PlayerRegionalPlayComp::strictSubVarValue(RegionalPlayComp, v13->meter_type, energy_cost) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v17._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_toy_crystal.cpp",
        "onQuickUse",
        47);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)&v17._M_weak_this._M_refcount,
        (const char (*)[39])"[2.5 toy crystal] energy is not enough");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v17._M_weak_this._M_refcount);
      v9 = 1598;
    }
    else
    {
      v14 = std::__shared_ptr_access<data::ConfigWidgetToyCrystal const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v14->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = (std::__shared_ptr_access<const data::ConfigWidgetToyCrystal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v14->cd_group);
      }
      cd_group_id = v14->cd_group;
      if ( cd_group_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->widget_comp_);
        PlayerWidgetComp::updateWidgetGroupCoolDown(this->widget_comp_, cd_group_id, 1);
      }
      v9 = 0;
    }
  }
  std::shared_ptr<data::ConfigWidgetToyCrystal const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyCrystal> *const)(v3 + 32));
  result = v9;
  if ( &v17.occupied_array_._M_elems[4] == (bool *)v3 )
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
