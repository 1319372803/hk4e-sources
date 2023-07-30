// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/stadapter.h

// Line 73: range 000000000C61B3A6-000000000C61B3C0
void __cdecl mysqlpp::SQLTypeAdapter::~SQLTypeAdapter(mysqlpp::SQLTypeAdapter *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&this->buffer_);
};
