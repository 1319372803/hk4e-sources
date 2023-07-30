// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/trifle_comp.cpp

// Line 29: range 0000000015CC191A-0000000015CC1C49
void __cdecl TrifleComp::TrifleComp(TrifleComp *const this, Gadget *gadget, const TrifleParam *trifle_param)
{
  int (**v3)(...); // rdx
  uint32_t source_entity_id; // ecx
  __int64 v5; // rbx
  bool is_fake; // cl

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'TrifleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  std::shared_ptr<Item>::shared_ptr(&this->item_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_entity_id_);
  }
  this->source_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_time_);
  }
  this->life_time_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
  ActionReason::ActionReason(&this->action_reason_, ACTION_REASON_NONE, ITEM_LIMIT_NONE);
  std::shared_ptr<Item>::operator=(&this->item_ptr_, &trifle_param->item_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&trifle_param->source_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trifle_param->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  source_entity_id = trifle_param->source_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_entity_id_);
  }
  this->source_entity_id_ = source_entity_id;
  if ( (((unsigned __int8)this + 64) & 7) >= *(_BYTE *)(((unsigned __int64)&this->action_reason_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->action_reason_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->action_reason_.is_by_overflow_transform >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->action_reason_.is_by_overflow_transform >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->action_reason_, 22LL);
  }
  if ( (((unsigned __int8)trifle_param + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&trifle_param->action_reason >> 3)
                                                              + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&trifle_param->action_reason >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&trifle_param->action_reason.is_by_overflow_transform >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)trifle_param + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&trifle_param->action_reason.is_by_overflow_transform >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load_n(&trifle_param->action_reason, 22LL);
  }
  v5 = *(_QWORD *)&trifle_param->action_reason.quest_id;
  *(_QWORD *)&this->action_reason_.reason_type = *(_QWORD *)&trifle_param->action_reason.reason_type;
  *(_QWORD *)&this->action_reason_.quest_id = v5;
  this->action_reason_.item_exceed_msg_type = trifle_param->action_reason.item_exceed_msg_type;
  *(_WORD *)&this->action_reason_.is_general_reward_hiden = *(_WORD *)&trifle_param->action_reason.is_general_reward_hiden;
  if ( *(_BYTE *)(((unsigned __int64)&trifle_param->is_fake >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)trifle_param + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&trifle_param->is_fake >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&trifle_param->is_fake);
  }
  is_fake = trifle_param->is_fake;
  if ( *(char *)(((unsigned __int64)&this->is_fake_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_fake_);
  this->is_fake_ = is_fake;
};

// Line 39: range 0000000015CC1E9A-0000000015CC24D7
int32_t __cdecl TrifleComp::start(TrifleComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // r15d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  int v7; // r15d
  SceneUnixTimer *p_life_time; // rdi
  int32_t result; // eax
  int life_time; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<Scene> v13; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 scene_ptr:40 64 16 20 config_gadget_ptr:47 96 16 13 gadget_wtr:54";
  *(_QWORD *)(v2 + 16) = TrifleComp::start;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/trifle_comp.cpp",
      "start",
      43);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v1 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getGadgetId(this->gadget_);
    JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v5);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v13);
    if ( !std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 64), 0LL) )
      goto LABEL_33;
    v6 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->timer.life_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->timer.life_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    life_time = (int)v6->timer.life_time;
    if ( !life_time )
      goto LABEL_33;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v2 + 96), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v2 + 96));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,TrifleComp::start(void)::{lambda(unsigned long)#1}>(
      &v13,
      (TrifleComp::start::<lambda(uint64_t)> *)(v2 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (TrifleComp::start::<lambda(uint64_t)> *)(v2 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->update_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v13);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v13);
    TrifleComp::start(void)::{lambda(unsigned long)#1}::~start((TrifleComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/trifle_comp.cpp",
        "start",
        57);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v14,
        (const char (*)[29])"create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v1 = -1;
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->life_time_);
      }
      this->life_time_ = life_time;
      v7 = 1;
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v2 + 96));
    if ( v7 == 1 )
    {
LABEL_33:
      if ( std::operator==<SceneUnixTimer>(&this->update_timer_ptr_, 0LL) )
      {
        v1 = 0;
      }
      else
      {
        p_life_time = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->update_timer_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time_ >> 3) + 0x7FFF8000) )
        {
          p_life_time = (SceneUnixTimer *)&this->life_time_;
          __asan_report_load4();
        }
        if ( SceneUnixTimer::startS(p_life_time, this->life_time_, 0, "./src/gadget/trifle_comp.cpp", "start", 70) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/trifle_comp.cpp",
            "start",
            72);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v14,
            (const char (*)[34])"crystal update_timer start failed");
          common::milog::MiLogStream::~MiLogStream(&v14);
          v1 = -1;
        }
        else
        {
          v1 = 0;
        }
      }
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v1;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 54: range 0000000015CC1C4A-0000000015CC1E7D
void __cdecl TrifleComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const TrifleComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  TrifleComp *v5; // rdx
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
  *(_QWORD *)(v2 + 16) = TrifleComp::start(void)::{lambda(unsigned long)#1}::operator();
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
      "./src/gadget/trifle_comp.cpp",
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
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<TrifleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<TrifleComp>((const std::shared_ptr<TrifleComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<TrifleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrifleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      TrifleComp::onUpdateTimer(v5, now_ms);
    }
    std::shared_ptr<TrifleComp>::~shared_ptr((std::shared_ptr<TrifleComp> *const)(v2 + 64));
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

// Line 54: range 0000000015D25186-0000000015D251AB
void __cdecl TrifleComp::start(void)::{lambda(unsigned long)#1}::start(
        TrifleComp::start::<lambda(uint64_t)> *const this,
        TrifleComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 54: range 0000000015D26D84-0000000015D26DA9
void __cdecl TrifleComp::start(void)::{lambda(unsigned long)#1}::start(
        TrifleComp::start::<lambda(uint64_t)> *const this,
        const TrifleComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 54: range 0000000015CC1E7E-0000000015CC1E98
void __cdecl TrifleComp::start(void)::{lambda(unsigned long)#1}::~start(
        TrifleComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 80: range 0000000015CC24D8-0000000015CC25D7
void __cdecl TrifleComp::onUpdateTimer(TrifleComp *const this, uint64_t now_ms)
{
  Gadget *gadget; // r12
  _QWORD *baseclass_0; // rax
  unsigned __int64 v4; // rax
  void (__fastcall *v5)(Gadget *, VisionContext *); // rbx
  VisionContext v6; // [rsp+14h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = this->gadget_;
  baseclass_0 = gadget->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v4 = *baseclass_0 + 128LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = *(void (__fastcall **)(Gadget *, VisionContext *))v4;
  VisionContext::VisionContext(&v6, VISION_DIE);
  v5(gadget, &v6);
};

// Line 86: range 0000000015CC25D8-0000000015CC2776
int32_t __cdecl TrifleComp::toClient(const TrifleComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::Item *proto_trifle_item; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGadgetInfo::set_owner_entity_id(gadget_info, this->source_entity_id_);
  if ( !std::operator!=<Item>(&this->item_ptr_, 0LL) )
    return 0;
  proto_trifle_item = proto::SceneGadgetInfo::mutable_trifle_item(gadget_info);
  v2 = (unsigned __int64)std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->item_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(_QWORD *)v2 + 32LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, proto::Item *))v3)(v2, proto_trifle_item) )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/trifle_comp.cpp",
    "toClient",
    93);
  v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v9,
         (const char (*)[25])"toClient fails, item_id:");
  v5 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->item_ptr_);
  val = Item::getItemId(v5);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return -1;
};

// Line 101: range 0000000015CC2778-0000000015CC29A0
int32_t __cdecl TrifleComp::interactCheck(TrifleComp *const this, Player *player, const EntityInteractParam *param)
{
  PlayerItemComp *ItemComp; // r12
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  unsigned int val; // [rsp+28h] [rbp-48h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-44h]
  std::shared_ptr<Item> p_item_ptr; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<Item>(&this->item_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/trifle_comp.cpp",
      "interactCheck",
      104);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])"item_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_fake_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_fake_);
    if ( this->is_fake_ )
    {
      return 0;
    }
    else
    {
      ItemComp = Player::getItemComp(player);
      std::shared_ptr<Item>::shared_ptr(&p_item_ptr, &this->item_ptr_);
      ret = PlayerItemComp::checkAddItem(ItemComp, &p_item_ptr, &this->action_reason_);
      std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/trifle_comp.cpp",
          "interactCheck",
          117);
        v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])off_259CF180);
        v6 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->item_ptr_);
        val = Item::getItemId(v6);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        operator<<(v8, player);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return ret;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 124: range 0000000015CC29A2-0000000015CC310E
int32_t __cdecl TrifleComp::interact(TrifleComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rdx
  PlayerItemComp *ItemComp; // r15
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  PlayerItemComp *v14; // r15
  PlayerItemComp *v15; // r14
  Gadget *Gadget; // rax
  const Vector3 *Position; // r15
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t ItemId; // eax
  Gadget *v20; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Gadget *v22; // rax
  Gadget *v23; // rax
  PlayerEventComp *EventComp; // r14
  Gadget *v25; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v27; // rax
  void (__fastcall *v28)(Gadget *, VisionContext *); // r14
  int32_t result; // eax
  std::string v30; // [rsp+0h] [rbp-100h]
  unsigned int *v31; // [rsp+0h] [rbp-100h]
  unsigned int *parama; // [rsp+8h] [rbp-F8h]
  Player *playera; // [rsp+10h] [rbp-F0h]
  Player *const playerb; // [rsp+10h] [rbp-F0h]
  TrifleComp *thisa; // [rsp+18h] [rbp-E8h]
  TrifleComp *thisb; // [rsp+18h] [rbp-E8h]
  unsigned int EntityId; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int ConfigId; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int v39; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  int32_t ret; // [rsp+30h] [rbp-D0h]
  VisionContext v42; // [rsp+34h] [rbp-CCh] BYREF
  std::shared_ptr<Item> p_item_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v44; // [rsp+50h] [rbp-B0h] BYREF
  char v45[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v30._M_string_length = (std::string::size_type)param;
  v3 = (unsigned __int64)v45;
  v30._M_dataplus._M_p = v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:125 64 16 13 event_ptr:152";
  *(_QWORD *)(v3 + 16) = TrifleComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v44, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x5F1u, v30);
  std::string::~string(&v44);
  if ( std::operator==<Item>(&thisa->item_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/trifle_comp.cpp",
      "interact",
      129);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&v44,
      (const char (*)[18])"item_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
    v7 = -1;
    goto LABEL_22;
  }
  ret = 0;
  if ( *(char *)(((unsigned __int64)&thisa->is_fake_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_fake_);
  if ( thisa->is_fake_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/trifle_comp.cpp",
      "interact",
      137);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&v44,
           (const char (*)[16])"Fake absorbate ");
    operator<<(v8, playera);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
  }
  else
  {
    ItemComp = Player::getItemComp(playera);
    std::shared_ptr<Item>::shared_ptr(&p_item_ptr, &thisa->item_ptr_);
    ret = PlayerItemComp::checkAddItem(ItemComp, &p_item_ptr, &thisa->action_reason_);
    std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/trifle_comp.cpp",
        "interact",
        144);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&v44,
              (const char (*)[19])off_259CF180);
      v11 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->item_ptr_);
      val = Item::getItemId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      operator<<(v13, playera);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v44);
      v7 = ret;
      goto LABEL_22;
    }
    v14 = Player::getItemComp(playera);
    std::shared_ptr<Item>::shared_ptr(&p_item_ptr, &thisa->item_ptr_);
    PlayerItemComp::addItem(v14, &p_item_ptr, &thisa->action_reason_, 0LL);
    std::shared_ptr<Item>::~shared_ptr(&p_item_ptr);
    v15 = Player::getItemComp(playera);
    Gadget = GadgetCompBase::getGadget(thisa);
    Position = Entity::getPosition((const Entity *const)Gadget);
    v18 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->item_ptr_);
    ItemId = Item::getItemId(v18);
    PlayerItemComp::notifyDropHint(v15, ItemId, Position);
  }
  v20 = GadgetCompBase::getGadget(thisa);
  val = Gadget::getGadgetId(v20);
  v21 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->item_ptr_);
  v39 = Item::getItemId(v21);
  v22 = GadgetCompBase::getGadget(thisa);
  ConfigId = Entity::getConfigId((const Entity *const)v22);
  v23 = GadgetCompBase::getGadget(thisa);
  EntityId = Entity::getEntityId((const Entity *const)v23);
  common::tools::perf::make_shared<TrifleEvent,unsigned int,unsigned int,unsigned int,unsigned int,bool &>(
    (unsigned int *)&p_item_ptr,
    &EntityId,
    &ConfigId,
    &v39,
    (bool *)&val,
    (unsigned int *)&thisa->is_fake_,
    v31,
    parama,
    (unsigned int *)playera,
    (bool *)thisa);
  std::shared_ptr<BaseEvent>::shared_ptr<TrifleEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v3 + 64),
    (std::shared_ptr<TrifleEvent> *)&p_item_ptr);
  std::shared_ptr<TrifleEvent>::~shared_ptr((std::shared_ptr<TrifleEvent> *const)&p_item_ptr);
  EventComp = Player::getEventComp(playerb);
  std::shared_ptr<BaseEvent>::shared_ptr(
    (std::shared_ptr<BaseEvent> *const)&p_item_ptr,
    (const std::shared_ptr<BaseEvent> *)(v3 + 64));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_item_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_item_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Creature::changeLifeState(thisb->gadget_, LIFE_DEAD, 0LL, 1);
  if ( *(_BYTE *)(((unsigned __int64)&thisb->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v25 = thisb->gadget_;
  baseclass_0 = v25->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v27 = *baseclass_0 + 128LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    v27 = __asan_report_load8();
  v28 = *(void (__fastcall **)(Gadget *, VisionContext *))v27;
  VisionContext::VisionContext(&v42, VISION_DIE);
  v28(v25, &v42);
  v7 = ret;
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 64));
LABEL_22:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v7;
  if ( v31 == (unsigned int *)v3 )
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
  return result;
};
