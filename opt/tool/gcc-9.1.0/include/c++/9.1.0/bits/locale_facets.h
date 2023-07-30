// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/locale_facets.h

// Line 802: range 000000000CDF9EE4-000000000CDF9F54
std::ctype<char>::char_type __cdecl std::ctype<char>::toupper(
        const std::ctype<char> *const this,
        std::ctype<char>::char_type __c)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this + 16LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this + 16LL);
  return (*(__int64 (__fastcall **)(const std::ctype<char> *const, _QWORD))v2)(this, (unsigned int)__c);
};

// Line 835: range 000000000CDF9F56-000000000CDF9FC6
std::ctype<char>::char_type __cdecl std::ctype<char>::tolower(
        const std::ctype<char> *const this,
        std::ctype<char>::char_type __c)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this + 32LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this + 32LL);
  return (*(__int64 (__fastcall **)(const std::ctype<char> *const, _QWORD))v2)(this, (unsigned int)__c);
};

// Line 852: range 000000000CDF9FC8-000000000CDFA041
const std::ctype<char>::char_type *__cdecl std::ctype<char>::tolower(
        const std::ctype<char> *const this,
        std::ctype<char>::char_type *__lo,
        const std::ctype<char>::char_type *__hi)
{
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = *(_QWORD *)this + 40LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)this + 40LL);
  return (const std::ctype<char>::char_type *)(*(__int64 (__fastcall **)(const std::ctype<char> *const, std::ctype<char>::char_type *, const std::ctype<char>::char_type *))v3)(
                                                this,
                                                __lo,
                                                __hi);
};

// Line 872: range 000000000CDFA042-000000000CDFA156
std::ctype<char>::char_type __cdecl std::ctype<char>::widen(const std::ctype<char> *const this, char __c)
{
  int v2; // ecx
  char v3; // dl
  unsigned __int64 v5; // rax

  if ( *(char *)((((unsigned __int64)this + 56) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1((char *)this + 56);
  if ( *((_BYTE *)this + 56) )
  {
    v2 = (unsigned __int8)__c;
    v3 = *(_BYTE *)((((unsigned __int64)this + (unsigned __int8)__c + 57) >> 3) + 0x7FFF8000);
    if ( v3 != 0 && ((__c + 48 + (unsigned __int8)this + 9) & 7) >= v3 )
      __asan_report_load1((char *)this + (unsigned __int8)__c + 57);
    return *((_BYTE *)this + v2 + 57);
  }
  else
  {
    std::ctype<char>::_M_widen_init(this);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = *(_QWORD *)this + 48LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)this + 48LL);
    return (*(__int64 (__fastcall **)(const std::ctype<char> *const, _QWORD))v5)(this, (unsigned int)__c);
  }
};

// Line 931: range 000000000CDFA158-000000000CDFA304
char __cdecl std::ctype<char>::narrow(
        const std::ctype<char> *const this,
        std::ctype<char>::char_type __c,
        char __dfault)
{
  int v3; // ecx
  unsigned __int64 v4; // rax
  int v5; // ecx
  char v6; // dl
  unsigned __int64 v8; // rax
  int v9; // ecx
  char v10; // dl
  char __t; // [rsp+1Fh] [rbp-1h]

  v3 = (unsigned __int8)__c;
  v4 = (unsigned __int64)this + (unsigned __int8)__c + 313;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v4);
  if ( *((_BYTE *)this + v3 + 313) )
  {
    v5 = (unsigned __int8)__c;
    v6 = *(_BYTE *)((((unsigned __int64)this + (unsigned __int8)__c + 313) >> 3) + 0x7FFF8000);
    if ( v6 != 0 && ((__c + 48 + (unsigned __int8)this + 9) & 7) >= v6 )
      __asan_report_load1((char *)this + (unsigned __int8)__c + 313);
    return *((_BYTE *)this + v5 + 313);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = *(_QWORD *)this + 64LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)this + 64LL);
    __t = (*(__int64 (__fastcall **)(const std::ctype<char> *const, _QWORD, _QWORD))v8)(
            this,
            (unsigned int)__c,
            (unsigned int)__dfault);
    if ( __t != __dfault )
    {
      v9 = (unsigned __int8)__c;
      v10 = *(_BYTE *)((((unsigned __int64)this + (unsigned __int8)__c + 313) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && ((__c + 48 + (unsigned __int8)this + 9) & 7) >= v10 )
        __asan_report_store1((char *)this + (unsigned __int8)__c + 313);
      *((_BYTE *)this + v9 + 313) = __t;
    }
    return __t;
  }
};

// Line 1084: range 000000000C70C390-000000000C70C392
std::ctype<char>::char_type __fastcall std::ctype<char>::do_widen(const std::ctype<char> *const this, char __c)
{
  return __c;
};
