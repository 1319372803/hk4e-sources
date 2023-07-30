// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_view_comp.cpp

// Line 23: range 0000000017551B1C-0000000017551B77
int32_t __cdecl GadgetViewComp::toClient(const GadgetViewComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  uint32_t GadgetId; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto::SceneGadgetInfo::set_interact_id(gadget_info, GadgetId);
  return 0;
};

// Line 30: range 0000000017551B78-0000000017551B8E
int32_t __cdecl GadgetViewComp::interactCheck(
        GadgetViewComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return 0;
};

// Line 35: range 0000000017551B90-0000000017551FAF
int32_t __cdecl GadgetViewComp::interact(GadgetViewComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int *v6; // r8
  unsigned int *v7; // r9
  PlayerEventComp *EventComp; // r14
  Group *v9; // rcx
  Gadget *Gadget; // r14
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(Gadget *, VisionContext *); // r15
  int32_t result; // eax
  unsigned int SceneId; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int GroupId; // [rsp+2Ch] [rbp-A4h] BYREF
  unsigned int __args_0; // [rsp+30h] [rbp-A0h] BYREF
  VisionContext v17; // [rsp+34h] [rbp-9Ch] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 event_ptr:37 64 16 12 group_ptr:41";
  *(_QWORD *)(v3 + 16) = GadgetViewComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __args_0 = Entity::getConfigId((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneId = Entity::getSceneId((const Entity *const)this->gadget_);
  common::tools::perf::make_shared<ViewSceneryEvent,unsigned int,unsigned int,unsigned int>(
    (unsigned int *)(v3 + 32),
    &SceneId,
    &GroupId,
    &__args_0,
    v6,
    v7);
  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr<ViewSceneryEvent,void>(
    (std::shared_ptr<BaseEvent> *const)(v3 + 64),
    (const std::shared_ptr<ViewSceneryEvent> *)(v3 + 32));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 64));
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v3 + 64));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL) )
  {
    v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Group::onGroupGadgetDieEvent(v9, this->gadget_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
  Gadget = GadgetCompBase::getGadget(this);
  if ( *(_BYTE *)(((unsigned __int64)Gadget >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = *(_QWORD *)Gadget->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  v12 = *(void (__fastcall **)(Gadget *, VisionContext *))v11;
  VisionContext::VisionContext(&v17, VISION_DIE);
  v12(Gadget, &v17);
  GadgetViewComp::logInteractView(this, player);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  std::shared_ptr<ViewSceneryEvent>::~shared_ptr((std::shared_ptr<ViewSceneryEvent> *const)(v3 + 32));
  result = 0;
  if ( v18 == (char *)v3 )
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

// Line 60: range 0000000017551FB0-000000001755207A
void __cdecl GadgetViewComp::logInteractView(GadgetViewComp *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  Gadget *Gadget; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/gadget/gadget_view_comp.cpp",
    "logInteractView",
    61);
  v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v7,
         (const char (*)[25])"view scenery, gadget_id:");
  Gadget = GadgetCompBase::getGadget(this);
  val = Gadget::getGadgetId(Gadget);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" player:");
  operator<<(v5, player);
  common::milog::MiLogStream::~MiLogStream(&v7);
};
