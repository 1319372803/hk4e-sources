// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/cpool.h

// Line 78: range 000000000C2D2964-000000000C2D29E1
void __fastcall mysqlpp::ConnectionPool::~ConnectionPool(mysqlpp::ConnectionPool *const this)
{
  mysqlpp::ConnectionPool *v1; // rbx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  this->_vptr_ConnectionPool = (int (**)(...))(&`vtable for'mysqlpp::ConnectionPool + 2);
  this = (mysqlpp::ConnectionPool *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8();
LABEL_7:
    __asan_handle_no_return(this);
    __assert_fail(
      "empty()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/mysql++_3_2_3/include/mysql++/cpool.h",
      0x4Eu,
      "virtual mysqlpp::ConnectionPool::~ConnectionPool()");
  }
  if ( (mysqlpp::ConnectionPool::PoolT *)v1->pool_._M_impl._M_node._M_next != &v1->pool_ )
    goto LABEL_7;
  mysqlpp::BeecryptMutex::~BeecryptMutex(&v1->mutex_);
  std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo>::_M_clear(&v1->pool_);
};

// Line 78: range 000000000C2D29E6-000000000C2D2A70
void __fastcall mysqlpp::ConnectionPool::~ConnectionPool(mysqlpp::ConnectionPool *const this)
{
  mysqlpp::ConnectionPool *v1; // rbx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  this->_vptr_ConnectionPool = (int (**)(...))(&`vtable for'mysqlpp::ConnectionPool + 2);
  this = (mysqlpp::ConnectionPool *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8();
LABEL_7:
    __asan_handle_no_return(this);
    __assert_fail(
      "empty()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/mysql++_3_2_3/include/mysql++/cpool.h",
      0x4Eu,
      "virtual mysqlpp::ConnectionPool::~ConnectionPool()");
  }
  if ( (mysqlpp::ConnectionPool::PoolT *)v1->pool_._M_impl._M_node._M_next != &v1->pool_ )
    goto LABEL_7;
  mysqlpp::BeecryptMutex::~BeecryptMutex(&v1->mutex_);
  std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo>::_M_clear(&v1->pool_);
  operator delete(v1, 0x28uLL);
};
