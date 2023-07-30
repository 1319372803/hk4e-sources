// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/char_traits.h

// Line 96: range 000000000F86D10E-000000000F86D196
void __cdecl __gnu_cxx::char_traits<bool>::assign(
        __gnu_cxx::char_traits<bool>::char_type *__c1,
        const __gnu_cxx::char_traits<bool>::char_type *__c2)
{
  __gnu_cxx::char_traits<bool>::char_type v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c2 & 7) >= *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__c2);
  }
  v2 = *__c2;
  if ( *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c1 & 7) >= *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__c1);
  }
  *__c1 = v2;
};

// Line 100: range 000000000C656754-000000000C6567E1
bool __cdecl __gnu_cxx::char_traits<char>::eq(
        const __gnu_cxx::char_traits<char>::char_type *__c1,
        const __gnu_cxx::char_traits<char>::char_type *__c2)
{
  __gnu_cxx::char_traits<char>::char_type v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c1 & 7) >= *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__c1);
  }
  v2 = *__c1;
  if ( *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c2 & 7) >= *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__c2);
  }
  return v2 == *__c2;
};

// Line 101: range 000000000C6567E2-000000000C656827
std::size_t __cdecl __gnu_cxx::char_traits<char>::length(const __gnu_cxx::char_traits<char>::char_type *__p)
{
  __gnu_cxx::char_traits<char>::char_type __c2; // [rsp+17h] [rbp-9h] BYREF
  std::size_t __i; // [rsp+18h] [rbp-8h]

  for ( __i = 0LL; ; ++__i )
  {
    __c2 = 0;
    if ( __gnu_cxx::char_traits<char>::eq(&__p[__i], &__c2) )
      break;
  }
  return __i;
};

// Line 104: range 000000000C656639-000000000C6566C6
bool __cdecl __gnu_cxx::char_traits<char>::lt(
        const __gnu_cxx::char_traits<char>::char_type *__c1,
        const __gnu_cxx::char_traits<char>::char_type *__c2)
{
  __gnu_cxx::char_traits<char>::char_type v2; // cl

  if ( *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c1 & 7) >= *(_BYTE *)(((unsigned __int64)__c1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__c1);
  }
  v2 = *__c1;
  if ( *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)__c2 & 7) >= *(_BYTE *)(((unsigned __int64)__c2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__c2);
  }
  return v2 < *__c2;
};

// Line 148: range 000000000C6566C8-000000000C656753
int __cdecl __gnu_cxx::char_traits<char>::compare(
        const __gnu_cxx::char_traits<char>::char_type *__s1,
        const __gnu_cxx::char_traits<char>::char_type *__s2,
        std::size_t __n)
{
  std::size_t __i; // [rsp+28h] [rbp-8h]

  for ( __i = 0LL; __i < __n; ++__i )
  {
    if ( __gnu_cxx::char_traits<char>::lt(&__s1[__i], &__s2[__i]) )
      return -1;
    if ( __gnu_cxx::char_traits<char>::lt(&__s2[__i], &__s1[__i]) )
      return 1;
  }
  return 0;
};

// Line 179: range 000000000C6349B1-000000000C634A0E
int __cdecl std::char_traits<char>::compare(
        const std::char_traits<char>::char_type *__s1,
        const std::char_traits<char>::char_type *__s2,
        std::size_t __n)
{
  if ( __n )
    return memcmp(__s1, __s2, __n);
  else
    return 0;
};

// Line 183: range 000000000F97B6FE-000000000F97B738
__gnu_cxx::char_traits<bool>::char_type *__cdecl __gnu_cxx::char_traits<bool>::move(
        __gnu_cxx::char_traits<bool>::char_type *__s1,
        const __gnu_cxx::char_traits<bool>::char_type *__s2,
        std::size_t __n)
{
  if ( __n )
    return (__gnu_cxx::char_traits<bool>::char_type *)memmove(__s1, __s2, __n);
  else
    return __s1;
};

// Line 194: range 000000000F9A573C-000000000F9A5774
__gnu_cxx::char_traits<bool>::char_type *__cdecl __gnu_cxx::char_traits<bool>::copy(
        __gnu_cxx::char_traits<bool>::char_type *__s1,
        const __gnu_cxx::char_traits<bool>::char_type *__s2,
        std::size_t __n)
{
  std::copy<bool const*,bool *>(__s2, &__s2[__n], __s1);
  return __s1;
};

// Line 204: range 000000000F97B996-000000000F97BA6D
__gnu_cxx::char_traits<bool>::char_type *__fastcall __gnu_cxx::char_traits<bool>::assign(
        __gnu_cxx::char_traits<bool>::char_type *__s,
        std::size_t __n,
        char __a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __gnu_cxx::char_traits<bool>::char_type *result; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 7 __a:205";
  *(_QWORD *)(v3 + 16) = __gnu_cxx::char_traits<bool>::assign;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  *(_BYTE *)(v3 + 32) = __a;
  std::fill_n<bool *,unsigned long,bool>(__s, __n, (const bool *)(v3 + 32));
  result = __s;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 329: range 000000000C634A0F-000000000C634A48
std::size_t __cdecl std::char_traits<char>::length(const std::char_traits<char>::char_type *__s)
{
  return strlen(__s);
};
