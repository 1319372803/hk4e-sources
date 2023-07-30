// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/crystal_comp.cpp

// Line 21: range 000000001313F302-000000001313F8F1
int32_t __cdecl CrystalComp::initByConfig(CrystalComp *const this, const GadgetParam *gadget_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  Gadget *Gadget; // rax
  data::ElementType element_type; // ecx
  uint32_t gain_speed; // ecx
  uint32_t drain_speed; // ecx
  uint32_t burst_resonate; // ecx
  uint32_t burst_time; // ecx
  uint32_t respawn_time; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  data::ConfigCrystal *config_crystal; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-90h] BYREF
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 config_gadget_ptr:22";
  *(_QWORD *)(v2 + 16) = CrystalComp::initByConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GadgetCompBase::getGadget(this);
  Gadget::getJsonConfig((const Gadget *const)(v2 + 32));
  if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/crystal_comp.cpp",
      "initByConfig",
      25);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v18, (const char (*)[20])"getJsonConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    config_crystal = &v6->misc.crystal;
    if ( *(char *)(((unsigned __int64)&v6->misc.crystal.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&v6->misc.crystal.is_json_loaded);
    if ( !config_crystal->is_json_loaded )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/crystal_comp.cpp",
        "initByConfig",
        31);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v18,
             (const char (*)[43])"json is not loaded for crystal, gadget_id:");
      Gadget = GadgetCompBase::getGadget(this);
      val = Gadget::getGadgetId(Gadget);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)config_crystal >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config_crystal >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      element_type = config_crystal->element_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->elem_type_);
      }
      this->elem_type_ = element_type;
      if ( *(_BYTE *)(((unsigned __int64)&config_crystal->gain_speed >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_crystal + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_crystal->gain_speed >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gain_speed = config_crystal->gain_speed;
      if ( *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->gain_speed_);
      }
      this->gain_speed_ = gain_speed;
      if ( *(_BYTE *)(((unsigned __int64)&config_crystal->drain_speed >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_crystal->drain_speed >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      drain_speed = config_crystal->drain_speed;
      if ( *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->drain_speed_);
      }
      this->drain_speed_ = drain_speed;
      if ( *(_BYTE *)(((unsigned __int64)&config_crystal->burst_resonate >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_crystal->burst_resonate >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      burst_resonate = config_crystal->burst_resonate;
      if ( *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->burst_resonate_);
      }
      this->burst_resonate_ = burst_resonate;
      if ( *(_BYTE *)(((unsigned __int64)&config_crystal->burst_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_crystal->burst_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      burst_time = config_crystal->burst_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->burst_time_);
      }
      this->burst_time_ = burst_time;
      if ( *(_BYTE *)(((unsigned __int64)&config_crystal->respawn_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_crystal + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_crystal->respawn_time >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      respawn_time = config_crystal->respawn_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->respawn_time_);
      }
      this->respawn_time_ = respawn_time;
      std::vector<unsigned int>::operator=(&this->resonate_level_vec_, &config_crystal->resonate_levels);
      v5 = 0;
    }
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 46: range 000000001313FB42-000000001313FF7C
int32_t __cdecl CrystalComp::start(CrystalComp *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:47 64 16 13 gadget_wtr:54";
  *(_QWORD *)(v1 + 16) = CrystalComp::start;
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
      "./src/gadget/crystal_comp.cpp",
      "start",
      50);
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
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,CrystalComp::start(void)::{lambda(unsigned long)#1}>(
      &v8,
      (CrystalComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (CrystalComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v8);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v8);
    CrystalComp::start(void)::{lambda(unsigned long)#1}::~start((CrystalComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/crystal_comp.cpp",
        "start",
        58);
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
      if ( SceneUnixTimer::startS(v5, 1u, 1, "./src/gadget/crystal_comp.cpp", "start", 67) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/crystal_comp.cpp",
          "start",
          69);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v9,
          (const char (*)[34])"crystal update_timer start failed");
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

// Line 54: range 000000001313F8F2-000000001313FB25
void __cdecl CrystalComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const CrystalComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<CrystalComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 gadget_ptr:54 64 16 10 obj_ptr:54";
  *(_QWORD *)(v2 + 16) = CrystalComp::start(void)::{lambda(unsigned long)#1}::operator();
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
      "./src/gadget/crystal_comp.cpp",
      "operator()",
      54);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<CrystalComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<CrystalComp>((const std::shared_ptr<CrystalComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<CrystalComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CrystalComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      CrystalComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<CrystalComp>::~shared_ptr((std::shared_ptr<CrystalComp> *const)(v2 + 64));
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

// Line 54: range 00000000131B0148-00000000131B016D
void __cdecl CrystalComp::start(void)::{lambda(unsigned long)#1}::start(
        CrystalComp::start::<lambda(uint64_t)> *const this,
        CrystalComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 54: range 00000000131B1622-00000000131B1647
void __cdecl CrystalComp::start(void)::{lambda(unsigned long)#1}::start(
        CrystalComp::start::<lambda(uint64_t)> *const this,
        const CrystalComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 54: range 000000001313FB26-000000001313FB40
void __cdecl CrystalComp::start(void)::{lambda(unsigned long)#1}::~start(
        CrystalComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 77: range 000000001313FF7E-000000001314011B
int32_t __cdecl CrystalComp::doHurt(CrystalComp *const this, Creature *attacker, HurtContext *context)
{
  data::ElementType ElementType; // ecx
  Gadget *Gadget; // rax
  uint32_t resonate_val; // ecx
  uint32_t v7; // ecx
  Gadget *v8; // rax

  ElementType = HurtContext::getElementType(context);
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elem_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( ElementType != this->elem_type_ )
    return 0;
  Gadget = GadgetCompBase::getGadget(this);
  if ( Gadget::getState(Gadget) - 303 <= 1 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  resonate_val = this->resonate_val_;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  this->resonate_val_ = resonate_val + this->gain_speed_;
  v7 = this->resonate_val_;
  if ( *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->burst_resonate_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v7 < this->burst_resonate_ )
  {
    CrystalComp::updateCrystalState(this);
  }
  else
  {
    v8 = GadgetCompBase::getGadget(this);
    Gadget::setState(v8, 0x12Fu, 0, 1);
  }
  return 0;
};

// Line 99: range 000000001314011C-00000000131403D2
void __cdecl CrystalComp::onUpdateTimer(CrystalComp *const this, uint64_t now_ms)
{
  Gadget *Gadget; // rax
  uint32_t State; // eax
  Gadget *v4; // rax
  uint32_t StateBeginTime; // ecx
  Gadget *v6; // rax
  Gadget *v7; // rax
  uint32_t v8; // ecx
  Gadget *v9; // rax
  uint32_t resonate_val; // ecx
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  now = now_ms / 0x3E8;
  Gadget = GadgetCompBase::getGadget(this);
  State = Gadget::getState(Gadget);
  if ( State == 303 )
  {
    v4 = GadgetCompBase::getGadget(this);
    StateBeginTime = Gadget::getStateBeginTime(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->burst_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now >= StateBeginTime + this->burst_time_ )
    {
      v6 = GadgetCompBase::getGadget(this);
      Gadget::setState(v6, 0x130u, 0, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->resonate_val_);
      }
      this->resonate_val_ = 0;
    }
  }
  else if ( State == 304 )
  {
    v7 = GadgetCompBase::getGadget(this);
    v8 = Gadget::getStateBeginTime(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->respawn_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now >= v8 + this->respawn_time_ )
    {
      v9 = GadgetCompBase::getGadget(this);
      Gadget::setState(v9, 0, 0, 1);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    resonate_val = this->resonate_val_;
    if ( *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drain_speed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( resonate_val <= this->drain_speed_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->resonate_val_);
      }
      this->resonate_val_ = 0;
    }
    else
    {
      this->resonate_val_ -= this->drain_speed_;
    }
    CrystalComp::updateCrystalState(this);
  }
};

// Line 127: range 00000000131403D4-0000000013140556
void __cdecl CrystalComp::updateCrystalState(CrystalComp *const this)
{
  std::vector<unsigned int>::reference v1; // rdx
  Gadget *v2; // rax
  Gadget *Gadget; // rax
  uint32_t resonate_level; // [rsp+10h] [rbp-20h]
  uint32_t i; // [rsp+14h] [rbp-1Ch]
  uint32_t resonate_val; // [rsp+1Ch] [rbp-14h]

  resonate_level = 0;
  for ( i = 0; i < std::vector<unsigned int>::size(&this->resonate_level_vec_); ++i )
  {
    v1 = std::vector<unsigned int>::operator[](&this->resonate_level_vec_, i);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    resonate_val = *v1;
    if ( *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resonate_val_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( resonate_val > this->resonate_val_ )
      break;
    resonate_level = i + 1;
  }
  if ( resonate_level == 2 )
  {
    Gadget = GadgetCompBase::getGadget(this);
    Gadget::setState(Gadget, 0x12Eu, 0, 1);
  }
  else if ( resonate_level <= 2 )
  {
    v2 = GadgetCompBase::getGadget(this);
    if ( resonate_level )
      Gadget::setState(v2, 0x12Du, 0, 1);
    else
      Gadget::setState(v2, 0, 0, 1);
  }
};
