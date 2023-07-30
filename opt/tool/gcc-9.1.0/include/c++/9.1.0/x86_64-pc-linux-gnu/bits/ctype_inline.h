// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/x86_64-pc-linux-gnu/bits/ctype_inline.h

// Line 44: range 000000000CDFA306-000000000CDFA39D
// local variable allocation has failed, the output may be wrong!
bool __cdecl std::ctype<char>::is(const std::ctype<char> *const this, std::ctype_base::mask __m, char __c)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  char v5; // dl
  __int64 v6; // rdx
  std::ctype_base::mask __ma; // [rsp+4h] [rbp-Ch]

  __ma = __m;
  if ( *(_BYTE *)((((unsigned __int64)this + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load8((char *)this + 48);
  v4 = *((_QWORD *)this + 6) + 2LL * (unsigned __int8)__c;
  v5 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
  LOBYTE(__m) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)(((*((_BYTE *)this + 48) + 2 * __c) & 7) + 1) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_load2(*((_QWORD *)this + 6) + 2LL * (unsigned __int8)__c, __m, v6, v4, v3);
  return (__ma & *(_WORD *)v4) != 0;
};
