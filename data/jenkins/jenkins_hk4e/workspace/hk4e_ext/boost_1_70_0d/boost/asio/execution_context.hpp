// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/execution_context.hpp

// Line 307: range 000000000C65F880-000000000C65F89A
void __cdecl boost::asio::execution_context::id::~id(boost::asio::execution_context::id *const this)
{
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 312: range 000000000C640722-000000000C64073C
void __cdecl boost::asio::execution_context::id::id(boost::asio::execution_context::id *const this)
{
  boost::asio::detail::noncopyable::noncopyable(this);
};

// Line 349: range 000000000C64073E-000000000C6407A9
void __cdecl boost::asio::execution_context::service::key::key(
        boost::asio::execution_context::service::key *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->type_info_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->id_ = 0LL;
};

// Line 360: range 000000000C681406-000000000C68145E
void __cdecl boost::asio::service_already_exists::service_already_exists(
        boost::asio::service_already_exists *const this,
        const boost::asio::service_already_exists *a2)
{
  __int64 *v2; // rdx

  std::logic_error::logic_error((std::logic_error *)this, (const std::logic_error *)a2);
  v2 = &`vtable for'boost::asio::service_already_exists + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 360: range 000000000C676956-000000000C676980
void __cdecl boost::asio::service_already_exists::~service_already_exists(
        boost::asio::service_already_exists *const this)
{
  boost::asio::service_already_exists::~service_already_exists(this);
  operator delete(this, 0x10uLL);
};

// Line 360: range 000000000C676908-000000000C676955
void __cdecl boost::asio::service_already_exists::~service_already_exists(
        boost::asio::service_already_exists *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::asio::service_already_exists + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::logic_error::~logic_error((std::logic_error *)this);
};

// Line 369: range 000000000C6810C0-000000000C681118
void __cdecl boost::asio::invalid_service_owner::invalid_service_owner(
        boost::asio::invalid_service_owner *const this,
        const boost::asio::invalid_service_owner *a2)
{
  __int64 *v2; // rdx

  std::logic_error::logic_error((std::logic_error *)this, (const std::logic_error *)a2);
  v2 = &`vtable for'boost::asio::invalid_service_owner + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 369: range 000000000C676482-000000000C6764AC
void __cdecl boost::asio::invalid_service_owner::~invalid_service_owner(boost::asio::invalid_service_owner *const this)
{
  boost::asio::invalid_service_owner::~invalid_service_owner(this);
  operator delete(this, 0x10uLL);
};

// Line 369: range 000000000C676434-000000000C676481
void __cdecl boost::asio::invalid_service_owner::~invalid_service_owner(boost::asio::invalid_service_owner *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::asio::invalid_service_owner + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::logic_error::~logic_error((std::logic_error *)this);
};

// Line 380: range 000000000C6CA4B8-000000000C6CA4D2
void __cdecl boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 380: range 000000000C704FF0-000000000C70500A
void __cdecl boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *const this)
{
  boost::asio::execution_context::id::~id(this);
};

// Line 380: range 000000000C676F40-000000000C676F5A
void __cdecl boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor> *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 380: range 000000000C6A3C8E-000000000C6A3CA8
void __cdecl boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor> *const this)
{
  boost::asio::execution_context::id::~id(this);
};

// Line 380: range 000000000C6A1B84-000000000C6A1B9E
void __cdecl boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 380: range 000000000C6A3CAA-000000000C6A3CC4
void __cdecl boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *const this)
{
  boost::asio::execution_context::id::~id(this);
};

// Line 380: range 000000000C676DB2-000000000C676DCC
void __cdecl boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(
        boost::asio::detail::service_id<boost::asio::detail::scheduler> *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 380: range 000000000C6A3C72-000000000C6A3C8C
void __cdecl boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::scheduler> *const this)
{
  boost::asio::execution_context::id::~id(this);
};

// Line 380: range 000000000C65F89C-000000000C65F8B6
void __cdecl boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(
        boost::asio::detail::service_id<boost::asio::detail::strand_service> *const this)
{
  boost::asio::execution_context::id::id(this);
};

// Line 380: range 000000000C6A3C3A-000000000C6A3C54
void __cdecl boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::strand_service> *const this)
{
  boost::asio::execution_context::id::~id(this);
};

// Line 380: range 0000000019B74BB6-0000000019B74BB8
void __fastcall boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp> > *const this)
{
  ;
};

// Line 380: range 0000000014ED2FD0-0000000014ED2FFF
void __fastcall boost::asio::detail::service_id<boost::asio::detail::strand_executor_service>::~service_id(
        boost::asio::detail::service_id<boost::asio::detail::strand_executor_service> *const this)
{
  ;
};

// Line 387: range 000000000C6DC9C8-000000000C6DC9F2
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *const this)
{
  boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~execution_context_service_base(this);
  operator delete(this, 0x28uLL);
};

// Line 387: range 000000000C6DC97A-000000000C6DC9C7
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::execution_context::service::~service(this);
};

// Line 387: range 000000000C643C3A-000000000C643C64
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor> *const this)
{
  boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::~execution_context_service_base(this);
  operator delete(this, 0x28uLL);
};

// Line 387: range 000000000C643BEC-000000000C643C39
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::execution_context::service::~service(this);
};

// Line 387: range 000000000C6A333A-000000000C6A3387
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::execution_context::service::~service(this);
};

// Line 387: range 000000000C6A3388-000000000C6A33B2
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *const this)
{
  boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~execution_context_service_base(this);
  operator delete(this, 0x28uLL);
};

// Line 387: range 000000000C648818-000000000C648865
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::execution_context::service::~service(this);
};

// Line 387: range 000000000C648866-000000000C648890
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::~execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler> *const this)
{
  boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::~execution_context_service_base(this);
  operator delete(this, 0x28uLL);
};

// Line 394: range 000000000C6E2B0E-000000000C6E2B66
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > > *const this,
        boost::asio::execution_context *e)
{
  int (**v2)(...); // rdx

  boost::asio::execution_context::service::service(this, e);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};

// Line 394: range 000000000C65C782-000000000C65C7DA
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor> *const this,
        boost::asio::execution_context *e)
{
  int (**v2)(...); // rdx

  boost::asio::execution_context::service::service(this, e);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};

// Line 394: range 000000000C6A362E-000000000C6A3686
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp> > *const this,
        boost::asio::execution_context *e)
{
  int (**v2)(...); // rdx

  boost::asio::execution_context::service::service(this, e);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};

// Line 394: range 000000000C65DA48-000000000C65DAA0
void __cdecl boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::execution_context_service_base(
        boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler> *const this,
        boost::asio::execution_context *e)
{
  int (**v2)(...); // rdx

  boost::asio::execution_context::service::service(this, e);
  v2 = (int (**)(...))(&`vtable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
};
