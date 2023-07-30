// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/connection.hpp

// Line 39: range 000000000BF722BC-000000000BF722E8
void __cdecl boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::~garbage_collecting_lock(
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const this)
{
  boost::signals2::detail::unique_lock<boost::signals2::mutex>::~unique_lock(&this->lock);
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::~auto_buffer(&this->garbage);
};

// Line 42: range 000000000BF770A8-000000000BF770E0
void __cdecl boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::garbage_collecting_lock(
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const this,
        boost::signals2::mutex *m)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer(&this->garbage);
  boost::signals2::detail::unique_lock<boost::signals2::mutex>::unique_lock(&this->lock, m);
};

// Line 45: range 000000000BFA02DE-000000000BFA0303
void __cdecl boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::add_trash(
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const this,
        const boost::shared_ptr<void> *piece_of_trash)
{
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::push_back(
    &this->garbage,
    piece_of_trash);
};

// Line 60: range 000000000BEFA84C-000000000BEFA91E
void __cdecl boost::signals2::detail::connection_body_base::connection_body_base(
        boost::signals2::detail::connection_body_base *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v2;
  boost::weak_ptr<void>::weak_ptr(&this->_weak_blocker);
  if ( *(char *)(((unsigned __int64)&this->_connected >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_connected, v1);
  this->_connected = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_slot_refcount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_slot_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_slot_refcount);
  }
  this->m_slot_refcount = 1;
};

// Line 64: range 000000000BEFA920-000000000BEFA971
void __cdecl boost::signals2::detail::connection_body_base::~connection_body_base(
        boost::signals2::detail::connection_body_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v1;
  boost::weak_ptr<void>::~weak_ptr(&this->_weak_blocker);
};

// Line 64: range 000000000BEFA972-000000000BEFA99C
void __cdecl boost::signals2::detail::connection_body_base::~connection_body_base(
        boost::signals2::detail::connection_body_base *const this)
{
  boost::signals2::detail::connection_body_base::~connection_body_base(this);
  operator delete(this, 0x20uLL);
};

// Line 71: range 000000000BF95BE2-000000000BF95C4E
void __cdecl boost::signals2::detail::connection_body_base::nolock_disconnect<boost::signals2::mutex>(
        const boost::signals2::detail::connection_body_base *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg)
{
  if ( *(char *)(((unsigned __int64)&this->_connected >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_connected);
  if ( this->_connected )
  {
    this->_connected = 0;
    boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::mutex>(this, lock_arg);
  }
};

// Line 99: range 000000000BEFA99E-000000000BEFA9E6
bool __cdecl boost::signals2::detail::connection_body_base::nolock_nograb_connected(
        const boost::signals2::detail::connection_body_base *const this)
{
  if ( *(char *)(((unsigned __int64)&this->_connected >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->_connected);
  return this->_connected;
};

// Line 121: range 000000000BF9B0F6-000000000BF9B274
void __cdecl boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::mutex>(
        const boost::signals2::detail::connection_body_base *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg)
{
  unsigned int *p_m_slot_refcount; // rax
  unsigned __int64 v3; // rax
  const boost::signals2::detail::connection_body_base *thisa; // [rsp+8h] [rbp-28h]
  boost::shared_ptr<void> piece_of_trash; // [rsp+10h] [rbp-20h] BYREF

  thisa = this;
  p_m_slot_refcount = &this->m_slot_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_slot_refcount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_slot_refcount >> 3) + 0x7FFF8000) )
  {
    this = (const boost::signals2::detail::connection_body_base *const)((char *)this + 28);
    __asan_report_load4(p_m_slot_refcount);
  }
  if ( !thisa->m_slot_refcount )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "m_slot_refcount != 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/connection.hpp",
      0x7Bu,
      "void boost::signals2::detail::connection_body_base::dec_slot_refcount(boost::signals2::detail::garbage_collecting_"
      "lock<Mutex>&) const [with Mutex = boost::signals2::mutex]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_slot_refcount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_slot_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_slot_refcount);
  }
  if ( !--thisa->m_slot_refcount )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)(thisa->_vptr_connection_body_base + 5);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::shared_ptr<void> *, const boost::signals2::detail::connection_body_base *))v3)(
      &piece_of_trash,
      thisa);
    boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::add_trash(lock_arg, &piece_of_trash);
    boost::shared_ptr<void>::~shared_ptr(&piece_of_trash);
  }
};

// Line 144: range 000000000BF83E1A-000000000BF83EFD
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this,
        const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *slot_in,
        const boost::shared_ptr<boost::signals2::mutex> *signal_mutex)
{
  int (**v3)(...); // rdx
  boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *p; // [rsp+0h] [rbp-30h]

  boost::signals2::detail::connection_body_base::connection_body_base(this);
  v3 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v3;
  p = (boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *)operator new(0x38uLL);
  boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::slot(
    p,
    slot_in);
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>(
    &this->m_slot,
    p);
  boost::shared_ptr<boost::signals2::mutex>::shared_ptr(
    (boost::shared_ptr<boost::signals2::mutex> *const)&this->_mutex,
    signal_mutex);
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>,true>(&this->_group_key);
};

// Line 144: range 000000000BF84A42-000000000BF84B25
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this,
        const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *slot_in,
        const boost::shared_ptr<boost::signals2::mutex> *signal_mutex)
{
  int (**v3)(...); // rdx
  boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *p; // [rsp+0h] [rbp-30h]

  boost::signals2::detail::connection_body_base::connection_body_base(this);
  v3 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v3;
  p = (boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *)operator new(0x38uLL);
  boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::slot(
    p,
    slot_in);
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>(
    &this->m_slot,
    p);
  boost::shared_ptr<boost::signals2::mutex>::shared_ptr(
    (boost::shared_ptr<boost::signals2::mutex> *const)&this->_mutex,
    signal_mutex);
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>,true>(&this->_group_key);
};

// Line 148: range 000000000BF9B99C-000000000BF9B9C6
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::~connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::~connection_body(this);
  operator delete(this, 0x50uLL);
};

// Line 148: range 000000000BF9B92E-000000000BF9B99B
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::~connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v1;
  boost::shared_ptr<boost::signals2::mutex>::~shared_ptr((boost::shared_ptr<boost::signals2::mutex> *const)&this->_mutex);
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::~shared_ptr(&this->m_slot);
  boost::signals2::detail::connection_body_base::~connection_body_base(this);
};

// Line 148: range 000000000BF9D66E-000000000BF9D6DB
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::~connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_connection_body_base = v1;
  boost::shared_ptr<boost::signals2::mutex>::~shared_ptr((boost::shared_ptr<boost::signals2::mutex> *const)&this->_mutex);
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::~shared_ptr(&this->m_slot);
  boost::signals2::detail::connection_body_base::~connection_body_base(this);
};

// Line 148: range 000000000BF9D6DC-000000000BF9D706
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::~connection_body(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::~connection_body(this);
  operator delete(this, 0x50uLL);
};

// Line 149: range 000000000BFB05E8-000000000BFB0789
bool __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::connected(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  boost::signals2::mutex *v4; // rax
  bool v5; // r14
  bool result; // al
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> v7; // [rsp+1Fh] [rbp-151h] BYREF
  char v8[336]; // [rsp+20h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 192 14 local_lock:151";
  *(_QWORD *)(v1 + 16) = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::connected;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862727] = -202116109;
  v3[536862728] = -202116109;
  v4 = boost::shared_ptr<boost::signals2::mutex>::operator*(&this->_mutex);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::garbage_collecting_lock(
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v1 + 32),
    v4);
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::function_output_iterator(&v7);
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>(
    this,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)(v1 + 32),
    (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>)(v1 + 32));
  v5 = boost::signals2::detail::connection_body_base::nolock_nograb_connected(this);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::~garbage_collecting_lock((boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 149: range 000000000BFB03B8-000000000BFB0559
bool __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::connected(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  boost::signals2::mutex *v4; // rax
  bool v5; // r14
  bool result; // al
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> v7; // [rsp+1Fh] [rbp-151h] BYREF
  char v8[336]; // [rsp+20h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 192 14 local_lock:151";
  *(_QWORD *)(v1 + 16) = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::connected;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862727] = -202116109;
  v3[536862728] = -202116109;
  v4 = boost::shared_ptr<boost::signals2::mutex>::operator*(&this->_mutex);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::garbage_collecting_lock(
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v1 + 32),
    v4);
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::function_output_iterator(&v7);
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>(
    this,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)(v1 + 32),
    (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>)(v1 + 32));
  v5 = boost::signals2::detail::connection_body_base::nolock_nograb_connected(this);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::~garbage_collecting_lock((boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 155: range 000000000BF8F7DC-000000000BF8F7ED
const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::group_key(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  return &this->_group_key;
};

// Line 155: range 000000000BF91A62-000000000BF91A73
const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::group_key(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  return &this->_group_key;
};

// Line 156: range 000000000BF7D90C-000000000BF7D934
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::set_group_key(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this,
        const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *key)
{
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::operator=(&this->_group_key, key);
};

// Line 156: range 000000000BF7EA86-000000000BF7EAAE
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::set_group_key(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this,
        const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *key)
{
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::operator=(&this->_group_key, key);
};

// Line 158: range 000000000BF8F782-000000000BF8F7DA
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::disconnect_expired_slot<boost::signals2::mutex>(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg)
{
  boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *v2; // rax

  if ( !boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::operator!(&this->m_slot) )
  {
    v2 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::slot(this);
    if ( boost::signals2::slot_base::expired(v2) )
      boost::signals2::detail::connection_body_base::nolock_disconnect<boost::signals2::mutex>(this, lock_arg);
  }
};

// Line 158: range 000000000BF91A08-000000000BF91A60
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::disconnect_expired_slot<boost::signals2::mutex>(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg)
{
  boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *v2; // rax

  if ( !boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::operator!(&this->m_slot) )
  {
    v2 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::slot(this);
    if ( boost::signals2::slot_base::expired(v2) )
      boost::signals2::detail::connection_body_base::nolock_disconnect<boost::signals2::mutex>(this, lock_arg);
  }
};

// Line 168: range 000000000BFB181E-000000000BFB1AC6
void __fastcall boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg,
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> inserter,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *v10; // rax
  const boost::signals2::slot_base::tracked_container_type *v11; // rax
  const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *v12; // rax
  const boost::signals2::slot_base::tracked_container_type *v13; // rax
  const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *v14; // rax
  const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *v15; // rax
  int v16; // r14d
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *v17; // rax
  boost::signals2::detail::lock_weak_ptr_visitor visitor; // [rsp+17h] [rbp-D9h] BYREF
  __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > __rhs; // [rsp+18h] [rbp-D8h] BYREF
  char v20[208]; // [rsp+20h] [rbp-D0h] BYREF

  v7 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 1 12 inserter:169 64 8 6 it:172 96 24 17 locked_object:177";
  *(_QWORD *)(v7 + 16) = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_BYTE *)(v7 + 48) = a7;
  if ( !boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::operator!(&this->m_slot) )
  {
    *(_QWORD *)(v7 + 64) = 0LL;
    v10 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::slot(this);
    v11 = boost::signals2::slot_base::tracked_objects(v10);
    *(std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::const_iterator *)(v7 + 64) = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::begin(v11);
    while ( 1 )
    {
      v12 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::slot(this);
      v13 = boost::signals2::slot_base::tracked_objects(v12);
      __rhs._M_current = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::end(v13)._M_current;
      if ( !__gnu_cxx::operator!=<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>(
              (const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *)(v7 + 64),
              &__rhs) )
        break;
      v14 = __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator*((const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
      boost::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
        (boost::signals2::detail::lock_weak_ptr_visitor::result_type *)(v7 + 96),
        &visitor,
        v14);
      v15 = __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator*((const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
      if ( boost::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
             (const boost::signals2::detail::expired_weak_ptr_visitor *)&visitor,
             v15) )
      {
        boost::signals2::detail::connection_body_base::nolock_disconnect<boost::signals2::mutex>(this, lock_arg);
        v16 = 0;
      }
      else
      {
        v17 = boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator++(
                (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *const)(v7 + 48),
                0);
        __rhs._M_current = (const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *)boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator*(v17).m_f;
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy::operator=<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(
          (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy *const)&__rhs,
          (const boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *)(v7 + 96));
        v16 = 1;
      }
      boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::~variant((boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const)(v7 + 96));
      if ( v16 != 1 )
        break;
      __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator++((__gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
    }
  }
  if ( v20 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 168: range 000000000BFB142E-000000000BFB16D6
void __fastcall boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock_arg,
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> inserter,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *v10; // rax
  const boost::signals2::slot_base::tracked_container_type *v11; // rax
  const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *v12; // rax
  const boost::signals2::slot_base::tracked_container_type *v13; // rax
  const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *v14; // rax
  const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *v15; // rax
  int v16; // r14d
  boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *v17; // rax
  boost::signals2::detail::lock_weak_ptr_visitor visitor; // [rsp+17h] [rbp-D9h] BYREF
  __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > __rhs; // [rsp+18h] [rbp-D8h] BYREF
  char v20[208]; // [rsp+20h] [rbp-D0h] BYREF

  v7 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 1 12 inserter:169 64 8 6 it:172 96 24 17 locked_object:177";
  *(_QWORD *)(v7 + 16) = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::mutex,boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  *(_BYTE *)(v7 + 48) = a7;
  if ( !boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::operator!(&this->m_slot) )
  {
    *(_QWORD *)(v7 + 64) = 0LL;
    v10 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::slot(this);
    v11 = boost::signals2::slot_base::tracked_objects(v10);
    *(std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::const_iterator *)(v7 + 64) = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::begin(v11);
    while ( 1 )
    {
      v12 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::slot(this);
      v13 = boost::signals2::slot_base::tracked_objects(v12);
      __rhs._M_current = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::end(v13)._M_current;
      if ( !__gnu_cxx::operator!=<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>(
              (const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *)(v7 + 64),
              &__rhs) )
        break;
      v14 = __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator*((const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
      boost::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
        (boost::signals2::detail::lock_weak_ptr_visitor::result_type *)(v7 + 96),
        &visitor,
        v14);
      v15 = __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator*((const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
      if ( boost::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
             (const boost::signals2::detail::expired_weak_ptr_visitor *)&visitor,
             v15) )
      {
        boost::signals2::detail::connection_body_base::nolock_disconnect<boost::signals2::mutex>(this, lock_arg);
        v16 = 0;
      }
      else
      {
        v17 = boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator++(
                (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing> *const)(v7 + 48),
                0);
        __rhs._M_current = (const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *)boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::operator*(v17).m_f;
        boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy::operator=<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(
          (boost::iterators::function_output_iterator<boost::signals2::detail::does_nothing>::output_proxy *const)&__rhs,
          (const boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *)(v7 + 96));
        v16 = 1;
      }
      boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::~variant((boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const)(v7 + 96));
      if ( v16 != 1 )
        break;
      __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator++((__gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v7 + 64));
    }
  }
  if ( v20 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 194: range 000000000BFB078A-000000000BFB07B0
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::lock(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::mutex *v1; // rax

  v1 = boost::shared_ptr<boost::signals2::mutex>::operator->(&this->_mutex);
  boost::signals2::mutex::lock(v1);
};

// Line 194: range 000000000BFB055A-000000000BFB0580
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::lock(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::mutex *v1; // rax

  v1 = boost::shared_ptr<boost::signals2::mutex>::operator->(&this->_mutex);
  boost::signals2::mutex::lock(v1);
};

// Line 198: range 000000000BFB07B2-000000000BFB07D8
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::unlock(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::mutex *v1; // rax

  v1 = boost::shared_ptr<boost::signals2::mutex>::operator->(&this->_mutex);
  boost::signals2::mutex::unlock(v1);
};

// Line 198: range 000000000BFB0582-000000000BFB05A8
void __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::unlock(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  boost::signals2::mutex *v1; // rax

  v1 = boost::shared_ptr<boost::signals2::mutex>::operator->(&this->_mutex);
  boost::signals2::mutex::unlock(v1);
};

// Line 202: range 000000000BF95BC4-000000000BF95BE1
boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::slot(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  return boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::operator*(&this->m_slot);
};

// Line 202: range 000000000BF97E3C-000000000BF97E59
boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::slot(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  return boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::operator*(&this->m_slot);
};

// Line 206: range 000000000BFB26A2-000000000BFB26BF
const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::slot(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  return boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::operator*(&this->m_slot);
};

// Line 206: range 000000000BFB256A-000000000BFB2587
const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *__cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::slot(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  return boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::operator*(&this->m_slot);
};

// Line 211: range 000000000BFB07DA-000000000BFB0817
boost::shared_ptr<void> __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::release_slot(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const this)
{
  boost::shared_ptr<boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > > *v1; // rsi
  boost::shared_ptr<void> result; // rax

  boost::shared_ptr<void>::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>(
    (boost::shared_ptr<void> *const)this,
    v1 + 2,
    (boost::detail::sp_enable_if_convertible_impl<true>::type)((_BYTE)v1 + 32));
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>::reset(v1 + 2);
  result.px = (boost::shared_ptr<void>::element_type *)this;
  return result;
};

// Line 211: range 000000000BFB05AA-000000000BFB05E7
boost::shared_ptr<void> __cdecl boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::release_slot(
        const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const this)
{
  boost::shared_ptr<boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > > *v1; // rsi
  boost::shared_ptr<void> result; // rax

  boost::shared_ptr<void>::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>(
    (boost::shared_ptr<void> *const)this,
    v1 + 2,
    (boost::detail::sp_enable_if_convertible_impl<true>::type)((_BYTE)v1 + 32));
  boost::shared_ptr<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>::reset(v1 + 2);
  result.px = (boost::shared_ptr<void>::element_type *)this;
  return result;
};

// Line 235: range 000000000BEFAA08-000000000BEFAA2D
void __cdecl boost::signals2::connection::connection(
        boost::signals2::connection *const this,
        const boost::weak_ptr<boost::signals2::detail::connection_body_base> *connectionBody)
{
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr(&this->_weak_connection_body, connectionBody);
};

// Line 264: range 000000000BEFAA2E-000000000BEFAA48
void __cdecl boost::signals2::connection::~connection(boost::signals2::connection *const this)
{
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::~weak_ptr(&this->_weak_connection_body);
};
