// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/signal_template.hpp

// Line 161: range 000000000BF722EA-000000000BF724B9
boost::signals2::connection __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::signals2::mutex *v6; // rax
  boost::signals2::connection result; // rax
  char v9[320]; // [rsp+20h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 192 8 lock:163";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862727] = -202116109;
  v5[536862728] = -202116109;
  v6 = boost::shared_ptr<boost::signals2::mutex>::operator*((const boost::shared_ptr<boost::signals2::mutex> *const)&slot->_slot_function);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::garbage_collecting_lock(
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v3 + 32),
    v6);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_connect(
    this,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)slot,
    (const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *)(v3 + 32),
    position);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::~garbage_collecting_lock((boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._weak_connection_body.pn.pi_ = (boost::detail::sp_counted_base *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 161: range 000000000BF72C24-000000000BF72DF3
boost::signals2::connection __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::signals2::mutex *v6; // rax
  boost::signals2::connection result; // rax
  char v9[320]; // [rsp+20h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 192 8 lock:163";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862727] = -202116109;
  v5[536862728] = -202116109;
  v6 = boost::shared_ptr<boost::signals2::mutex>::operator*((const boost::shared_ptr<boost::signals2::mutex> *const)&slot->_slot_function);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::garbage_collecting_lock(
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v3 + 32),
    v6);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_connect(
    this,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)slot,
    (const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *)(v3 + 32),
    position);
  boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex>::~garbage_collecting_lock((boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._weak_connection_body.pn.pi_ = (boost::detail::sp_counted_base *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 379: range 000000000BFA0272-000000000BFA029C
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::~invocation_state(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *const this)
{
  boost::shared_ptr<boost::signals2::optional_last_value<int>>::~shared_ptr(&this->_combiner);
  boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>::~shared_ptr(&this->_connection_bodies);
};

// Line 379: range 000000000BFA25A0-000000000BFA25CA
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::~invocation_state(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *const this)
{
  boost::shared_ptr<boost::signals2::optional_last_value<int>>::~shared_ptr(&this->_combiner);
  boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>::~shared_ptr(&this->_connection_bodies);
};

// Line 386: range 000000000BF89444-000000000BF894C7
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::invocation_state(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *const this,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *other,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::connection_list_type *connections_in)
{
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *p; // [rsp+0h] [rbp-30h]

  p = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)operator new(0x50uLL);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::grouped_list(
    p,
    connections_in);
  boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>(
    &this->_connection_bodies,
    p);
  boost::shared_ptr<boost::signals2::optional_last_value<int>>::shared_ptr(&this->_combiner, &other->_combiner);
};

// Line 386: range 000000000BF8AB0C-000000000BF8AB8F
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::invocation_state(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *const this,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *other,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::connection_list_type *connections_in)
{
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *p; // [rsp+0h] [rbp-30h]

  p = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)operator new(0x50uLL);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::grouped_list(
    p,
    connections_in);
  boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>(
    &this->_connection_bodies,
    p);
  boost::shared_ptr<boost::signals2::optional_last_value<int>>::shared_ptr(&this->_combiner, &other->_combiner);
};

// Line 394: range 000000000BF7D5C2-000000000BF7D5DB
boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::connection_list_type *__cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *const this)
{
  return boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>::operator*(&this->_connection_bodies);
};

// Line 394: range 000000000BF7E73C-000000000BF7E755
boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::connection_list_type *__cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *const this)
{
  return boost::shared_ptr<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>::operator*(&this->_connection_bodies);
};

// Line 432: range 000000000BF89586-000000000BF89833
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        bool grab_tracked,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *begin,
        unsigned int count)
{
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v9; // rax
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *v11; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *v12; // rdx
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *v13; // rax
  boost::detail::sp_member_access<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::type v14; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v15; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v16; // r14
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *v17; // rax
  const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *v18; // rax
  const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *v19; // rax
  unsigned int i; // [rsp+24h] [rbp-7Ch]
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v25[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)v6;
  }
  v5->_M_node = (std::__detail::_List_node_base *)1102416563;
  v5[1]._M_node = (std::__detail::_List_node_base *)"1 32 8 6 it:437";
  v5[2]._M_node = (std::__detail::_List_node_base *)boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections_from;
  v7 = (unsigned __int64)v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( !boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "_shared_state.unique()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/signal_template.hpp",
      0x1B4u,
      "void boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, ExtendedSlotFu"
      "nction, Mutex>::nolock_cleanup_connections_from(boost::signals2::detail::garbage_collecting_lock<Mutex>&, bool, co"
      "nst typename boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, Extend"
      "edSlotFunction, Mutex>::connection_list_type::iterator&, unsigned int) const [with Combiner = boost::signals2::opt"
      "ional_last_value<int>; Group = int; GroupCompare = std::less<int>; SlotFunction = boost::function<int(common::mine"
      "t::AServerSession*)>; ExtendedSlotFunction = boost::function<int(const boost::signals2::connection&, common::minet"
      "::AServerSession*)>; Mutex = boost::signals2::mutex; R = int; Args = {common::minet::AServerSession*}; typename bo"
      "ost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, ExtendedSlotFunction,"
      " Mutex>::connection_list_type::iterator = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connectio"
      "n_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(commo"
      "n::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> > >]");
  }
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_iterator(v5 + 4);
  if ( *(_BYTE *)(((unsigned __int64)begin >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5[4]._M_node = begin->_M_node;
  for ( i = 0; ; ++i )
  {
    v8 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v9 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v8);
    __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(v9)._M_node;
    if ( !std::operator!=(v5 + 4, &__y) || count && i >= count )
      break;
    if ( grab_tracked )
    {
      v11 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
      v12 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::operator->(v11);
      boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::disconnect_expired_slot<boost::signals2::mutex>(
        v12,
        lock);
    }
    v13 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
    v14 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::operator->(v13);
    if ( boost::signals2::detail::connection_body_base::nolock_nograb_connected(v14) )
    {
      std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator++(v5 + 4);
    }
    else
    {
      v15 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
      v16 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v15);
      v17 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
      v18 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::operator->(v17);
      v19 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::group_key(v18);
      v5[4]._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase(
                        v16,
                        v19,
                        v5 + 4)._M_node;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_garbage_collector_it >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_garbage_collector_it = v5[4];
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v5->_M_node = (std::__detail::_List_node_base *)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 432: range 000000000BF8AC4E-000000000BF8AEFB
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        bool grab_tracked,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *begin,
        unsigned int count)
{
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v9; // rax
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *v11; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *v12; // rdx
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *v13; // rax
  boost::detail::sp_member_access<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::type v14; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v15; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v16; // r14
  const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *v17; // rax
  const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *v18; // rax
  const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *v19; // rax
  unsigned int i; // [rsp+24h] [rbp-7Ch]
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v25[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)v6;
  }
  v5->_M_node = (std::__detail::_List_node_base *)1102416563;
  v5[1]._M_node = (std::__detail::_List_node_base *)"1 32 8 6 it:437";
  v5[2]._M_node = (std::__detail::_List_node_base *)boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections_from;
  v7 = (unsigned __int64)v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116352;
  if ( !boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "_shared_state.unique()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/signal_template.hpp",
      0x1B4u,
      "void boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, ExtendedSlotFu"
      "nction, Mutex>::nolock_cleanup_connections_from(boost::signals2::detail::garbage_collecting_lock<Mutex>&, bool, co"
      "nst typename boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, Extend"
      "edSlotFunction, Mutex>::connection_list_type::iterator&, unsigned int) const [with Combiner = boost::signals2::opt"
      "ional_last_value<int>; Group = int; GroupCompare = std::less<int>; SlotFunction = boost::function<int(common::mine"
      "t::AServerSession*, unsigned int)>; ExtendedSlotFunction = boost::function<int(const boost::signals2::connection&,"
      " common::minet::AServerSession*, unsigned int)>; Mutex = boost::signals2::mutex; R = int; Args = {common::minet::A"
      "ServerSession*, unsigned int}; typename boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCo"
      "mpare, SlotFunction, ExtendedSlotFunction, Mutex>::connection_list_type::iterator = std::_List_iterator<boost::sha"
      "red_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::option"
      "al<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::mi"
      "net::AServerSession*, unsigned int)> >, boost::signals2::mutex> > >]");
  }
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_iterator(v5 + 4);
  if ( *(_BYTE *)(((unsigned __int64)begin >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5[4]._M_node = begin->_M_node;
  for ( i = 0; ; ++i )
  {
    v8 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v9 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v8);
    __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(v9)._M_node;
    if ( !std::operator!=(v5 + 4, &__y) || count && i >= count )
      break;
    if ( grab_tracked )
    {
      v11 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
      v12 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::operator->(v11);
      boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::disconnect_expired_slot<boost::signals2::mutex>(
        v12,
        lock);
    }
    v13 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
    v14 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::operator->(v13);
    if ( boost::signals2::detail::connection_body_base::nolock_nograb_connected(v14) )
    {
      std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator++(v5 + 4);
    }
    else
    {
      v15 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
      v16 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v15);
      v17 = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator*(v5 + 4);
      v18 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::operator->(v17);
      v19 = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::group_key(v18);
      v5[4]._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase(
                        v16,
                        v19,
                        v5 + 4)._M_node;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_garbage_collector_it >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_garbage_collector_it = v5[4];
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v5->_M_node = (std::__detail::_List_node_base *)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 458: range 000000000BF8984E-000000000BF89A06
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections(
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        bool grab_tracked,
        unsigned int count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v7; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v8; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v9; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v10; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 begin:462";
  *(_QWORD *)(v4 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( !boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "_shared_state.unique()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/signal_template.hpp",
      0x1CDu,
      "void boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, ExtendedSlotFu"
      "nction, Mutex>::nolock_cleanup_connections(boost::signals2::detail::garbage_collecting_lock<Mutex>&, bool, unsigne"
      "d int) const [with Combiner = boost::signals2::optional_last_value<int>; Group = int; GroupCompare = std::less<int"
      ">; SlotFunction = boost::function<int(common::minet::AServerSession*)>; ExtendedSlotFunction = boost::function<int"
      "(const boost::signals2::connection&, common::minet::AServerSession*)>; Mutex = boost::signals2::mutex; R = int; Ar"
      "gs = {common::minet::AServerSession*}]");
  }
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_iterator((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v4 + 32));
  v7 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
  v8 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v7);
  __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(v8)._M_node;
  if ( std::operator==(&this->_garbage_collector_it, &__y) )
  {
    v9 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v10 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v9);
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::begin(v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_garbage_collector_it >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 32) = this->_garbage_collector_it._M_node;
  }
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
    this,
    lock,
    grab_tracked,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32),
    count);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 458: range 000000000BF8AF16-000000000BF8B0CE
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections(
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        bool grab_tracked,
        unsigned int count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v7; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v8; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v9; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v10; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 begin:462";
  *(_QWORD *)(v4 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( !boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "_shared_state.unique()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/signal_template.hpp",
      0x1CDu,
      "void boost::signals2::detail::signal_impl<R(Args ...), Combiner, Group, GroupCompare, SlotFunction, ExtendedSlotFu"
      "nction, Mutex>::nolock_cleanup_connections(boost::signals2::detail::garbage_collecting_lock<Mutex>&, bool, unsigne"
      "d int) const [with Combiner = boost::signals2::optional_last_value<int>; Group = int; GroupCompare = std::less<int"
      ">; SlotFunction = boost::function<int(common::minet::AServerSession*, unsigned int)>; ExtendedSlotFunction = boost"
      "::function<int(const boost::signals2::connection&, common::minet::AServerSession*, unsigned int)>; Mutex = boost::"
      "signals2::mutex; R = int; Args = {common::minet::AServerSession*, unsigned int}]");
  }
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_iterator((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v4 + 32));
  v7 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
  v8 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v7);
  __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(v8)._M_node;
  if ( std::operator==(&this->_garbage_collector_it, &__y) )
  {
    v9 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v10 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v9);
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::begin(v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->_garbage_collector_it >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 32) = this->_garbage_collector_it._M_node;
  }
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
    this,
    lock,
    grab_tracked,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32),
    count);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 474: range 000000000BF83C44-000000000BF83D4F
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_force_unique_connection_list(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock)
{
  const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v2; // r12
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v3; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::connection_list_type *v4; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v6; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *p; // [rsp+8h] [rbp-48h]
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator begin; // [rsp+28h] [rbp-28h] BYREF

  if ( boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections(
      this,
      lock,
      1,
      2u);
  }
  else
  {
    v2 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator*(&this->_shared_state);
    v3 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v4 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v3);
    p = (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *)operator new(0x20uLL);
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::invocation_state(
      p,
      v2,
      v4);
    boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::reset<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>(
      &this->_shared_state,
      p);
    v5 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v6 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v5);
    begin._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::begin(v6)._M_node;
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
      this,
      lock,
      1,
      &begin,
      0);
  }
};

// Line 474: range 000000000BF848B2-000000000BF849BD
void __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_force_unique_connection_list(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock)
{
  const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v2; // r12
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v3; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::connection_list_type *v4; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v6; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *p; // [rsp+8h] [rbp-48h]
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator begin; // [rsp+28h] [rbp-28h] BYREF

  if ( boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::unique(&this->_shared_state) )
  {
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections(
      this,
      lock,
      1,
      2u);
  }
  else
  {
    v2 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator*(&this->_shared_state);
    v3 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v4 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v3);
    p = (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *)operator new(0x20uLL);
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::invocation_state(
      p,
      v2,
      v4);
    boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::reset<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>(
      &this->_shared_state,
      p);
    v5 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->(&this->_shared_state);
    v6 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v5);
    begin._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::begin(v6)._M_node;
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_cleanup_connections_from(
      this,
      lock,
      1,
      &begin,
      0);
  }
};

// Line 509: range 000000000BF7D492-000000000BF7D51D
boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::connection_body_type __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::create_new_connection(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *slot)
{
  const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *v3; // rcx
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::connection_body_type result; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *p; // [rsp+8h] [rbp-38h]
  const boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *slota; // [rsp+10h] [rbp-30h]

  slota = v3;
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_force_unique_connection_list(
    (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const)lock,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)slot);
  p = (boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *)operator new(0x50uLL);
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::connection_body(
    p,
    slota,
    (const boost::shared_ptr<boost::signals2::mutex> *)(&lock->garbage.members_.data_.align_ + 3));
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>(
    (boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const)this,
    p);
  result.px = (boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::element_type *)this;
  return result;
};

// Line 509: range 000000000BF7E628-000000000BF7E6B3
boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::connection_body_type __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::create_new_connection(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *slot)
{
  const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *v3; // rcx
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::connection_body_type result; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *p; // [rsp+8h] [rbp-38h]
  const boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *slota; // [rsp+10h] [rbp-30h]

  slota = v3;
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_force_unique_connection_list(
    (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const)lock,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *)slot);
  p = (boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *)operator new(0x50uLL);
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::connection_body(
    p,
    slota,
    (const boost::shared_ptr<boost::signals2::mutex> *)(&lock->garbage.members_.data_.align_ + 3));
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>(
    (boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const)this,
    p);
  result.px = (boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::element_type *)this;
  return result;
};

// Line 546: range 000000000BF771A2-000000000BF773CD
boost::signals2::connection __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_connect(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  boost::signals2::connect_position v4; // r8d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v9; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *v10; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v11; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *v12; // rax
  boost::signals2::connection result; // rax
  boost::signals2::connect_position positiona; // [rsp+Ch] [rbp-B4h]
  boost::weak_ptr<boost::signals2::detail::connection_body_base> connectionBody; // [rsp+30h] [rbp-90h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  positiona = v4;
  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 13 group_key:551 64 16 21 newConnectionBody:549";
  *(_QWORD *)(v5 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::nolock_connect;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -202178560;
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::create_new_connection(
    (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const)(v5 + 64),
    lock,
    slot);
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>,true>((std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *const)(v5 + 32));
  if ( positiona )
  {
    *(_DWORD *)(v5 + 32) = 0;
    v10 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state> *const)lock);
    v11 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v10);
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_front(
      v11,
      (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *)(v5 + 32),
      (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *)(v5 + 64));
  }
  else
  {
    *(_DWORD *)(v5 + 32) = 2;
    v8 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>::operator->((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state> *const)lock);
    v9 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::connection_bodies(v8);
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_back(
      v9,
      (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *)(v5 + 32),
      (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *)(v5 + 64));
  }
  v12 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::operator->((const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const)(v5 + 64));
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::set_group_key(
    v12,
    (const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *)(v5 + 32));
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>(
    &connectionBody,
    (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *)(v5 + 64),
    (boost::detail::sp_enable_if_convertible_impl<true>::type)(v5 + 64));
  boost::signals2::connection::connection((boost::signals2::connection *const)this, &connectionBody);
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::~weak_ptr(&connectionBody);
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::~shared_ptr((boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const)(v5 + 64));
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 546: range 000000000BF77C76-000000000BF77EA1
boost::signals2::connection __cdecl boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_connect(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        boost::signals2::detail::garbage_collecting_lock<boost::signals2::mutex> *lock,
        const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  boost::signals2::connect_position v4; // r8d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v9; // rax
  boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *v10; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v11; // rax
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *v12; // rax
  boost::signals2::connection result; // rax
  boost::signals2::connect_position positiona; // [rsp+Ch] [rbp-B4h]
  boost::weak_ptr<boost::signals2::detail::connection_body_base> connectionBody; // [rsp+30h] [rbp-90h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  positiona = v4;
  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 13 group_key:551 64 16 21 newConnectionBody:549";
  *(_QWORD *)(v5 + 16) = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::nolock_connect;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -202178560;
  boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::create_new_connection(
    (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const)(v5 + 64),
    lock,
    slot);
  std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>,true>((std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *const)(v5 + 32));
  if ( positiona )
  {
    *(_DWORD *)(v5 + 32) = 0;
    v10 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state> *const)lock);
    v11 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v10);
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_front(
      v11,
      (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *)(v5 + 32),
      (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *)(v5 + 64));
  }
  else
  {
    *(_DWORD *)(v5 + 32) = 2;
    v8 = boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>::operator->((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state> *const)lock);
    v9 = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::connection_bodies(v8);
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_back(
      v9,
      (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *)(v5 + 32),
      (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *)(v5 + 64));
  }
  v12 = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::operator->((const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const)(v5 + 64));
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::set_group_key(
    v12,
    (const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> > *)(v5 + 32));
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::weak_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>(
    &connectionBody,
    (const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *)(v5 + 64),
    (boost::detail::sp_enable_if_convertible_impl<true>::type)(v5 + 64));
  boost::signals2::connection::connection((boost::signals2::connection *const)this, &connectionBody);
  boost::weak_ptr<boost::signals2::detail::connection_body_base>::~weak_ptr(&connectionBody);
  boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::~shared_ptr((boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const)(v5 + 64));
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 662: range 000000000BF0A2F6-000000000BF0A353
void __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::~signal(
        boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_signal_base = v1;
  boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>>::~shared_ptr(&this->_pimpl);
  boost::signals2::signal_base::~signal_base(this);
};

// Line 662: range 000000000BF0A354-000000000BF0A37E
void __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::~signal(
        boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this)
{
  boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::~signal(this);
  operator delete(this, 0x18uLL);
};

// Line 662: range 000000000BF0A3FE-000000000BF0A428
void __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::~signal(
        boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this)
{
  boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::~signal(this);
  operator delete(this, 0x18uLL);
};

// Line 662: range 000000000BF0A3A0-000000000BF0A3FD
void __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::~signal(
        boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_signal_base = v1;
  boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>>::~shared_ptr(&this->_pimpl);
  boost::signals2::signal_base::~signal_base(this);
};

// Line 689: range 000000000BF6AE60-000000000BF6AEC4
boost::signals2::connection __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect(
        boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this,
        const boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *v3; // rsi
  boost::signals2::connection result; // rax

  v3 = (const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::slot_type *)boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>>::operator*((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> > *const)&slot->_tracked_objects._M_impl._M_finish);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::connect(
             (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const)this,
             v3,
             position);
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 689: range 000000000BF6B628-000000000BF6B68C
boost::signals2::connection __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect(
        boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this,
        const boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *slot,
        boost::signals2::connect_position position)
{
  const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *v3; // rsi
  boost::signals2::connection result; // rax

  v3 = (const boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::slot_type *)boost::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>>::operator*((const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> > *const)&slot->_tracked_objects._M_impl._M_finish);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::connect(
             (boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const)this,
             v3,
             position);
  result._weak_connection_body.px = (boost::weak_ptr<boost::signals2::detail::connection_body_base>::element_type *)this;
  return result;
};

// Line 750: range 000000000BF58B38-000000000BF58B64
boost::shared_ptr<void> __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::lock_pimpl(
        const boost::signals2::signal<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> *const this)
{
  __int64 v1; // rsi
  boost::shared_ptr<void> result; // rax

  boost::shared_ptr<void>::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>>(
    (boost::shared_ptr<void> *const)this,
    (const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex> > *)(v1 + 8),
    (boost::detail::sp_enable_if_convertible_impl<true>::type)(v1 + 8));
  result.px = (boost::shared_ptr<void>::element_type *)this;
  return result;
};

// Line 750: range 000000000BF58B0A-000000000BF58B36
boost::shared_ptr<void> __cdecl boost::signals2::signal<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::lock_pimpl(
        const boost::signals2::signal<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> *const this)
{
  __int64 v1; // rsi
  boost::shared_ptr<void> result; // rax

  boost::shared_ptr<void>::shared_ptr<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>>(
    (boost::shared_ptr<void> *const)this,
    (const boost::shared_ptr<boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex> > *)(v1 + 8),
    (boost::detail::sp_enable_if_convertible_impl<true>::type)(v1 + 8));
  result.px = (boost::shared_ptr<void>::element_type *)this;
  return result;
};
