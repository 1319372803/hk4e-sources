// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/regex_error.h

// Line 157: range 000000000CDFAB8E-000000000CDFAC26
void __cdecl std::regex_error::regex_error(
        std::regex_error *const this,
        std::regex_constants::error_type __ecode,
        const char *__what)
{
  char *v3; // rdx

  std::runtime_error::runtime_error(this, __what);
  v3 = (char *)&`vtable for'std::regex_error + 16;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this = v3;
  if ( *(_BYTE *)((((unsigned __int64)this + 16) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)this + 16) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4((char *)this + 16);
  }
  *((_DWORD *)this + 4) = __ecode;
};

// Line 171: range 000000000CDFAC27-000000000CDFAC8E
void __cdecl __noreturn std::__throw_regex_error(std::regex_constants::error_type __ecode, const char *__what)
{
  std::regex_error *exception; // rdi

  exception = (std::regex_error *)__cxa_allocate_exception(0x18uLL);
  std::regex_error::regex_error(exception, __ecode, __what);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::regex_error,
    (void (__fastcall *)(void *))&std::regex_error::~regex_error);
};
