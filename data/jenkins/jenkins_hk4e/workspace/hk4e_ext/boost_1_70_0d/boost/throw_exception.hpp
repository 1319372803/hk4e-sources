// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/throw_exception.hpp

// Line 61: range 000000000BEDFFCA-000000000BEDFFD4
void __cdecl boost::throw_exception_assert_compatibility(const std::exception *a1)
{
  ;
};

// Line 63: range 000000000BF07D87-000000000BF07E58
void __cdecl __noreturn boost::throw_exception<boost::asio::bad_executor>(const boost::asio::bad_executor *e)
{
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rax
  boost::wrapexcept<boost::asio::bad_executor> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 55) & 7) >= *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 56LL);
  }
  boost::exception_detail::enable_both<boost::asio::bad_executor>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
};

// Line 63: range 000000000BF05E94-000000000BF05F65
void __cdecl __noreturn boost::throw_exception<boost::asio::invalid_service_owner>(
        const boost::asio::invalid_service_owner *e)
{
  boost::wrapexcept<boost::asio::invalid_service_owner> *exception; // rax
  boost::wrapexcept<boost::asio::invalid_service_owner> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::asio::invalid_service_owner> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::asio::invalid_service_owner>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::asio::invalid_service_owner>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::invalid_service_owner>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::invalid_service_owner>::~wrapexcept);
};

// Line 63: range 000000000BF05F6A-000000000BF0603B
void __cdecl __noreturn boost::throw_exception<boost::asio::service_already_exists>(
        const boost::asio::service_already_exists *e)
{
  boost::wrapexcept<boost::asio::service_already_exists> *exception; // rax
  boost::wrapexcept<boost::asio::service_already_exists> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::asio::service_already_exists> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::asio::service_already_exists>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::asio::service_already_exists>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::service_already_exists>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::service_already_exists>::~wrapexcept);
};

// Line 63: range 000000000BF0C169-000000000BF0C23A
void __cdecl __noreturn boost::throw_exception<boost::condition_error>(const boost::condition_error *e)
{
  boost::wrapexcept<boost::condition_error> *exception; // rax
  boost::wrapexcept<boost::condition_error> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::condition_error> *)__cxa_allocate_exception(0x70uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::condition_error>
                  + 111) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::condition_error>
                                                              + 111) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 112LL);
  }
  boost::exception_detail::enable_both<boost::condition_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::condition_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::condition_error>::~wrapexcept);
};

// Line 63: range 000000000BF084F2-000000000BF085C3
void __cdecl __noreturn boost::throw_exception<boost::gregorian::bad_day_of_month>(
        const boost::gregorian::bad_day_of_month *e)
{
  boost::wrapexcept<boost::gregorian::bad_day_of_month> *exception; // rax
  boost::wrapexcept<boost::gregorian::bad_day_of_month> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::gregorian::bad_day_of_month> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::gregorian::bad_day_of_month>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::gregorian::bad_day_of_month>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::gregorian::bad_day_of_month>::~wrapexcept);
};

// Line 63: range 000000000BF2BD5F-000000000BF2BE30
void __cdecl __noreturn boost::throw_exception<boost::gregorian::bad_month>(const boost::gregorian::bad_month *e)
{
  boost::wrapexcept<boost::gregorian::bad_month> *exception; // rax
  boost::wrapexcept<boost::gregorian::bad_month> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::gregorian::bad_month> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::gregorian::bad_month>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::gregorian::bad_month>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::gregorian::bad_month>::~wrapexcept);
};

// Line 63: range 000000000BF2BC7E-000000000BF2BD4F
void __cdecl __noreturn boost::throw_exception<boost::gregorian::bad_year>(const boost::gregorian::bad_year *e)
{
  boost::wrapexcept<boost::gregorian::bad_year> *exception; // rax
  boost::wrapexcept<boost::gregorian::bad_year> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::gregorian::bad_year> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::gregorian::bad_year>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::gregorian::bad_year>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::gregorian::bad_year>::~wrapexcept);
};

// Line 63: range 000000000BF0BB70-000000000BF0BC41
void __cdecl __noreturn boost::throw_exception<boost::lock_error>(const boost::lock_error *e)
{
  boost::wrapexcept<boost::lock_error> *exception; // rax
  boost::wrapexcept<boost::lock_error> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::lock_error> *)__cxa_allocate_exception(0x70uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::lock_error> + 111) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::lock_error>
                                                              + 111) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 112LL);
  }
  boost::exception_detail::enable_both<boost::lock_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::lock_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::lock_error>::~wrapexcept);
};

// Line 63: range 000000000BF020E8-000000000BF021B9
void __cdecl __noreturn boost::throw_exception<boost::system::system_error>(const boost::system::system_error *e)
{
  boost::wrapexcept<boost::system::system_error> *exception; // rax
  boost::wrapexcept<boost::system::system_error> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::system::system_error> *)__cxa_allocate_exception(0x70uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::system::system_error>
                  + 111) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::system::system_error>
                                                              + 111) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 112LL);
  }
  boost::exception_detail::enable_both<boost::system::system_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::system::system_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::system::system_error>::~wrapexcept);
};

// Line 63: range 000000000BF0BA9A-000000000BF0BB6B
void __cdecl __noreturn boost::throw_exception<boost::thread_resource_error>(const boost::thread_resource_error *e)
{
  boost::wrapexcept<boost::thread_resource_error> *exception; // rax
  boost::wrapexcept<boost::thread_resource_error> *v2; // rbx

  boost::throw_exception_assert_compatibility((const std::exception *)e);
  exception = (boost::wrapexcept<boost::thread_resource_error> *)__cxa_allocate_exception(0x70uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                  + 111) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::thread_resource_error>
                                                              + 111) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 112LL);
  }
  boost::exception_detail::enable_both<boost::thread_resource_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::thread_resource_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::thread_resource_error>::~wrapexcept);
};

// Line 63: range 000000000C65678F-000000000C656860
void __cdecl __noreturn boost::throw_exception<std::invalid_argument>(const std::invalid_argument *e)
{
  boost::wrapexcept<std::invalid_argument> *exception; // rax
  boost::wrapexcept<std::invalid_argument> *v2; // rbx

  boost::throw_exception_assert_compatibility(e);
  exception = (boost::wrapexcept<std::invalid_argument> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::invalid_argument>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::invalid_argument>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<std::invalid_argument>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::invalid_argument>,
    (void (__fastcall *)(void *))boost::wrapexcept<std::invalid_argument>::~wrapexcept);
};

// Line 63: range 000000000BF76B80-000000000BF76C51
void __cdecl __noreturn boost::throw_exception<std::length_error>(const std::length_error *e)
{
  boost::wrapexcept<std::length_error> *exception; // rax
  boost::wrapexcept<std::length_error> *v2; // rbx

  boost::throw_exception_assert_compatibility(e);
  exception = (boost::wrapexcept<std::length_error> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::length_error> + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::length_error>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<std::length_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::length_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<std::length_error>::~wrapexcept);
};

// Line 63: range 000000000BF07E5D-000000000BF07F2E
void __cdecl __noreturn boost::throw_exception<std::runtime_error>(const std::runtime_error *e)
{
  boost::wrapexcept<std::runtime_error> *exception; // rax
  boost::wrapexcept<std::runtime_error> *v2; // rbx

  boost::throw_exception_assert_compatibility(e);
  exception = (boost::wrapexcept<std::runtime_error> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::runtime_error> + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::runtime_error>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<std::runtime_error>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::runtime_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<std::runtime_error>::~wrapexcept);
};

// Line 63: range 000000000C249AA4-000000000C249B3A
void __fastcall __noreturn boost::throw_exception<boost::bad_function_call>(const boost::bad_function_call *e)
{
  boost::wrapexcept<boost::bad_function_call> *exception; // rbx

  exception = (boost::wrapexcept<boost::bad_function_call> *)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::bad_function_call>
                  + 63) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<boost::bad_function_call>
                  + 63) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)exception + 63) & 7)
    || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::bad_function_call>(exception, e);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::bad_function_call>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::bad_function_call>::~wrapexcept);
};

// Line 85: range 000000000C28C7C0-000000000C28CB4E
void __fastcall __noreturn boost::exception_detail::throw_exception_<boost::property_tree::xml_parser::xml_parser_error>(
        const boost::property_tree::xml_parser::xml_parser_error *x,
        const char *current_function,
        const char *file,
        int line)
{
  std::forward_iterator_tag v4; // cl
  std::forward_iterator_tag v5; // cl
  const boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *v6; // rax
  const boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *v7; // rax
  const boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *v8; // rbp
  unsigned __int64 exception; // rbx
  boost::throw_line v10; // [rsp+Ch] [rbp-12Ch] BYREF
  const char *current_functiona; // [rsp+10h] [rbp-128h] BYREF
  boost::throw_file v12; // [rsp+18h] [rbp-120h] BYREF
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> v13; // [rsp+20h] [rbp-118h] BYREF
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> v14; // [rsp+A0h] [rbp-98h] BYREF

  v10.v_ = line;
  v12.v_ = file;
  current_functiona = current_function;
  std::runtime_error::runtime_error((std::runtime_error *)&v13, (const std::runtime_error *)x);
  *(_QWORD *)v13.baseclass_0 = &`vtable for'boost::property_tree::file_parser_error + 2;
  v13.m_message._M_dataplus._M_p = v13.m_message._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&x->m_message >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)&x->m_message._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v13.m_message,
      x->m_message._M_dataplus._M_p,
      &x->m_message._M_dataplus._M_p[x->m_message._M_string_length],
      v4);
    goto LABEL_6;
  }
  __asan_report_load8();
LABEL_6:
  v13.m_filename._M_dataplus._M_p = v13.m_filename._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&x->m_filename >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)&x->m_filename._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v13.m_filename,
      x->m_filename._M_dataplus._M_p,
      &x->m_filename._M_dataplus._M_p[x->m_filename._M_string_length],
      v5);
    goto LABEL_11;
  }
  __asan_report_load8();
LABEL_11:
  if ( *(_BYTE *)(((unsigned __int64)&x->m_line >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13.m_line = x->m_line;
  memset(&v13.data_, 0, 24);
  v13.throw_line_ = -1;
  *(_QWORD *)v13.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                             + 2;
  v13._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>
                                      + 7);
  v6 = boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>(
         &v13,
         (const boost::throw_function *)&current_functiona);
  v7 = boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>(
         v6,
         &v12);
  v8 = boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>(
         v7,
         &v10);
  exception = (unsigned __int64)__cxa_allocate_exception(0x88uLL);
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::error_info_injector(
    &v14,
    (__int64)v8);
  if ( *(_BYTE *)(((exception + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 128) = &`vtable for'boost::exception_detail::clone_base + 2;
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::error_info_injector(
    (boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error> *const)exception,
    (__int64)&v14);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = &unk_1D4AE990;
  if ( *(_BYTE *)(((exception + 88) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 88) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>>
                              + 80;
  if ( *(_BYTE *)(((exception + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 128) = &off_1D4AE9E0;
  boost::exception_detail::copy_boost_exception((boost::exception *)(exception + 88), &v14.boost::exception);
  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)exception = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::xml_parser::xml_parser_error> + 24;
  if ( *(_BYTE *)(((exception + 88) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 88) = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::xml_parser::xml_parser_error>
                              + 80;
  if ( *(_BYTE *)(((exception + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(exception + 128) = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::xml_parser::xml_parser_error>
                               + 136;
  boost::exception_detail::error_info_injector<boost::property_tree::xml_parser::xml_parser_error>::~error_info_injector(&v14);
  __asan_handle_no_return(&v14);
  _cxa_throw(
    (void *)exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::property_tree::xml_parser::xml_parser_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<boost::property_tree::xml_parser::xml_parser_error>::~wrapexcept);
};

// Line 85: range 000000000C28DD97-000000000C28E07A
void __fastcall __noreturn boost::exception_detail::throw_exception_<boost::property_tree::ptree_bad_path>(
        const boost::property_tree::ptree_bad_path *x,
        const char *current_function,
        const char *file,
        int line)
{
  unsigned __int64 content; // rdi
  __int64 v5; // rax
  const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *v6; // rax
  const boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *v7; // rax
  boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *v8; // rbp
  unsigned __int64 exception; // rbx
  boost::throw_line v10; // [rsp+Ch] [rbp-ACh] BYREF
  const char *current_functiona; // [rsp+10h] [rbp-A8h] BYREF
  boost::throw_file v12; // [rsp+18h] [rbp-A0h] BYREF
  boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> v13; // [rsp+20h] [rbp-98h] BYREF
  boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> v14; // [rsp+60h] [rbp-58h] BYREF

  v10.v_ = line;
  v12.v_ = file;
  current_functiona = current_function;
  std::runtime_error::runtime_error((std::runtime_error *)&v13, (const std::runtime_error *)x);
  *(_QWORD *)v13.baseclass_0 = &`vtable for'boost::property_tree::ptree_bad_path + 2;
  if ( *(_BYTE *)(((unsigned __int64)&x->m_path >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    content = (unsigned __int64)x->m_path.content;
    if ( !content )
      goto LABEL_10;
    if ( !*(_BYTE *)((content >> 3) + 0x7FFF8000) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)content + 24LL) >> 3) + 0x7FFF8000) )
      {
        v5 = (*(__int64 (**)(void))(*(_QWORD *)content + 24LL))();
LABEL_9:
        content = v5;
LABEL_10:
        v13.m_path.content = (boost::any::placeholder *)content;
        memset(&v13.data_, 0, 24);
        v13.throw_line_ = -1;
        *(_QWORD *)v13.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>
                                   + 2;
        v13._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>
                                            + 7);
        v6 = boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>(
               &v13,
               (const boost::throw_function *)&current_functiona);
        v7 = boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>(
               v6,
               &v12);
        v8 = (boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *)boost::exception_detail::set_info<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>(
                                                                                                     v7,
                                                                                                     &v10);
        exception = (unsigned __int64)__cxa_allocate_exception(0x48uLL);
        boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::error_info_injector(
          &v14,
          v8);
        if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(exception + 64) = &`vtable for'boost::exception_detail::clone_base + 2;
        boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::error_info_injector(
          (boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path> *const)exception,
          &v14);
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &unk_1D4AEC10;
        if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(exception + 24) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>>
                                    + 80;
        if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(exception + 64) = &off_1D4AEC60;
        boost::exception_detail::copy_boost_exception((boost::exception *)(exception + 24), &v14.boost::exception);
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::ptree_bad_path> + 24;
        if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(exception + 24) = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::ptree_bad_path> + 80;
        if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(exception + 64) = (char *)&`vtable for'boost::wrapexcept<boost::property_tree::ptree_bad_path> + 136;
        boost::exception_detail::error_info_injector<boost::property_tree::ptree_bad_path>::~error_info_injector(&v14);
        __asan_handle_no_return(&v14);
        _cxa_throw(
          (void *)exception,
          (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::property_tree::ptree_bad_path>,
          (void (__fastcall *)(void *))boost::wrapexcept<boost::property_tree::ptree_bad_path>::~wrapexcept);
      }
LABEL_8:
      __asan_report_load8();
      goto LABEL_9;
    }
  }
  __asan_report_load8();
  goto LABEL_8;
};

// Line 85: range 000000000C27D266-000000000C27D34D
void __fastcall __noreturn boost::exception_detail::throw_exception_<std::runtime_error>(
        const std::runtime_error *x,
        const char *current_function,
        const char *file,
        int line)
{
  boost::wrapexcept<std::runtime_error> *exception; // rbp
  boost::exception_detail::error_info_injector<std::runtime_error> v7; // [rsp+0h] [rbp-58h] BYREF

  std::runtime_error::runtime_error((std::runtime_error *)&v7, x);
  v7.data_.px_ = 0LL;
  *(_QWORD *)v7.baseclass_0 = &`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 2;
  v7._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<std::runtime_error> + 7);
  v7.throw_function_ = current_function;
  v7.throw_file_ = file;
  v7.throw_line_ = line;
  exception = (boost::wrapexcept<std::runtime_error> *)__cxa_allocate_exception(0x40uLL);
  if ( *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::runtime_error> + 63) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::runtime_error> + 63) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)exception + 63) & 7)
    || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<boost::exception_detail::error_info_injector<std::runtime_error>>(exception, &v7);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::runtime_error>,
    (void (__fastcall *)(void *))boost::wrapexcept<std::runtime_error>::~wrapexcept);
};

// Line 401: range 000000000C656694-000000000C656765
void __cdecl __noreturn boost::throw_exception<std::out_of_range>(const std::out_of_range *e)
{
  boost::wrapexcept<std::out_of_range> *exception; // rax
  boost::wrapexcept<std::out_of_range> *v2; // rbx

  boost::throw_exception_assert_compatibility(e);
  exception = (boost::wrapexcept<std::out_of_range> *)__cxa_allocate_exception(0x40uLL);
  v2 = exception;
  if ( *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::out_of_range> + 63) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)exception + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::out_of_range>
                                                             + 63) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(exception, 64LL);
  }
  boost::exception_detail::enable_both<std::out_of_range>(v2, e);
  __asan_handle_no_return(v2);
  _cxa_throw(
    v2,
    (struct type_info *)&`typeinfo for'boost::wrapexcept<std::out_of_range>,
    (void (__fastcall *)(void *))boost::wrapexcept<std::out_of_range>::~wrapexcept);
};
