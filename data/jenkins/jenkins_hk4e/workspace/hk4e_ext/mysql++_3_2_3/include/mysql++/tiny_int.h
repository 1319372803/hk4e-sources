// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/tiny_int.h

// Line 65: range 000000000C6E95A6-000000000C6E95B0
void __cdecl mysqlpp::tiny_int<signed char>::tiny_int(mysqlpp::tiny_int<signed char> *const this)
{
  ;
};

// Line 69: range 000000000C7BB58E-000000000C7BB5DF
void __cdecl mysqlpp::tiny_int<signed char>::tiny_int(
        mysqlpp::tiny_int<signed char> *const this,
        mysqlpp::tiny_int<signed char>::value_type v)
{
  __int64 v2; // rsi

  v2 = (unsigned __int8)this & 7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)v2 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this, v2);
  }
  this->value_ = v;
};

// Line 75: range 000000000C6E9C92-000000000C6E9CDF
bool __cdecl mysqlpp::tiny_int<signed char>::operator bool(const mysqlpp::tiny_int<signed char> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  return this->value_ != 0;
};
