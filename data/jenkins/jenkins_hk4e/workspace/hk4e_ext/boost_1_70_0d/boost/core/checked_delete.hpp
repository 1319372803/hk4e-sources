// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/core/checked_delete.hpp

// Line 31: range 000000000BF86EE5-000000000BF86F4C
void __cdecl boost::checked_delete<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>>>(
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > *x)
{
  boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = *(_QWORD *)v1->baseclass_0 + 8LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > > *))v2)(v1);
  }
};

// Line 31: range 000000000BF885D3-000000000BF8863A
void __cdecl boost::checked_delete<boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>>>(
        boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > *x)
{
  boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = *(_QWORD *)v1->baseclass_0 + 8LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::detail::thread_data<boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > > *))v2)(v1);
  }
};

// Line 31: range 000000000BF3605B-000000000BF360C2
void __cdecl boost::checked_delete<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(v1->_vptr_exception + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *))v2)(v1);
  }
};

// Line 31: range 000000000BF36147-000000000BF361AE
void __cdecl boost::checked_delete<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(v1->_vptr_exception + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *))v2)(v1);
  }
};

// Line 31: range 000000000BF96503-000000000BF9656A
void __cdecl boost::checked_delete<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *x)
{
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(v1->_vptr_connection_body_base + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *))v2)(v1);
  }
};

// Line 31: range 000000000BF984C9-000000000BF98530
void __cdecl boost::checked_delete<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>(
        boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *x)
{
  boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(v1->_vptr_connection_body_base + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *))v2)(v1);
  }
};

// Line 31: range 000000000BF16AF9-000000000BF16B60
void __cdecl boost::checked_delete<boost::signals2::detail::foreign_weak_ptr_impl_base>(
        boost::signals2::detail::foreign_weak_ptr_impl_base *x)
{
  boost::signals2::detail::foreign_weak_ptr_impl_base *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = x;
  if ( x )
  {
    if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(v1->_vptr_foreign_weak_ptr_impl_base + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::signals2::detail::foreign_weak_ptr_impl_base *))v2)(v1);
  }
};

// Line 31: range 000000000BFA01BB-000000000BFA01ED
void __cdecl boost::checked_delete<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *x)
{
  if ( x )
  {
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::~grouped_list(x);
    operator delete(x, 0x50uLL);
  }
};

// Line 31: range 000000000BFA24E9-000000000BFA251B
void __cdecl boost::checked_delete<boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *x)
{
  if ( x )
  {
    boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::~grouped_list(x);
    operator delete(x, 0x50uLL);
  }
};

// Line 31: range 000000000BFA029D-000000000BFA02CF
void __cdecl boost::checked_delete<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state>(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*)>,boost::signals2::mutex>::invocation_state *x)
{
  if ( x )
  {
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *)>,boost::signals2::mutex>::invocation_state::~invocation_state(x);
    operator delete(x, 0x20uLL);
  }
};

// Line 31: range 000000000BFA25CB-000000000BFA25FD
void __cdecl boost::checked_delete<boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state>(
        boost::signals2::detail::signal_impl<int(common::minet::AServerSession*,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int(common::minet::AServerSession*,unsigned int)>,boost::function<int(const boost::signals2::connection&,common::minet::AServerSession*,unsigned int)>,boost::signals2::mutex>::invocation_state *x)
{
  if ( x )
  {
    boost::signals2::detail::signal_impl<int ()(common::minet::AServerSession *,unsigned int),boost::signals2::optional_last_value<int>,int,std::less<int>,boost::function<int ()(common::minet::AServerSession *,unsigned int)>,boost::function<int ()(boost::signals2::connection const&,common::minet::AServerSession *,unsigned int)>,boost::signals2::mutex>::invocation_state::~invocation_state(x);
    operator delete(x, 0x20uLL);
  }
};

// Line 31: range 000000000BF9B8FB-000000000BF9B92D
void __cdecl boost::checked_delete<boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>>(
        boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> > *x)
{
  if ( x )
  {
    boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>::~slot(x);
    operator delete(x, 0x38uLL);
  }
};

// Line 31: range 000000000BF9D63B-000000000BF9D66D
void __cdecl boost::checked_delete<boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>>(
        boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> > *x)
{
  if ( x )
  {
    boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>::~slot(x);
    operator delete(x, 0x38uLL);
  }
};
