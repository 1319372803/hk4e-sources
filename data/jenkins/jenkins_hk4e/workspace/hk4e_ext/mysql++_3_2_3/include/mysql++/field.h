// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/field.h

// Line 46: range 000000000C86F732-000000000C86F76C
void __cdecl mysqlpp::Field::~Field(mysqlpp::Field *const this)
{
  std::string::~string(&this->db_);
  std::string::~string(&this->table_);
  std::string::~string(this);
};
