// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/row.h

// Line 347: range 000000000C61B466-000000000C61B4D5
mysqlpp::Row::private_bool_type __cdecl mysqlpp::Row::operator bool mysqlpp::Row::*(const mysqlpp::Row *const this)
{
  if ( !std::vector<mysqlpp::String>::size(&this->data_) )
    return (mysqlpp::Row::private_bool_type)-1LL;
  if ( *(char *)(((unsigned __int64)&this->initialized_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->initialized_);
  if ( this->initialized_ )
    return (mysqlpp::Row::private_bool_type)56;
  else
    return (mysqlpp::Row::private_bool_type)-1LL;
};
