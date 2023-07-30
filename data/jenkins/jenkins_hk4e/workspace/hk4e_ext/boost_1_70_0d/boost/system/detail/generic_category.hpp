// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/system/detail/generic_category.hpp

// Line 26: range 000000000BEE2B68-000000000BEE2B79
const char *__cdecl boost::system::detail::strerror_r_helper(const char *r, const char *a2)
{
  return r;
};

// Line 36: range 000000000BEE2B7A-000000000BEE2BB5
const char *__cdecl boost::system::detail::generic_error_category_message(int ev, char *buffer, std::size_t len)
{
  char *v3; // rdx

  v3 = strerror_r(ev, buffer, len);
  return boost::system::detail::strerror_r_helper(v3, buffer);
};

// Line 38: range 000000000BEE2BB6-000000000BEE2D2C
std::string *__cdecl boost::system::detail::generic_error_category_message[abi:cxx11](std::string *retstr, int ev)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *v5; // rcx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-E1h] BYREF
  char v8[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 9 buffer:42";
  *(_QWORD *)(v2 + 16) = boost::system::detail::generic_error_category_message[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  std::allocator<char>::allocator(&__a);
  v5 = boost::system::detail::generic_error_category_message(ev, (char *)(v2 + 32), 0x80uLL);
  std::string::basic_string<std::allocator<char>>(retstr, v5, &__a);
  std::allocator<char>::~allocator(&__a);
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
