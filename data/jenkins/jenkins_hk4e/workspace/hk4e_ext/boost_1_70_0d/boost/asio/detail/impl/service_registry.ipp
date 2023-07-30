// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/service_registry.ipp

// Line 29: range 000000000C640968-000000000C640A1B
void __cdecl boost::asio::detail::service_registry::service_registry(
        boost::asio::detail::service_registry *const this,
        boost::asio::execution_context *owner)
{
  boost::asio::detail::noncopyable::noncopyable(this);
  boost::asio::detail::posix_mutex::posix_mutex(&this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->owner_ = owner;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->first_service_ = 0LL;
};

// Line 35: range 000000000C640A1C-000000000C640A46
void __cdecl boost::asio::detail::service_registry::~service_registry(
        boost::asio::detail::service_registry *const this)
{
  boost::asio::detail::posix_mutex::~posix_mutex(&this->mutex_);
  boost::asio::detail::noncopyable::~noncopyable(this);
};

// Line 40: range 000000000C640A48-000000000C640B20
void __cdecl boost::asio::detail::service_registry::shutdown_services(
        boost::asio::detail::service_registry *const this)
{
  unsigned __int64 v1; // rax
  boost::asio::execution_context::service *service; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_service_);
  for ( service = this->first_service_; service; service = service->next_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)service >> 3) + 0x7FFF8000) )
      __asan_report_load8(service);
    v1 = (unsigned __int64)(service->_vptr_service + 2);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8(service->_vptr_service + 2);
    (*(void (__fastcall **)(boost::asio::execution_context::service *))v1)(service);
    if ( *(_BYTE *)(((unsigned __int64)&service->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&service->next_);
  }
};

// Line 50: range 000000000C640B22-000000000C640BD9
void __cdecl boost::asio::detail::service_registry::destroy_services(boost::asio::detail::service_registry *const this)
{
  boost::asio::execution_context::service *first_service; // rax
  boost::asio::execution_context::service *next_service; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->first_service_);
    if ( !this->first_service_ )
      break;
    first_service = this->first_service_;
    if ( *(_BYTE *)(((unsigned __int64)&first_service->next_ >> 3) + 0x7FFF8000) )
      first_service = (boost::asio::execution_context::service *)__asan_report_load8(&first_service->next_);
    next_service = first_service->next_;
    boost::asio::detail::service_registry::destroy(this->first_service_);
    if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->first_service_ = next_service;
  }
};

// Line 98: range 000000000C640BDA-000000000C640CF1
bool __cdecl boost::asio::detail::service_registry::keys_match(
        const boost::asio::execution_context::service::key *key1,
        const boost::asio::execution_context::service::key *key2)
{
  if ( *(_BYTE *)(((unsigned __int64)&key1->id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&key1->id_);
  if ( key1->id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&key2->id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&key2->id_);
    if ( key2->id_ && key1->id_ == key2->id_ )
      return 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)key1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(key1);
  if ( !key1->type_info_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)key2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(key2);
  return key2->type_info_ && std::type_info::operator==(key1->type_info_, key2->type_info_);
};

// Line 109: range 000000000C640CF2-000000000C640D59
void __cdecl boost::asio::detail::service_registry::destroy(boost::asio::execution_context::service *service)
{
  boost::asio::execution_context::service *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = service;
  if ( service )
  {
    if ( *(_BYTE *)(((unsigned __int64)service >> 3) + 0x7FFF8000) )
      v1 = (boost::asio::execution_context::service *)__asan_report_load8(service);
    v2 = (unsigned __int64)(v1->_vptr_service + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v1 = (boost::asio::execution_context::service *)__asan_report_load8(v1->_vptr_service + 1);
    (*(void (__fastcall **)(boost::asio::execution_context::service *))v2)(v1);
  }
};

// Line 116: range 000000000C640D5A-000000000C641113
boost::asio::execution_context::service *__cdecl boost::asio::detail::service_registry::do_use_service(
        boost::asio::detail::service_registry *const this,
        const boost::asio::execution_context::service::key *key,
        boost::asio::detail::service_registry::factory_type factory,
        void *owner)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::asio::execution_context::service *v7; // r14
  __int64 v8; // rcx
  const boost::asio::execution_context::id *id; // rdx
  __int64 v10; // rax
  boost::asio::execution_context::service *first_service; // rcx
  boost::asio::execution_context::service *result; // rax
  boost::asio::execution_context::service *service; // [rsp+28h] [rbp-98h]
  boost::asio::execution_context::service *servicea; // [rsp+28h] [rbp-98h]
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 15 new_service:132 64 16 8 lock:117";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::service_registry::do_use_service;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::scoped_lock(
    (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v4 + 64),
    &this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_service_);
  for ( service = this->first_service_; service; service = service->next_ )
  {
    if ( boost::asio::detail::service_registry::keys_match(&service->key_, key) )
    {
      v7 = service;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&service->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&service->next_);
  }
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::unlock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v4 + 64));
  *(_QWORD *)(v4 + 32) = factory(owner);
  v8 = *(_QWORD *)(v4 + 32);
  if ( *(_WORD *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v8 + 8);
  if ( *(_WORD *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_load16(key);
  id = key->id_;
  *(_QWORD *)(v8 + 8) = key->type_info_;
  *(_QWORD *)(v8 + 16) = id;
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::lock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_service_);
  for ( servicea = this->first_service_; servicea; servicea = servicea->next_ )
  {
    if ( boost::asio::detail::service_registry::keys_match(&servicea->key_, key) )
    {
      v7 = servicea;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(((unsigned __int64)&servicea->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&servicea->next_);
  }
  v10 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8(&this->first_service_);
  first_service = this->first_service_;
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v10 + 32) = first_service;
  this->first_service_ = *(boost::asio::execution_context::service **)(v4 + 32);
  *(_QWORD *)(v4 + 32) = 0LL;
  v7 = this->first_service_;
LABEL_31:
  boost::asio::detail::service_registry::auto_service_ptr::~auto_service_ptr((boost::asio::detail::service_registry::auto_service_ptr *const)(v4 + 32));
LABEL_32:
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::~scoped_lock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v4 + 64));
  result = v7;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 156: range 000000000C641114-000000000C641461
void __cdecl boost::asio::detail::service_registry::do_add_service(
        boost::asio::detail::service_registry *const this,
        const boost::asio::execution_context::service::key *key,
        boost::asio::execution_context::service *new_service)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  boost::asio::execution_context *owner; // r14
  const boost::asio::execution_context::id *id; // rdx
  boost::asio::execution_context::service *first_service; // rdx
  boost::asio::execution_context::service *service; // [rsp+28h] [rbp-88h]
  boost::asio::invalid_service_owner e; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 8 lock:160";
  *(_QWORD *)(v3 + 16) = boost::asio::detail::service_registry::do_add_service;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->owner_);
  owner = this->owner_;
  if ( owner != boost::asio::execution_context::service::context(new_service) )
  {
    boost::asio::invalid_service_owner::invalid_service_owner(&e);
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::asio::invalid_service_owner>(&e);
  }
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::scoped_lock(
    (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v3 + 32),
    &this->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_service_);
  for ( service = this->first_service_; service; service = service->next_ )
  {
    if ( boost::asio::detail::service_registry::keys_match(&service->key_, key) )
    {
      boost::asio::service_already_exists::service_already_exists((boost::asio::service_already_exists *const)&e);
      __asan_handle_no_return(&e);
      boost::throw_exception<boost::asio::service_already_exists>((const boost::asio::service_already_exists *)&e);
    }
    if ( *(_BYTE *)(((unsigned __int64)&service->next_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&service->next_);
  }
  if ( *(_WORD *)(((unsigned __int64)&new_service->key_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&new_service->key_);
  if ( *(_WORD *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_load16(key);
  id = key->id_;
  new_service->key_.type_info_ = key->type_info_;
  new_service->key_.id_ = id;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_service_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->first_service_);
  first_service = this->first_service_;
  if ( *(_BYTE *)(((unsigned __int64)&new_service->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  new_service->next_ = first_service;
  this->first_service_ = new_service;
  boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex>::~scoped_lock((boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
