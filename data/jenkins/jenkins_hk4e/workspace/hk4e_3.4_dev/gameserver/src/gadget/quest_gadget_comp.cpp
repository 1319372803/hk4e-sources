// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/quest_gadget_comp.cpp

// Line 20: range 00000000145249EA-0000000014524A00
int32_t __cdecl QuestGadgetComp::interactCheck(
        QuestGadgetComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return 0;
};

// Line 25: range 0000000014524A02-0000000014524D13
int32_t __cdecl QuestGadgetComp::interact(
        QuestGadgetComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  std::shared_ptr<BaseEvent> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerEventComp *EventComp; // r14
  Gadget *gadget; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(Gadget *, VisionContext *); // r14
  int32_t result; // eax
  unsigned int __args_1; // [rsp+2Ch] [rbp-94h] BYREF
  unsigned int __args_0; // [rsp+30h] [rbp-90h] BYREF
  VisionContext v14; // [rsp+34h] [rbp-8Ch] BYREF
  std::shared_ptr<InteractGadgetEvent> __r; // [rsp+40h] [rbp-80h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<BaseEvent> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<BaseEvent> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 event_ptr:26";
  v3[1]._M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)QuestGadgetComp::interact;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __args_0 = Entity::getGroupId((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __args_1 = Gadget::getGadgetId(this->gadget_);
  common::tools::perf::make_shared<InteractGadgetEvent,unsigned int,unsigned int>(
    (unsigned int *)&__r,
    &__args_1,
    &__args_0,
    &__args_1);
  std::shared_ptr<BaseEvent>::shared_ptr<InteractGadgetEvent,void>(v3 + 2, &__r);
  std::shared_ptr<InteractGadgetEvent>::~shared_ptr(&__r);
  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr((std::shared_ptr<BaseEvent> *const)&__r, v3 + 2);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = this->gadget_;
  baseclass_0 = gadget->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v9 = *baseclass_0 + 128LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  v10 = *(void (__fastcall **)(Gadget *, VisionContext *))v9;
  VisionContext::VisionContext(&v14, VISION_DIE);
  v10(gadget, &v14);
  std::shared_ptr<BaseEvent>::~shared_ptr(v3 + 2);
  result = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
