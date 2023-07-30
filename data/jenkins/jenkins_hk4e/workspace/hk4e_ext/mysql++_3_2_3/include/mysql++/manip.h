// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/manip.h

// Line 82: range 000000000C869790-000000000C8697CE
void __cdecl mysqlpp::quote_type1::quote_type1(mysqlpp::quote_type1 *const this, std::ostream *o)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, o);
  this->ostr = o;
};

// Line 91: range 000000000C8697CF-000000000C8698BD
mysqlpp::quote_type1 __cdecl mysqlpp::operator<<(std::ostream *o, mysqlpp::quote_type0 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  mysqlpp::quote_type1 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::operator<<;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  mysqlpp::quote_type1::quote_type1((mysqlpp::quote_type1 *const)(v2 + 32), o);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.ostr = *(std::ostream **)(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
