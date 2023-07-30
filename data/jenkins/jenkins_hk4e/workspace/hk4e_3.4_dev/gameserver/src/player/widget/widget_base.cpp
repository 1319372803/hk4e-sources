// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_base.cpp

// Line 22: range 00000000161FDF6A-00000000161FE0B1
void __cdecl WidgetBase::onLogin(WidgetBase *const this)
{
  common::milog::MiLogStream *v3; // rax
  uint64_t NowMs; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( WidgetBase::isAllSlotsOccupied(this) && WidgetBase::isActivityType(this) )
  {
    common::tools::MiTimer::cancel(&this->active_check_timer_);
    if ( !common::tools::MiTimer::isActive(&this->active_check_timer_)
      && PlayerUnixTimer::startS(
           &this->active_check_timer_,
           1u,
           1,
           "./src/player/widget/widget_base.cpp",
           "onLogin",
           26) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_base.cpp",
        "onLogin",
        28);
      v3 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v5,
             (const char (*)[47])"active check timer startS failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->material_id_);
      common::milog::MiLogStream::~MiLogStream(&v5);
    }
    NowMs = common::tools::TimeUtils::getNowMs();
    WidgetBase::onCheckActiveTimer(this, NowMs);
  }
};

// Line 35: range 00000000161FE0B2-00000000161FE2B2
int32_t __cdecl WidgetBase::fromBin(WidgetBase *const this, const proto::WidgetBin *widget_bin)
{
  uint32_t v2; // edx
  char v3; // al
  std::array<bool,10>::size_type v4; // rbx
  bool v6; // bl
  __int64 v7; // rsi
  std::array<bool,10>::reference v8; // rax
  bool *v9; // rdx
  char v10; // cl
  int (**vptr_WidgetBase)(...); // rax
  int (*v12)(...); // rbx
  const proto::WidgetDetailBin *v13; // rcx
  const proto::WidgetBin *widget_bina; // [rsp+0h] [rbp-50h]
  unsigned int idx; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-30h] BYREF

  widget_bina = widget_bin;
  v2 = proto::WidgetBin::material_id(widget_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(widget_bin) = v3 != 0;
    __asan_report_store4(&this->material_id_, widget_bin, v2);
  }
  this->material_id_ = v2;
  v4 = proto::WidgetBin::slot_occupied_list_size(widget_bina);
  if ( v4 <= std::array<bool,10ul>::size(&this->occupied_array_) )
  {
    for ( idx = 0; idx < proto::WidgetBin::slot_occupied_list_size(widget_bina); ++idx )
    {
      v6 = proto::WidgetBin::slot_occupied_list(widget_bina, idx);
      v7 = idx;
      v8 = std::array<bool,10ul>::operator[](&this->occupied_array_, idx);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && ((unsigned __int8)v8 & 7) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store1(v8, v7, v8);
      }
      *v9 = v6;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_WidgetBase = this->_vptr_WidgetBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_WidgetBase >> 3) + 0x7FFF8000) )
      vptr_WidgetBase = (int (**)(...))__asan_report_load8(this->_vptr_WidgetBase);
    v12 = *vptr_WidgetBase;
    v13 = proto::WidgetBin::detail_bin(widget_bina);
    if ( v12(this, v13, widget_bina) )
      return -1;
    else
      return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "fromBin",
      39);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      &v16,
      (const char (*)[57])"slot_occupied_list_size bigger than occupied_array_ size");
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
};

// Line 54: range 00000000161FE2B4-00000000161FE423
int32_t __cdecl WidgetBase::toBin(const WidgetBase *const this, proto::WidgetBin *widget_bin)
{
  unsigned __int64 v2; // rax
  unsigned int (__fastcall *v3)(const WidgetBase *const, proto::WidgetDetailBin *, proto::WidgetBin *); // rbx
  proto::WidgetDetailBin *v4; // rcx
  bool *__for_begin; // [rsp+18h] [rbp-28h]
  std::array<bool,10>::const_iterator __for_end; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  proto::WidgetBin::set_material_id(widget_bin, this->material_id_);
  __for_begin = (bool *)std::array<bool,10ul>::begin(&this->occupied_array_);
  __for_end = std::array<bool,10ul>::end(&this->occupied_array_);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__for_begin & 7) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__for_begin);
    }
    proto::WidgetBin::add_slot_occupied_list(widget_bin, *__for_begin++);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_WidgetBase + 1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_WidgetBase + 1);
  v3 = *(unsigned int (__fastcall **)(const WidgetBase *const, proto::WidgetDetailBin *, proto::WidgetBin *))v2;
  v4 = proto::WidgetBin::mutable_detail_bin(widget_bin);
  if ( v3(this, v4, widget_bin) )
    return -1;
  else
    return 0;
};

// Line 68: range 00000000161FE424-00000000161FE7B4
void __fastcall WidgetBase::setOccupied(WidgetBase *const this, bool is_occupied, uint32_t slot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::array<bool,10>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  std::array<bool,10>::reference v8; // rax
  _BYTE *v9; // rdx
  char v10; // cl
  std::array<bool,10>::size_type v11; // rsi
  common::milog::MiLogStream *v14; // rax
  uint64_t NowMs; // rax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-90h] BYREF
  char v19[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 slot:67";
  *(_QWORD *)(v3 + 16) = WidgetBase::setOccupied;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = slot;
  v6 = *(unsigned int *)(v3 + 32);
  if ( v6 < std::array<bool,10ul>::size(&this->occupied_array_) )
  {
    v11 = *(unsigned int *)(v3 + 32);
    v8 = std::array<bool,10ul>::operator[](&this->occupied_array_, v11);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    if ( v10 != 0 && ((unsigned __int8)v8 & 7) >= v10 )
      __asan_report_store1(v8, v11, v8);
    *v9 = is_occupied;
    if ( WidgetBase::isAllSlotsOccupied(this) && WidgetBase::isActivityType(this) )
    {
      common::tools::MiTimer::cancel(&this->active_check_timer_);
      if ( !common::tools::MiTimer::isActive(&this->active_check_timer_)
        && PlayerUnixTimer::startS(
             &this->active_check_timer_,
             1u,
             1,
             "./src/player/widget/widget_base.cpp",
             "setOccupied",
             79) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/widget/widget_base.cpp",
          "setOccupied",
          81);
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v18,
                (const char (*)[47])"active check timer startS failed, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->material_id_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      NowMs = common::tools::TimeUtils::getNowMs();
      WidgetBase::onCheckActiveTimer(this, NowMs);
    }
    else
    {
      common::tools::MiTimer::cancel(&this->active_check_timer_);
      if ( *(char *)(((unsigned __int64)&this->is_check_active_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_check_active_, v11, &this->is_check_active_);
      this->is_check_active_ = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_base.cpp",
      "setOccupied",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v18,
           (const char (*)[25])"slot out of range, slot:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 94: range 00000000161FE7B6-00000000161FE988
__int64 __fastcall WidgetBase::isSlotOccupied(WidgetBase *const this, uint32_t slot)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::array<bool,10>::size_type v5; // r15
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::array<bool,10>::reference v8; // rax
  unsigned __int8 *v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 slot:93";
  *(_QWORD *)(v2 + 16) = WidgetBase::isSlotOccupied;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = slot;
  v5 = *(unsigned int *)(v2 + 32);
  if ( v5 < std::array<bool,10ul>::size(&this->occupied_array_) )
  {
    v8 = std::array<bool,10ul>::operator[](&this->occupied_array_, *(unsigned int *)(v2 + 32));
    v9 = (unsigned __int8 *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v8);
    }
    result = *v9;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_base.cpp",
      "isSlotOccupied",
      97);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v10,
           (const char (*)[25])"slot out of range, slot:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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

// Line 104: range 00000000161FE98A-00000000161FEC6A
bool __cdecl WidgetBase::isActive(WidgetBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  bool is_check_active; // r14
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool result; // al
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 base_config_ptr:105";
  *(_QWORD *)(v1 + 16) = WidgetBase::isActive;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "isActive",
      108);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v11,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    is_check_active = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->business_type);
    }
    if ( v8->business_type == Resident )
    {
      is_check_active = 1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_check_active_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_check_active_);
      is_check_active = this->is_check_active_;
    }
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = is_check_active;
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

// Line 120: range 00000000161FEC6C-00000000161FEDCF
void __cdecl WidgetBase::onCheckActiveTimer(WidgetBase *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v3; // rax
  uint32_t material_id; // edx
  bool v5; // dl
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( !WidgetBase::isActivityType(this) || !WidgetBase::isAllSlotsOccupied(this) )
  {
    common::tools::MiTimer::cancel(&this->active_check_timer_);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_base.cpp",
      "onCheckActiveTimer",
      124);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v6,
           (const char (*)[50])"widget has been cleared, stop timer, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    material_id = this->material_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = WidgetBase::checkIsWidgetActive(this->player_, material_id);
    WidgetBase::setCheckActive(this, v5);
  }
};

// Line 131: range 00000000161FEDD0-00000000161FF254
void __cdecl WidgetBase::setCheckActive(WidgetBase *const this, bool is_active)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >::reference v8; // rax
  data::WidgetOccupyTag *v9; // rdx
  proto::WidgetSlotData *v10; // rcx
  data::WidgetOccupyTag tag; // [rsp+14h] [rbp-11Ch]
  std::vector<data::WidgetOccupyTag>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<data::WidgetOccupyTag>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::vector<data::WidgetOccupyTag> *__for_range; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 19 base_config_ptr:132 80 48 10 notify:142";
  *(_QWORD *)(v2 + 16) = WidgetBase::setCheckActive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v2 + 48), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "setCheckActive",
      135);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v16,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_check_active_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_check_active_);
    if ( is_active != this->is_check_active_ )
    {
      this->is_check_active_ = is_active;
      proto::WidgetActiveChangeNotify::WidgetActiveChangeNotify((proto::WidgetActiveChangeNotify *const)(v2 + 80));
      __for_range = &std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->tags;
      __for_begin._M_current = std::vector<data::WidgetOccupyTag>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<data::WidgetOccupyTag>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>(
                &__for_begin,
                &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        tag = *v9;
        if ( WidgetBase::isSlotOccupied(this, *v9) )
        {
          v10 = proto::WidgetActiveChangeNotify::add_widget_data_list((proto::WidgetActiveChangeNotify *const)(v2 + 80));
          WidgetBase::toClient(this, v10, tag);
        }
        __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
      proto::WidgetActiveChangeNotify::~WidgetActiveChangeNotify((proto::WidgetActiveChangeNotify *const)(v2 + 80));
    }
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v2 + 48));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 155: range 00000000161FF256-00000000161FF5A2
bool __cdecl WidgetBase::isAllSlotsOccupied(WidgetBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  bool v7; // r14
  __gnu_cxx::__normal_iterator<data::WidgetOccupyTag*,std::vector<data::WidgetOccupyTag> >::reference v8; // rax
  data::WidgetOccupyTag *v9; // rdx
  bool result; // al
  bool is_occupied; // [rsp+13h] [rbp-BDh]
  std::vector<data::WidgetOccupyTag>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<data::WidgetOccupyTag>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<data::WidgetOccupyTag> *__for_range; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 base_config_ptr:156";
  *(_QWORD *)(v1 + 16) = WidgetBase::isAllSlotsOccupied;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "isAllSlotsOccupied",
      159);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v16,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = 0;
  }
  else
  {
    is_occupied = 1;
    __for_range = &std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->tags;
    __for_begin._M_current = std::vector<data::WidgetOccupyTag>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::WidgetOccupyTag>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      is_occupied = (is_occupied & WidgetBase::isSlotOccupied(this, *v9)) != 0;
      __gnu_cxx::__normal_iterator<data::WidgetOccupyTag *,std::vector<data::WidgetOccupyTag>>::operator++(&__for_begin);
    }
    v7 = is_occupied;
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = v7;
  if ( v17 == (char *)v1 )
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

// Line 171: range 00000000161FF5A4-00000000161FF82F
bool __cdecl WidgetBase::isActivityType(WidgetBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  bool v7; // r14
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool result; // al
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 base_config_ptr:172";
  *(_QWORD *)(v1 + 16) = WidgetBase::isActivityType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "isActivityType",
      175);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v11,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->business_type);
    }
    v7 = v8->business_type == Activity_0;
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = v7;
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

// Line 183: range 00000000161FF830-00000000161FF910
void __cdecl WidgetBase::toClient(WidgetBase *const this, proto::WidgetSlotData *slot_data, data::WidgetOccupyTag tag)
{
  bool isActive; // dl
  proto::WidgetSlotTag proto_tag; // [rsp+2Ch] [rbp-4h]

  if ( WidgetBase::isSlotOccupied(this, tag) )
  {
    proto_tag = WIDGET_SLOT_QUICK_USE;
    if ( tag == ActionPanel )
    {
      proto_tag = WIDGET_SLOT_QUICK_USE;
    }
    else if ( tag == FlyAttach )
    {
      proto_tag = WIDGET_SLOT_ATTACH_AVATAR;
    }
    proto::WidgetSlotData::set_tag(slot_data, proto_tag);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    proto::WidgetSlotData::set_material_id(slot_data, this->material_id_);
    isActive = WidgetBase::isActive(this);
    proto::WidgetSlotData::set_is_active(slot_data, isActive);
    proto::WidgetSlotData::set_cd_over_time(slot_data, 0);
  }
};

// Line 207: range 00000000161FF912-00000000161FFB97
uint32_t __cdecl WidgetBase::getQuickUseCdGroupId(const WidgetBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v6; // rax
  uint32_t cd_group; // r14d
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 base_config_ptr:208";
  *(_QWORD *)(v1 + 16) = WidgetBase::getQuickUseCdGroupId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v1 + 32), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "getQuickUseCdGroupId",
      211);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v11,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    cd_group = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->cd_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->cd_group >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->cd_group);
    }
    cd_group = v8->cd_group;
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v1 + 32));
  result = cd_group;
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

// Line 218: range 00000000161FFB98-0000000016200537
_BOOL8 __fastcall WidgetBase::checkIsWidgetActive(Player *player, uint32_t material_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // eax
  common::milog::MiLogStream *v7; // rax
  _BOOL4 v8; // r14d
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Scene *v12; // rax
  SceneGalleryComp *GalleryComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  PlayerSceneComp *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool isCityInActiveSet; // r14
  _BOOL8 result; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-250h]
  uint32_t OwnerUid; // [rsp+20h] [rbp-240h]
  bool isGalleryInActiveSet; // [rsp+20h] [rbp-240h]
  bool isRegionInActiveSet; // [rsp+20h] [rbp-240h]
  std::less<unsigned int> __comp; // [rsp+32h] [rbp-22Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-22Dh] BYREF
  std::initializer_list<unsigned int> v29; // [rsp+34h] [rbp-22Ch] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-210h] BYREF
  char v31[496]; // [rsp+70h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 15 material_id:217 64 16 19 base_config_ptr:219 96 16 17 cur_scene_ptr:234 128 48 18 gall"
                        "ery_id_set:247 208 48 14 region_set:252 288 48 16 scene_id_set:257 368 48 15 city_id_set:262";
  *(_QWORD *)(v2 + 16) = WidgetBase::checkIsWidgetActive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -218959118;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  *(_DWORD *)(v2 + 48) = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len + 4);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v2 + 64), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
  if ( std::operator==<data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_base.cpp",
      "checkIsWidgetActive",
      222);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v30,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->business_type);
    }
    if ( v9->business_type == Resident )
    {
      v8 = 1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len + 4);
      *(std::initializer_list<unsigned int>::iterator *)((char *)&v29._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::WidgetExcelConfigMgrBase::findWidgetActiveExcelConfig(&v10->design_config.txt_config_mgr.widget_config_mgr, *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
      if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&v29._M_array + 4) )
      {
        Player::getSceneComp(player);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/widget_base.cpp",
            "checkIsWidgetActive",
            237);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])"cur_scene is null");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v8 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v29._M_array
                                                                                               + 4)
                                            + 3) >> 3)
                        + 0x7FFF8000) != 0
            && ((BYTE4(v29._M_array) + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v29._M_array + 4)
                                                                                + 3) >> 3)
                                                            + 0x7FFF8000) )
          {
            __asan_report_load1(*(std::initializer_list<unsigned int>::iterator *)((char *)&v29._M_array + 4) + 3);
          }
          if ( (*(_BYTE **)((char *)&v29._M_array + 4))[12] == 1
            || (v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
                OwnerUid = Scene::getOwnerUid(v11),
                OwnerUid == Player::getUid(player)) )
          {
            v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            GalleryComp = Scene::getGalleryComp(v12);
            SceneGalleryComp::getAllStartedGalleryIdSet((std::set<unsigned int> *)(v2 + 128), GalleryComp);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                    (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len
                  + 4);
            isGalleryInActiveSet = WidgetExcelConfigMgr::isGalleryInActiveSet(
                                     &v14->design_config.txt_config_mgr.widget_config_mgr,
                                     *(_DWORD *)(v2 + 48),
                                     (const std::set<unsigned int> *)(v2 + 128));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
            if ( isGalleryInActiveSet )
            {
              v8 = 1;
            }
            else
            {
              SceneComp = Player::getSceneComp(player);
              PlayerSceneComp::getCurRegionSet((std::set<std::pair<unsigned int,unsigned int>> *)(v2 + 208), SceneComp);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
              v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                      (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len
                    + 4);
              isRegionInActiveSet = WidgetExcelConfigMgr::isRegionInActiveSet(
                                      &v16->design_config.txt_config_mgr.widget_config_mgr,
                                      *(_DWORD *)(v2 + 48),
                                      (const std::set<std::pair<unsigned int,unsigned int>> *)(v2 + 208));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
              if ( isRegionInActiveSet )
              {
                v8 = 1;
              }
              else
              {
                v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                LODWORD(v29._M_array) = Scene::getSceneId(v17);
                __l._M_array = (std::initializer_list<unsigned int>::iterator)&v29;
                __l._M_len = 1LL;
                std::allocator<unsigned int>::allocator(&__a);
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 288), __l, &__comp, &__a);
                std::allocator<unsigned int>::~allocator(&__a);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
                v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                        (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len
                      + 4);
                LOBYTE(__l._M_array) = WidgetExcelConfigMgr::isSceneInActiveSet(
                                         &v18->design_config.txt_config_mgr.widget_config_mgr,
                                         *(_DWORD *)(v2 + 48),
                                         (const std::set<unsigned int> *)(v2 + 288));
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
                if ( LOBYTE(__l._M_array) )
                {
                  v8 = 1;
                }
                else
                {
                  v19 = Player::getSceneComp(player);
                  LODWORD(v29._M_array) = PlayerSceneComp::getCurCityId(v19);
                  std::allocator<unsigned int>::allocator(&__a);
                  std::set<unsigned int>::set(
                    (std::set<unsigned int> *const)(v2 + 368),
                    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v29),
                    &__comp,
                    &__a);
                  std::allocator<unsigned int>::~allocator(&__a);
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)((char *)&v29._M_len + 4));
                  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                          (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29._M_len
                        + 4);
                  isCityInActiveSet = WidgetExcelConfigMgr::isCityInActiveSet(
                                        &v20->design_config.txt_config_mgr.widget_config_mgr,
                                        *(_DWORD *)(v2 + 48),
                                        (const std::set<unsigned int> *)(v2 + 368));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v29._M_len + 4));
                  v8 = isCityInActiveSet;
                  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 368));
                }
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 288));
              }
              std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 208));
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 128));
          }
          else
          {
            v8 = 0;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v2 + 64));
  result = v8;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
