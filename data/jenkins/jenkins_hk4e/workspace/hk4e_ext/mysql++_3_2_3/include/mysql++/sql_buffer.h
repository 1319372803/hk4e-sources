// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/sql_buffer.h

// Line 67: range 000000000C61B33E-000000000C61B388
void __cdecl mysqlpp::SQLBuffer::~SQLBuffer(mysqlpp::SQLBuffer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->data_ )
    operator delete[]((void *)this->data_);
};
