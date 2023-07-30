// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/exception/detail/exception_ptr.hpp

// Line 42: range 000000000BF002B6-000000000BF002DB
void __cdecl boost::exception_ptr::exception_ptr(boost::exception_ptr *const this, const boost::exception_ptr *a2)
{
  boost::shared_ptr<boost::exception_detail::clone_base const>::shared_ptr(&this->ptr_, &a2->ptr_);
};

// Line 53: range 000000000BEFFF46-000000000BEFFF6B
void __cdecl boost::exception_ptr::exception_ptr(
        boost::exception_ptr *const this,
        const boost::exception_ptr::impl *ptr)
{
  boost::shared_ptr<boost::exception_detail::clone_base const>::shared_ptr(&this->ptr_, ptr);
};

// Line 104: range 000000000BF0CA76-000000000BF0CB0B
void __cdecl boost::exception_detail::bad_alloc_::bad_alloc_(boost::exception_detail::bad_alloc_ *const this)
{
  int (**v1)(...); // rdx
  __int64 *v2; // rdx

  boost::exception::exception(this);
  std::bad_alloc::bad_alloc((std::bad_alloc *const)this->baseclass_1);
  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_alloc_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = &`vtable for'boost::exception_detail::bad_alloc_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
};

// Line 104: range 000000000BF0CBAC-000000000BF0CC57
void __cdecl boost::exception_detail::bad_alloc_::bad_alloc_(
        boost::exception_detail::bad_alloc_ *const this,
        const boost::exception_detail::bad_alloc_ *a2)
{
  int (**v2)(...); // rdx
  __int64 *v3; // rdx

  boost::exception::exception(this, a2);
  std::bad_alloc::bad_alloc((std::bad_alloc *const)this->baseclass_1, (const std::bad_alloc *)a2->baseclass_1);
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_alloc_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &`vtable for'boost::exception_detail::bad_alloc_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v3;
};

// Line 108: range 000000000BEFFF6C-000000000BF00001
void __cdecl boost::exception_detail::bad_alloc_::~bad_alloc_(boost::exception_detail::bad_alloc_ *const this)
{
  int (**v1)(...); // rdx
  __int64 *v2; // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_alloc_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = &`vtable for'boost::exception_detail::bad_alloc_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
  std::bad_alloc::~bad_alloc((std::bad_alloc *)this->baseclass_1);
  boost::exception::~exception(this);
};

// Line 108: range 000000000BF0000C-000000000BF00036
void __cdecl boost::exception_detail::bad_alloc_::~bad_alloc_(boost::exception_detail::bad_alloc_ *const this)
{
  boost::exception_detail::bad_alloc_::~bad_alloc_(this);
  operator delete(this, 0x30uLL);
};

// Line 108: range 000000000BF00037-000000000BF0003B
void __fastcall `non-virtual thunk to'boost::exception_detail::bad_alloc_::~bad_alloc_(
        boost::exception_detail::bad_alloc_ *this)
{
  boost::exception_detail::bad_alloc_::~bad_alloc_((boost::exception_detail::bad_alloc_ *)((char *)this - 40));
};

// Line 108: range 000000000BF00002-000000000BF00006
void __fastcall `non-virtual thunk to'boost::exception_detail::bad_alloc_::~bad_alloc_(
        boost::exception_detail::bad_alloc_ *this)
{
  boost::exception_detail::bad_alloc_::~bad_alloc_((boost::exception_detail::bad_alloc_ *)((char *)this - 40));
};

// Line 112: range 000000000BF0D0E8-000000000BF0D17D
void __cdecl boost::exception_detail::bad_exception_::bad_exception_(
        boost::exception_detail::bad_exception_ *const this)
{
  int (**v1)(...); // rdx
  __int64 *v2; // rdx

  boost::exception::exception(this);
  std::bad_exception::bad_exception((std::bad_exception *const)this->baseclass_1);
  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_exception_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = &`vtable for'boost::exception_detail::bad_exception_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
};

// Line 112: range 000000000BF0D1D8-000000000BF0D283
void __cdecl boost::exception_detail::bad_exception_::bad_exception_(
        boost::exception_detail::bad_exception_ *const this,
        const boost::exception_detail::bad_exception_ *a2)
{
  int (**v2)(...); // rdx
  __int64 *v3; // rdx

  boost::exception::exception(this, a2);
  std::bad_exception::bad_exception(
    (std::bad_exception *const)this->baseclass_1,
    (const std::bad_exception *)a2->baseclass_1);
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_exception_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &`vtable for'boost::exception_detail::bad_exception_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v3;
};

// Line 116: range 000000000BF000DE-000000000BF00108
void __cdecl boost::exception_detail::bad_exception_::~bad_exception_(
        boost::exception_detail::bad_exception_ *const this)
{
  boost::exception_detail::bad_exception_::~bad_exception_(this);
  operator delete(this, 0x30uLL);
};

// Line 116: range 000000000BF0003E-000000000BF000D3
void __cdecl boost::exception_detail::bad_exception_::~bad_exception_(
        boost::exception_detail::bad_exception_ *const this)
{
  int (**v1)(...); // rdx
  __int64 *v2; // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::bad_exception_ + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = &`vtable for'boost::exception_detail::bad_exception_ + 6;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
  std::bad_exception::~bad_exception((std::bad_exception *)this->baseclass_1);
  boost::exception::~exception(this);
};

// Line 116: range 000000000BF00109-000000000BF0010D
void __fastcall `non-virtual thunk to'boost::exception_detail::bad_exception_::~bad_exception_(
        boost::exception_detail::bad_exception_ *this)
{
  boost::exception_detail::bad_exception_::~bad_exception_((boost::exception_detail::bad_exception_ *)((char *)this - 40));
};

// Line 116: range 000000000BF000D4-000000000BF000D8
void __fastcall `non-virtual thunk to'boost::exception_detail::bad_exception_::~bad_exception_(
        boost::exception_detail::bad_exception_ *this)
{
  boost::exception_detail::bad_exception_::~bad_exception_((boost::exception_detail::bad_exception_ *)((char *)this - 40));
};

// Line 121: range 000000000BF0CDB7-000000000BF0D0E7
boost::exception_ptr __cdecl boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>()
{
  boost::exception_ptr *v0; // rdi
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *v4; // r14
  const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *v5; // r14
  boost::exception_ptr result; // rax
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *p; // [rsp+0h] [rbp-150h]
  boost::error_info<boost::throw_line_,int> v8; // [rsp+1Ch] [rbp-134h] BYREF
  boost::error_info<boost::throw_function_,char const*> v; // [rsp+20h] [rbp-130h] BYREF
  boost::error_info<boost::throw_file_,char const*> v10; // [rsp+28h] [rbp-128h] BYREF
  boost::shared_ptr<const boost::exception_detail::clone_base> ptr; // [rsp+30h] [rbp-120h] BYREF
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 48 6 ba:123 128 56 5 c:124";
  *(_QWORD *)(v1 + 16) = boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  boost::exception_detail::bad_alloc_::bad_alloc_((boost::exception_detail::bad_alloc_ *const)(v1 + 48));
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(
    (boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)(v1 + 128),
    (const boost::exception_detail::bad_alloc_ *)(v1 + 48));
  boost::error_info<boost::throw_function_,char const*>::error_info(
    &v,
    "boost::exception_ptr boost::exception_detail::get_static_exception_object() [with Exception = boost::exception_detail::bad_alloc_]");
  v4 = boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_function_,char const*>(
         (const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *)(v1 + 128),
         &v);
  boost::error_info<boost::throw_file_,char const*>::error_info(
    &v10,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/exception/de"
    "tail/exception_ptr.hpp");
  v5 = boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_file_,char const*>(
         v4,
         &v10);
  boost::error_info<boost::throw_line_,int>::error_info(&v8, 129);
  boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_line_,int>(
    v5,
    &v8);
  if ( !(_BYTE)`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep
    && __cxa_guard_acquire(&`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep) )
  {
    p = (boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *)operator new(0x38uLL);
    boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(
      p,
      (const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *)(v1 + 128));
    boost::shared_ptr<boost::exception_detail::clone_base const>::shared_ptr<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
      &ptr,
      p);
    boost::exception_ptr::exception_ptr(
      &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep,
      &ptr);
    __cxa_guard_release(&`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep);
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
      &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep,
      &_dso_handle);
    boost::shared_ptr<boost::exception_detail::clone_base const>::~shared_ptr(&ptr);
  }
  boost::exception_ptr::exception_ptr(
    v0,
    &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>(void)::ep);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)(v1 + 128));
  boost::exception_detail::bad_alloc_::~bad_alloc_((boost::exception_detail::bad_alloc_ *const)(v1 + 48));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    result.ptr_.pn.pi_ = (boost::detail::sp_counted_base *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  result.ptr_.px = (boost::shared_ptr<const boost::exception_detail::clone_base>::element_type *)v0;
  return result;
};

// Line 121: range 000000000BF0D3E3-000000000BF0D713
boost::exception_ptr __cdecl boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>()
{
  boost::exception_ptr *v0; // rdi
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *v4; // r14
  const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *v5; // r14
  boost::exception_ptr result; // rax
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *p; // [rsp+0h] [rbp-150h]
  boost::error_info<boost::throw_line_,int> v8; // [rsp+1Ch] [rbp-134h] BYREF
  boost::error_info<boost::throw_function_,char const*> v; // [rsp+20h] [rbp-130h] BYREF
  boost::error_info<boost::throw_file_,char const*> v10; // [rsp+28h] [rbp-128h] BYREF
  boost::shared_ptr<const boost::exception_detail::clone_base> ptr; // [rsp+30h] [rbp-120h] BYREF
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 48 6 ba:123 128 56 5 c:124";
  *(_QWORD *)(v1 + 16) = boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  boost::exception_detail::bad_exception_::bad_exception_((boost::exception_detail::bad_exception_ *const)(v1 + 48));
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(
    (boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)(v1 + 128),
    (const boost::exception_detail::bad_exception_ *)(v1 + 48));
  boost::error_info<boost::throw_function_,char const*>::error_info(
    &v,
    "boost::exception_ptr boost::exception_detail::get_static_exception_object() [with Exception = boost::exception_detai"
    "l::bad_exception_]");
  v4 = boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_function_,char const*>(
         (const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *)(v1 + 128),
         &v);
  boost::error_info<boost::throw_file_,char const*>::error_info(
    &v10,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/exception/de"
    "tail/exception_ptr.hpp");
  v5 = boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_file_,char const*>(
         v4,
         &v10);
  boost::error_info<boost::throw_line_,int>::error_info(&v8, 129);
  boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_line_,int>(
    v5,
    &v8);
  if ( !(_BYTE)`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep
    && __cxa_guard_acquire(&`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep) )
  {
    p = (boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *)operator new(0x38uLL);
    boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(
      p,
      (const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *)(v1 + 128));
    boost::shared_ptr<boost::exception_detail::clone_base const>::shared_ptr<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
      &ptr,
      p);
    boost::exception_ptr::exception_ptr(
      &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep,
      &ptr);
    __cxa_guard_release(&`guard variable for'boost::exception_ptr boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep);
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
      &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep,
      &_dso_handle);
    boost::shared_ptr<boost::exception_detail::clone_base const>::~shared_ptr(&ptr);
  }
  boost::exception_ptr::exception_ptr(
    v0,
    &boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>(void)::ep);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)(v1 + 128));
  boost::exception_detail::bad_exception_::~bad_exception_((boost::exception_detail::bad_exception_ *const)(v1 + 48));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    result.ptr_.pn.pi_ = (boost::detail::sp_counted_base *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  result.ptr_.px = (boost::shared_ptr<const boost::exception_detail::clone_base>::element_type *)v0;
  return result;
};

// Line 216: range 000000000BF0029A-000000000BF002B4
void __cdecl boost::exception_ptr::~exception_ptr(boost::exception_ptr *const this)
{
  boost::shared_ptr<boost::exception_detail::clone_base const>::~shared_ptr(&this->ptr_);
};
