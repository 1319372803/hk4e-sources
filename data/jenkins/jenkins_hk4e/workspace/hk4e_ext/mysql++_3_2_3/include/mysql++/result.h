// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/result.h

// Line 48: range 000000000C61B56E-000000000C61B58C
void __cdecl mysqlpp::SimpleResult::~SimpleResult(mysqlpp::SimpleResult *const this)
{
  std::string::~string(&this->info_);
};

// Line 284: range 000000000C61B50E-000000000C61B533
void __cdecl mysqlpp::RefCountedPointerDestroyer<st_mysql_res>::operator()(
        const mysqlpp::RefCountedPointerDestroyer<st_mysql_res> *const this,
        MYSQL_RES_0 *doomed)
{
  if ( doomed )
    mysql_free_result((MYSQL_RES *)doomed);
};

// Line 385: range 000000000C61B534-000000000C61B551
MYSQL_RES_0 *__cdecl mysqlpp::UseQueryResult::operator st_mysql_res *(const mysqlpp::UseQueryResult_0 *const this)
{
  return mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::raw(&this->result_);
};
