// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/dbdriver.h

// Line 192: range 000000000CF7E1F0-000000000CF7E1F8
int __fastcall mysqlpp::Connection::errnum(mysqlpp::Connection *const this)
{
  return mysql_errno(&this->driver_->mysql_);
};
