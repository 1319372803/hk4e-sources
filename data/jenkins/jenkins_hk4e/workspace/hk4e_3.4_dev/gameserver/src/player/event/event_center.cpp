// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/event/event_center.cpp

// Line 17: range 000000001661938E-0000000016619417
void __cdecl EventCenter::Context::Context(EventCenter::Context *const this, EventCenter *event_center)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, event_center, this);
  this->is_processing_ = 0;
  std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::queue<std::deque<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>,void>(&this->pending_que_);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_center_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->event_center_, event_center);
  this->event_center_ = event_center;
};

// Line 22: range 0000000016619418-0000000016619445
void __cdecl EventCenter::Context::tryProcess(EventCenter::Context *const this)
{
  if ( !EventCenter::Context::isProcessing(this) )
    EventCenter::Context::process(this);
};

// Line 30: range 0000000016619446-0000000016619C07
void __cdecl EventCenter::Context::process(EventCenter::Context *const this)
{
  const char *p_p_event_ptr; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *v5; // rax
  std::shared_ptr<BaseEvent> *v6; // rax
  EventCenter *event_center; // r14
  std::weak_ptr<Observer> *v8; // rax
  EventCenter *v9; // r14
  int v10; // r14d
  common::milog::MiLogStream *v11; // rbx
  uint32_t count; // [rsp+1Ch] [rbp-174h]
  unsigned __int64 val; // [rsp+20h] [rbp-170h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-150h] BYREF
  char v16[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 10 obs_wtr:52 80 24 15 pending_item:41 144 80 14 empty_queue:68";
  *(_QWORD *)(v2 + 16) = EventCenter::Context::process;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862727] = -202116109;
  if ( EventCenter::Context::isProcessing(this) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/event/event_center.cpp",
      "process",
      33);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v15,
      (const char (*)[31])"[EventCenter] process is doing");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this, p_p_event_ptr, this);
    this->is_processing_ = 1;
    count = 0;
    do
    {
      if ( std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::empty(&this->pending_que_) )
        break;
      v5 = std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::front(&this->pending_que_);
      std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>::variant(
        (std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *const)(v2 + 80),
        v5);
      std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::pop(&this->pending_que_);
      if ( std::holds_alternative<std::shared_ptr<BaseEvent>,std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>((const std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *)(v2 + 80)) )
      {
        v6 = std::get<std::shared_ptr<BaseEvent>,std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>((std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *)(v2 + 80));
        std::shared_ptr<BaseEvent>::shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 48), v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->event_center_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->event_center_);
        event_center = this->event_center_;
        std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, (const std::shared_ptr<BaseEvent> *)(v2 + 48));
        p_p_event_ptr = (const char *)&p_event_ptr;
        EventCenter::doNotifyEvent(event_center, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 48));
      }
      else if ( std::holds_alternative<std::weak_ptr<Observer>,std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>((const std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *)(v2 + 80)) )
      {
        v8 = std::get<std::weak_ptr<Observer>,std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>((std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *)(v2 + 80));
        std::weak_ptr<Observer>::weak_ptr((std::weak_ptr<Observer> *const)(v2 + 48), v8);
        if ( *(_BYTE *)(((unsigned __int64)&this->event_center_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->event_center_);
        v9 = this->event_center_;
        std::weak_ptr<Observer>::weak_ptr(
          (std::weak_ptr<Observer> *const)&p_event_ptr,
          (const std::weak_ptr<Observer> *)(v2 + 48));
        p_p_event_ptr = (const char *)&p_event_ptr;
        EventCenter::doUnregisterObserver(v9, (std::weak_ptr<Observer> *)&p_event_ptr);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&p_event_ptr);
        std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/event/event_center.cpp",
          "process",
          57);
        p_p_event_ptr = "unknow type";
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v15, (const char (*)[12])"unknow type");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      if ( ++count <= 0x31F )
      {
        v10 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/event/event_center.cpp",
          "process",
          67);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v15,
          (const char (*)[39])"maybe endless loop, clean pending_que_");
        common::milog::MiLogStream::~MiLogStream(&v15);
        std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::queue<std::deque<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>,void>((std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *const)(v2 + 144));
        p_p_event_ptr = (const char *)(v2 + 144);
        std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::swap(
          &this->pending_que_,
          (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)(v2 + 144));
        std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::~queue((std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *const)(v2 + 144));
        v10 = 0;
      }
      std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>::~variant((std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> > *const)(v2 + 80));
    }
    while ( v10 == 1 );
    if ( !std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::empty(&this->pending_que_) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/event/event_center.cpp",
        "process",
        77);
      v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v15,
              (const char (*)[58])"[EventCenter] after process que size error! pending_que_:");
      val = std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::size(&this->pending_que_);
      p_p_event_ptr = (const char *)&val;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(this, p_p_event_ptr, this);
    this->is_processing_ = 0;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 83: range 0000000016619C08-0000000016619C3F
void __cdecl EventCenter::Context::unregisterObserver(EventCenter::Context *const this, ObserverWtr *p_obs_wtr)
{
  std::weak_ptr<Observer> *v2; // rax
  std::weak_ptr<Observer> *v3; // rdx

  v2 = std::move<std::weak_ptr<Observer> &>(p_obs_wtr);
  std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::emplace<std::weak_ptr<Observer>>(
    &this->pending_que_,
    v2,
    v3);
};

// Line 88: range 0000000016619C40-0000000016619C77
void __cdecl EventCenter::Context::notifyEvent(EventCenter::Context *const this, BaseEventPtr *p_event_ptr)
{
  std::shared_ptr<BaseEvent> *v2; // rax
  std::shared_ptr<BaseEvent> *v3; // rdx

  v2 = std::move<std::shared_ptr<BaseEvent> &>(p_event_ptr);
  std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent>>>::emplace<std::shared_ptr<BaseEvent>>(
    &this->pending_que_,
    v2,
    v3);
};

// Line 94: range 0000000016619C78-0000000016619CF3
void __cdecl EventCenter::unregisterObserver(EventCenter *const this, std::weak_ptr<Observer> *p_obs_wtr)
{
  std::weak_ptr<Observer> v2; // [rsp+10h] [rbp-20h] BYREF

  std::weak_ptr<Observer>::weak_ptr(&v2, p_obs_wtr);
  EventCenter::Context::unregisterObserver(&this->context_, &v2);
  std::weak_ptr<Observer>::~weak_ptr(&v2);
  EventCenter::Context::tryProcess(&this->context_);
};

// Line 100: range 0000000016619CF4-0000000016619FDF
void __cdecl EventCenter::doUnregisterObserver(EventCenter *const this, std::weak_ptr<Observer> *p_obs_wtr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  std::shared_ptr<Observer> *M_current; // r14
  std::vector<std::shared_ptr<Observer>>::iterator v8; // rax
  __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > v9; // [rsp+18h] [rbp-D8h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > __i; // [rsp+20h] [rbp-D0h] BYREF
  __gnu_cxx::__normal_iterator<const std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > __first; // [rsp+28h] [rbp-C8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> __y; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<Observer>> *observer_vec; // [rsp+38h] [rbp-B8h]
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 event_type:106 64 8 8 iter:107 96 16 11 obs_ptr:101";
  *(_QWORD *)(v2 + 16) = EventCenter::doUnregisterObserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  std::weak_ptr<Observer>::lock((const std::weak_ptr<Observer> *const)(v2 + 96));
  if ( !std::operator==<Observer>((const std::shared_ptr<Observer> *)(v2 + 96), 0LL) )
  {
    v5 = std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_Observer + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_Observer + 4);
    *(_QWORD *)(v2 + 32) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
    *(std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::iterator *)(v2 + 64) = std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::find(&this->observer_list_map_, (const std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::key_type *)(v2 + 32));
    __y._M_cur = std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::end(&this->observer_list_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> *)(v2 + 64),
            &__y) )
    {
      observer_vec = &std::__detail::_Node_iterator<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false,false> *const)(v2 + 64))->second;
      __i._M_current = std::vector<std::shared_ptr<Observer>>::end(observer_vec)._M_current;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> const*,std::vector<std::shared_ptr<Observer>>>::__normal_iterator<std::shared_ptr<Observer>*>(
        (__gnu_cxx::__normal_iterator<const std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *const)&__y,
        &__i);
      M_current = std::vector<std::shared_ptr<Observer>>::end(observer_vec)._M_current;
      v8._M_current = std::vector<std::shared_ptr<Observer>>::begin(observer_vec)._M_current;
      v9._M_current = std::remove<__gnu_cxx::__normal_iterator<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>,std::shared_ptr<Observer>>(
                        v8,
                        (__gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> >)M_current,
                        (const std::shared_ptr<Observer> *)(v2 + 96))._M_current;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> const*,std::vector<std::shared_ptr<Observer>>>::__normal_iterator<std::shared_ptr<Observer>*>(
        &__first,
        &v9);
      std::vector<std::shared_ptr<Observer>>::erase(
        observer_vec,
        __first,
        (std::vector<std::shared_ptr<Observer>>::const_iterator)__y._M_cur);
    }
  }
  std::shared_ptr<Observer>::~shared_ptr((std::shared_ptr<Observer> *const)(v2 + 96));
  if ( v14 == (char *)v2 )
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
};

// Line 119: range 0000000016619FE0-000000001661A0DC
void __cdecl EventCenter::notifyEvent(EventCenter *const this, BaseEventPtr *p_event_ptr)
{
  std::shared_ptr<BaseEvent> v2; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<BaseEvent>(0LL, p_event_ptr) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/event/event_center.cpp",
      "notifyEvent",
      122);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v3, (const char (*)[21])"event_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  else
  {
    std::shared_ptr<BaseEvent>::shared_ptr(&v2, p_event_ptr);
    EventCenter::Context::notifyEvent(&this->context_, &v2);
    std::shared_ptr<BaseEvent>::~shared_ptr(&v2);
    EventCenter::Context::tryProcess(&this->context_);
  }
};

// Line 130: range 000000001661A0DE-000000001661A48C
void __cdecl EventCenter::doNotifyEvent(EventCenter *const this, BaseEventPtr *p_event_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<BaseEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__detail::_Node_iterator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  bool is_valid; // [rsp+17h] [rbp-E9h]
  std::vector<std::shared_ptr<Observer>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<std::shared_ptr<Observer>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const BaseEvent *event; // [rsp+28h] [rbp-D8h]
  std::vector<std::shared_ptr<Observer>> *__for_range; // [rsp+30h] [rbp-D0h]
  std::shared_ptr<Observer> *observer_ptr; // [rsp+38h] [rbp-C8h]
  char v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 type:135 64 8 8 iter:136 96 24 20 observer_ptr_vec:146";
  *(_QWORD *)(v2 + 16) = EventCenter::doNotifyEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !std::operator==<BaseEvent>(0LL, p_event_ptr) )
  {
    v5 = std::__shared_ptr_access<BaseEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_event_ptr);
    *(InternalPlayerEventType *)(v2 + 32) = BaseEvent::getType(v5);
    *(std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::iterator *)(v2 + 64) = std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::find(&this->observer_list_map_, (const std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::key_type *)(v2 + 32));
    __for_end._M_current = (std::shared_ptr<Observer> *)std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::end(&this->observer_list_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> *)&__for_end) )
    {
      is_valid = 1;
      event = std::__shared_ptr_access<BaseEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_event_ptr);
      v6 = std::__detail::_Node_iterator<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false,false> *const)(v2 + 64));
      std::vector<std::shared_ptr<Observer>>::vector(
        (std::vector<std::shared_ptr<Observer>> *const)(v2 + 96),
        &v6->second);
      __for_range = (std::vector<std::shared_ptr<Observer>> *)(v2 + 96);
      __for_begin._M_current = std::vector<std::shared_ptr<Observer>>::begin((std::vector<std::shared_ptr<Observer>> *const)(v2 + 96))._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<Observer>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>(
                &__for_begin,
                &__for_end) )
      {
        observer_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>::operator*(&__for_begin);
        if ( !std::operator==<Observer>(observer_ptr, 0LL) )
        {
          v7 = std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false> *const)observer_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v7);
          v8 = (unsigned __int64)(v7->_vptr_Observer + 3);
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v7->_vptr_Observer + 3);
          if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7) )
          {
            v9 = std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false> *const)observer_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v9);
            v10 = (unsigned __int64)(v9->_vptr_Observer + 2);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v9->_vptr_Observer + 2);
            (*(void (__fastcall **)(std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const BaseEvent *))v10)(
              v9,
              event);
          }
          else
          {
            is_valid = 0;
          }
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>::operator++(&__for_begin);
      }
      if ( !is_valid )
        EventCenter::removeInvalidObserver(this, *(InternalPlayerEventType *)(v2 + 32));
      std::vector<std::shared_ptr<Observer>>::~vector((std::vector<std::shared_ptr<Observer>> *const)(v2 + 96));
    }
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 171: range 000000001661A48E-000000001661A7D0
void __fastcall EventCenter::removeInvalidObserver(EventCenter *const this, InternalPlayerEventType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false> *v5; // rax
  std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> __y; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<Observer>> *observer_vec; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:172 64 8 8 iter:179 96 8 8 type:170";
  *(_QWORD *)(v2 + 16) = EventCenter::removeInvalidObserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(InternalPlayerEventType *)(v2 + 96) = type;
  *(std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::find(&this->observer_list_map_, (const std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::key_type *)(v2 + 96));
  __y._M_cur = std::unordered_map<std::type_index,std::vector<std::shared_ptr<Observer>>>::end(&this->observer_list_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false> *)(v2 + 32),
          &__y) )
  {
    observer_vec = &std::__detail::_Node_iterator<std::pair<std::type_index const,std::vector<std::shared_ptr<Observer>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false,false> *const)(v2 + 32))->second;
    *(std::vector<std::shared_ptr<Observer>>::iterator *)(v2 + 64) = std::vector<std::shared_ptr<Observer>>::begin(observer_vec);
    while ( 1 )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false>::__node_type *)std::vector<std::shared_ptr<Observer>>::end(observer_vec)._M_current;
      if ( !__gnu_cxx::operator!=<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>(
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *)&__y) )
        break;
      v5 = (const std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false> *)__gnu_cxx::__normal_iterator<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *const)(v2 + 64));
      v6 = std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v7 = (unsigned __int64)(v6->_vptr_Observer + 3);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6->_vptr_Observer + 3);
      if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<Observer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) )
      {
        __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> *,std::vector<std::shared_ptr<Observer>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *const)(v2 + 64));
      }
      else
      {
        __gnu_cxx::__normal_iterator<std::shared_ptr<Observer> const*,std::vector<std::shared_ptr<Observer>>>::__normal_iterator<std::shared_ptr<Observer>*>(
          (__gnu_cxx::__normal_iterator<const std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *const)&__y,
          (const __gnu_cxx::__normal_iterator<std::shared_ptr<Observer>*,std::vector<std::shared_ptr<Observer>> > *)(v2 + 64));
        *(std::vector<std::shared_ptr<Observer>>::iterator *)(v2 + 64) = std::vector<std::shared_ptr<Observer>>::erase(
                                                                           observer_vec,
                                                                           (std::vector<std::shared_ptr<Observer>>::const_iterator)__y._M_cur);
      }
    }
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/event/event_center.cpp",
      "removeInvalidObserver",
      190);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v13, (const char (*)[7])"type: ");
    *(_QWORD *)(v2 + 64) = std::type_index::name((const std::type_index *const)(v2 + 96));
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v9,
            (const char (*)[25])" removeInvalidObserver: ");
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,false>::__node_type *)std::vector<std::shared_ptr<Observer>>::size(observer_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)&__y);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  if ( v14 == (char *)v2 )
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
};
