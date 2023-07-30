// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/exceptions.h

// Line 258: range 000000000C61B2E4-000000000C61B33C
void __cdecl mysqlpp::UseQueryError::UseQueryError(mysqlpp::UseQueryError *const this, const char *w)
{
  __int64 *v2; // rdx

  mysqlpp::Exception::Exception(this, w);
  v2 = &`vtable for'mysqlpp::UseQueryError + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};
