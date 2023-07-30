// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/throw_exception.hpp

// Line 106: range 000000000BF002EE-000000000BF00328
void __cdecl __noreturn boost::container::throw_bad_alloc()
{
  std::bad_alloc *exception; // rdi

  exception = (std::bad_alloc *)__cxa_allocate_exception(8uLL);
  std::bad_alloc::bad_alloc(exception);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_alloc,
    (void (__fastcall *)(void *))&std::bad_alloc::~bad_alloc);
};

// Line 138: range 000000000BF0032D-000000000BF0038F
void __cdecl __noreturn boost::container::throw_length_error(const char *str)
{
  std::length_error *exception; // rdi

  exception = (std::length_error *)__cxa_allocate_exception(0x10uLL);
  std::length_error::length_error(exception, str);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (__fastcall *)(void *))&std::length_error::~length_error);
};
