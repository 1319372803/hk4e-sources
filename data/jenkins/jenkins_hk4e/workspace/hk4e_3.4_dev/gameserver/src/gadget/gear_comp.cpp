// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gear_comp.cpp

// Line 27: range 000000001450ED3E-000000001450F35B
int32_t __cdecl GearComp::initByConfig(GearComp *const this, const GadgetParam *gadget_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  Gadget *Gadget; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool *p_is_json_loaded; // rax
  common::milog::MiLogStream *v9; // r14
  Gadget *v10; // rax
  data::ElementType start_elem_type; // ecx
  uint32_t start_value; // ecx
  uint32_t start_last_time; // ecx
  data::ElementType stop_elem_type; // ecx
  uint32_t stop_value; // ecx
  uint32_t stop_last_time; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  data::ConfigGear *config_gear; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-90h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 config_gadget_ptr:28";
  *(_QWORD *)(v2 + 16) = GearComp::initByConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GadgetCompBase::getGadget(this);
  Gadget::getJsonConfig((const Gadget *const)(v2 + 32));
  if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gear_comp.cpp",
      "initByConfig",
      31);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v20,
           (const char (*)[20])"getJsonConfig fails");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    config_gear = &v7->misc.gear;
    p_is_json_loaded = &v7->misc.gear.is_json_loaded;
    if ( *(_BYTE *)(((unsigned __int64)p_is_json_loaded >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_json_loaded & 7) >= *(_BYTE *)(((unsigned __int64)p_is_json_loaded >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_json_loaded);
    }
    if ( !config_gear->is_json_loaded )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gear_comp.cpp",
        "initByConfig",
        37);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v20,
             (const char (*)[40])"json is not loaded for gear, gadget_id:");
      v10 = GadgetCompBase::getGadget(this);
      val = Gadget::getGadgetId(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->start_elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->start_elem_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      start_elem_type = config_gear->start_elem_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->start_elem_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->start_elem_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->start_elem_type_);
      }
      this->start_elem_type_ = start_elem_type;
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->start_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->start_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      start_value = config_gear->start_value;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->max_start_value_);
      }
      this->max_start_value_ = start_value;
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->start_last_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->start_last_time >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      start_last_time = config_gear->start_last_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->start_last_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->start_last_time_);
      }
      this->start_last_time_ = start_last_time;
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->stop_elem_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->stop_elem_type >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stop_elem_type = config_gear->stop_elem_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->stop_elem_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_elem_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->stop_elem_type_);
      }
      this->stop_elem_type_ = stop_elem_type;
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->stop_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->stop_value >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stop_value = config_gear->stop_value;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_stop_value_);
      }
      this->max_stop_value_ = stop_value;
      if ( *(_BYTE *)(((unsigned __int64)&config_gear->stop_last_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_gear + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_gear->stop_last_time >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stop_last_time = config_gear->stop_last_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_last_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->stop_last_time_);
      }
      this->stop_last_time_ = stop_last_time;
    }
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 32));
  result = 0;
  if ( v21 == (char *)v2 )
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

// Line 52: range 000000001450F35C-000000001450F3C2
int32_t __cdecl GearComp::init(GearComp *const this)
{
  uint32_t Now; // ebx
  Gadget *Gadget; // rax

  Now = common::tools::TimeUtils::getNow();
  Gadget = GadgetCompBase::getGadget(this);
  if ( *(_BYTE *)(((unsigned __int64)&Gadget->state_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&Gadget->state_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    Gadget = (Gadget *)__asan_report_store4(&Gadget->state_begin_time_);
  }
  Gadget->state_begin_time_ = Now;
  return 0;
};

// Line 58: range 000000001450F614-000000001450FA4E
int32_t __cdecl GearComp::start(GearComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SceneUnixTimer *v5; // rax
  int32_t result; // eax
  std::shared_ptr<Gadget> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v8; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:59 64 16 13 gadget_wtr:66";
  *(_QWORD *)(v1 + 16) = GearComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gear_comp.cpp",
      "start",
      62);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v9, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,GearComp::start(void)::{lambda(unsigned long)#1}>(
      &v8,
      (GearComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (GearComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v8);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v8);
    GearComp::start(void)::{lambda(unsigned long)#1}::~start((GearComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gear_comp.cpp",
        "start",
        70);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v9,
        (const char (*)[29])"create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
      v4 = -1;
    }
    else if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      v4 = 0;
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, 1u, 1, "./src/gadget/gear_comp.cpp", "start", 79) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gear_comp.cpp",
          "start",
          81);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v9,
          (const char (*)[31])"gear update_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v9);
        v4 = -1;
      }
      else
      {
        v4 = 0;
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v4;
  if ( v10 == (char *)v1 )
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

// Line 66: range 000000001450F3C4-000000001450F5F7
void __cdecl GearComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const GearComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GearComp *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 gadget_ptr:66 64 16 10 obj_ptr:66";
  *(_QWORD *)(v2 + 16) = GearComp::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gear_comp.cpp",
      "operator()",
      66);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GearComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<GearComp>((const std::shared_ptr<GearComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<GearComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GearComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GearComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<GearComp>::~shared_ptr((std::shared_ptr<GearComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
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

// Line 66: range 00000000145F3938-00000000145F395D
void __cdecl GearComp::start(void)::{lambda(unsigned long)#1}::start(
        GearComp::start::<lambda(uint64_t)> *const this,
        GearComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 66: range 00000000145F5CE6-00000000145F5D0B
void __cdecl GearComp::start(void)::{lambda(unsigned long)#1}::start(
        GearComp::start::<lambda(uint64_t)> *const this,
        const GearComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 66: range 000000001450F5F8-000000001450F612
void __cdecl GearComp::start(void)::{lambda(unsigned long)#1}::~start(GearComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 90: range 000000001450FA50-000000001450FED0
void __cdecl GearComp::onUpdateTimer(GearComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  ScriptContext *v7; // r14
  LuaScript *v8; // rax
  unsigned int *v9; // r8
  std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // [rsp+8h] [rbp-1D8h]
  bool v11; // [rsp+8h] [rbp-1D8h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-1B1h] BYREF
  ScriptContext *context; // [rsp+30h] [rbp-1B0h]
  ScriptContext *o; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<Gadget> __r; // [rsp+40h] [rbp-1A0h] BYREF
  std::string func_name; // [rsp+50h] [rbp-190h] BYREF
  char v17[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 now:91 64 16 13 script_ptr:92 96 160 17 script_context:95";
  *(_QWORD *)(v2 + 16) = GearComp::onUpdateTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = now_ms / 0x3E8;
  GadgetCompBase::getGadget(this);
  Gadget::getScript((const Gadget *const)(v2 + 64));
  v5 = 0;
  v6 = 0;
  v11 = 0;
  if ( std::operator!=<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 64), 0LL) )
  {
    v10 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::allocator<char>::allocator(&__a);
    v5 = 1;
    std::string::basic_string<std::allocator<char>>(&func_name, "OnTimer", &__a);
    v6 = 1;
    if ( LuaScript::hasFunction(v10, &func_name) )
      v11 = 1;
  }
  if ( v6 )
    std::string::~string(&func_name);
  if ( v5 )
    std::allocator<char>::~allocator(&__a);
  if ( v11 )
  {
    ScriptContext::ScriptContext((ScriptContext *const)(v2 + 96));
    GadgetCompBase::getGadget(this);
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::operator=<Gadget>((std::weak_ptr<Gadget> *const)(v2 + 144), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    GadgetCompBase::getGadget(this);
    Entity::getScene((const Entity *const)&__r);
    ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v2 + 96), (ScenePtr *)&__r);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&__r);
    o = (ScriptContext *)(v2 + 96);
    context = boost::addressof<ScriptContext>((ScriptContext *)(v2 + 96));
    v7 = context;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&func_name, "OnTimer", &__a);
    v8 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ScriptLib::executeFuncWithErrorNotify<void,unsigned int &>(v8, &func_name, v7, (unsigned int *)(v2 + 48), v9);
    std::string::~string(&func_name);
    std::allocator<char>::~allocator(&__a);
    ScriptContext::~ScriptContext((ScriptContext *const)(v2 + 96));
  }
  std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 104: range 000000001450FED2-0000000014510021
int32_t __cdecl GearComp::setStartValue(GearComp *const this, uint32_t start_value, bool is_notify)
{
  uint32_t v4; // ecx
  Creature *Gadget; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( start_value == this->start_value_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_value_);
  }
  this->start_value_ = start_value;
  v4 = this->start_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_start_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v4 >= this->max_start_value_ )
    this->start_value_ = this->max_start_value_;
  if ( is_notify )
  {
    Gadget = GadgetCompBase::getGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      Gadget = (Creature *)&this->start_value_;
      __asan_report_load4();
    }
    Creature::notifyIntProp(Gadget, PROP_GEAR_START_VAL, this->start_value_);
  }
  return 0;
};

// Line 117: range 0000000014510022-0000000014510191
int32_t __cdecl GearComp::setStopValue(GearComp *const this, uint32_t stop_value, bool is_notify)
{
  uint32_t v4; // ecx
  Creature *Gadget; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( stop_value == this->stop_value_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_value_);
  }
  this->stop_value_ = stop_value;
  v4 = this->stop_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stop_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v4 >= this->max_stop_value_ )
    this->stop_value_ = this->max_stop_value_;
  if ( is_notify )
  {
    Gadget = GadgetCompBase::getGadget(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value_ >> 3) + 0x7FFF8000) )
    {
      Gadget = (Creature *)&this->stop_value_;
      __asan_report_load4();
    }
    Creature::notifyIntProp(Gadget, PROP_GEAR_STOP_VAL, this->stop_value_);
  }
  return 0;
};
