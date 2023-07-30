// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/execution_context.ipp

// Line 27: range 000000000C64149E-000000000C641538
void __cdecl boost::asio::execution_context::execution_context(boost::asio::execution_context *const this)
{
  boost::asio::detail::service_registry *v1; // rbx

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  v1 = (boost::asio::detail::service_registry *)operator new(0x40uLL);
  boost::asio::detail::service_registry::service_registry(v1, this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->service_registry_ = v1;
};

// Line 32: range 000000000C64153A-000000000C6415B4
void __cdecl boost::asio::execution_context::~execution_context(boost::asio::execution_context *const this)
{
  boost::asio::detail::service_registry *service_registry; // rbx

  boost::asio::execution_context::shutdown(this);
  boost::asio::execution_context::destroy(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  service_registry = this->service_registry_;
  if ( this->service_registry_ )
  {
    boost::asio::detail::service_registry::~service_registry(this->service_registry_);
    operator delete(service_registry, 0x40uLL);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 40: range 000000000C6415B6-000000000C6415F4
void __cdecl boost::asio::execution_context::shutdown(boost::asio::execution_context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::service_registry::shutdown_services(this->service_registry_);
};

// Line 45: range 000000000C6415F6-000000000C641634
void __cdecl boost::asio::execution_context::destroy(boost::asio::execution_context *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::service_registry::destroy_services(this->service_registry_);
};

// Line 55: range 000000000C641636-000000000C6416F9
void __cdecl boost::asio::execution_context::service::service(
        boost::asio::execution_context::service *const this,
        boost::asio::execution_context *owner)
{
  int (**v2)(...); // rdx

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  v2 = (int (**)(...))(&`vtable for'boost::asio::execution_context::service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v2;
  boost::asio::execution_context::service::key::key(&this->key_);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->owner_ = owner;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
};

// Line 61: range 000000000C6416FA-000000000C641747
void __cdecl boost::asio::execution_context::service::~service(boost::asio::execution_context::service *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::execution_context::service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 61: range 000000000C641748-000000000C641772
void __cdecl boost::asio::execution_context::service::~service(boost::asio::execution_context::service *const this)
{
  boost::asio::execution_context::service::~service(this);
  operator delete(this, 0x28uLL);
};

// Line 66: range 000000000C641774-000000000C641781
void __cdecl boost::asio::execution_context::service::notify_fork(
        boost::asio::execution_context::service *const this,
        boost::asio::execution_context::fork_event a2)
{
  ;
};

// Line 69: range 000000000C641782-000000000C6417D6
void __cdecl boost::asio::service_already_exists::service_already_exists(
        boost::asio::service_already_exists *const this)
{
  __int64 *v1; // rdx

  std::logic_error::logic_error((std::logic_error *)this, "Service already exists.");
  v1 = &`vtable for'boost::asio::service_already_exists + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};

// Line 74: range 000000000C6417D8-000000000C64182C
void __cdecl boost::asio::invalid_service_owner::invalid_service_owner(boost::asio::invalid_service_owner *const this)
{
  __int64 *v1; // rdx

  std::logic_error::logic_error((std::logic_error *)this, "Invalid service owner.");
  v1 = &`vtable for'boost::asio::invalid_service_owner + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
};
