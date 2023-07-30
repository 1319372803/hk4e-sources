// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/exception/exception.hpp

// Line 38: range 000000000BF01134-000000000BF0116E
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px_ = 0LL;
};

// Line 43: range 000000000BF01170-000000000BF0118A
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::~refcount_ptr(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this)
{
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::release(this);
};

// Line 48: range 000000000BF0C988-000000000BF0C9F6
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this,
        const boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *x)
{
  boost::exception_detail::error_info_container *px; // rdx

  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  px = x->px_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px_ = px;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::add_ref(this);
};

// Line 55: range 000000000BF011C2-000000000BF0120E
boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *__cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::operator=(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this,
        const boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *x)
{
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::adopt(this, x->px_);
  return this;
};

// Line 62: range 000000000BF0C930-000000000BF0C986
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::adopt(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this,
        boost::exception_detail::error_info_container *px)
{
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::release(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->px_ = px;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::add_ref(this);
};

// Line 70: range 000000000BF0118C-000000000BF011C1
boost::exception_detail::error_info_container *__cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::get(
        const boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->px_;
};

// Line 80: range 000000000BF18F10-000000000BF18FAA
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::add_ref(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this)
{
  boost::exception_detail::error_info_container *px; // rdx
  boost::exception_detail::error_info_container *v2; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->px_ )
  {
    px = this->px_;
    v2 = this->px_;
    if ( *(_BYTE *)(((unsigned __int64)this->px_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = (unsigned __int64)(v2->_vptr_error_info_container + 3);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::exception_detail::error_info_container *))v3)(px);
  }
};

// Line 105: range 000000000C8B5820-000000000C8B58C0
void __cdecl boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(
        boost::exception_detail::error_info_injector<std::out_of_range> *const this,
        const std::out_of_range *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::out_of_range::out_of_range((std::out_of_range *const)this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 112: range 000000000BEDFA42-000000000BEDFA80
void __cdecl boost::error_info<boost::throw_function_,char const*>::error_info(
        boost::error_info<boost::throw_function_,char const*> *const this,
        boost::error_info<boost::throw_function_,char const*>::value_type v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->v_ = v;
};

// Line 115: range 000000000C7E3DEA-000000000C7E3E12
boost::exception_detail::enable_error_info_return_type<std::out_of_range>::type *__cdecl boost::enable_error_info<std::out_of_range>(
        boost::exception_detail::enable_error_info_return_type<std::out_of_range>::type *retstr,
        const std::out_of_range *x)
{
  boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(retstr, x);
  return retstr;
};

// Line 126: range 000000000BEDFA82-000000000BEDFAC0
void __cdecl boost::error_info<boost::throw_file_,char const*>::error_info(
        boost::error_info<boost::throw_file_,char const*> *const this,
        boost::error_info<boost::throw_file_,char const*>::value_type v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->v_ = v;
};

// Line 140: range 000000000BEDFAC2-000000000BEDFB13
void __cdecl boost::error_info<boost::throw_line_,int>::error_info(
        boost::error_info<boost::throw_line_,int> *const this,
        boost::error_info<boost::throw_line_,int>::value_type v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->v_ = v;
};

// Line 216: range 000000000BF00110-000000000BF00299
void __cdecl boost::exception::exception(boost::exception *const this, const boost::exception *a2)
{
  int (**v2)(...); // rdx
  const char *throw_function; // rdx
  const char *throw_file; // rdx
  int throw_line; // ecx

  v2 = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr(
    &this->data_,
    &a2->data_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  throw_function = a2->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->throw_function_ = throw_function;
  if ( *(_BYTE *)(((unsigned __int64)&a2->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  throw_file = a2->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->throw_file_ = throw_file;
  if ( *(_BYTE *)(((unsigned __int64)&a2->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->throw_line_);
  }
  throw_line = a2->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->throw_line_);
  }
  this->throw_line_ = throw_line;
};

// Line 226: range 000000000BEDFB14-000000000BEDFC05
void __cdecl boost::exception::exception(boost::exception *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr(&this->data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->throw_function_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->throw_file_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->throw_line_);
  }
  this->throw_line_ = -1;
};

// Line 266: range 000000000BF20218-000000000BF20240
boost::exception_detail::enable_error_info_return_type<boost::asio::invalid_service_owner>::type *__cdecl boost::enable_error_info<boost::asio::invalid_service_owner>(
        boost::exception_detail::enable_error_info_return_type<boost::asio::invalid_service_owner>::type *retstr,
        const boost::asio::invalid_service_owner *x)
{
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(retstr, x);
  return retstr;
};

// Line 267: range 000000000BF0DC5A-000000000BF0DD34
void __cdecl boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::release(
        boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *const this)
{
  boost::exception_detail::error_info_container *px; // rdx
  boost::exception_detail::error_info_container *v2; // rax
  unsigned __int64 v3; // rax
  char v4; // al

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->px_ )
    goto LABEL_10;
  px = this->px_;
  v2 = this->px_;
  if ( *(_BYTE *)(((unsigned __int64)this->px_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(v2->_vptr_error_info_container + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(boost::exception_detail::error_info_container *))v3)(px) )
    v4 = 1;
  else
LABEL_10:
    v4 = 0;
  if ( v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->px_ = 0LL;
  }
};

// Line 289: range 000000000BEDFC06-000000000BEDFC57
void __cdecl boost::exception::~exception(boost::exception *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::~refcount_ptr(&this->data_);
};

// Line 289: range 000000000BEDFC58-000000000BEDFC82
void __cdecl boost::exception::~exception(boost::exception *const this)
{
  boost::exception::~exception(this);
  operator delete(this, 0x28uLL);
};

// Line 299: range 000000000C28C294-000000000C28C3C0
const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *__fastcall boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>(
        const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *x,
        const boost::throw_function *y)
{
  const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *result; // rax
  const boost::throw_function *p_throw_function; // rdi

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    p_throw_function = y;
    __asan_report_load8();
  }
  else
  {
    result = x;
    p_throw_function = (const boost::throw_function *)&x->throw_function_;
    if ( !*(_BYTE *)(((unsigned __int64)p_throw_function >> 3) + 0x7FFF8000) )
    {
      result->throw_function_ = y->v_;
      return result;
    }
  }
  __asan_report_store8();
  return boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>(
           (const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *)p_throw_function,
           (const boost::throw_file *)y);
};

// Line 330: range 000000000BF2B73E-000000000BF2B80C
void __cdecl boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const this,
        const boost::exception_detail::error_info_injector<boost::asio::bad_executor> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::bad_executor::bad_executor(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2AFCA-000000000BF2B098
void __cdecl boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const this,
        const boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::invalid_service_owner::invalid_service_owner(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2B310-000000000BF2B3DE
void __cdecl boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const this,
        const boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::service_already_exists::service_already_exists(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2E5CE-000000000BF2E69C
void __cdecl boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::condition_error> *const this,
        const boost::exception_detail::error_info_injector<boost::condition_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::condition_error::condition_error(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2BF3C-000000000BF2C00A
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const this,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_day_of_month::bad_day_of_month(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF402C4-000000000BF40392
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const this,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_month::bad_month(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF3FF7E-000000000BF4004C
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const this,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_year::bad_year(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2DDDA-000000000BF2DEA8
void __cdecl boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::lock_error> *const this,
        const boost::exception_detail::error_info_injector<boost::lock_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::lock_error::lock_error(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF27426-000000000BF274F4
void __cdecl boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::system::system_error> *const this,
        const boost::exception_detail::error_info_injector<boost::system::system_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::system::system_error::system_error(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2DA94-000000000BF2DB62
void __cdecl boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *const this,
        const boost::exception_detail::error_info_injector<boost::thread_resource_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::thread_resource_error::thread_resource_error(this, a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000C8B5B38-000000000C8B5C06
void __cdecl boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(
        boost::exception_detail::error_info_injector<std::invalid_argument> *const this,
        const boost::exception_detail::error_info_injector<std::invalid_argument> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::invalid_argument::invalid_argument((std::invalid_argument *const)this, (const std::invalid_argument *)a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF88CB8-000000000BF88D86
void __cdecl boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(
        boost::exception_detail::error_info_injector<std::length_error> *const this,
        const boost::exception_detail::error_info_injector<std::length_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::length_error::length_error((std::length_error *const)this, (const std::length_error *)a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000BF2BA2A-000000000BF2BAF8
void __cdecl boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(
        boost::exception_detail::error_info_injector<std::runtime_error> *const this,
        const boost::exception_detail::error_info_injector<std::runtime_error> *a2)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  boost::exception::exception(&this->boost::exception, &a2->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 330: range 000000000C24A1DA-000000000C24A40E
void __fastcall boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::bad_function_call> *const this,
        _QWORD *a2)
{
  boost::exception_detail::error_info_container *v3; // rdi
  void *p_throw_function; // rdi
  char v5; // al
  char v6; // al
  struct _Unwind_Exception *v7; // rbp

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_10;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::bad_function_call + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
    goto LABEL_12;
  }
  v3 = (boost::exception_detail::error_info_container *)a2[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  this->data_.px_ = v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( !*(_BYTE *)(((unsigned __int64)(v3->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v3->_vptr_error_info_container + 3))();
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8();
LABEL_15:
  p_throw_function = a2 + 4;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_27;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->throw_function_ = (const char *)a2[4];
  p_throw_function = a2 + 5;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 5) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
LABEL_30:
    __asan_report_load4(p_throw_function);
LABEL_31:
    __asan_report_store4(p_throw_function);
    goto LABEL_32;
  }
  this->throw_file_ = (const char *)a2[5];
  p_throw_function = a2 + 6;
  v5 = *(_BYTE *)(((unsigned __int64)(a2 + 6) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_30;
  p_throw_function = &this->throw_line_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_31;
  this->throw_line_ = *((_DWORD *)a2 + 12);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    v7 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::bad_function_call + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v7);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call>
                                        + 7);
};

// Line 330: range 000000000C2C9390-000000000C2C95C4
void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> *const this,
        _QWORD *a2)
{
  boost::exception_detail::error_info_container *v3; // rdi
  void *p_throw_function; // rdi
  char v5; // al
  char v6; // al
  struct _Unwind_Exception *v7; // rbp

  std::logic_error::logic_error((std::logic_error *)this, (const std::logic_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_10;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
    goto LABEL_12;
  }
  v3 = (boost::exception_detail::error_info_container *)a2[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  this->data_.px_ = v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( !*(_BYTE *)(((unsigned __int64)(v3->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v3->_vptr_error_info_container + 3))();
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8();
LABEL_15:
  p_throw_function = a2 + 4;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_27;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->throw_function_ = (const char *)a2[4];
  p_throw_function = a2 + 5;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 5) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
LABEL_30:
    __asan_report_load4(p_throw_function);
LABEL_31:
    __asan_report_store4(p_throw_function);
    goto LABEL_32;
  }
  this->throw_file_ = (const char *)a2[5];
  p_throw_function = a2 + 6;
  v5 = *(_BYTE *)(((unsigned __int64)(a2 + 6) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_30;
  p_throw_function = &this->throw_line_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_31;
  this->throw_line_ = *((_DWORD *)a2 + 12);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    v7 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v7);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                               + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                        + 7);
};

// Line 330: range 000000000C2C8F34-000000000C2C9168
void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> *const this,
        _QWORD *a2)
{
  boost::exception_detail::error_info_container *v3; // rdi
  void *p_throw_function; // rdi
  char v5; // al
  char v6; // al
  struct _Unwind_Exception *v7; // rbp

  std::logic_error::logic_error((std::logic_error *)this, (const std::logic_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_10;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
    goto LABEL_12;
  }
  v3 = (boost::exception_detail::error_info_container *)a2[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  this->data_.px_ = v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( !*(_BYTE *)(((unsigned __int64)(v3->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v3->_vptr_error_info_container + 3))();
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8();
LABEL_15:
  p_throw_function = a2 + 4;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_27;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->throw_function_ = (const char *)a2[4];
  p_throw_function = a2 + 5;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 5) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
LABEL_30:
    __asan_report_load4(p_throw_function);
LABEL_31:
    __asan_report_store4(p_throw_function);
    goto LABEL_32;
  }
  this->throw_file_ = (const char *)a2[5];
  p_throw_function = a2 + 6;
  v5 = *(_BYTE *)(((unsigned __int64)(a2 + 6) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_30;
  p_throw_function = &this->throw_line_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_31;
  this->throw_line_ = *((_DWORD *)a2 + 12);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    v7 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v7);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                               + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                        + 7);
};

// Line 330: range 000000000C28DAC4-000000000C28DD92
void __fastcall boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *const this,
        _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  boost::exception_detail::error_info_container *v5; // rdi
  struct _Unwind_Exception *v6; // rbp
  void *p_throw_function; // rdi
  char v8; // al
  char v9; // al
  struct _Unwind_Exception *v10; // rbp

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::ptree_bad_path + 2;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
LABEL_9:
    __asan_report_load8();
    goto LABEL_10;
  }
  v3 = a2[2];
  if ( !v3 )
    goto LABEL_12;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v3 + 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  v4 = (*(__int64 (**)(void))(*(_QWORD *)v3 + 24LL))();
LABEL_11:
  v3 = v4;
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->m_path >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_21;
  }
  this->m_path.content = (boost::any::placeholder *)v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8();
LABEL_23:
    v6 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::ptree_error + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v6);
  }
  v5 = (boost::exception_detail::error_info_container *)a2[4];
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  this->data_.px_ = v5;
  if ( !v5 )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v5->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v5->_vptr_error_info_container + 3))();
    goto LABEL_28;
  }
  __asan_report_load8();
LABEL_28:
  p_throw_function = a2 + 5;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_40;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  this->throw_function_ = (const char *)a2[5];
  p_throw_function = a2 + 6;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 6) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8();
    goto LABEL_42;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
LABEL_43:
    __asan_report_load4(p_throw_function);
LABEL_44:
    __asan_report_store4(p_throw_function);
    goto LABEL_45;
  }
  this->throw_file_ = (const char *)a2[6];
  p_throw_function = a2 + 7;
  v8 = *(_BYTE *)(((unsigned __int64)(a2 + 7) >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_43;
  p_throw_function = &this->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_44;
  this->throw_line_ = *((_DWORD *)a2 + 14);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
LABEL_46:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    boost::property_tree::ptree_bad_path::~ptree_bad_path(this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v10);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>
                               + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_46;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>
                                        + 7);
};

// Line 330: range 000000000C28C3D0-000000000C28C7BB
void __fastcall boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *const this,
        __int64 a2)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r12
  std::forward_iterator_tag v5; // cl
  std::string *p_m_message; // rdi
  char *v7; // rsi
  std::forward_iterator_tag v8; // cl
  boost::exception_detail::error_info_container *v9; // rdi
  struct _Unwind_Exception *v10; // rbp
  std::string::pointer M_p; // rdi
  void *p_throw_function; // rdi
  char v13; // al
  char v14; // al
  struct _Unwind_Exception *v15; // rbp

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::file_parser_error + 2;
  p_m_message = &this->m_message;
  p_anon_0 = &this->m_message._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_message >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    goto LABEL_8;
  }
  this->m_message._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  v7 = *(char **)(a2 + 16);
  if ( !*(_BYTE *)(((unsigned __int64)(a2 + 24) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(p_m_message, v7, &v7[*(_QWORD *)(a2 + 24)], v5);
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load8();
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&this->m_filename >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_15;
  }
  this->m_filename._M_dataplus._M_p = this->m_filename._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(((unsigned __int64)(a2 + 56) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &this->m_filename,
      *(char **)(a2 + 48),
      (char *)(*(_QWORD *)(a2 + 56) + *(_QWORD *)(a2 + 48)),
      v8);
    goto LABEL_17;
  }
LABEL_16:
  __asan_report_load8();
LABEL_17:
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 80) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_line >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  this->m_line = *(_QWORD *)(a2 + 80);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
    goto LABEL_30;
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
LABEL_32:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->m_message >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    M_p = this->m_message._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p )
      operator delete(M_p);
    while ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v10 = (struct _Unwind_Exception *)__asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::ptree_error + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v10);
  }
  v9 = *(boost::exception_detail::error_info_container **)(a2 + 96);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  this->data_.px_ = v9;
  if ( !v9 )
    goto LABEL_41;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v9->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v9->_vptr_error_info_container + 3))();
    goto LABEL_41;
  }
  __asan_report_load8();
LABEL_41:
  p_throw_function = (void *)(a2 + 104);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_53;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->throw_function_ = *(const char **)(a2 + 104);
  p_throw_function = (void *)(a2 + 112);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 112) >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8();
    goto LABEL_55;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
LABEL_56:
    __asan_report_load4(p_throw_function);
LABEL_57:
    __asan_report_store4(p_throw_function);
    goto LABEL_58;
  }
  this->throw_file_ = *(const char **)(a2 + 112);
  p_throw_function = (void *)(a2 + 120);
  v13 = *(_BYTE *)(((unsigned __int64)(a2 + 120) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_56;
  p_throw_function = &this->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_57;
  this->throw_line_ = *(_DWORD *)(a2 + 120);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
LABEL_59:
    v15 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)this->baseclass_0 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
    boost::property_tree::file_parser_error::~file_parser_error(this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v15);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                               + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_59;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                                        + 7);
};

// Line 330: range 000000000C2C7906-000000000C2C7B14
void __fastcall boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(
        boost::exception_detail::error_info_injector<std::out_of_range> *const this,
        _QWORD *a2)
{
  boost::exception_detail::error_info_container *v3; // rdi
  void *p_throw_function; // rdi
  char v5; // al
  char v6; // al
  struct _Unwind_Exception *v7; // rbp

  std::logic_error::logic_error((std::logic_error *)this, (const std::logic_error *)a2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_10;
  }
  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'std::out_of_range + 16;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 3) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8();
    goto LABEL_12;
  }
  v3 = (boost::exception_detail::error_info_container *)a2[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  this->data_.px_ = v3;
  if ( !v3 )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( !*(_BYTE *)(((unsigned __int64)(v3->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v3->_vptr_error_info_container + 3))();
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8();
LABEL_15:
  p_throw_function = a2 + 4;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_27;
  }
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->throw_function_ = (const char *)a2[4];
  p_throw_function = a2 + 5;
  if ( *(_BYTE *)(((unsigned __int64)(a2 + 5) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
LABEL_30:
    __asan_report_load4(p_throw_function);
LABEL_31:
    __asan_report_store4(p_throw_function);
    goto LABEL_32;
  }
  this->throw_file_ = (const char *)a2[5];
  p_throw_function = a2 + 6;
  v5 = *(_BYTE *)(((unsigned __int64)(a2 + 6) >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
    goto LABEL_30;
  p_throw_function = &this->throw_line_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_31;
  this->throw_line_ = *((_DWORD *)a2 + 12);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    v7 = (struct _Unwind_Exception *)__asan_report_store8();
    std::out_of_range::~out_of_range((std::out_of_range *)this);
    __asan_handle_no_return(this);
    _Unwind_Resume(v7);
  }
  *(_QWORD *)this->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  this->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::out_of_range>
                                        + 7);
};

// Line 335: range 000000000BF2B69C-000000000BF2B73C
void __cdecl boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const this,
        const boost::asio::bad_executor *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::bad_executor::bad_executor(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2AF28-000000000BF2AFC8
void __cdecl boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const this,
        const boost::asio::invalid_service_owner *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::invalid_service_owner::invalid_service_owner(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2B26E-000000000BF2B30E
void __cdecl boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const this,
        const boost::asio::service_already_exists *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::asio::service_already_exists::service_already_exists(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000CB93756-000000000CB937F6
void __cdecl boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::bad_function_call> *const this,
        const boost::bad_function_call *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::bad_function_call::bad_function_call(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2E52C-000000000BF2E5CC
void __cdecl boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::condition_error> *const this,
        const boost::condition_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::condition_error::condition_error(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2BE9A-000000000BF2BF3A
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const this,
        const boost::gregorian::bad_day_of_month *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_day_of_month::bad_day_of_month(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF40222-000000000BF402C2
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const this,
        const boost::gregorian::bad_month *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_month::bad_month(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF3FEDC-000000000BF3FF7C
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const this,
        const boost::gregorian::bad_year *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::gregorian::bad_year::bad_year(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2DD38-000000000BF2DDD8
void __cdecl boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::lock_error> *const this,
        const boost::lock_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::lock_error::lock_error(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF27384-000000000BF27424
void __cdecl boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::system::system_error> *const this,
        const boost::system::system_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::system::system_error::system_error(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2D9F2-000000000BF2DA92
void __cdecl boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *const this,
        const boost::thread_resource_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  boost::thread_resource_error::thread_resource_error(this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000C8B5A96-000000000C8B5B36
void __cdecl boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(
        boost::exception_detail::error_info_injector<std::invalid_argument> *const this,
        const std::invalid_argument *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::invalid_argument::invalid_argument((std::invalid_argument *const)this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF88C16-000000000BF88CB6
void __cdecl boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(
        boost::exception_detail::error_info_injector<std::length_error> *const this,
        const std::length_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::length_error::length_error((std::length_error *const)this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 335: range 000000000BF2B988-000000000BF2BA28
void __cdecl boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(
        boost::exception_detail::error_info_injector<std::runtime_error> *const this,
        const std::runtime_error *x)
{
  __int64 *v2; // rdx
  int (**v3)(...); // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, x);
  boost::exception::exception(&this->boost::exception);
  v2 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
};

// Line 340: range 000000000BF20F9E-000000000BF20FA2
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const)(a1 - 8));
};

// Line 340: range 000000000BF20FD3-000000000BF20FD7
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const)(a1 - 8));
};

// Line 340: range 000000000BF20352-000000000BF20356
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const)(a1 - 16));
};

// Line 340: range 000000000BF20387-000000000BF2038B
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const)(a1 - 16));
};

// Line 340: range 000000000BF20826-000000000BF2082A
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const)(a1 - 16));
};

// Line 340: range 000000000BF2085B-000000000BF2085F
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector((boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const)(a1 - 16));
};

// Line 340: range 000000000BF25715-000000000BF25719
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::condition_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF256E0-000000000BF256E4
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::condition_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF21D06-000000000BF21D0A
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const)(a1 - 16));
};

// Line 340: range 000000000BF21D3B-000000000BF21D3F
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const)(a1 - 16));
};

// Line 340: range 000000000BF3B336-000000000BF3B33A
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const)(a1 - 16));
};

// Line 340: range 000000000BF3B36B-000000000BF3B36F
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const)(a1 - 16));
};

// Line 340: range 000000000BF3AF11-000000000BF3AF15
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const)(a1 - 16));
};

// Line 340: range 000000000BF3AEDC-000000000BF3AEE0
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector((boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const)(a1 - 16));
};

// Line 340: range 000000000BF24D42-000000000BF24D46
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::lock_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF24D77-000000000BF24D7B
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::lock_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF1B204-000000000BF1B208
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::system::system_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF1B239-000000000BF1B23D
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::system::system_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF248E8-000000000BF248EC
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::thread_resource_error> *const)(a1 - 64));
};

// Line 340: range 000000000BF2491D-000000000BF24921
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::thread_resource_error> *const)(a1 - 64));
};

// Line 340: range 000000000C7E4147-000000000C7E414B
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector((boost::exception_detail::error_info_injector<std::invalid_argument> *const)(a1 - 16));
};

// Line 340: range 000000000C7E4112-000000000C7E4116
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector((boost::exception_detail::error_info_injector<std::invalid_argument> *const)(a1 - 16));
};

// Line 340: range 000000000BF82FCE-000000000BF82FD2
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector((boost::exception_detail::error_info_injector<std::length_error> *const)(a1 - 16));
};

// Line 340: range 000000000BF83003-000000000BF83007
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector((boost::exception_detail::error_info_injector<std::length_error> *const)(a1 - 16));
};

// Line 340: range 000000000BF213F8-000000000BF213FC
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector((boost::exception_detail::error_info_injector<std::runtime_error> *const)(a1 - 16));
};

// Line 340: range 000000000BF2142D-000000000BF21431
void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        __int64 a1)
{
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector((boost::exception_detail::error_info_injector<std::runtime_error> *const)(a1 - 16));
};

// Line 340: range 000000000BF20F08-000000000BF20F9D
void __cdecl boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::bad_executor> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::asio::bad_executor::~bad_executor(this);
};

// Line 340: range 000000000BF20FA8-000000000BF20FD2
void __cdecl boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::bad_executor> *const this)
{
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(this);
  operator delete(this, 0x30uLL);
};

// Line 340: range 000000000BF202BC-000000000BF20351
void __cdecl boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::asio::invalid_service_owner::~invalid_service_owner(this);
};

// Line 340: range 000000000BF2035C-000000000BF20386
void __cdecl boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *const this)
{
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF20790-000000000BF20825
void __cdecl boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::asio::service_already_exists::~service_already_exists(this);
};

// Line 340: range 000000000BF20830-000000000BF2085A
void __cdecl boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *const this)
{
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF256EA-000000000BF25714
void __cdecl boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::condition_error> *const this)
{
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(this);
  operator delete(this, 0x68uLL);
};

// Line 340: range 000000000BF2564A-000000000BF256DF
void __cdecl boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::condition_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::condition_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::condition_error::~condition_error(this);
};

// Line 340: range 000000000BF21D10-000000000BF21D3A
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const this)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF21C70-000000000BF21D05
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::gregorian::bad_day_of_month::~bad_day_of_month(this);
};

// Line 340: range 000000000BF3B2A0-000000000BF3B335
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::gregorian::bad_month::~bad_month(this);
};

// Line 340: range 000000000BF3B340-000000000BF3B36A
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *const this)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF3AE46-000000000BF3AEDB
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::gregorian::bad_year::~bad_year(this);
};

// Line 340: range 000000000BF3AEE6-000000000BF3AF10
void __cdecl boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *const this)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF24CAC-000000000BF24D41
void __cdecl boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::lock_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::lock_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::lock_error::~lock_error(this);
};

// Line 340: range 000000000BF24D4C-000000000BF24D76
void __cdecl boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::lock_error> *const this)
{
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(this);
  operator delete(this, 0x68uLL);
};

// Line 340: range 000000000BF1B16E-000000000BF1B203
void __cdecl boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::system::system_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::system::system_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::system::system_error::~system_error(this);
};

// Line 340: range 000000000BF1B20E-000000000BF1B238
void __cdecl boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::system::system_error> *const this)
{
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(this);
  operator delete(this, 0x68uLL);
};

// Line 340: range 000000000BF24852-000000000BF248E7
void __cdecl boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::thread_resource_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  boost::thread_resource_error::~thread_resource_error(this);
};

// Line 340: range 000000000BF248F2-000000000BF2491C
void __cdecl boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *const this)
{
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(this);
  operator delete(this, 0x68uLL);
};

// Line 340: range 000000000C7E411C-000000000C7E4146
void __cdecl boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::invalid_argument> *const this)
{
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000C7E407C-000000000C7E4111
void __cdecl boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::invalid_argument> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::invalid_argument> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)this);
};

// Line 340: range 000000000BF82F38-000000000BF82FCD
void __cdecl boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::length_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::length_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  std::length_error::~length_error((std::length_error *)this);
};

// Line 340: range 000000000BF82FD8-000000000BF83002
void __cdecl boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::length_error> *const this)
{
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 340: range 000000000BF21362-000000000BF213F7
void __cdecl boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::runtime_error> *const this)
{
  __int64 *v1; // rdx
  int (**v2)(...); // rdx

  v1 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  boost::exception::~exception(&this->boost::exception);
  std::runtime_error::~runtime_error((std::runtime_error *)this);
};

// Line 340: range 000000000BF21402-000000000BF2142C
void __cdecl boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(
        boost::exception_detail::error_info_injector<std::runtime_error> *const this)
{
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(this);
  operator delete(this, 0x38uLL);
};

// Line 380: range 000000000BF20E64-000000000BF20E8C
boost::exception_detail::enable_error_info_return_type<boost::asio::bad_executor>::type *__cdecl boost::enable_error_info<boost::asio::bad_executor>(
        boost::exception_detail::enable_error_info_return_type<boost::asio::bad_executor>::type *retstr,
        const boost::asio::bad_executor *x)
{
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF206EC-000000000BF20714
boost::exception_detail::enable_error_info_return_type<boost::asio::service_already_exists>::type *__cdecl boost::enable_error_info<boost::asio::service_already_exists>(
        boost::exception_detail::enable_error_info_return_type<boost::asio::service_already_exists>::type *retstr,
        const boost::asio::service_already_exists *x)
{
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000CB8027C-000000000CB802A4
boost::exception_detail::enable_error_info_return_type<boost::bad_function_call>::type *__cdecl boost::enable_error_info<boost::bad_function_call>(
        boost::exception_detail::enable_error_info_return_type<boost::bad_function_call>::type *retstr,
        const boost::bad_function_call *x)
{
  boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF255A7-000000000BF255CF
boost::exception_detail::enable_error_info_return_type<boost::condition_error>::type *__cdecl boost::enable_error_info<boost::condition_error>(
        boost::exception_detail::enable_error_info_return_type<boost::condition_error>::type *retstr,
        const boost::condition_error *x)
{
  boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF21BCC-000000000BF21BF4
boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_day_of_month>::type *__cdecl boost::enable_error_info<boost::gregorian::bad_day_of_month>(
        boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_day_of_month>::type *retstr,
        const boost::gregorian::bad_day_of_month *x)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF3B276-000000000BF3B29E
boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_month>::type *__cdecl boost::enable_error_info<boost::gregorian::bad_month>(
        boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_month>::type *retstr,
        const boost::gregorian::bad_month *x)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF3AE1D-000000000BF3AE45
boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_year>::type *__cdecl boost::enable_error_info<boost::gregorian::bad_year>(
        boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_year>::type *retstr,
        const boost::gregorian::bad_year *x)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF24C82-000000000BF24CAA
boost::exception_detail::enable_error_info_return_type<boost::lock_error>::type *__cdecl boost::enable_error_info<boost::lock_error>(
        boost::exception_detail::enable_error_info_return_type<boost::lock_error>::type *retstr,
        const boost::lock_error *x)
{
  boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF1B144-000000000BF1B16C
boost::exception_detail::enable_error_info_return_type<boost::system::system_error>::type *__cdecl boost::enable_error_info<boost::system::system_error>(
        boost::exception_detail::enable_error_info_return_type<boost::system::system_error>::type *retstr,
        const boost::system::system_error *x)
{
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF24829-000000000BF24851
boost::exception_detail::enable_error_info_return_type<boost::thread_resource_error>::type *__cdecl boost::enable_error_info<boost::thread_resource_error>(
        boost::exception_detail::enable_error_info_return_type<boost::thread_resource_error>::type *retstr,
        const boost::thread_resource_error *x)
{
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000C7E4052-000000000C7E407A
boost::exception_detail::enable_error_info_return_type<std::invalid_argument>::type *__cdecl boost::enable_error_info<std::invalid_argument>(
        boost::exception_detail::enable_error_info_return_type<std::invalid_argument>::type *retstr,
        const std::invalid_argument *x)
{
  boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF82F0E-000000000BF82F36
boost::exception_detail::enable_error_info_return_type<std::length_error>::type *__cdecl boost::enable_error_info<std::length_error>(
        boost::exception_detail::enable_error_info_return_type<std::length_error>::type *retstr,
        const std::length_error *x)
{
  boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 380: range 000000000BF21338-000000000BF21360
boost::exception_detail::enable_error_info_return_type<std::runtime_error>::type *__cdecl boost::enable_error_info<std::runtime_error>(
        boost::exception_detail::enable_error_info_return_type<std::runtime_error>::type *retstr,
        const std::runtime_error *x)
{
  boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(retstr, x);
  return retstr;
};

// Line 393: range 000000000BF18FAC-000000000BF18FED
void __cdecl boost::exception_detail::clone_base::clone_base(boost::exception_detail::clone_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::clone_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_clone_base = v1;
};

// Line 393: range 000000000BF0CB0C-000000000BF0CB51
void __cdecl boost::exception_detail::clone_base::clone_base(
        boost::exception_detail::clone_base *const this,
        const boost::exception_detail::clone_base *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'boost::exception_detail::clone_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_clone_base = v2;
};

// Line 393: range 000000000BF18FEE-000000000BF19113
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this,
        const boost::exception_detail::bad_alloc_ *x)
{
  int (**v2)(...); // rdx
  char *v3; // rdx
  _QWORD *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::bad_alloc_::bad_alloc_(this, x);
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v3;
  v4 = this->gap30;
  v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v4 = (_QWORD *)__asan_report_store8();
  *v4 = v5;
  boost::exception_detail::copy_boost_exception(this, x);
};

// Line 395: range 000000000BF0F18F-000000000BF0F20F
boost::wrapexcept<boost::system::system_error> *__cdecl boost::exception_detail::enable_both<boost::system::system_error>(
        boost::wrapexcept<boost::system::system_error> *retstr,
        const boost::system::system_error *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::system::system_error>::type v3; // [rsp+10h] [rbp-80h] BYREF

  boost::enable_error_info<boost::system::system_error>(&v3, x);
  boost::wrapexcept<boost::system::system_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 401: range 000000000BEDFC84-000000000BEDFCC5
void __cdecl boost::exception_detail::clone_base::~clone_base(boost::exception_detail::clone_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::exception_detail::clone_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_clone_base = v1;
};

// Line 401: range 000000000BEDFCC6-000000000BEDFCF0
void __cdecl boost::exception_detail::clone_base::~clone_base(boost::exception_detail::clone_base *const this)
{
  boost::exception_detail::clone_base::~clone_base(this);
  operator delete(this, 8uLL);
};

// Line 403: range 000000000BEDFCF1-000000000BEDFFC9
void __cdecl boost::exception_detail::copy_boost_exception(boost::exception *a, const boost::exception *b)
{
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  void (__fastcall **v5)(boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *, boost::exception_detail::error_info_container *); // rax
  const char *throw_file; // rdx
  int throw_line; // ecx
  const char *throw_function; // rdx
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> v9; // [rsp+10h] [rbp-70h] BYREF
  boost::exception_detail::error_info_container *d; // [rsp+18h] [rbp-68h]
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *)v3;
  }
  v2->px_ = (boost::exception_detail::error_info_container *)1102416563;
  v2[1].px_ = (boost::exception_detail::error_info_container *)"1 32 8 8 data:410";
  v2[2].px_ = (boost::exception_detail::error_info_container *)boost::exception_detail::copy_boost_exception;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr(v2 + 4);
  d = boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::get(&b->data_);
  if ( d )
  {
    if ( *(_BYTE *)(((unsigned __int64)d >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (void (__fastcall **)(boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container> *, boost::exception_detail::error_info_container *))(d->_vptr_error_info_container + 5);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v5)(&v9, d);
    boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::operator=(v2 + 4, &v9);
    boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::~refcount_ptr(&v9);
  }
  if ( *(_BYTE *)(((unsigned __int64)&b->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  throw_file = b->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&a->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  a->throw_file_ = throw_file;
  if ( *(_BYTE *)(((unsigned __int64)&b->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&b->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&b->throw_line_);
  }
  throw_line = b->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&a->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&a->throw_line_);
  }
  a->throw_line_ = throw_line;
  if ( *(_BYTE *)(((unsigned __int64)&b->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  throw_function = b->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&a->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  a->throw_function_ = throw_function;
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::operator=(&a->data_, v2 + 4);
  boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::~refcount_ptr(v2 + 4);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->px_ = (boost::exception_detail::error_info_container *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 428: range 000000000BF0CC58-000000000BF0CDB6
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  int (**v3)(...); // rax
  int (**v4)(...); // rdx
  char *v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)this->gap30;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = a2->_vptr_exception - 3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)((char *)a2 + (_QWORD)*v3));
  boost::exception_detail::bad_alloc_::bad_alloc_(this, a2);
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v5;
  v6 = this->gap30;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_store8();
  *v6 = v7;
};

// Line 428: range 000000000BF0D284-000000000BF0D3E2
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  int (**v3)(...); // rax
  int (**v4)(...); // rdx
  char *v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)this->gap30;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = a2->_vptr_exception - 3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)((char *)a2 + (_QWORD)*v3));
  boost::exception_detail::bad_exception_::bad_exception_(this, a2);
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
                     + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v5;
  v6 = this->gap30;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_store8();
  *v6 = v7;
};

// Line 428: range 000000000BF5201E-000000000BF5217C
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  _QWORD *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)this->gap30;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)&a2->boost::asio::bad_executor - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)((char *)&a2->boost::asio::bad_executor + *(_QWORD *)v3));
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = this->gap30;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_store8();
  *v6 = v7;
};

// Line 428: range 000000000BF52556-000000000BF526B4
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF522CA-000000000BF52428
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF51362-000000000BF514C0
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::condition_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::condition_error>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::condition_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::condition_error> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::condition_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF51B06-000000000BF51C64
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF50BF2-000000000BF50D50
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF50E7E-000000000BF50FDC
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF515EE-000000000BF5174C
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::lock_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::lock_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::lock_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF527E2-000000000BF52940
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::system::system_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::system::system_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::system::system_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF5187A-000000000BF519D8
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::thread_resource_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::thread_resource_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::thread_resource_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000CBDF960-000000000CBDFABE
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<std::invalid_argument> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<std::invalid_argument>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<std::invalid_argument> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BFB08D4-000000000BFB0A32
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<std::length_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<std::length_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<std::length_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000CBDFB30-000000000CBDFC8E
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<std::out_of_range> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<std::out_of_range> + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<std::out_of_range> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<std::out_of_range> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 428: range 000000000BF51D92-000000000BF51EF0
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<std::runtime_error> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<std::runtime_error>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<std::runtime_error> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<std::runtime_error> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};

// Line 433: range 000000000BF5A628-000000000BF5A74D
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_tag a3)
{
  int (**v3)(...); // rdx
  char *v4; // rdx
  _QWORD *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::bad_alloc_::bad_alloc_(this, x);
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v4;
  v5 = this->gap30;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v5 = (_QWORD *)__asan_report_store8();
  *v5 = v6;
  boost::exception_detail::copy_boost_exception(this, x);
};

// Line 433: range 000000000BF5A502-000000000BF5A627
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_tag a3)
{
  int (**v3)(...); // rdx
  char *v4; // rdx
  _QWORD *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::bad_exception_::bad_exception_(this, x);
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
                     + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v4;
  v5 = this->gap30;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v5 = (_QWORD *)__asan_report_store8();
  *v5 = v6;
  boost::exception_detail::copy_boost_exception(this, x);
};

// Line 433: range 000000000BF5AD34-000000000BF5AE61
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  _QWORD *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = this->gap30;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v5 = (_QWORD *)__asan_report_store8();
  *v5 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5AF90-000000000BF5B0BD
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
  + 7);
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5AE62-000000000BF5AF8F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
  + 7);
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5A74E-000000000BF5A87B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::condition_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::condition_error>
  + 13);
  boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::condition_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::condition_error> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::condition_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5AAD8-000000000BF5AC05
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
  + 7);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5A2A6-000000000BF5A3D3
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
  + 7);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5A3D4-000000000BF5A501
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
  + 7);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5A87C-000000000BF5A9A9
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::lock_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::lock_error>
  + 13);
  boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::lock_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::lock_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5B0BE-000000000BF5B1EB
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::system::system_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::system::system_error>
  + 13);
  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::system::system_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::system::system_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5A9AA-000000000BF5AAD7
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::thread_resource_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
  + 13);
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::thread_resource_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::thread_resource_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000CBE20EE-000000000CBE221B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<std::invalid_argument> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::invalid_argument>
  + 7);
  boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<std::invalid_argument> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BFB1B86-000000000BFB1CB3
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<std::length_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::length_error>
  + 7);
  boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<std::length_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<std::length_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000CBE221C-000000000CBE2349
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<std::out_of_range> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::out_of_range>
  + 7);
  boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<std::out_of_range> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<std::out_of_range> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 433: range 000000000BF5AC06-000000000BF5AD33
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<std::runtime_error> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::runtime_error>
  + 7);
  boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<std::runtime_error> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<std::runtime_error> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF193B8-000000000BF194DD
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this,
        const boost::exception_detail::bad_exception_ *x)
{
  int (**v2)(...); // rdx
  char *v3; // rdx
  _QWORD *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::bad_exception_::bad_exception_(this, x);
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
                     + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v3;
  v4 = this->gap30;
  v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v4 = (_QWORD *)__asan_report_store8();
  *v4 = v5;
  boost::exception_detail::copy_boost_exception(this, x);
};

// Line 442: range 000000000BF2B80E-000000000BF2B986
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::asio::bad_executor> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)&this->boost::asio::bad_executor - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2B09A-000000000BF2B212
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2B3E0-000000000BF2B558
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000CB937F8-000000000CB93970
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::bad_function_call> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2E69E-000000000BF2E816
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::condition_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2C00C-000000000BF2C184
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF40394-000000000BF4050C
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF4004E-000000000BF401C6
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2DEAA-000000000BF2E022
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::lock_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF274F6-000000000BF2766E
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::system::system_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::system::system_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2DB64-000000000BF2DCDC
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<boost::thread_resource_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000C8B5C08-000000000C8B5D80
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<std::invalid_argument> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<std::invalid_argument>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF88D88-000000000BF88F00
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<std::length_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<std::length_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000C8B58C2-000000000C8B5A3A
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<std::out_of_range> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 442: range 000000000BF2BAFA-000000000BF2BC72
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this,
        const void **const __vtt_parm,
        const boost::exception_detail::error_info_injector<std::runtime_error> *x)
{
  const void *v3; // rdx
  int (**v4)(...); // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx

  boost::exception_detail::error_info_injector<std::runtime_error>::error_info_injector(this, x);
  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)this + *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __vtt_parm[1];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v7;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 448: range 000000000BF191E4-000000000BF191E8
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)(a1 - 40));
};

// Line 448: range 000000000BF19225-000000000BF19229
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)(a1 - 40));
};

// Line 448: range 000000000BF195AE-000000000BF195B2
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)(a1 - 40));
};

// Line 448: range 000000000BF195EF-000000000BF195F3
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)(a1 - 40));
};

// Line 448: range 000000000BF212E8-000000000BF212EC
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)(a1 - 8));
};

// Line 448: range 000000000BF21329-000000000BF2132D
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)(a1 - 8));
};

// Line 448: range 000000000BF206DD-000000000BF206E1
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)(a1 - 16));
};

// Line 448: range 000000000BF2069C-000000000BF206A0
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)(a1 - 16));
};

// Line 448: range 000000000BF20BB1-000000000BF20BB5
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)(a1 - 16));
};

// Line 448: range 000000000BF20B70-000000000BF20B74
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)(a1 - 16));
};

// Line 448: range 000000000BF25A6B-000000000BF25A6F
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF25A2A-000000000BF25A2E
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF22050-000000000BF22054
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)(a1 - 16));
};

// Line 448: range 000000000BF22091-000000000BF22095
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)(a1 - 16));
};

// Line 448: range 000000000BF3B6C1-000000000BF3B6C5
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)(a1 - 16));
};

// Line 448: range 000000000BF3B680-000000000BF3B684
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)(a1 - 16));
};

// Line 448: range 000000000BF3B267-000000000BF3B26B
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)(a1 - 16));
};

// Line 448: range 000000000BF3B226-000000000BF3B22A
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)(a1 - 16));
};

// Line 448: range 000000000BF250CD-000000000BF250D1
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF2508C-000000000BF25090
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF1B54E-000000000BF1B552
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF1B58F-000000000BF1B593
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF24C73-000000000BF24C77
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)(a1 - 64));
};

// Line 448: range 000000000BF24C32-000000000BF24C36
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)(a1 - 64));
};

// Line 448: range 000000000C7E449D-000000000C7E44A1
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)(a1 - 16));
};

// Line 448: range 000000000C7E445C-000000000C7E4460
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)(a1 - 16));
};

// Line 448: range 000000000BF83318-000000000BF8331C
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)(a1 - 16));
};

// Line 448: range 000000000BF83359-000000000BF8335D
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)(a1 - 16));
};

// Line 448: range 000000000BF21742-000000000BF21746
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)(a1 - 16));
};

// Line 448: range 000000000BF21783-000000000BF21787
void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        __int64 a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)(a1 - 16));
};

// Line 448: range 000000000BF191ED-000000000BF191F4
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF1922B-000000000BF19232
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF195B7-000000000BF195BE
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF195F5-000000000BF195FC
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF212F1-000000000BF212F8
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF2132F-000000000BF21336
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF206E3-000000000BF206EA
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF206A5-000000000BF206AC
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF20B79-000000000BF20B80
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF20BB7-000000000BF20BBE
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF25A33-000000000BF25A3A
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF25A71-000000000BF25A78
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF22097-000000000BF2209E
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF22059-000000000BF22060
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF3B689-000000000BF3B690
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF3B6C7-000000000BF3B6CE
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF3B26D-000000000BF3B274
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF3B22F-000000000BF3B236
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF250D3-000000000BF250DA
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF25095-000000000BF2509C
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF1B595-000000000BF1B59C
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF1B557-000000000BF1B55E
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF24C79-000000000BF24C80
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF24C3B-000000000BF24C42
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000C7E44A3-000000000C7E44AA
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000C7E4465-000000000C7E446C
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF8335F-000000000BF83366
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF83321-000000000BF83328
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF2174B-000000000BF21752
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF21789-000000000BF21790
void __fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl((boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 448: range 000000000BF191FA-000000000BF19224
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(this);
  operator delete(this, 0x38uLL);
};

// Line 448: range 000000000BF19114-000000000BF191E3
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this)
{
  int (**v1)(...); // rdx
  char *v2; // rdx
  _QWORD *v3; // rax
  char *v4; // rcx

  v1 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
  v3 = this->gap30;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v3 = (_QWORD *)__asan_report_store8();
  *v3 = v4;
  boost::exception_detail::bad_alloc_::~bad_alloc_(this);
  boost::exception_detail::clone_base::~clone_base((boost::exception_detail::clone_base *const)this->gap30);
};

// Line 448: range 000000000BF194DE-000000000BF195AD
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this)
{
  int (**v1)(...); // rdx
  char *v2; // rdx
  _QWORD *v3; // rax
  char *v4; // rcx

  v1 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>
                     + 24);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v1;
  v2 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 72;
  if ( *(_BYTE *)(((unsigned __int64)this->baseclass_1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_1 = v2;
  v3 = this->gap30;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v3 = (_QWORD *)__asan_report_store8();
  *v3 = v4;
  boost::exception_detail::bad_exception_::~bad_exception_(this);
  boost::exception_detail::clone_base::~clone_base((boost::exception_detail::clone_base *const)this->gap30);
};

// Line 448: range 000000000BF195C4-000000000BF195EE
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl(this);
  operator delete(this, 0x38uLL);
};

// Line 448: range 000000000BF212FE-000000000BF21328
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(this);
  operator delete(this, 0x38uLL);
};

// Line 448: range 000000000BF21218-000000000BF212E7
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  _QWORD *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = this->gap30;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v3 = (_QWORD *)__asan_report_store8();
  *v3 = v4;
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base((boost::exception_detail::clone_base *const)this->gap30);
};

// Line 448: range 000000000BF210E8-000000000BF21217
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)&this->boost::asio::bad_executor - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(this);
};

// Line 448: range 000000000BF205CC-000000000BF2069B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
  + 7);
};

// Line 448: range 000000000BF206B2-000000000BF206DC
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF2049C-000000000BF205CB
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(this);
};

// Line 448: range 000000000BF20B86-000000000BF20BB0
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF20AA0-000000000BF20B6F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
  + 7);
};

// Line 448: range 000000000BF20970-000000000BF20A9F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(this);
};

// Line 448: range 000000000CB803B4-000000000CB804E3
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(this);
};

// Line 448: range 000000000BF2595A-000000000BF25A29
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::condition_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::condition_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::condition_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::condition_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::condition_error>
  + 13);
};

// Line 448: range 000000000BF25A40-000000000BF25A6A
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(this);
  operator delete(this, 0x70uLL);
};

// Line 448: range 000000000BF2582A-000000000BF25959
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(this);
};

// Line 448: range 000000000BF21F80-000000000BF2204F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
  + 7);
};

// Line 448: range 000000000BF22066-000000000BF22090
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF21E50-000000000BF21F7F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(this);
};

// Line 448: range 000000000BF3B696-000000000BF3B6C0
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF3B5B0-000000000BF3B67F
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
  + 7);
};

// Line 448: range 000000000BF3B480-000000000BF3B5AF
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(this);
};

// Line 448: range 000000000BF3B156-000000000BF3B225
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
  + 7);
};

// Line 448: range 000000000BF3B23C-000000000BF3B266
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF3B026-000000000BF3B155
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(this);
};

// Line 448: range 000000000BF250A2-000000000BF250CC
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(this);
  operator delete(this, 0x70uLL);
};

// Line 448: range 000000000BF24FBC-000000000BF2508B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::lock_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::lock_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::lock_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::lock_error>
  + 13);
};

// Line 448: range 000000000BF24E8C-000000000BF24FBB
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(this);
};

// Line 448: range 000000000BF1B47E-000000000BF1B54D
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::system::system_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::system::system_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::system::system_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::system::system_error>
  + 13);
};

// Line 448: range 000000000BF1B564-000000000BF1B58E
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(this);
  operator delete(this, 0x70uLL);
};

// Line 448: range 000000000BF1B34E-000000000BF1B47D
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector(this);
};

// Line 448: range 000000000BF24B62-000000000BF24C31
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::thread_resource_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::thread_resource_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::thread_resource_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
  + 13);
};

// Line 448: range 000000000BF24C48-000000000BF24C72
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(this);
  operator delete(this, 0x70uLL);
};

// Line 448: range 000000000BF24A32-000000000BF24B61
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(this);
};

// Line 448: range 000000000C7E438C-000000000C7E445B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::invalid_argument> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::invalid_argument> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::invalid_argument>
  + 7);
};

// Line 448: range 000000000C7E4472-000000000C7E449C
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000C7E425C-000000000C7E438B
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector(this);
};

// Line 448: range 000000000BF8332E-000000000BF83358
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF83248-000000000BF83317
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::length_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::length_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::length_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::length_error>
  + 7);
};

// Line 448: range 000000000BF83118-000000000BF83247
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(this);
};

// Line 448: range 000000000C7E3F22-000000000C7E4051
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<std::out_of_range>::~error_info_injector(this);
};

// Line 448: range 000000000BF21672-000000000BF21741
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::runtime_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::runtime_error> + 1;
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::runtime_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(this);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::runtime_error>
  + 7);
};

// Line 448: range 000000000BF21758-000000000BF21782
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(this);
  operator delete(this, 0x40uLL);
};

// Line 448: range 000000000BF21542-000000000BF21671
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this,
        const void **const __vtt_parm)
{
  const void *v2; // rdx
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__vtt_parm >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *__vtt_parm;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = *(_QWORD *)this->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)this + *(_QWORD *)v4;
  if ( *(_BYTE *)(((unsigned __int64)(__vtt_parm + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = __vtt_parm[1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  *(_QWORD *)v5 = v6;
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(this);
};

// Line 455: range 000000000BF51229-000000000BF51230
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF510FD-000000000BF51104
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF52011-000000000BF52018
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF52549-000000000BF52550
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF522BD-000000000BF522C4
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF51355-000000000BF5135C
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF51AF9-000000000BF51B00
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF50BE5-000000000BF50BEC
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF50E71-000000000BF50E78
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF515E1-000000000BF515E8
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF527D5-000000000BF527DC
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF5186D-000000000BF51874
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000CBDF954-000000000CBDF95B
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BFB08C7-000000000BFB08CE
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF51D85-000000000BF51D8C
const boost::exception_detail::clone_base *__fastcall `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(
        _QWORD *a1)
{
  return boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 24LL)));
};

// Line 455: range 000000000BF5117A-000000000BF51228
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *)operator new(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(v1, this, v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(v1->_vptr_exception - 3);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)((char *)v1 + *(_QWORD *)v3);
};

// Line 455: range 000000000BF5104E-000000000BF510FC
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *)operator new(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(v1, this, v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(v1->_vptr_exception - 3);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)((char *)v1 + *(_QWORD *)v3);
};

// Line 455: range 000000000BF51F62-000000000BF52010
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *)operator new(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)&v1->boost::asio::bad_executor - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)((char *)&v1->boost::asio::bad_executor + *(_QWORD *)v3);
};

// Line 455: range 000000000BF5249A-000000000BF52548
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF5220E-000000000BF522BC
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF512A6-000000000BF51354
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *)operator new(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF51A4A-000000000BF51AF8
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF50B36-000000000BF50BE4
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF50DC2-000000000BF50E70
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF51532-000000000BF515E0
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *)operator new(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF52726-000000000BF527D4
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *)operator new(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF517BE-000000000BF5186C
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *)operator new(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000CBDF7DC-000000000CBDF953
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *v4; // r12
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_tag v5; // dl
  unsigned __int64 v6; // rax
  const boost::exception_detail::clone_base *result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  v4 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *)operator new(0x40uLL);
  v5.gap0[0] = v1 + 32;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v1 + 32);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    v4,
    this,
    v5);
  if ( v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = *(_QWORD *)v4->baseclass_0 - 24LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = (const boost::exception_detail::clone_base *)&v4->baseclass_0[*(_QWORD *)v6];
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 455: range 000000000BFB0818-000000000BFB08C6
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000BF51CD6-000000000BF51D84
const boost::exception_detail::clone_base *__cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *v1; // rbx
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> >::clone_tag v2; // dl
  unsigned __int64 v3; // rax

  v1 = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *)operator new(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    v1,
    this,
    v2);
  if ( !v1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v1->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const boost::exception_detail::clone_base *)&v1->baseclass_0[*(_QWORD *)v3];
};

// Line 455: range 000000000C241BCC-000000000C2423C6
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this)
{
  unsigned __int64 v1; // r12
  std::runtime_error *v2; // r13
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  char v10; // al
  boost::exception *v11; // r15
  unsigned __int64 p_data; // rbp
  boost::exception_detail::error_info_container *v13; // rsi
  struct _Unwind_Exception *v14; // rax
  struct _Unwind_Exception *v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v19; // al
  char v20; // al
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  double v24; // xmm0_8
  struct _Unwind_Exception *v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  struct _Unwind_Exception *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+18h] [rbp-90h]
  unsigned __int64 v32; // [rsp+28h] [rbp-80h] BYREF
  char v33[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone;
  v31 = v4 >> 3;
  *(_DWORD *)(v31 + 2147450880) = -235802127;
  *(_DWORD *)(v31 + 2147450884) = -202116352;
  v5 = operator new(0x40uLL);
  if ( *(_BYTE *)(((v5 + 56) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)(v5 + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = v5;
  v2 = (std::runtime_error *)v5;
  std::runtime_error::runtime_error((std::runtime_error *)v5, (const std::runtime_error *)this);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  *(_QWORD *)v5 = &`vtable for'boost::bad_function_call + 2;
  if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *(_QWORD *)(v5 + 16) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  *(_QWORD *)(v5 + 24) = px;
  if ( !px )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_20;
  }
LABEL_19:
  __asan_report_load8();
LABEL_20:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_39;
  }
  p_throw_function = (void *)(v1 + 32);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  *(_QWORD *)(v1 + 32) = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
    goto LABEL_41;
  }
  p_throw_function = (void *)(v1 + 40);
  if ( *(_BYTE *)(((v1 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
LABEL_42:
    __asan_report_load4(p_throw_function);
LABEL_43:
    __asan_report_store4(p_throw_function);
    goto LABEL_44;
  }
  *(_QWORD *)(v1 + 40) = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_42;
  p_throw_function = (void *)(v1 + 48);
  v10 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_43;
  *(_DWORD *)(v1 + 48) = this->throw_line_;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  *(_QWORD *)v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 2;
  if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  *(_QWORD *)(v1 + 16) = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 7;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  *(_QWORD *)v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                + 24;
  if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  *(_QWORD *)(v5 + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                       + 80;
  if ( *(_BYTE *)(((v5 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  *(_QWORD *)(v5 + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                       + 136;
  v11 = &this->boost::exception;
  v2 = (std::runtime_error *)(v5 + 16);
  *(_QWORD *)(v4 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8();
    v15 = v14;
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v1 = &`vtable for'boost::bad_function_call + 2;
    std::runtime_error::~runtime_error(v2);
    goto LABEL_52;
  }
  v13 = v11->data_.px_;
  if ( !v13 )
    goto LABEL_71;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v13->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v13->_vptr_error_info_container + 5))(&v32);
    goto LABEL_55;
  }
  __asan_report_load8();
LABEL_55:
  p_data = v32;
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_61;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
    goto LABEL_61;
  }
  __asan_report_load8();
LABEL_61:
  *(_QWORD *)(v4 + 32) = p_data;
  if ( !p_data )
    goto LABEL_67;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_67;
  }
  __asan_report_load8();
LABEL_67:
  if ( !v32 )
    goto LABEL_71;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_85;
  }
  v17 = *(_QWORD *)v32 + 32LL;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    p_throw_file = v17;
    __asan_report_load8();
    goto LABEL_86;
  }
  (*(void (**)(void))(*(_QWORD *)v32 + 32LL))();
LABEL_71:
  p_throw_file = (unsigned __int64)&v11->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
  p_throw_file = v5 + 40;
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
LABEL_88:
    __asan_report_load4(p_throw_file);
LABEL_89:
    __asan_report_store4(p_throw_file);
    goto LABEL_90;
  }
  *(_QWORD *)(v5 + 40) = v11->throw_file_;
  p_throw_file = (unsigned __int64)&v11->throw_line_;
  v19 = *(_BYTE *)(((unsigned __int64)&v11->throw_line_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_88;
  p_throw_file = v5 + 48;
  v20 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_89;
  *(_DWORD *)(v5 + 48) = v11->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8();
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_store8();
    goto LABEL_92;
  }
  *(_QWORD *)(v5 + 32) = v11->throw_function_;
  p_data = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8();
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v21 = *(_QWORD *)(v5 + 24);
  if ( !v21 )
    goto LABEL_95;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_93;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v21 + 32LL))();
    goto LABEL_95;
  }
LABEL_94:
  __asan_report_load8();
LABEL_95:
  *(_QWORD *)(v5 + 24) = p_data;
  if ( !p_data )
    goto LABEL_101;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_101;
  }
  __asan_report_load8();
LABEL_101:
  v22 = *(_QWORD *)(v4 + 32);
  if ( !v22 )
    goto LABEL_105;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v22 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v24 = __asan_report_load8();
    v15 = v25;
    v26 = (__int64 *)v32;
    if ( v32 )
    {
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8();
      v27 = *v26;
      if ( *(_BYTE *)(((unsigned __int64)(*v26 + 32) >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v27 + 32))(v24);
    }
    while ( 1 )
    {
      v28 = *(_QWORD *)(v4 + 32);
      if ( !v28 )
        goto LABEL_125;
      if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        break;
      v24 = __asan_report_load8();
      v15 = v29;
    }
    v30 = *(_QWORD *)v28;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v28 + 32LL) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v30 + 32))(v24);
LABEL_125:
    boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector((boost::exception_detail::error_info_injector<boost::bad_function_call> *const)v1);
LABEL_52:
    operator delete((void *)v5, 0x40uLL);
    __asan_handle_no_return(v5);
    _Unwind_Resume(v15);
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 32LL))();
LABEL_105:
  if ( !v5 )
    goto LABEL_109;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_127;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v5 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_load8();
    goto LABEL_128;
  }
  v5 += *(_QWORD *)(*(_QWORD *)v5 - 24LL);
LABEL_109:
  if ( v33 != (char *)v4 )
  {
LABEL_128:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v5;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v5;
};

// Line 455: range 000000000C2C3B1E-000000000C2C4315
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> > *const this)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> *v1; // r12
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v6; // rax
  void *p_throw_function; // rdi
  char v8; // al
  char v9; // al
  boost::exception *v10; // r15
  unsigned __int64 p_data; // rbp
  boost::exception_detail::error_info_container *v12; // rsi
  struct _Unwind_Exception *v13; // rax
  struct _Unwind_Exception *v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  double v23; // xmm0_8
  struct _Unwind_Exception *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  struct _Unwind_Exception *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+18h] [rbp-90h]
  unsigned __int64 v31; // [rsp+28h] [rbp-80h] BYREF
  char v32[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v3 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>::clone;
  v30 = v3 >> 3;
  *(_DWORD *)(v30 + 2147450880) = -235802127;
  *(_DWORD *)(v30 + 2147450884) = -202116352;
  v4 = operator new(0x40uLL);
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)(v4 + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> *)v4;
  std::logic_error::logic_error((std::logic_error *)v4, (const std::logic_error *)this);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  *(_QWORD *)v4 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *(_QWORD *)(v4 + 16) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  *(_QWORD *)(v4 + 24) = px;
  if ( !px )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_20;
  }
LABEL_19:
  __asan_report_load8();
LABEL_20:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_39;
  }
  p_throw_function = &v1->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  v1->throw_function_ = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
    goto LABEL_41;
  }
  p_throw_function = &v1->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
LABEL_42:
    __asan_report_load4(p_throw_function);
LABEL_43:
    __asan_report_store4(p_throw_function);
    goto LABEL_44;
  }
  v1->throw_file_ = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_42;
  p_throw_function = &v1->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&v1->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_43;
  v1->throw_line_ = this->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  *(_QWORD *)v1->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                             + 2;
  if ( *(_BYTE *)(((unsigned __int64)&v1->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  v1->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                      + 7);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  *(_QWORD *)v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                + 24;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  *(_QWORD *)(v4 + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                       + 80;
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  *(_QWORD *)(v4 + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                       + 136;
  v10 = &this->boost::exception;
  *(_QWORD *)(v3 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8();
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v1->baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)v1);
    goto LABEL_52;
  }
  v12 = v10->data_.px_;
  if ( !v12 )
    goto LABEL_71;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v12->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v12->_vptr_error_info_container + 5))(&v31);
    goto LABEL_55;
  }
  __asan_report_load8();
LABEL_55:
  p_data = v31;
  v15 = *(_QWORD *)(v3 + 32);
  if ( !v15 )
    goto LABEL_61;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v15 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v15 + 32LL))();
    goto LABEL_61;
  }
  __asan_report_load8();
LABEL_61:
  *(_QWORD *)(v3 + 32) = p_data;
  if ( !p_data )
    goto LABEL_67;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_67;
  }
  __asan_report_load8();
LABEL_67:
  if ( !v31 )
    goto LABEL_71;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_85;
  }
  v16 = *(_QWORD *)v31 + 32LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    p_throw_file = v16;
    __asan_report_load8();
    goto LABEL_86;
  }
  (*(void (**)(void))(*(_QWORD *)v31 + 32LL))();
LABEL_71:
  p_throw_file = (unsigned __int64)&v10->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
  p_throw_file = v4 + 40;
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
LABEL_88:
    __asan_report_load4(p_throw_file);
LABEL_89:
    __asan_report_store4(p_throw_file);
    goto LABEL_90;
  }
  *(_QWORD *)(v4 + 40) = v10->throw_file_;
  p_throw_file = (unsigned __int64)&v10->throw_line_;
  v18 = *(_BYTE *)(((unsigned __int64)&v10->throw_line_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_88;
  p_throw_file = v4 + 48;
  v19 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_89;
  *(_DWORD *)(v4 + 48) = v10->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8();
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_store8();
    goto LABEL_92;
  }
  *(_QWORD *)(v4 + 32) = v10->throw_function_;
  p_data = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8();
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v20 = *(_QWORD *)(v4 + 24);
  if ( !v20 )
    goto LABEL_95;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_93;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v20 + 32LL))();
    goto LABEL_95;
  }
LABEL_94:
  __asan_report_load8();
LABEL_95:
  *(_QWORD *)(v4 + 24) = p_data;
  if ( !p_data )
    goto LABEL_101;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_101;
  }
  __asan_report_load8();
LABEL_101:
  v21 = *(_QWORD *)(v3 + 32);
  if ( !v21 )
    goto LABEL_105;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v23 = __asan_report_load8();
    v14 = v24;
    v25 = (__int64 *)v31;
    if ( v31 )
    {
      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      v26 = *v25;
      if ( *(_BYTE *)(((unsigned __int64)(*v25 + 32) >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v26 + 32))(v23);
    }
    while ( 1 )
    {
      v27 = *(_QWORD *)(v3 + 32);
      if ( !v27 )
        goto LABEL_125;
      if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        break;
      v23 = __asan_report_load8();
      v14 = v28;
    }
    v29 = *(_QWORD *)v27;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v27 + 32LL) >> 3) + 0x7FFF8000) )
      v23 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v29 + 32))(v23);
LABEL_125:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>::~error_info_injector(v1);
LABEL_52:
    operator delete((void *)v4, 0x40uLL);
    __asan_handle_no_return(v4);
    _Unwind_Resume(v14);
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 32LL))();
LABEL_105:
  if ( !v4 )
    goto LABEL_109;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_127;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v4 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_load8();
    goto LABEL_128;
  }
  v4 += *(_QWORD *)(*(_QWORD *)v4 - 24LL);
LABEL_109:
  if ( v32 != (char *)v3 )
  {
LABEL_128:
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v4;
  }
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v4;
};

// Line 455: range 000000000C2C4B60-000000000C2C5357
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> > *const this)
{
  boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> *v1; // r12
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v6; // rax
  void *p_throw_function; // rdi
  char v8; // al
  char v9; // al
  boost::exception *v10; // r15
  unsigned __int64 p_data; // rbp
  boost::exception_detail::error_info_container *v12; // rsi
  struct _Unwind_Exception *v13; // rax
  struct _Unwind_Exception *v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  double v23; // xmm0_8
  struct _Unwind_Exception *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  struct _Unwind_Exception *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+18h] [rbp-90h]
  unsigned __int64 v31; // [rsp+28h] [rbp-80h] BYREF
  char v32[120]; // [rsp+30h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v3 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>::clone;
  v30 = v3 >> 3;
  *(_DWORD *)(v30 + 2147450880) = -235802127;
  *(_DWORD *)(v30 + 2147450884) = -202116352;
  v4 = operator new(0x40uLL);
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)(v4 + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> *)v4;
  std::logic_error::logic_error((std::logic_error *)v4, (const std::logic_error *)this);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  *(_QWORD *)v4 = &`vtable for'boost::gregorian::bad_weekday + 2;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *(_QWORD *)(v4 + 16) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  *(_QWORD *)(v4 + 24) = px;
  if ( !px )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_20;
  }
LABEL_19:
  __asan_report_load8();
LABEL_20:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_39;
  }
  p_throw_function = &v1->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  v1->throw_function_ = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
    goto LABEL_41;
  }
  p_throw_function = &v1->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
LABEL_42:
    __asan_report_load4(p_throw_function);
LABEL_43:
    __asan_report_store4(p_throw_function);
    goto LABEL_44;
  }
  v1->throw_file_ = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_42;
  p_throw_function = &v1->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&v1->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_43;
  v1->throw_line_ = this->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  *(_QWORD *)v1->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                             + 2;
  if ( *(_BYTE *)(((unsigned __int64)&v1->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  v1->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                      + 7);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  *(_QWORD *)v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                + 24;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  *(_QWORD *)(v4 + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                       + 80;
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  *(_QWORD *)(v4 + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                       + 136;
  v10 = &this->boost::exception;
  *(_QWORD *)(v3 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8();
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v1->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)v1);
    goto LABEL_52;
  }
  v12 = v10->data_.px_;
  if ( !v12 )
    goto LABEL_71;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v12->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v12->_vptr_error_info_container + 5))(&v31);
    goto LABEL_55;
  }
  __asan_report_load8();
LABEL_55:
  p_data = v31;
  v15 = *(_QWORD *)(v3 + 32);
  if ( !v15 )
    goto LABEL_61;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v15 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v15 + 32LL))();
    goto LABEL_61;
  }
  __asan_report_load8();
LABEL_61:
  *(_QWORD *)(v3 + 32) = p_data;
  if ( !p_data )
    goto LABEL_67;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_67;
  }
  __asan_report_load8();
LABEL_67:
  if ( !v31 )
    goto LABEL_71;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_85;
  }
  v16 = *(_QWORD *)v31 + 32LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    p_throw_file = v16;
    __asan_report_load8();
    goto LABEL_86;
  }
  (*(void (**)(void))(*(_QWORD *)v31 + 32LL))();
LABEL_71:
  p_throw_file = (unsigned __int64)&v10->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
  p_throw_file = v4 + 40;
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
LABEL_88:
    __asan_report_load4(p_throw_file);
LABEL_89:
    __asan_report_store4(p_throw_file);
    goto LABEL_90;
  }
  *(_QWORD *)(v4 + 40) = v10->throw_file_;
  p_throw_file = (unsigned __int64)&v10->throw_line_;
  v18 = *(_BYTE *)(((unsigned __int64)&v10->throw_line_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_88;
  p_throw_file = v4 + 48;
  v19 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_89;
  *(_DWORD *)(v4 + 48) = v10->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v10->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8();
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_store8();
    goto LABEL_92;
  }
  *(_QWORD *)(v4 + 32) = v10->throw_function_;
  p_data = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8();
LABEL_93:
    __asan_report_load8();
    goto LABEL_94;
  }
  v20 = *(_QWORD *)(v4 + 24);
  if ( !v20 )
    goto LABEL_95;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    goto LABEL_93;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v20 + 32LL))();
    goto LABEL_95;
  }
LABEL_94:
  __asan_report_load8();
LABEL_95:
  *(_QWORD *)(v4 + 24) = p_data;
  if ( !p_data )
    goto LABEL_101;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_101;
  }
  __asan_report_load8();
LABEL_101:
  v21 = *(_QWORD *)(v3 + 32);
  if ( !v21 )
    goto LABEL_105;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v23 = __asan_report_load8();
    v14 = v24;
    v25 = (__int64 *)v31;
    if ( v31 )
    {
      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      v26 = *v25;
      if ( *(_BYTE *)(((unsigned __int64)(*v25 + 32) >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v26 + 32))(v23);
    }
    while ( 1 )
    {
      v27 = *(_QWORD *)(v3 + 32);
      if ( !v27 )
        goto LABEL_125;
      if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        break;
      v23 = __asan_report_load8();
      v14 = v28;
    }
    v29 = *(_QWORD *)v27;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v27 + 32LL) >> 3) + 0x7FFF8000) )
      v23 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v29 + 32))(v23);
LABEL_125:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>::~error_info_injector(v1);
LABEL_52:
    operator delete((void *)v4, 0x40uLL);
    __asan_handle_no_return(v4);
    _Unwind_Resume(v14);
  }
  (*(void (**)(void))(*(_QWORD *)v21 + 32LL))();
LABEL_105:
  if ( !v4 )
    goto LABEL_109;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_127;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v4 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_load8();
    goto LABEL_128;
  }
  v4 += *(_QWORD *)(*(_QWORD *)v4 - 24LL);
LABEL_109:
  if ( v32 != (char *)v3 )
  {
LABEL_128:
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v4;
  }
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v4;
};

// Line 455: range 000000000C2880AA-000000000C288932
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> > *const this)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  std::runtime_error *v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 content; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  boost::exception_detail::error_info_container *px; // rdi
  struct _Unwind_Exception *v11; // rbp
  void *p_throw_function; // rdi
  char v13; // al
  char v14; // al
  boost::exception *v15; // r15
  unsigned __int64 p_data; // rbp
  boost::exception_detail::error_info_container *v17; // rsi
  struct _Unwind_Exception *v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v22; // al
  char v23; // al
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  double v27; // xmm0_8
  struct _Unwind_Exception *v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  struct _Unwind_Exception *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+18h] [rbp-90h]
  unsigned __int64 v35; // [rsp+28h] [rbp-80h] BYREF
  char v36[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v5 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>::clone;
  v34 = v5 >> 3;
  *(_DWORD *)(v34 + 2147450880) = -235802127;
  *(_DWORD *)(v34 + 2147450884) = -202116352;
  v6 = operator new(0x48uLL);
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  *(_QWORD *)(v6 + 64) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = v6;
  v2 = v6;
  v3 = (std::runtime_error *)v6;
  std::runtime_error::runtime_error((std::runtime_error *)v6, (const std::runtime_error *)this);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  *(_QWORD *)v6 = &`vtable for'boost::property_tree::ptree_bad_path + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_path >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  content = (unsigned __int64)this->m_path.content;
  if ( !content )
    goto LABEL_17;
  if ( *(_BYTE *)((content >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)content + 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  v8 = (*(__int64 (**)(void))(*(_QWORD *)content + 24LL))();
LABEL_16:
  content = v8;
LABEL_17:
  if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_26;
  }
  *(_QWORD *)(v2 + 16) = content;
  if ( *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  *(_QWORD *)(v1 + 24) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8();
    goto LABEL_28;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v11 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v2 = &`vtable for'boost::property_tree::ptree_error + 2;
    std::runtime_error::~runtime_error(v3);
    goto LABEL_31;
  }
  *(_QWORD *)(v1 + 32) = px;
  if ( !px )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_34;
  }
  __asan_report_load8();
LABEL_34:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_53;
  }
  p_throw_function = (void *)(v1 + 40);
  if ( *(_BYTE *)(((v1 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  *(_QWORD *)(v1 + 40) = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8();
    goto LABEL_55;
  }
  p_throw_function = (void *)(v1 + 48);
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
LABEL_56:
    __asan_report_load4(p_throw_function);
LABEL_57:
    __asan_report_store4(p_throw_function);
    goto LABEL_58;
  }
  *(_QWORD *)(v1 + 48) = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_56;
  p_throw_function = (void *)(v1 + 56);
  v14 = *(_BYTE *)(((v1 + 56) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_57;
  *(_DWORD *)(v1 + 56) = this->throw_line_;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> + 2;
  if ( *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
    goto LABEL_60;
  }
  *(_QWORD *)(v1 + 24) = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>
                       + 7;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_store8();
    goto LABEL_61;
  }
  *(_QWORD *)v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                + 24;
  if ( *(_BYTE *)(((v6 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_store8();
    goto LABEL_62;
  }
  *(_QWORD *)(v6 + 24) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                       + 80;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8();
    goto LABEL_63;
  }
  *(_QWORD *)(v6 + 64) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                       + 136;
  v15 = &this->boost::exception;
  v2 = v6 + 24;
  *(_QWORD *)(v5 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8();
    v11 = v18;
    boost::property_tree::ptree_bad_path::~ptree_bad_path((boost::property_tree::ptree_bad_path *const)v2);
    goto LABEL_31;
  }
  v17 = v15->data_.px_;
  if ( !v17 )
    goto LABEL_82;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v17->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v17->_vptr_error_info_container + 5))(&v35);
    goto LABEL_66;
  }
  __asan_report_load8();
LABEL_66:
  p_data = v35;
  v19 = *(_QWORD *)(v5 + 32);
  if ( !v19 )
    goto LABEL_72;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v19 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v19 + 32LL))();
    goto LABEL_72;
  }
  __asan_report_load8();
LABEL_72:
  *(_QWORD *)(v5 + 32) = p_data;
  if ( !p_data )
    goto LABEL_78;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_78;
  }
  __asan_report_load8();
LABEL_78:
  if ( !v35 )
    goto LABEL_82;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_96;
  }
  v20 = *(_QWORD *)v35 + 32LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    p_throw_file = v20;
    __asan_report_load8();
    goto LABEL_97;
  }
  (*(void (**)(void))(*(_QWORD *)v35 + 32LL))();
LABEL_82:
  p_throw_file = (unsigned __int64)&v15->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v15->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8();
    goto LABEL_98;
  }
  p_throw_file = v6 + 48;
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
LABEL_99:
    __asan_report_load4(p_throw_file);
LABEL_100:
    __asan_report_store4(p_throw_file);
    goto LABEL_101;
  }
  *(_QWORD *)(v6 + 48) = v15->throw_file_;
  p_throw_file = (unsigned __int64)&v15->throw_line_;
  v22 = *(_BYTE *)(((unsigned __int64)&v15->throw_line_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_99;
  p_throw_file = v6 + 56;
  v23 = *(_BYTE *)(((v6 + 56) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_100;
  *(_DWORD *)(v6 + 56) = v15->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v15->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8();
    goto LABEL_102;
  }
  if ( *(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_store8();
    goto LABEL_103;
  }
  *(_QWORD *)(v6 + 40) = v15->throw_function_;
  p_data = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8();
LABEL_104:
    __asan_report_load8();
    goto LABEL_105;
  }
  v24 = *(_QWORD *)(v6 + 32);
  if ( !v24 )
    goto LABEL_106;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    goto LABEL_104;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v24 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v24 + 32LL))();
    goto LABEL_106;
  }
LABEL_105:
  __asan_report_load8();
LABEL_106:
  *(_QWORD *)(v6 + 32) = p_data;
  if ( !p_data )
    goto LABEL_112;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_112;
  }
  __asan_report_load8();
LABEL_112:
  v25 = *(_QWORD *)(v5 + 32);
  if ( !v25 )
    goto LABEL_116;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_124;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v25 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    v27 = __asan_report_load8();
    v11 = v28;
    v29 = (__int64 *)v35;
    if ( v35 )
    {
      if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8();
      v30 = *v29;
      if ( *(_BYTE *)(((unsigned __int64)(*v29 + 32) >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v30 + 32))(v27);
    }
    while ( 1 )
    {
      v31 = *(_QWORD *)(v5 + 32);
      if ( !v31 )
        goto LABEL_136;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        break;
      v27 = __asan_report_load8();
      v11 = v32;
    }
    v33 = *(_QWORD *)v31;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v31 + 32LL) >> 3) + 0x7FFF8000) )
      v27 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v33 + 32))(v27);
LABEL_136:
    boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::~error_info_injector((boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *const)v1);
LABEL_31:
    operator delete((void *)v6, 0x48uLL);
    __asan_handle_no_return(v6);
    _Unwind_Resume(v11);
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 32LL))();
LABEL_116:
  if ( !v6 )
    goto LABEL_120;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_138;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v6 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8();
    goto LABEL_139;
  }
  v6 += *(_QWORD *)(*(_QWORD *)v6 - 24LL);
LABEL_120:
  if ( v36 != (char *)v5 )
  {
LABEL_139:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v6;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v6;
};

// Line 455: range 000000000C28AE86-000000000C28B846
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> > *const this)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  std::string::pointer v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  std::forward_iterator_tag v7; // cl
  std::forward_iterator_tag v8; // cl
  __int64 v9; // rax
  boost::exception_detail::error_info_container *px; // rdi
  struct _Unwind_Exception *v11; // rbx
  std::string::pointer v12; // rdi
  void *p_throw_function; // rdi
  char v14; // al
  char v15; // al
  boost::exception *v16; // r15
  unsigned __int64 p_data; // rbx
  boost::exception_detail::error_info_container *v18; // rsi
  struct _Unwind_Exception *v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v23; // al
  char v24; // al
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  double v28; // xmm0_8
  struct _Unwind_Exception *v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  struct _Unwind_Exception *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+10h] [rbp-98h]
  std::runtime_error *v36; // [rsp+18h] [rbp-90h]
  unsigned __int64 v37; // [rsp+28h] [rbp-80h] BYREF
  char v38[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v5 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>::clone;
  v35 = v5 >> 3;
  *(_DWORD *)(v35 + 2147450880) = -235802127;
  *(_DWORD *)(v35 + 2147450884) = -202116352;
  v6 = operator new(0x88uLL);
  if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_11;
  }
  *(_QWORD *)(v6 + 128) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = v6;
  v2 = v6;
  v36 = (std::runtime_error *)v6;
  std::runtime_error::runtime_error((std::runtime_error *)v6, (const std::runtime_error *)this);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  *(_QWORD *)v6 = &`vtable for'boost::property_tree::file_parser_error + 2;
  v3 = (std::string::pointer)(v6 + 32);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  *(_QWORD *)(v6 + 16) = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_message >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&this->m_message._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      (std::string *const)(v6 + 16),
      this->m_message._M_dataplus._M_p,
      &this->m_message._M_dataplus._M_p[this->m_message._M_string_length],
      v7);
    goto LABEL_15;
  }
LABEL_14:
  __asan_report_load8();
LABEL_15:
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_20;
  }
  *(_QWORD *)(v6 + 48) = v6 + 64;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_filename >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&this->m_filename._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      (std::string *const)(v6 + 48),
      this->m_filename._M_dataplus._M_p,
      &this->m_filename._M_dataplus._M_p[this->m_filename._M_string_length],
      v8);
    goto LABEL_22;
  }
LABEL_21:
  __asan_report_load8();
LABEL_22:
  if ( *(_BYTE *)(((unsigned __int64)&this->m_line >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)(v6 + 80) = this->m_line;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)v6 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
  if ( *(_BYTE *)(((v6 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  *(_QWORD *)(v6 + 88) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8();
    goto LABEL_37;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    v11 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = *(std::string::pointer *)(v2 + 16);
    if ( v3 != v12 )
      operator delete(v12);
    while ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v11 = (struct _Unwind_Exception *)__asan_report_store8();
    *(_QWORD *)v2 = &`vtable for'boost::property_tree::ptree_error + 2;
    std::runtime_error::~runtime_error(v36);
    goto LABEL_44;
  }
  *(_QWORD *)(v6 + 96) = px;
  if ( !px )
    goto LABEL_47;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_47;
  }
  __asan_report_load8();
LABEL_47:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_66;
  }
  p_throw_function = (void *)(v1 + 104);
  if ( *(_BYTE *)(((v1 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8();
    goto LABEL_67;
  }
  *(_QWORD *)(v1 + 104) = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8();
    goto LABEL_68;
  }
  p_throw_function = (void *)(v1 + 112);
  if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
LABEL_69:
    __asan_report_load4(p_throw_function);
LABEL_70:
    __asan_report_store4(p_throw_function);
    goto LABEL_71;
  }
  *(_QWORD *)(v1 + 112) = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_69;
  p_throw_function = (void *)(v1 + 120);
  v15 = *(_BYTE *)(((v1 + 120) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_70;
  *(_DWORD *)(v1 + 120) = this->throw_line_;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  *(_QWORD *)v1 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                + 2;
  if ( *(_BYTE *)(((v1 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  *(_QWORD *)(v1 + 88) = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                       + 7;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  *(_QWORD *)v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                + 24;
  if ( *(_BYTE *)(((v6 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_store8();
    goto LABEL_75;
  }
  *(_QWORD *)(v6 + 88) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                       + 80;
  if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
    goto LABEL_76;
  }
  *(_QWORD *)(v6 + 128) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                        + 136;
  v16 = &this->boost::exception;
  v2 = v6 + 88;
  *(_QWORD *)(v5 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8();
    v11 = v19;
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)v1 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
    boost::property_tree::file_parser_error::~file_parser_error((boost::property_tree::file_parser_error *const)v2);
    goto LABEL_44;
  }
  v18 = v16->data_.px_;
  if ( !v18 )
    goto LABEL_97;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v18->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v18->_vptr_error_info_container + 5))(&v37);
    goto LABEL_81;
  }
  __asan_report_load8();
LABEL_81:
  p_data = v37;
  v20 = *(_QWORD *)(v5 + 32);
  if ( !v20 )
    goto LABEL_87;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v20 + 32LL))();
    goto LABEL_87;
  }
  __asan_report_load8();
LABEL_87:
  *(_QWORD *)(v5 + 32) = p_data;
  if ( !p_data )
    goto LABEL_93;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_93;
  }
  __asan_report_load8();
LABEL_93:
  if ( !v37 )
    goto LABEL_97;
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_111;
  }
  v21 = *(_QWORD *)v37 + 32LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    p_throw_file = v21;
    __asan_report_load8();
    goto LABEL_112;
  }
  (*(void (**)(void))(*(_QWORD *)v37 + 32LL))();
LABEL_97:
  p_throw_file = (unsigned __int64)&v16->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v16->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_load8();
    goto LABEL_113;
  }
  p_throw_file = v6 + 112;
  if ( *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_store8();
LABEL_114:
    __asan_report_load4(p_throw_file);
LABEL_115:
    __asan_report_store4(p_throw_file);
    goto LABEL_116;
  }
  *(_QWORD *)(v6 + 112) = v16->throw_file_;
  p_throw_file = (unsigned __int64)&v16->throw_line_;
  v23 = *(_BYTE *)(((unsigned __int64)&v16->throw_line_ >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_114;
  p_throw_file = v6 + 120;
  v24 = *(_BYTE *)(((v6 + 120) >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_115;
  *(_DWORD *)(v6 + 120) = v16->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v16->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_116:
    __asan_report_load8();
    goto LABEL_117;
  }
  if ( *(_BYTE *)(((v6 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_store8();
    goto LABEL_118;
  }
  *(_QWORD *)(v6 + 104) = v16->throw_function_;
  p_data = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_load8();
LABEL_119:
    __asan_report_load8();
    goto LABEL_120;
  }
  v25 = *(_QWORD *)(v6 + 96);
  if ( !v25 )
    goto LABEL_121;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_119;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v25 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v25 + 32LL))();
    goto LABEL_121;
  }
LABEL_120:
  __asan_report_load8();
LABEL_121:
  *(_QWORD *)(v6 + 96) = p_data;
  if ( !p_data )
    goto LABEL_127;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_127;
  }
  __asan_report_load8();
LABEL_127:
  v26 = *(_QWORD *)(v5 + 32);
  if ( !v26 )
    goto LABEL_131;
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_139;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v26 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_139:
    v28 = __asan_report_load8();
    v11 = v29;
    v30 = (__int64 *)v37;
    if ( v37 )
    {
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        v28 = __asan_report_load8();
      v31 = *v30;
      if ( *(_BYTE *)(((unsigned __int64)(*v30 + 32) >> 3) + 0x7FFF8000) )
        v28 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v31 + 32))(v28);
    }
    while ( 1 )
    {
      v32 = *(_QWORD *)(v5 + 32);
      if ( !v32 )
        goto LABEL_151;
      if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        break;
      v28 = __asan_report_load8();
      v11 = v33;
    }
    v34 = *(_QWORD *)v32;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v32 + 32LL) >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v34 + 32))(v28);
LABEL_151:
    boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::~error_info_injector((boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *const)v1);
LABEL_44:
    operator delete((void *)v6, 0x88uLL);
    __asan_handle_no_return(v6);
    _Unwind_Resume(v11);
  }
  (*(void (**)(void))(*(_QWORD *)v26 + 32LL))();
LABEL_131:
  if ( !v6 )
    goto LABEL_135;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_153;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v6 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_153:
    __asan_report_load8();
    goto LABEL_154;
  }
  v6 += *(_QWORD *)(*(_QWORD *)v6 - 24LL);
LABEL_135:
  if ( v38 != (char *)v5 )
  {
LABEL_154:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v6;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v6;
};

// Line 455: range 000000000C2C5B72-000000000C2C633A
const boost::exception_detail::clone_base *__fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this)
{
  unsigned __int64 v1; // r12
  std::out_of_range *v2; // r13
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  char v10; // al
  boost::exception *v11; // r15
  unsigned __int64 p_data; // rbp
  boost::exception_detail::error_info_container *v13; // rsi
  struct _Unwind_Exception *v14; // rax
  struct _Unwind_Exception *v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v19; // al
  char v20; // al
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  double v24; // xmm0_8
  struct _Unwind_Exception *v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  struct _Unwind_Exception *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+18h] [rbp-90h]
  unsigned __int64 v32; // [rsp+28h] [rbp-80h] BYREF
  char v33[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone;
  v31 = v4 >> 3;
  *(_DWORD *)(v31 + 2147450880) = -235802127;
  *(_DWORD *)(v31 + 2147450884) = -202116352;
  v5 = operator new(0x40uLL);
  if ( *(_BYTE *)(((v5 + 56) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)(v5 + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  v1 = v5;
  v2 = (std::out_of_range *)v5;
  std::logic_error::logic_error((std::logic_error *)v5, (const std::logic_error *)this);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  *(_QWORD *)v5 = (char *)&`vtable for'std::out_of_range + 16;
  if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  *(_QWORD *)(v5 + 16) = &`vtable for'boost::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  px = this->data_.px_;
  if ( *(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  *(_QWORD *)(v5 + 24) = px;
  if ( !px )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_20;
  }
LABEL_19:
  __asan_report_load8();
LABEL_20:
  p_throw_function = &this->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_39;
  }
  p_throw_function = (void *)(v1 + 32);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  *(_QWORD *)(v1 + 32) = this->throw_function_;
  p_throw_function = &this->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&this->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
    goto LABEL_41;
  }
  p_throw_function = (void *)(v1 + 40);
  if ( *(_BYTE *)(((v1 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8();
LABEL_42:
    __asan_report_load4(p_throw_function);
LABEL_43:
    __asan_report_store4(p_throw_function);
    goto LABEL_44;
  }
  *(_QWORD *)(v1 + 40) = this->throw_file_;
  p_throw_function = &this->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_42;
  p_throw_function = (void *)(v1 + 48);
  v10 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_43;
  *(_DWORD *)(v1 + 48) = this->throw_line_;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  *(_QWORD *)v1 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  *(_QWORD *)(v1 + 16) = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 7;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  *(_QWORD *)v5 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                + 24;
  if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  *(_QWORD *)(v5 + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                       + 80;
  if ( *(_BYTE *)(((v5 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  *(_QWORD *)(v5 + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                       + 136;
  v11 = &this->boost::exception;
  v2 = (std::out_of_range *)(v5 + 16);
  *(_QWORD *)(v4 + 32) = 0LL;
  p_data = (unsigned __int64)&this->data_;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8();
    v15 = v14;
    std::out_of_range::~out_of_range(v2);
    goto LABEL_50;
  }
  v13 = v11->data_.px_;
  if ( !v13 )
    goto LABEL_69;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v13->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v13->_vptr_error_info_container + 5))(&v32);
    goto LABEL_53;
  }
  __asan_report_load8();
LABEL_53:
  p_data = v32;
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_59;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
    goto LABEL_59;
  }
  __asan_report_load8();
LABEL_59:
  *(_QWORD *)(v4 + 32) = p_data;
  if ( !p_data )
    goto LABEL_65;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_65;
  }
  __asan_report_load8();
LABEL_65:
  if ( !v32 )
    goto LABEL_69;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_83;
  }
  v17 = *(_QWORD *)v32 + 32LL;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    p_throw_file = v17;
    __asan_report_load8();
    goto LABEL_84;
  }
  (*(void (**)(void))(*(_QWORD *)v32 + 32LL))();
LABEL_69:
  p_throw_file = (unsigned __int64)&v11->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8();
    goto LABEL_85;
  }
  p_throw_file = v5 + 40;
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_store8();
LABEL_86:
    __asan_report_load4(p_throw_file);
LABEL_87:
    __asan_report_store4(p_throw_file);
    goto LABEL_88;
  }
  *(_QWORD *)(v5 + 40) = v11->throw_file_;
  p_throw_file = (unsigned __int64)&v11->throw_line_;
  v19 = *(_BYTE *)(((unsigned __int64)&v11->throw_line_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_86;
  p_throw_file = v5 + 48;
  v20 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_87;
  *(_DWORD *)(v5 + 48) = v11->throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8();
    goto LABEL_89;
  }
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_store8();
    goto LABEL_90;
  }
  *(_QWORD *)(v5 + 32) = v11->throw_function_;
  p_data = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_load8();
LABEL_91:
    __asan_report_load8();
    goto LABEL_92;
  }
  v21 = *(_QWORD *)(v5 + 24);
  if ( !v21 )
    goto LABEL_93;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_91;
  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v21 + 32LL))();
    goto LABEL_93;
  }
LABEL_92:
  __asan_report_load8();
LABEL_93:
  *(_QWORD *)(v5 + 24) = p_data;
  if ( !p_data )
    goto LABEL_99;
  if ( *(_BYTE *)((p_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)p_data + 24LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_data + 24LL))(p_data);
    goto LABEL_99;
  }
  __asan_report_load8();
LABEL_99:
  v22 = *(_QWORD *)(v4 + 32);
  if ( !v22 )
    goto LABEL_103;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_111;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v22 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    v24 = __asan_report_load8();
    v15 = v25;
    v26 = (__int64 *)v32;
    if ( v32 )
    {
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8();
      v27 = *v26;
      if ( *(_BYTE *)(((unsigned __int64)(*v26 + 32) >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8();
      (*(void (__fastcall **)(double))(v27 + 32))(v24);
    }
    while ( 1 )
    {
      v28 = *(_QWORD *)(v4 + 32);
      if ( !v28 )
        goto LABEL_123;
      if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        break;
      v24 = __asan_report_load8();
      v15 = v29;
    }
    v30 = *(_QWORD *)v28;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v28 + 32LL) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8();
    (*(void (__fastcall **)(double))(v30 + 32))(v24);
LABEL_123:
    boost::exception_detail::error_info_injector<std::out_of_range>::~error_info_injector((boost::exception_detail::error_info_injector<std::out_of_range> *const)v1);
LABEL_50:
    operator delete((void *)v5, 0x40uLL);
    __asan_handle_no_return(v5);
    _Unwind_Resume(v15);
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 32LL))();
LABEL_103:
  if ( !v5 )
    goto LABEL_107;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_125;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v5 - 24LL) >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_load8();
    goto LABEL_126;
  }
  v5 += *(_QWORD *)(*(_QWORD *)v5 - 24LL);
LABEL_107:
  if ( v33 != (char *)v4 )
  {
LABEL_126:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (const boost::exception_detail::clone_base *)v5;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return (const boost::exception_detail::clone_base *)v5;
};

// Line 461: range 000000000BF521E5-000000000BF521EC
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF5271D-000000000BF52724
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF52491-000000000BF52498
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51529-000000000BF51530
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51CCD-000000000BF51CD4
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF50DB9-000000000BF50DC0
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51045-000000000BF5104C
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF517B5-000000000BF517BC
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF529A9-000000000BF529B0
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51A41-000000000BF51A48
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000CBDFB27-000000000CBDFB2E
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BFB0A9B-000000000BFB0AA2
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51F59-000000000BF51F60
void __fastcall __noreturn `virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(
        _QWORD *a1)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow((const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const)((char *)a1 + *(_QWORD *)(*a1 - 32LL)));
};

// Line 461: range 000000000BF51236-000000000BF51298
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *)__cxa_allocate_exception(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::clone_impl(exception, this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::~clone_impl);
};

// Line 461: range 000000000BF5110A-000000000BF5116C
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *)__cxa_allocate_exception(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::clone_impl(exception, this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::~clone_impl);
};

// Line 461: range 000000000BF5217E-000000000BF521E0
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor> > *)__cxa_allocate_exception(0x38uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl);
};

// Line 461: range 000000000BF526B6-000000000BF52718
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl);
};

// Line 461: range 000000000BF5242A-000000000BF5248C
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl);
};

// Line 461: range 000000000BF514C2-000000000BF51524
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > *)__cxa_allocate_exception(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl);
};

// Line 461: range 000000000BF51C66-000000000BF51CC8
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl);
};

// Line 461: range 000000000BF50D52-000000000BF50DB4
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl);
};

// Line 461: range 000000000BF50FDE-000000000BF51040
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl);
};

// Line 461: range 000000000BF5174E-000000000BF517B0
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > *)__cxa_allocate_exception(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl);
};

// Line 461: range 000000000BF52942-000000000BF529A4
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error> > *)__cxa_allocate_exception(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl);
};

// Line 461: range 000000000BF519DA-000000000BF51A3C
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > *)__cxa_allocate_exception(0x70uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl);
};

// Line 461: range 000000000CBDFAC0-000000000CBDFB22
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl);
};

// Line 461: range 000000000BFB0A34-000000000BFB0A96
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl);
};

// Line 461: range 000000000BF51EF2-000000000BF51F54
void __cdecl __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *const this)
{
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *exception; // rdi

  exception = (boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > *)__cxa_allocate_exception(0x40uLL);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    exception,
    this);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl);
};

// Line 461: range 000000000C24A414-000000000C24A504
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::bad_function_call> *const)exception,
    this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                       + 24;
  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                              + 80;
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                              + 136;
  __asan_handle_no_return(exception + 56);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl);
};

// Line 461: range 000000000C2C95CA-000000000C2C96BA
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> *const)exception,
    this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                       + 24;
  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                              + 80;
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                              + 136;
  __asan_handle_no_return(exception + 56);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>::~clone_impl);
};

// Line 461: range 000000000C2C916E-000000000C2C925E
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> *const)exception,
    this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                       + 24;
  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                              + 80;
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                              + 136;
  __asan_handle_no_return(exception + 56);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>::~clone_impl);
};

// Line 461: range 000000000C28E080-000000000C28E170
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x48uLL);
  if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 64) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *const)exception,
    this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                       + 24;
  if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 24) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                              + 80;
  if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 64) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                              + 136;
  __asan_handle_no_return(exception + 64);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>::~clone_impl);
};

// Line 461: range 000000000C28CB54-000000000C28CC50
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x88uLL);
  if ( *(_BYTE *)(((exception + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 128) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *const)exception,
    (__int64)this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                       + 24;
  if ( *(_BYTE *)(((exception + 88) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 88) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                              + 80;
  if ( *(_BYTE *)(((exception + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 128) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                               + 136;
  __asan_handle_no_return(exception + 128);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>::~clone_impl);
};

// Line 461: range 000000000C2C7B1A-000000000C2C7C0A
void __fastcall __noreturn boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::rethrow(
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > *const this)
{
  unsigned __int64 exception; // rbx

  exception = (unsigned __int64)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<std::out_of_range>::error_info_injector(
    (boost::exception_detail::error_info_injector<std::out_of_range> *const)exception,
    this);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                       + 24;
  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 16) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                              + 80;
  if ( *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 56) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                              + 136;
  __asan_handle_no_return(exception + 56);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>,
    (void (__fastcall *)(void *))boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::~clone_impl);
};

// Line 463: range 000000000C2C7D3C-000000000C2C8507
boost::wrapexcept<boost::gregorian::bad_weekday> *__fastcall boost::exception_detail::enable_both<boost::gregorian::bad_weekday>(
        boost::wrapexcept<boost::gregorian::bad_weekday> *retstr,
        const boost::gregorian::bad_weekday *x)
{
  boost::exception_detail::error_info_container *v2; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  struct _Unwind_Exception *v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v14; // al
  boost::exception_detail::error_info_container *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  struct _Unwind_Exception *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+18h] [rbp-C0h] BYREF
  boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> v24; // [rsp+20h] [rbp-B8h] BYREF
  char v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::enable_both<boost::gregorian::bad_weekday>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::logic_error::logic_error((std::logic_error *)&v24, (const std::logic_error *)x);
  memset(&v24.data_, 0, 24);
  v24.throw_line_ = -1;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                             + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                      + 7);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> + 7) = &`vtable for'boost::exception_detail::clone_base + 2;
  std::logic_error::logic_error((std::logic_error *)retstr, (const std::logic_error *)&v24);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  px = v24.data_.px_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  retstr->data_.px_ = v24.data_.px_;
  if ( !px )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load8();
LABEL_18:
  p_throw_function = &retstr->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_32;
  }
  retstr->throw_function_ = v24.throw_function_;
  p_throw_function = &retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    __asan_report_store4(p_throw_function);
    goto LABEL_34;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_function = &retstr->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_33;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                 + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                          + 7);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  *(_QWORD *)retstr->baseclass_0 = &unk_1D4AF390;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)retstr);
    goto LABEL_41;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> + 7) = &off_1D4AF3E0;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( !v24.data_.px_ )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v24.data_.px_->_vptr_error_info_container + 5))(&v23);
    goto LABEL_44;
  }
  __asan_report_load8();
LABEL_44:
  v2 = (boost::exception_detail::error_info_container *)v23;
  v11 = *(_QWORD *)(v4 + 32);
  if ( !v11 )
    goto LABEL_50;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v11 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v11 + 32LL))();
    goto LABEL_50;
  }
  __asan_report_load8();
LABEL_50:
  *(_QWORD *)(v4 + 32) = v2;
  if ( !v2 )
    goto LABEL_56;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_56;
  }
  __asan_report_load8();
LABEL_56:
  if ( !v23 )
    goto LABEL_60;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_70;
  }
  v12 = *(_QWORD *)v23 + 32LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_throw_file = v12;
    __asan_report_load8();
    goto LABEL_71;
  }
  (*(void (**)(void))(*(_QWORD *)v23 + 32LL))();
LABEL_60:
  p_throw_file = (unsigned __int64)&retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
LABEL_72:
    __asan_report_store4(p_throw_file);
    goto LABEL_73;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_file = (unsigned __int64)&retstr->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_72;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  retstr->throw_function_ = v24.throw_function_;
  v2 = *(boost::exception_detail::error_info_container **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8();
LABEL_75:
    __asan_report_load8();
    goto LABEL_76;
  }
  v15 = retstr->data_.px_;
  if ( !v15 )
    goto LABEL_77;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  if ( !*(_BYTE *)(((unsigned __int64)(v15->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v15->_vptr_error_info_container + 4))();
    goto LABEL_77;
  }
LABEL_76:
  __asan_report_load8();
LABEL_77:
  retstr->data_.px_ = v2;
  if ( !v2 )
    goto LABEL_83;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_83;
  }
  __asan_report_load8();
LABEL_83:
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_87;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8();
    goto LABEL_99;
  }
  (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
LABEL_87:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_weekday> + 24;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_weekday> + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_101:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    v18 = (_QWORD *)v23;
    if ( v23 )
    {
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)(*v18 + 32LL) >> 3) + 0x7FFF8000) )
      {
        v18 = (_QWORD *)(*v18 + 32LL);
        __asan_report_load8();
      }
      (*(void (__fastcall **)(_QWORD *))(v19 + 32))(v18);
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v4 + 32);
      if ( !v20 )
        goto LABEL_113;
      if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8();
      v10 = v21;
    }
    v22 = *(_QWORD *)v20;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
    {
      v20 = *(_QWORD *)v20 + 32LL;
      __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64))(v22 + 32))(v20);
LABEL_113:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>::~error_info_injector(retstr);
LABEL_41:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>::~error_info_injector(&v24);
    __asan_handle_no_return(&v24);
    _Unwind_Resume(v10);
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> + 7) = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_weekday> + 136;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday>
                             + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( !v24.data_.px_ )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_115;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    __asan_report_load8();
    goto LABEL_116;
  }
  (*((void (**)(void))v24.data_.px_->_vptr_error_info_container + 4))();
LABEL_94:
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::gregorian::bad_weekday + 2;
  std::out_of_range::~out_of_range((std::out_of_range *)&v24);
  if ( v25 != (char *)v4 )
  {
LABEL_116:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 485: range 000000000BF20FDA-000000000BF210E6
void __cdecl boost::wrapexcept<boost::asio::bad_executor>::wrapexcept(
        boost::wrapexcept<boost::asio::bad_executor> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::asio::bad_executor>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  _QWORD *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base((boost::exception_detail::clone_base *const)this->gap30);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::bad_executor> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = this->gap30;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v4 = (_QWORD *)__asan_report_store8();
  *v4 = v5;
};

// Line 485: range 000000000BF2038E-000000000BF2049A
void __cdecl boost::wrapexcept<boost::asio::invalid_service_owner>::wrapexcept(
        boost::wrapexcept<boost::asio::invalid_service_owner> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::asio::invalid_service_owner>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::invalid_service_owner> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF20862-000000000BF2096E
void __cdecl boost::wrapexcept<boost::asio::service_already_exists>::wrapexcept(
        boost::wrapexcept<boost::asio::service_already_exists> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::asio::service_already_exists>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::service_already_exists> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000CB802A6-000000000CB803B2
void __cdecl boost::wrapexcept<boost::bad_function_call>::wrapexcept(
        boost::wrapexcept<boost::bad_function_call> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::bad_function_call>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::bad_function_call> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::bad_function_call>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::bad_function_call> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::bad_function_call> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF2571C-000000000BF25828
void __cdecl boost::wrapexcept<boost::condition_error>::wrapexcept(
        boost::wrapexcept<boost::condition_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::condition_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::condition_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::condition_error>
  + 13);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::condition_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::condition_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::condition_error> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::condition_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF21D42-000000000BF21E4E
void __cdecl boost::wrapexcept<boost::gregorian::bad_day_of_month>::wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_day_of_month> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_day_of_month>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF3B372-000000000BF3B47E
void __cdecl boost::wrapexcept<boost::gregorian::bad_month>::wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_month> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_month>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_month> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF3AF18-000000000BF3B024
void __cdecl boost::wrapexcept<boost::gregorian::bad_year>::wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_year> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_year>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_year> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF24D7E-000000000BF24E8A
void __cdecl boost::wrapexcept<boost::lock_error>::wrapexcept(
        boost::wrapexcept<boost::lock_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::lock_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::lock_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::lock_error>
  + 13);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::lock_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::lock_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::lock_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF1B240-000000000BF1B34C
void __cdecl boost::wrapexcept<boost::system::system_error>::wrapexcept(
        boost::wrapexcept<boost::system::system_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::system::system_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::system::system_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::system::system_error>
  + 13);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::system::system_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::system::system_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::system::system_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF24924-000000000BF24A30
void __cdecl boost::wrapexcept<boost::thread_resource_error>::wrapexcept(
        boost::wrapexcept<boost::thread_resource_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<boost::thread_resource_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<boost::thread_resource_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
  + 13);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::thread_resource_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<boost::thread_resource_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<boost::thread_resource_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000C7E414E-000000000C7E425A
void __cdecl boost::wrapexcept<std::invalid_argument>::wrapexcept(
        boost::wrapexcept<std::invalid_argument> *const this,
        const boost::exception_detail::enable_error_info_return_type<std::invalid_argument>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<std::invalid_argument> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::invalid_argument>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::invalid_argument> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<std::invalid_argument> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF8300A-000000000BF83116
void __cdecl boost::wrapexcept<std::length_error>::wrapexcept(
        boost::wrapexcept<std::length_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<std::length_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<std::length_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::length_error>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::length_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<std::length_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::length_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<std::length_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<std::length_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<std::length_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000C7E3E14-000000000C7E3F20
void __cdecl boost::wrapexcept<std::out_of_range>::wrapexcept(
        boost::wrapexcept<std::out_of_range> *const this,
        const boost::exception_detail::enable_error_info_return_type<std::out_of_range>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<std::out_of_range> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::out_of_range>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::out_of_range> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<std::out_of_range> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::out_of_range> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<std::out_of_range> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<std::out_of_range> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<std::out_of_range> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 485: range 000000000BF21434-000000000BF21540
void __cdecl boost::wrapexcept<std::runtime_error>::wrapexcept(
        boost::wrapexcept<std::runtime_error> *const this,
        const boost::exception_detail::enable_error_info_return_type<std::runtime_error>::type *x)
{
  char *v2; // rdx
  int (**v3)(...); // rdx
  boost::exception_detail::error_info_injector<std::runtime_error> *v4; // rax
  char *v5; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::runtime_error>
  + 7);
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::runtime_error> + 1,
    x);
  v2 = (char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  v3 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v3;
  v4 = &this->boost::exception_detail::error_info_injector<std::runtime_error> + 1;
  v5 = (char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
    v4 = (boost::exception_detail::error_info_injector<std::runtime_error> *)__asan_report_store8();
  *(_QWORD *)v4->baseclass_0 = v5;
};

// Line 490: range 000000000BF1415B-000000000BF1415F
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept((boost::wrapexcept<boost::asio::bad_executor> *const)(a1 - 8));
};

// Line 490: range 000000000BF1411A-000000000BF1411E
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept((boost::wrapexcept<boost::asio::bad_executor> *const)(a1 - 8));
};

// Line 490: range 000000000BF13690-000000000BF13694
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept((boost::wrapexcept<boost::asio::invalid_service_owner> *const)(a1 - 16));
};

// Line 490: range 000000000BF136D1-000000000BF136D5
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept((boost::wrapexcept<boost::asio::invalid_service_owner> *const)(a1 - 16));
};

// Line 490: range 000000000BF1382A-000000000BF1382E
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept((boost::wrapexcept<boost::asio::service_already_exists> *const)(a1 - 16));
};

// Line 490: range 000000000BF1386B-000000000BF1386F
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept((boost::wrapexcept<boost::asio::service_already_exists> *const)(a1 - 16));
};

// Line 490: range 000000000BF188CD-000000000BF188D1
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::condition_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::condition_error>::~wrapexcept((boost::wrapexcept<boost::condition_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF1888C-000000000BF18890
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::condition_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::condition_error>::~wrapexcept((boost::wrapexcept<boost::condition_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF15239-000000000BF1523D
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_day_of_month> *const)(a1 - 16));
};

// Line 490: range 000000000BF151F8-000000000BF151FC
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_day_of_month> *const)(a1 - 16));
};

// Line 490: range 000000000BF33869-000000000BF3386D
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_month> *const)(a1 - 16));
};

// Line 490: range 000000000BF33828-000000000BF3382C
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_month> *const)(a1 - 16));
};

// Line 490: range 000000000BF336CF-000000000BF336D3
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_year> *const)(a1 - 16));
};

// Line 490: range 000000000BF3368E-000000000BF33692
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_year> *const)(a1 - 16));
};

// Line 490: range 000000000BF18392-000000000BF18396
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::lock_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::lock_error>::~wrapexcept((boost::wrapexcept<boost::lock_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF183D3-000000000BF183D7
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::lock_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::lock_error>::~wrapexcept((boost::wrapexcept<boost::lock_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF0F2EE-000000000BF0F2F2
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::system::system_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::system::system_error>::~wrapexcept((boost::wrapexcept<boost::system::system_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF0F32F-000000000BF0F333
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::system::system_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::system::system_error>::~wrapexcept((boost::wrapexcept<boost::system::system_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF181E2-000000000BF181E6
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::thread_resource_error>::~wrapexcept((boost::wrapexcept<boost::thread_resource_error> *const)(a1 - 64));
};

// Line 490: range 000000000BF18223-000000000BF18227
void __fastcall `non-virtual thunk to'boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<boost::thread_resource_error>::~wrapexcept((boost::wrapexcept<boost::thread_resource_error> *const)(a1 - 64));
};

// Line 490: range 000000000C714011-000000000C714015
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::invalid_argument>::~wrapexcept((boost::wrapexcept<std::invalid_argument> *const)(a1 - 16));
};

// Line 490: range 000000000C713FD0-000000000C713FD4
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::invalid_argument>::~wrapexcept((boost::wrapexcept<std::invalid_argument> *const)(a1 - 16));
};

// Line 490: range 000000000BF7CC7D-000000000BF7CC81
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::length_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::length_error>::~wrapexcept((boost::wrapexcept<std::length_error> *const)(a1 - 16));
};

// Line 490: range 000000000BF7CC3C-000000000BF7CC40
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::length_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::length_error>::~wrapexcept((boost::wrapexcept<std::length_error> *const)(a1 - 16));
};

// Line 490: range 000000000BF142F5-000000000BF142F9
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::runtime_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::runtime_error>::~wrapexcept((boost::wrapexcept<std::runtime_error> *const)(a1 - 16));
};

// Line 490: range 000000000BF142B4-000000000BF142B8
void __fastcall `non-virtual thunk to'boost::wrapexcept<std::runtime_error>::~wrapexcept(__int64 a1)
{
  boost::wrapexcept<std::runtime_error>::~wrapexcept((boost::wrapexcept<std::runtime_error> *const)(a1 - 16));
};

// Line 490: range 000000000BF14161-000000000BF14168
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept((boost::wrapexcept<boost::asio::bad_executor> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF14123-000000000BF1412A
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept((boost::wrapexcept<boost::asio::bad_executor> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF136D7-000000000BF136DE
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept((boost::wrapexcept<boost::asio::invalid_service_owner> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF13699-000000000BF136A0
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept((boost::wrapexcept<boost::asio::invalid_service_owner> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF13833-000000000BF1383A
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept((boost::wrapexcept<boost::asio::service_already_exists> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF13871-000000000BF13878
void __fastcall `virtual thunk to'boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept((boost::wrapexcept<boost::asio::service_already_exists> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF18895-000000000BF1889C
void __fastcall `virtual thunk to'boost::wrapexcept<boost::condition_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::condition_error>::~wrapexcept((boost::wrapexcept<boost::condition_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF188D3-000000000BF188DA
void __fastcall `virtual thunk to'boost::wrapexcept<boost::condition_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::condition_error>::~wrapexcept((boost::wrapexcept<boost::condition_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF1523F-000000000BF15246
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_day_of_month> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF15201-000000000BF15208
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_day_of_month> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF33831-000000000BF33838
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_month> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF3386F-000000000BF33876
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_month> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF336D5-000000000BF336DC
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_year> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF33697-000000000BF3369E
void __fastcall `virtual thunk to'boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept((boost::wrapexcept<boost::gregorian::bad_year> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF183D9-000000000BF183E0
void __fastcall `virtual thunk to'boost::wrapexcept<boost::lock_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::lock_error>::~wrapexcept((boost::wrapexcept<boost::lock_error> *const)((char *)a1
                                                                                                + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF1839B-000000000BF183A2
void __fastcall `virtual thunk to'boost::wrapexcept<boost::lock_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::lock_error>::~wrapexcept((boost::wrapexcept<boost::lock_error> *const)((char *)a1
                                                                                                + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF0F335-000000000BF0F33C
void __fastcall `virtual thunk to'boost::wrapexcept<boost::system::system_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::system::system_error>::~wrapexcept((boost::wrapexcept<boost::system::system_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF0F2F7-000000000BF0F2FE
void __fastcall `virtual thunk to'boost::wrapexcept<boost::system::system_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::system::system_error>::~wrapexcept((boost::wrapexcept<boost::system::system_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF181EB-000000000BF181F2
void __fastcall `virtual thunk to'boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::thread_resource_error>::~wrapexcept((boost::wrapexcept<boost::thread_resource_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF18229-000000000BF18230
void __fastcall `virtual thunk to'boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<boost::thread_resource_error>::~wrapexcept((boost::wrapexcept<boost::thread_resource_error> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000C714017-000000000C71401E
void __fastcall `virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::invalid_argument>::~wrapexcept((boost::wrapexcept<std::invalid_argument> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000C713FD9-000000000C713FE0
void __fastcall `virtual thunk to'boost::wrapexcept<std::invalid_argument>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::invalid_argument>::~wrapexcept((boost::wrapexcept<std::invalid_argument> *const)((char *)a1 + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF7CC83-000000000BF7CC8A
void __fastcall `virtual thunk to'boost::wrapexcept<std::length_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::length_error>::~wrapexcept((boost::wrapexcept<std::length_error> *const)((char *)a1
                                                                                                + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF7CC45-000000000BF7CC4C
void __fastcall `virtual thunk to'boost::wrapexcept<std::length_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::length_error>::~wrapexcept((boost::wrapexcept<std::length_error> *const)((char *)a1
                                                                                                + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF142FB-000000000BF14302
void __fastcall `virtual thunk to'boost::wrapexcept<std::runtime_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::runtime_error>::~wrapexcept((boost::wrapexcept<std::runtime_error> *const)((char *)a1
                                                                                                  + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF142BD-000000000BF142C4
void __fastcall `virtual thunk to'boost::wrapexcept<std::runtime_error>::~wrapexcept(_QWORD *a1)
{
  boost::wrapexcept<std::runtime_error>::~wrapexcept((boost::wrapexcept<std::runtime_error> *const)((char *)a1
                                                                                                  + *(_QWORD *)(*a1 - 40LL)));
};

// Line 490: range 000000000BF14130-000000000BF1415A
void __cdecl boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(
        boost::wrapexcept<boost::asio::bad_executor> *const this)
{
  boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(this);
  operator delete(this, 0x38uLL);
};

// Line 490: range 000000000BF1403C-000000000BF14119
void __cdecl boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept(
        boost::wrapexcept<boost::asio::bad_executor> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  _QWORD *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->boost::asio::bad_executor = (boost::asio::bad_executor)v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = this->gap30;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::asio::bad_executor> + 136;
  if ( *(_BYTE *)(((unsigned __int64)this->gap30 >> 3) + 0x7FFF8000) )
    v3 = (_QWORD *)__asan_report_store8();
  *v3 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::bad_executor>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::bad_executor> + 1);
  boost::exception_detail::clone_base::~clone_base((boost::exception_detail::clone_base *const)this->gap30);
};

// Line 490: range 000000000BF135B2-000000000BF1368F
void __cdecl boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(
        boost::wrapexcept<boost::asio::invalid_service_owner> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::asio::invalid_service_owner> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::invalid_service_owner> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
  + 7);
};

// Line 490: range 000000000BF136A6-000000000BF136D0
void __cdecl boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(
        boost::wrapexcept<boost::asio::invalid_service_owner> *const this)
{
  boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF13840-000000000BF1386A
void __cdecl boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(
        boost::wrapexcept<boost::asio::service_already_exists> *const this)
{
  boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF1374C-000000000BF13829
void __cdecl boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept(
        boost::wrapexcept<boost::asio::service_already_exists> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::asio::service_already_exists> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::asio::service_already_exists> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::asio::service_already_exists>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::asio::service_already_exists> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
  + 7);
};

// Line 490: range 000000000BF187AE-000000000BF1888B
void __cdecl boost::wrapexcept<boost::condition_error>::~wrapexcept(
        boost::wrapexcept<boost::condition_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::condition_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::condition_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::condition_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::condition_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::condition_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::condition_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::condition_error>
  + 13);
};

// Line 490: range 000000000BF188A2-000000000BF188CC
void __cdecl boost::wrapexcept<boost::condition_error>::~wrapexcept(
        boost::wrapexcept<boost::condition_error> *const this)
{
  boost::wrapexcept<boost::condition_error>::~wrapexcept(this);
  operator delete(this, 0x70uLL);
};

// Line 490: range 000000000BF1520E-000000000BF15238
void __cdecl boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_day_of_month> *const this)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF1511A-000000000BF151F7
void __cdecl boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_day_of_month> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_day_of_month> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
  + 7);
};

// Line 490: range 000000000BF3383E-000000000BF33868
void __cdecl boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_month> *const this)
{
  boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF3374A-000000000BF33827
void __cdecl boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_month> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_month> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_month> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_month> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
  + 7);
};

// Line 490: range 000000000BF336A4-000000000BF336CE
void __cdecl boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_year> *const this)
{
  boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF335B0-000000000BF3368D
void __cdecl boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept(
        boost::wrapexcept<boost::gregorian::bad_year> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_year> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::gregorian::bad_year> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::gregorian::bad_year> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
  + 7);
};

// Line 490: range 000000000BF182B4-000000000BF18391
void __cdecl boost::wrapexcept<boost::lock_error>::~wrapexcept(boost::wrapexcept<boost::lock_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::lock_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::lock_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::lock_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::lock_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::lock_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::lock_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::lock_error>
  + 13);
};

// Line 490: range 000000000BF183A8-000000000BF183D2
void __cdecl boost::wrapexcept<boost::lock_error>::~wrapexcept(boost::wrapexcept<boost::lock_error> *const this)
{
  boost::wrapexcept<boost::lock_error>::~wrapexcept(this);
  operator delete(this, 0x70uLL);
};

// Line 490: range 000000000BF0F210-000000000BF0F2ED
void __cdecl boost::wrapexcept<boost::system::system_error>::~wrapexcept(
        boost::wrapexcept<boost::system::system_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::system::system_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::system::system_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::system::system_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::system::system_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::system::system_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::system::system_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::system::system_error>
  + 13);
};

// Line 490: range 000000000BF0F304-000000000BF0F32E
void __cdecl boost::wrapexcept<boost::system::system_error>::~wrapexcept(
        boost::wrapexcept<boost::system::system_error> *const this)
{
  boost::wrapexcept<boost::system::system_error>::~wrapexcept(this);
  operator delete(this, 0x70uLL);
};

// Line 490: range 000000000BF181F8-000000000BF18222
void __cdecl boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(
        boost::wrapexcept<boost::thread_resource_error> *const this)
{
  boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(this);
  operator delete(this, 0x70uLL);
};

// Line 490: range 000000000BF18104-000000000BF181E1
void __cdecl boost::wrapexcept<boost::thread_resource_error>::~wrapexcept(
        boost::wrapexcept<boost::thread_resource_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<boost::thread_resource_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<boost::thread_resource_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<boost::thread_resource_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                    + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<boost::thread_resource_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<boost::thread_resource_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::thread_resource_error>
  + 13);
};

// Line 490: range 000000000C713FE6-000000000C714010
void __cdecl boost::wrapexcept<std::invalid_argument>::~wrapexcept(
        boost::wrapexcept<std::invalid_argument> *const this)
{
  boost::wrapexcept<std::invalid_argument>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000C713EF2-000000000C713FCF
void __cdecl boost::wrapexcept<std::invalid_argument>::~wrapexcept(
        boost::wrapexcept<std::invalid_argument> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::invalid_argument> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<std::invalid_argument> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::invalid_argument> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::invalid_argument> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::invalid_argument> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::invalid_argument>
  + 7);
};

// Line 490: range 000000000BF7CC52-000000000BF7CC7C
void __cdecl boost::wrapexcept<std::length_error>::~wrapexcept(boost::wrapexcept<std::length_error> *const this)
{
  boost::wrapexcept<std::length_error>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF7CB5E-000000000BF7CC3B
void __cdecl boost::wrapexcept<std::length_error>::~wrapexcept(boost::wrapexcept<std::length_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::length_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<std::length_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::length_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::length_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<std::length_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::length_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::length_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::length_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::length_error>
  + 7);
};

// Line 490: range 000000000BF142CA-000000000BF142F4
void __cdecl boost::wrapexcept<std::runtime_error>::~wrapexcept(boost::wrapexcept<std::runtime_error> *const this)
{
  boost::wrapexcept<std::runtime_error>::~wrapexcept(this);
  operator delete(this, 0x40uLL);
};

// Line 490: range 000000000BF141D6-000000000BF142B3
void __cdecl boost::wrapexcept<std::runtime_error>::~wrapexcept(boost::wrapexcept<std::runtime_error> *const this)
{
  char *v1; // rdx
  int (**v2)(...); // rdx
  boost::exception_detail::error_info_injector<std::runtime_error> *v3; // rax
  char *v4; // rcx

  v1 = (char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  v2 = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v2;
  v3 = &this->boost::exception_detail::error_info_injector<std::runtime_error> + 1;
  v4 = (char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
    v3 = (boost::exception_detail::error_info_injector<std::runtime_error> *)__asan_report_store8();
  *(_QWORD *)v3->baseclass_0 = v4;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
    this,
    (const void **const)&`VTT for'boost::wrapexcept<std::runtime_error> + 1);
  boost::exception_detail::clone_base::~clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<std::runtime_error>
  + 7);
};

// Line 497: range 000000000CBDFD26-000000000CBDFE53
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *x,
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> >::clone_tag a3)
{
  char *v3; // rdx
  int (**v4)(...); // rdx
  boost::exception_detail::error_info_injector<boost::bad_function_call> *v5; // rax
  char *v6; // rcx

  boost::exception_detail::clone_base::clone_base(
    (boost::exception_detail::clone_base *const)&this->boost::exception_detail::error_info_injector<boost::bad_function_call>
  + 7);
  boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(this, x);
  v3 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v3;
  v4 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v4;
  v5 = &this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1;
  v6 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
    v5 = (boost::exception_detail::error_info_injector<boost::bad_function_call> *)__asan_report_store8();
  *(_QWORD *)v5->baseclass_0 = v6;
  boost::exception_detail::copy_boost_exception(&this->boost::exception, &x->boost::exception);
};

// Line 515: range 000000000BF13FCF-000000000BF1403A
boost::wrapexcept<boost::asio::bad_executor> *__cdecl boost::exception_detail::enable_both<boost::asio::bad_executor>(
        boost::wrapexcept<boost::asio::bad_executor> *retstr,
        const boost::asio::bad_executor *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::asio::bad_executor>::type v3; // [rsp+10h] [rbp-40h] BYREF

  boost::enable_error_info<boost::asio::bad_executor>(&v3, x);
  boost::wrapexcept<boost::asio::bad_executor>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::asio::bad_executor>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF13545-000000000BF135B0
boost::wrapexcept<boost::asio::invalid_service_owner> *__cdecl boost::exception_detail::enable_both<boost::asio::invalid_service_owner>(
        boost::wrapexcept<boost::asio::invalid_service_owner> *retstr,
        const boost::asio::invalid_service_owner *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::asio::invalid_service_owner>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<boost::asio::invalid_service_owner>(&v3, x);
  boost::wrapexcept<boost::asio::invalid_service_owner>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF136E0-000000000BF1374B
boost::wrapexcept<boost::asio::service_already_exists> *__cdecl boost::exception_detail::enable_both<boost::asio::service_already_exists>(
        boost::wrapexcept<boost::asio::service_already_exists> *retstr,
        const boost::asio::service_already_exists *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::asio::service_already_exists>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<boost::asio::service_already_exists>(&v3, x);
  boost::wrapexcept<boost::asio::service_already_exists>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::asio::service_already_exists>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000C2492D4-000000000C249A9F
boost::wrapexcept<boost::bad_function_call> *__fastcall boost::exception_detail::enable_both<boost::bad_function_call>(
        boost::wrapexcept<boost::bad_function_call> *retstr,
        const boost::bad_function_call *x)
{
  boost::exception_detail::error_info_container *v2; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  struct _Unwind_Exception *v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v14; // al
  boost::exception_detail::error_info_container *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  struct _Unwind_Exception *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+18h] [rbp-C0h] BYREF
  boost::exception_detail::error_info_injector<boost::bad_function_call> v24; // [rsp+20h] [rbp-B8h] BYREF
  char v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::enable_both<boost::bad_function_call>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::runtime_error::runtime_error((std::runtime_error *)&v24, (const std::runtime_error *)x);
  memset(&v24.data_, 0, 24);
  v24.throw_line_ = -1;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call>
                                      + 7);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 7) = &`vtable for'boost::exception_detail::clone_base + 2;
  std::runtime_error::runtime_error((std::runtime_error *)retstr, (const std::runtime_error *)&v24);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::bad_function_call + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  px = v24.data_.px_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  retstr->data_.px_ = v24.data_.px_;
  if ( !px )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load8();
LABEL_18:
  p_throw_function = &retstr->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_32;
  }
  retstr->throw_function_ = v24.throw_function_;
  p_throw_function = &retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    __asan_report_store4(p_throw_function);
    goto LABEL_34;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_function = &retstr->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_33;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call>
                                 + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call>
                                          + 7);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  *(_QWORD *)retstr->baseclass_0 = &unk_1D4ADE38;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::bad_function_call + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)retstr);
    goto LABEL_41;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 7) = &off_1D4ADE88;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( !v24.data_.px_ )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v24.data_.px_->_vptr_error_info_container + 5))(&v23);
    goto LABEL_44;
  }
  __asan_report_load8();
LABEL_44:
  v2 = (boost::exception_detail::error_info_container *)v23;
  v11 = *(_QWORD *)(v4 + 32);
  if ( !v11 )
    goto LABEL_50;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v11 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v11 + 32LL))();
    goto LABEL_50;
  }
  __asan_report_load8();
LABEL_50:
  *(_QWORD *)(v4 + 32) = v2;
  if ( !v2 )
    goto LABEL_56;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_56;
  }
  __asan_report_load8();
LABEL_56:
  if ( !v23 )
    goto LABEL_60;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_70;
  }
  v12 = *(_QWORD *)v23 + 32LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_throw_file = v12;
    __asan_report_load8();
    goto LABEL_71;
  }
  (*(void (**)(void))(*(_QWORD *)v23 + 32LL))();
LABEL_60:
  p_throw_file = (unsigned __int64)&retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
LABEL_72:
    __asan_report_store4(p_throw_file);
    goto LABEL_73;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_file = (unsigned __int64)&retstr->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_72;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  retstr->throw_function_ = v24.throw_function_;
  v2 = *(boost::exception_detail::error_info_container **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8();
LABEL_75:
    __asan_report_load8();
    goto LABEL_76;
  }
  v15 = retstr->data_.px_;
  if ( !v15 )
    goto LABEL_77;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  if ( !*(_BYTE *)(((unsigned __int64)(v15->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v15->_vptr_error_info_container + 4))();
    goto LABEL_77;
  }
LABEL_76:
  __asan_report_load8();
LABEL_77:
  retstr->data_.px_ = v2;
  if ( !v2 )
    goto LABEL_83;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_83;
  }
  __asan_report_load8();
LABEL_83:
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_87;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8();
    goto LABEL_99;
  }
  (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
LABEL_87:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 24;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_101:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    v18 = (_QWORD *)v23;
    if ( v23 )
    {
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)(*v18 + 32LL) >> 3) + 0x7FFF8000) )
      {
        v18 = (_QWORD *)(*v18 + 32LL);
        __asan_report_load8();
      }
      (*(void (__fastcall **)(_QWORD *))(v19 + 32))(v18);
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v4 + 32);
      if ( !v20 )
        goto LABEL_113;
      if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8();
      v10 = v21;
    }
    v22 = *(_QWORD *)v20;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
    {
      v20 = *(_QWORD *)v20 + 32LL;
      __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64))(v22 + 32))(v20);
LABEL_113:
    boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(retstr);
LABEL_41:
    boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(&v24);
    __asan_handle_no_return(&v24);
    _Unwind_Resume(v10);
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::bad_function_call> + 7) = (char *)&`vtable for'boost::wrapexcept<boost::bad_function_call> + 136;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_function_call> + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( !v24.data_.px_ )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_115;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    __asan_report_load8();
    goto LABEL_116;
  }
  (*((void (**)(void))v24.data_.px_->_vptr_error_info_container + 4))();
LABEL_94:
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::bad_function_call + 2;
  std::runtime_error::~runtime_error((std::runtime_error *)&v24);
  if ( v25 != (char *)v4 )
  {
LABEL_116:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 515: range 000000000BF1872C-000000000BF187AC
boost::wrapexcept<boost::condition_error> *__cdecl boost::exception_detail::enable_both<boost::condition_error>(
        boost::wrapexcept<boost::condition_error> *retstr,
        const boost::condition_error *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::condition_error>::type v3; // [rsp+10h] [rbp-80h] BYREF

  boost::enable_error_info<boost::condition_error>(&v3, x);
  boost::wrapexcept<boost::condition_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF150AE-000000000BF15119
boost::wrapexcept<boost::gregorian::bad_day_of_month> *__cdecl boost::exception_detail::enable_both<boost::gregorian::bad_day_of_month>(
        boost::wrapexcept<boost::gregorian::bad_day_of_month> *retstr,
        const boost::gregorian::bad_day_of_month *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_day_of_month>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<boost::gregorian::bad_day_of_month>(&v3, x);
  boost::wrapexcept<boost::gregorian::bad_day_of_month>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000C2C8638-000000000C2C8E03
boost::wrapexcept<boost::gregorian::bad_day_of_year> *__fastcall boost::exception_detail::enable_both<boost::gregorian::bad_day_of_year>(
        boost::wrapexcept<boost::gregorian::bad_day_of_year> *retstr,
        const boost::gregorian::bad_day_of_year *x)
{
  boost::exception_detail::error_info_container *v2; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  struct _Unwind_Exception *v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v14; // al
  boost::exception_detail::error_info_container *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  struct _Unwind_Exception *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+18h] [rbp-C0h] BYREF
  boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> v24; // [rsp+20h] [rbp-B8h] BYREF
  char v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::enable_both<boost::gregorian::bad_day_of_year>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::logic_error::logic_error((std::logic_error *)&v24, (const std::logic_error *)x);
  memset(&v24.data_, 0, 24);
  v24.throw_line_ = -1;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                             + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                      + 7);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> + 7) = &`vtable for'boost::exception_detail::clone_base + 2;
  std::logic_error::logic_error((std::logic_error *)retstr, (const std::logic_error *)&v24);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  px = v24.data_.px_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  retstr->data_.px_ = v24.data_.px_;
  if ( !px )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load8();
LABEL_18:
  p_throw_function = &retstr->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_32;
  }
  retstr->throw_function_ = v24.throw_function_;
  p_throw_function = &retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    __asan_report_store4(p_throw_function);
    goto LABEL_34;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_function = &retstr->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_33;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                 + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                          + 7);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  *(_QWORD *)retstr->baseclass_0 = &unk_1D4AF5E0;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
    std::out_of_range::~out_of_range((std::out_of_range *)retstr);
    goto LABEL_41;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> + 7) = &off_1D4AF630;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( !v24.data_.px_ )
    goto LABEL_60;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v24.data_.px_->_vptr_error_info_container + 5))(&v23);
    goto LABEL_44;
  }
  __asan_report_load8();
LABEL_44:
  v2 = (boost::exception_detail::error_info_container *)v23;
  v11 = *(_QWORD *)(v4 + 32);
  if ( !v11 )
    goto LABEL_50;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v11 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v11 + 32LL))();
    goto LABEL_50;
  }
  __asan_report_load8();
LABEL_50:
  *(_QWORD *)(v4 + 32) = v2;
  if ( !v2 )
    goto LABEL_56;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_56;
  }
  __asan_report_load8();
LABEL_56:
  if ( !v23 )
    goto LABEL_60;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_70;
  }
  v12 = *(_QWORD *)v23 + 32LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    p_throw_file = v12;
    __asan_report_load8();
    goto LABEL_71;
  }
  (*(void (**)(void))(*(_QWORD *)v23 + 32LL))();
LABEL_60:
  p_throw_file = (unsigned __int64)&retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
LABEL_72:
    __asan_report_store4(p_throw_file);
    goto LABEL_73;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_file = (unsigned __int64)&retstr->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_72;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  retstr->throw_function_ = v24.throw_function_;
  v2 = *(boost::exception_detail::error_info_container **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8();
LABEL_75:
    __asan_report_load8();
    goto LABEL_76;
  }
  v15 = retstr->data_.px_;
  if ( !v15 )
    goto LABEL_77;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    goto LABEL_75;
  if ( !*(_BYTE *)(((unsigned __int64)(v15->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v15->_vptr_error_info_container + 4))();
    goto LABEL_77;
  }
LABEL_76:
  __asan_report_load8();
LABEL_77:
  retstr->data_.px_ = v2;
  if ( !v2 )
    goto LABEL_83;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_83;
  }
  __asan_report_load8();
LABEL_83:
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_87;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8();
    goto LABEL_99;
  }
  (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
LABEL_87:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_year> + 24;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_year>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                                    + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_101:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    v18 = (_QWORD *)v23;
    if ( v23 )
    {
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)(*v18 + 32LL) >> 3) + 0x7FFF8000) )
      {
        v18 = (_QWORD *)(*v18 + 32LL);
        __asan_report_load8();
      }
      (*(void (__fastcall **)(_QWORD *))(v19 + 32))(v18);
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v4 + 32);
      if ( !v20 )
        goto LABEL_113;
      if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8();
      v10 = v21;
    }
    v22 = *(_QWORD *)v20;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
    {
      v20 = *(_QWORD *)v20 + 32LL;
      __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64))(v22 + 32))(v20);
LABEL_113:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>::~error_info_injector(retstr);
LABEL_41:
    boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>::~error_info_injector(&v24);
    __asan_handle_no_return(&v24);
    _Unwind_Resume(v10);
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> + 7) = (char *)&`vtable for'boost::wrapexcept<boost::gregorian::bad_day_of_year> + 136;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year>
                             + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( !v24.data_.px_ )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_115;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    __asan_report_load8();
    goto LABEL_116;
  }
  (*((void (**)(void))v24.data_.px_->_vptr_error_info_container + 4))();
LABEL_94:
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_year + 2;
  std::out_of_range::~out_of_range((std::out_of_range *)&v24);
  if ( v25 != (char *)v4 )
  {
LABEL_116:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 515: range 000000000BF336DE-000000000BF33749
boost::wrapexcept<boost::gregorian::bad_month> *__cdecl boost::exception_detail::enable_both<boost::gregorian::bad_month>(
        boost::wrapexcept<boost::gregorian::bad_month> *retstr,
        const boost::gregorian::bad_month *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_month>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<boost::gregorian::bad_month>(&v3, x);
  boost::wrapexcept<boost::gregorian::bad_month>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF33544-000000000BF335AF
boost::wrapexcept<boost::gregorian::bad_year> *__cdecl boost::exception_detail::enable_both<boost::gregorian::bad_year>(
        boost::wrapexcept<boost::gregorian::bad_year> *retstr,
        const boost::gregorian::bad_year *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::gregorian::bad_year>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<boost::gregorian::bad_year>(&v3, x);
  boost::wrapexcept<boost::gregorian::bad_year>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF18232-000000000BF182B2
boost::wrapexcept<boost::lock_error> *__cdecl boost::exception_detail::enable_both<boost::lock_error>(
        boost::wrapexcept<boost::lock_error> *retstr,
        const boost::lock_error *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::lock_error>::type v3; // [rsp+10h] [rbp-80h] BYREF

  boost::enable_error_info<boost::lock_error>(&v3, x);
  boost::wrapexcept<boost::lock_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000BF18083-000000000BF18103
boost::wrapexcept<boost::thread_resource_error> *__cdecl boost::exception_detail::enable_both<boost::thread_resource_error>(
        boost::wrapexcept<boost::thread_resource_error> *retstr,
        const boost::thread_resource_error *x)
{
  boost::exception_detail::enable_error_info_return_type<boost::thread_resource_error>::type v3; // [rsp+10h] [rbp-80h] BYREF

  boost::enable_error_info<boost::thread_resource_error>(&v3, x);
  boost::wrapexcept<boost::thread_resource_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000C713D3D-000000000C713EF1
boost::wrapexcept<std::invalid_argument> *__cdecl boost::exception_detail::enable_both<std::invalid_argument>(
        boost::wrapexcept<std::invalid_argument> *retstr,
        const std::invalid_argument *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::exception_detail::enable_both<std::invalid_argument>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 87) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 56LL);
  }
  boost::enable_error_info<std::invalid_argument>(
    (boost::exception_detail::enable_error_info_return_type<std::invalid_argument>::type *)(v2 + 32),
    x);
  boost::wrapexcept<std::invalid_argument>::wrapexcept(
    retstr,
    (const boost::exception_detail::enable_error_info_return_type<std::invalid_argument>::type *)(v2 + 32));
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector((boost::exception_detail::error_info_injector<std::invalid_argument> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 515: range 000000000BF7CAF2-000000000BF7CB5D
boost::wrapexcept<std::length_error> *__cdecl boost::exception_detail::enable_both<std::length_error>(
        boost::wrapexcept<std::length_error> *retstr,
        const std::length_error *x)
{
  boost::exception_detail::enable_error_info_return_type<std::length_error>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<std::length_error>(&v3, x);
  boost::wrapexcept<std::length_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<std::length_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000C2C633F-000000000C2C6AC5
boost::wrapexcept<std::out_of_range> *__fastcall boost::exception_detail::enable_both<std::out_of_range>(
        boost::wrapexcept<std::out_of_range> *retstr,
        const std::out_of_range *x)
{
  boost::exception_detail::error_info_container *v2; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  struct _Unwind_Exception *v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 p_throw_file; // rdi
  char v14; // al
  boost::exception_detail::error_info_container *v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  struct _Unwind_Exception *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+18h] [rbp-C0h] BYREF
  boost::exception_detail::error_info_injector<std::out_of_range> v24; // [rsp+20h] [rbp-B8h] BYREF
  char v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::enable_both<std::out_of_range>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::logic_error::logic_error((std::logic_error *)&v24, x);
  memset(&v24.data_, 0, 24);
  v24.throw_line_ = -1;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 7);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 7) = &`vtable for'boost::exception_detail::clone_base
                                                                                            + 2;
  std::logic_error::logic_error((std::logic_error *)retstr, (const std::logic_error *)&v24);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'std::out_of_range + 16;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  px = v24.data_.px_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  retstr->data_.px_ = v24.data_.px_;
  if ( !px )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load8();
LABEL_18:
  p_throw_function = &retstr->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_32;
  }
  retstr->throw_function_ = v24.throw_function_;
  p_throw_function = &retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
LABEL_33:
    __asan_report_store4(p_throw_function);
    goto LABEL_34;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_function = &retstr->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_33;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::out_of_range>
                                          + 7);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    goto LABEL_37;
  }
  *(_QWORD *)retstr->baseclass_0 = &unk_1D4AF140;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range>>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    std::out_of_range::~out_of_range((std::out_of_range *)retstr);
    goto LABEL_39;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 7) = &off_1D4AF190;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( !v24.data_.px_ )
    goto LABEL_58;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v24.data_.px_->_vptr_error_info_container + 5))(&v23);
    goto LABEL_42;
  }
  __asan_report_load8();
LABEL_42:
  v2 = (boost::exception_detail::error_info_container *)v23;
  v11 = *(_QWORD *)(v4 + 32);
  if ( !v11 )
    goto LABEL_48;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v11 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v11 + 32LL))();
    goto LABEL_48;
  }
  __asan_report_load8();
LABEL_48:
  *(_QWORD *)(v4 + 32) = v2;
  if ( !v2 )
    goto LABEL_54;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_54;
  }
  __asan_report_load8();
LABEL_54:
  if ( !v23 )
    goto LABEL_58;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_68;
  }
  v12 = *(_QWORD *)v23 + 32LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_throw_file = v12;
    __asan_report_load8();
    goto LABEL_69;
  }
  (*(void (**)(void))(*(_QWORD *)v23 + 32LL))();
LABEL_58:
  p_throw_file = (unsigned __int64)&retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
LABEL_70:
    __asan_report_store4(p_throw_file);
    goto LABEL_71;
  }
  retstr->throw_file_ = v24.throw_file_;
  p_throw_file = (unsigned __int64)&retstr->throw_line_;
  v14 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_70;
  retstr->throw_line_ = v24.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8();
    goto LABEL_72;
  }
  retstr->throw_function_ = v24.throw_function_;
  v2 = *(boost::exception_detail::error_info_container **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_load8();
LABEL_73:
    __asan_report_load8();
    goto LABEL_74;
  }
  v15 = retstr->data_.px_;
  if ( !v15 )
    goto LABEL_75;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    goto LABEL_73;
  if ( !*(_BYTE *)(((unsigned __int64)(v15->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v15->_vptr_error_info_container + 4))();
    goto LABEL_75;
  }
LABEL_74:
  __asan_report_load8();
LABEL_75:
  retstr->data_.px_ = v2;
  if ( !v2 )
    goto LABEL_81;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_81;
  }
  __asan_report_load8();
LABEL_81:
  v16 = *(_QWORD *)(v4 + 32);
  if ( !v16 )
    goto LABEL_85;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_96;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8();
    goto LABEL_97;
  }
  (*(void (**)(void))(*(_QWORD *)v16 + 32LL))();
LABEL_85:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'boost::wrapexcept<std::out_of_range> + 24;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::out_of_range> + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_99:
    v10 = (struct _Unwind_Exception *)__asan_report_store8();
    v18 = (_QWORD *)v23;
    if ( v23 )
    {
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)(*v18 + 32LL) >> 3) + 0x7FFF8000) )
      {
        v18 = (_QWORD *)(*v18 + 32LL);
        __asan_report_load8();
      }
      (*(void (__fastcall **)(_QWORD *))(v19 + 32))(v18);
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v4 + 32);
      if ( !v20 )
        goto LABEL_111;
      if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8();
      v10 = v21;
    }
    v22 = *(_QWORD *)v20;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
    {
      v20 = *(_QWORD *)v20 + 32LL;
      __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64))(v22 + 32))(v20);
LABEL_111:
    boost::exception_detail::error_info_injector<std::out_of_range>::~error_info_injector(retstr);
LABEL_39:
    boost::exception_detail::error_info_injector<std::out_of_range>::~error_info_injector(&v24);
    __asan_handle_no_return(&v24);
    _Unwind_Resume(v10);
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::out_of_range> + 7) = (char *)&`vtable for'boost::wrapexcept<std::out_of_range>
                                                                                            + 136;
  *(_QWORD *)v24.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::out_of_range> + 2;
  v24._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( !v24.data_.px_ )
    goto LABEL_92;
  if ( *(_BYTE *)(((unsigned __int64)v24.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v24.data_.px_->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_load8();
    goto LABEL_114;
  }
  (*((void (**)(void))v24.data_.px_->_vptr_error_info_container + 4))();
LABEL_92:
  std::out_of_range::~out_of_range((std::out_of_range *)&v24);
  if ( v25 != (char *)v4 )
  {
LABEL_114:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 515: range 000000000BF1416A-000000000BF141D5
boost::wrapexcept<std::runtime_error> *__cdecl boost::exception_detail::enable_both<std::runtime_error>(
        boost::wrapexcept<std::runtime_error> *retstr,
        const std::runtime_error *x)
{
  boost::exception_detail::enable_error_info_return_type<std::runtime_error>::type v3; // [rsp+10h] [rbp-50h] BYREF

  boost::enable_error_info<std::runtime_error>(&v3, x);
  boost::wrapexcept<std::runtime_error>::wrapexcept(retstr, &v3);
  boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(&v3);
  return retstr;
};

// Line 515: range 000000000C27CA2C-000000000C27D261
boost::wrapexcept<std::runtime_error> *__fastcall boost::exception_detail::enable_both<boost::exception_detail::error_info_injector<std::runtime_error>>(
        boost::wrapexcept<std::runtime_error> *retstr,
        const boost::exception_detail::error_info_injector<std::runtime_error> *x)
{
  boost::exception_detail::error_info_container *v2; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  boost::exception_detail::error_info_container *px; // rdi
  __int64 v7; // rax
  void *p_throw_function; // rdi
  char v9; // al
  boost::exception_detail::error_info_container *v10; // rdi
  struct _Unwind_Exception *v11; // rbx
  void *p_throw_file; // rdi
  char v13; // al
  struct _Unwind_Exception *v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 p_throw_line; // rdi
  char v18; // al
  boost::exception_detail::error_info_container *v19; // rdi
  unsigned __int64 v20; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  struct _Unwind_Exception *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+18h] [rbp-C0h] BYREF
  boost::exception_detail::error_info_injector<std::runtime_error> v28; // [rsp+20h] [rbp-B8h] BYREF
  char v29[120]; // [rsp+60h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 8 data:410";
  *(_QWORD *)(v4 + 16) = boost::exception_detail::enable_both<boost::exception_detail::error_info_injector<std::runtime_error>>;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::runtime_error::runtime_error((std::runtime_error *)&v28, (const std::runtime_error *)x);
  v28._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( *(_BYTE *)(((unsigned __int64)&x->data_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_10:
    __asan_report_load8();
    goto LABEL_11;
  }
  px = x->data_.px_;
  v28.data_.px_ = px;
  if ( !px )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
    goto LABEL_10;
  if ( !*(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))px->_vptr_error_info_container + 3))();
    goto LABEL_12;
  }
LABEL_11:
  __asan_report_load8();
LABEL_12:
  p_throw_function = &x->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_24;
  }
  v28.throw_function_ = x->throw_function_;
  p_throw_function = &x->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8();
LABEL_25:
    __asan_report_load4(p_throw_function);
    goto LABEL_26;
  }
  v28.throw_file_ = x->throw_file_;
  p_throw_function = &x->throw_line_;
  v9 = *(_BYTE *)(((unsigned __int64)&x->throw_line_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_25;
  v28.throw_line_ = x->throw_line_;
  *(_QWORD *)v28.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  v28._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 7);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 7) = &`vtable for'boost::exception_detail::clone_base
                                                                                             + 2;
  std::runtime_error::runtime_error((std::runtime_error *)retstr, (const std::runtime_error *)&v28);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
LABEL_28:
    v11 = (struct _Unwind_Exception *)__asan_report_store8();
    std::runtime_error::~runtime_error((std::runtime_error *)&v28);
    __asan_handle_no_return(&v28);
    _Unwind_Resume(v11);
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  v10 = v28.data_.px_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  retstr->data_.px_ = v28.data_.px_;
  if ( !v10 )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v10->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v10->_vptr_error_info_container + 3))();
    goto LABEL_31;
  }
  __asan_report_load8();
LABEL_31:
  p_throw_file = &retstr->throw_function_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_45;
  }
  retstr->throw_function_ = v28.throw_function_;
  p_throw_file = &retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
LABEL_46:
    __asan_report_store4(p_throw_file);
    goto LABEL_47;
  }
  retstr->throw_file_ = v28.throw_file_;
  p_throw_file = &retstr->throw_line_;
  v13 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_46;
  retstr->throw_line_ = v28.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_store8();
    goto LABEL_48;
  }
  *(_QWORD *)retstr->baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  retstr->_vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error>
                                          + 7);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
    goto LABEL_50;
  }
  *(_QWORD *)retstr->baseclass_0 = &unk_1D4A1290;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
    goto LABEL_51;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>
                                          + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_51:
    v14 = (struct _Unwind_Exception *)__asan_report_store8();
    std::runtime_error::~runtime_error((std::runtime_error *)retstr);
    goto LABEL_52;
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 7) = &off_1D4A12E0;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( !v28.data_.px_ )
    goto LABEL_71;
  if ( *(_BYTE *)(((unsigned __int64)v28.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v28.data_.px_->_vptr_error_info_container + 5) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(unsigned __int64 *))v28.data_.px_->_vptr_error_info_container + 5))(&v27);
    goto LABEL_55;
  }
  __asan_report_load8();
LABEL_55:
  v2 = (boost::exception_detail::error_info_container *)v27;
  v15 = *(_QWORD *)(v4 + 32);
  if ( !v15 )
    goto LABEL_61;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v15 + 32LL) >> 3) + 0x7FFF8000) )
  {
    (*(void (**)(void))(*(_QWORD *)v15 + 32LL))();
    goto LABEL_61;
  }
  __asan_report_load8();
LABEL_61:
  *(_QWORD *)(v4 + 32) = v2;
  if ( !v2 )
    goto LABEL_67;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_67;
  }
  __asan_report_load8();
LABEL_67:
  if ( !v27 )
    goto LABEL_71;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_81;
  }
  v16 = *(_QWORD *)v27 + 32LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    p_throw_line = v16;
    __asan_report_load8();
    goto LABEL_82;
  }
  (*(void (**)(void))(*(_QWORD *)v27 + 32LL))();
LABEL_71:
  p_throw_line = (unsigned __int64)&retstr->throw_file_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_file_ >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_store8();
LABEL_83:
    __asan_report_store4(p_throw_line);
    goto LABEL_84;
  }
  retstr->throw_file_ = v28.throw_file_;
  p_throw_line = (unsigned __int64)&retstr->throw_line_;
  v18 = *(_BYTE *)(((unsigned __int64)&retstr->throw_line_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_83;
  retstr->throw_line_ = v28.throw_line_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->throw_function_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8();
    goto LABEL_85;
  }
  retstr->throw_function_ = v28.throw_function_;
  v2 = *(boost::exception_detail::error_info_container **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&retstr->data_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8();
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
  v19 = retstr->data_.px_;
  if ( !v19 )
    goto LABEL_88;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  if ( !*(_BYTE *)(((unsigned __int64)(v19->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))v19->_vptr_error_info_container + 4))();
    goto LABEL_88;
  }
LABEL_87:
  __asan_report_load8();
LABEL_88:
  retstr->data_.px_ = v2;
  if ( !v2 )
    goto LABEL_94;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(boost::exception_detail::error_info_container *))v2->_vptr_error_info_container + 3))(v2);
    goto LABEL_94;
  }
  __asan_report_load8();
LABEL_94:
  v20 = *(_QWORD *)(v4 + 32);
  if ( !v20 )
    goto LABEL_98;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_109;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v20 + 32LL) >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8();
    goto LABEL_110;
  }
  (*(void (**)(void))(*(_QWORD *)v20 + 32LL))();
LABEL_98:
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  *(_QWORD *)retstr->baseclass_0 = (char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 24;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->boost::exception >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  retstr->_vptr_exception = (int (**)(...))((char *)&`vtable for'boost::wrapexcept<std::runtime_error> + 80);
  if ( *(_BYTE *)(((unsigned __int64)(&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 1) >> 3)
                + 0x7FFF8000) )
  {
LABEL_112:
    v14 = (struct _Unwind_Exception *)__asan_report_store8();
    v22 = (_QWORD *)v27;
    if ( v27 )
    {
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = *v22;
      if ( *(_BYTE *)(((unsigned __int64)(*v22 + 32LL) >> 3) + 0x7FFF8000) )
      {
        v22 = (_QWORD *)(*v22 + 32LL);
        __asan_report_load8();
      }
      (*(void (__fastcall **)(_QWORD *))(v23 + 32))(v22);
    }
    while ( 1 )
    {
      v24 = *(_QWORD *)(v4 + 32);
      if ( !v24 )
        goto LABEL_124;
      if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8();
      v14 = v25;
    }
    v26 = *(_QWORD *)v24;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v24 + 32LL) >> 3) + 0x7FFF8000) )
    {
      v24 = *(_QWORD *)v24 + 32LL;
      __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64))(v26 + 32))(v24);
LABEL_124:
    boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(retstr);
LABEL_52:
    boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector(&v28);
    __asan_handle_no_return(&v28);
    _Unwind_Resume(v14);
  }
  *((_QWORD *)&retstr->boost::exception_detail::error_info_injector<std::runtime_error> + 7) = (char *)&`vtable for'boost::wrapexcept<std::runtime_error>
                                                                                             + 136;
  *(_QWORD *)v28.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  v28._vptr_exception = (int (**)(...))(&`vtable for'boost::exception + 2);
  if ( !v28.data_.px_ )
    goto LABEL_105;
  if ( *(_BYTE *)(((unsigned __int64)v28.data_.px_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_126;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v28.data_.px_->_vptr_error_info_container + 4) >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_load8();
    goto LABEL_127;
  }
  (*((void (**)(void))v28.data_.px_->_vptr_error_info_container + 4))();
LABEL_105:
  std::runtime_error::~runtime_error((std::runtime_error *)&v28);
  if ( v29 != (char *)v4 )
  {
LABEL_127:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 592: range 000000000CBD50B2-000000000CBD5210
void __cdecl boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
        boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *const this,
        const boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call> > *a2)
{
  boost::exception_detail::clone_base *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rdx
  int (**v5)(...); // rdx
  boost::exception_detail::error_info_injector<boost::bad_function_call> *v6; // rax
  char *v7; // rcx

  v2 = (boost::exception_detail::clone_base *)(&this->boost::exception_detail::error_info_injector<boost::bad_function_call>
                                             + 1);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)a2->baseclass_0 - 24LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::exception_detail::clone_base::clone_base(
    v2,
    (const boost::exception_detail::clone_base *)&a2->baseclass_0[*(_QWORD *)v3]);
  boost::exception_detail::error_info_injector<boost::bad_function_call>::error_info_injector(this, a2);
  v4 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
     + 24;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  v5 = (int (**)(...))((char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
                     + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->boost::exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_exception = v5;
  v6 = &this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1;
  v7 = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>
     + 136;
  if ( *(_BYTE *)(((unsigned __int64)(&this->boost::exception_detail::error_info_injector<boost::bad_function_call> + 1) >> 3)
                + 0x7FFF8000) )
    v6 = (boost::exception_detail::error_info_injector<boost::bad_function_call> *)__asan_report_store8();
  *(_QWORD *)v6->baseclass_0 = v7;
};
