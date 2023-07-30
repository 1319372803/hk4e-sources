// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/mysql/include/mysql_conn_pool.hpp

// Line 18: range 000000000CA29302-000000000CA29307
unsigned int __fastcall common::midb::MysqlConnPoolT<std::mutex>::max_idle_time(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  return 604800;
};

// Line 27: range 000000000CA2AED6-000000000CA2B47B
void __fastcall common::midb::MysqlConnPoolT<std::mutex>::MysqlConnPoolT(
        common::midb::MysqlConnPoolT<std::mutex> *const this,
        char *port,
        unsigned __int64 p_dbname,
        uint32_t pool_max_size,
        unsigned __int64 a5,
        unsigned __int64 a6,
        std::string name)
{
  common::midb::MysqlConnPoolT<std::mutex> *v7; // rbx
  char *v8; // r14
  mysqlpp::ConnectionPool::PoolT *p_pool; // rax
  std::forward_iterator_tag v13; // cl
  struct _Unwind_Exception *v14; // rbp
  std::string *p_name; // rdi
  __int64 v16; // rax
  std::forward_iterator_tag v17; // cl
  std::string *p_host; // rdi
  std::string::size_type *v19; // rax
  std::forward_iterator_tag v20; // cl
  std::string *p_port; // rdi
  char v22; // al
  __int64 v23; // rax
  std::forward_iterator_tag v24; // cl
  std::string *p_pwd; // rdi
  __int64 v26; // rax
  std::forward_iterator_tag v27; // cl
  std::string *v28; // rdi
  std::string::pointer v29; // rax
  std::mutex *p_pool_max_size; // rdi
  char v31; // al
  uint16_t v32; // [rsp+Ch] [rbp-7Ch]
  common::milog::MiLogStream v33; // [rsp+10h] [rbp-78h] BYREF
  std::string v34; // [rsp+30h] [rbp-58h] BYREF

  v7 = this;
  v32 = pool_max_size;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, port);
    goto LABEL_7;
  }
  v8 = port;
  this->_vptr_ConnectionPool = (int (**)(...))(&`vtable for'mysqlpp::ConnectionPool + 2);
  p_pool = &this->pool_;
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)((char *)this + 16);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8(this, port);
    goto LABEL_8;
  }
  v7->pool_._M_impl._M_node._M_prev = &p_pool->_M_impl._M_node;
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v7->pool_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pool_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8(this, port);
LABEL_9:
    v14 = (struct _Unwind_Exception *)__asan_report_store8(this, port);
    std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo>::_M_clear(&v7->pool_);
    __asan_handle_no_return(&v7->pool_, port);
    _Unwind_Resume(v14);
  }
  v7->pool_._M_impl._M_node._M_next = &p_pool->_M_impl._M_node;
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v7->pool_._M_impl._M_node._M_size;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pool_._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
    goto LABEL_9;
  v7->pool_._M_impl._M_node._M_size = 0LL;
  mysqlpp::BeecryptMutex::BeecryptMutex(&v7->mutex_);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    p_name = (std::string *)v7;
    __asan_report_store8(v7, port);
    goto LABEL_16;
  }
  v7->_vptr_ConnectionPool = (int (**)(...))(&`vtable for'common::midb::MysqlConnPoolT<std::mutex> + 2);
  p_name = &v7->name_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(p_name, port);
    goto LABEL_17;
  }
  v7->name_._M_dataplus._M_p = v7->name_._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)port >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    v16 = __asan_report_load8(port);
    goto LABEL_18;
  }
  port = *(char **)port;
  v16 = (__int64)(v8 + 8);
  if ( !*(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(p_name, port, &port[*((_QWORD *)v8 + 1)], v13);
    goto LABEL_19;
  }
LABEL_18:
  __asan_report_load8(v16);
LABEL_19:
  p_host = &v7->host_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->host_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_host, port);
    goto LABEL_24;
  }
  v7->host_._M_dataplus._M_p = v7->host_._anon_0._M_local_buf;
  if ( *(_BYTE *)((p_dbname >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    v19 = (std::string::size_type *)__asan_report_load8(p_dbname);
    goto LABEL_25;
  }
  port = *(char **)p_dbname;
  v19 = (std::string::size_type *)(p_dbname + 8);
  if ( *(_BYTE *)(((p_dbname + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(v19);
    goto LABEL_26;
  }
  std::string::_M_construct<char *>(p_host, port, &port[*(_QWORD *)(p_dbname + 8)], v17);
LABEL_26:
  p_port = (std::string *)&v7->port_;
  v22 = *(_BYTE *)(((unsigned __int64)&v7->port_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 1 )
  {
    __asan_report_store2(p_port);
    goto LABEL_33;
  }
  v7->port_ = v32;
  p_port = &v7->user_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->user_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8(p_port, port);
    goto LABEL_34;
  }
  v7->user_._M_dataplus._M_p = v7->user_._anon_0._M_local_buf;
  if ( *(_BYTE *)((a5 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v23 = __asan_report_load8(a5);
    goto LABEL_35;
  }
  port = *(char **)a5;
  v23 = a5 + 8;
  if ( !*(_BYTE *)(((a5 + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(p_port, port, &port[*(_QWORD *)(a5 + 8)], v20);
    goto LABEL_36;
  }
LABEL_35:
  __asan_report_load8(v23);
LABEL_36:
  p_pwd = &v7->pwd_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pwd_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_pwd, port);
    goto LABEL_41;
  }
  v7->pwd_._M_dataplus._M_p = v7->pwd_._anon_0._M_local_buf;
  if ( *(_BYTE *)((a6 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    v26 = __asan_report_load8(a6);
    goto LABEL_42;
  }
  port = *(char **)a6;
  v26 = a6 + 8;
  if ( !*(_BYTE *)(((a6 + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(p_pwd, port, &port[*(_QWORD *)(a6 + 8)], v24);
    goto LABEL_43;
  }
LABEL_42:
  __asan_report_load8(v26);
LABEL_43:
  v28 = &v7->dbname_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->dbname_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v28, port);
    goto LABEL_48;
  }
  v7->dbname_._M_dataplus._M_p = v7->dbname_._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)name._M_dataplus._M_p >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    v29 = (std::string::pointer)__asan_report_load8(name._M_dataplus._M_p);
    goto LABEL_49;
  }
  port = *(char **)name._M_dataplus._M_p;
  v29 = name._M_dataplus._M_p + 8;
  if ( *(_BYTE *)(((unsigned __int64)(name._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(v29);
    goto LABEL_50;
  }
  std::string::_M_construct<char *>(v28, port, &port[*((_QWORD *)name._M_dataplus._M_p + 1)], v27);
LABEL_50:
  p_pool_max_size = (std::mutex *)&v7->pool_max_size_;
  v31 = *(_BYTE *)(((unsigned __int64)&v7->pool_max_size_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
  {
    __asan_report_store4(p_pool_max_size, port);
  }
  else
  {
    v7->pool_max_size_ = name._M_string_length;
    p_pool_max_size = &v7->conn_mutex_;
    if ( (*(_BYTE *)((((unsigned __int64)&v7->conn_mutex_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&v7->conn_mutex_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) > (((unsigned __int8)v7 + 7) & 7))
      && *(char *)(((unsigned __int64)&v7->conn_mutex_ >> 3) + 0x7FFF8000) >= 0 )
    {
      v7->conn_mutex_._M_mutex.__align = 0LL;
      *(&v7->conn_mutex_._M_mutex.__align + 1) = 0LL;
      *(&v7->conn_mutex_._M_mutex.__align + 2) = 0LL;
      v7->conn_mutex_._M_mutex.__data.__list.__prev = 0LL;
      v7->conn_mutex_._M_mutex.__data.__list.__next = 0LL;
      common::milog::MiLogStream::MiLogStream(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./include/mysql_conn_pool.hpp",
        "MysqlConnPoolT",
        44);
      goto LABEL_57;
    }
  }
  __asan_report_store_n(p_pool_max_size, 40LL);
LABEL_57:
  common::midb::MysqlConnPoolT<std::mutex>::getUniqueKey[abi:cxx11](&v34, v7);
  common::milog::MiLogStream::operator()(&v33, "construct conn pool to '%s'", v34._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
    operator delete(v34._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v33);
};

// Line 48: range 000000000CA2A2A8-000000000CA2A4D0
void __fastcall common::midb::MysqlConnPoolT<std::mutex>::~MysqlConnPoolT(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  const char *v1; // rsi
  mysqlpp::ConnectionPool::PoolT *v2; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_size; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_prev; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_next; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v7; // rdi
  mysqlpp::ConnectionPool::PoolT *p_M_prev; // rdi
  common::milog::MiLogStream v9; // [rsp+0h] [rbp-58h] BYREF
  std::string v10; // [rsp+20h] [rbp-38h] BYREF

  v2 = (mysqlpp::ConnectionPool::PoolT *)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v1);
LABEL_24:
    __asan_report_load8(this);
LABEL_25:
    __asan_report_load8(this);
LABEL_26:
    __asan_report_load8(this);
LABEL_27:
    __asan_report_load8(this);
LABEL_28:
    __asan_report_load8(this);
LABEL_29:
    p_M_prev = v2;
    __asan_report_store8(v2, v1);
    goto LABEL_30;
  }
  this->_vptr_ConnectionPool = (int (**)(...))(&`vtable for'common::midb::MysqlConnPoolT<std::mutex> + 2);
  mysqlpp::ConnectionPool::clear(this, 1);
  common::milog::MiLogStream::MiLogStream(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./include/mysql_conn_pool.hpp",
    "~MysqlConnPoolT",
    51);
  common::midb::MysqlConnPoolT<std::mutex>::getUniqueKey[abi:cxx11](&v10, this);
  v1 = "destruct conn pool to '%s'";
  common::milog::MiLogStream::operator()(&v9, "destruct conn pool to '%s'", v10._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
    operator delete(v10._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v9);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)((char *)this + 184);
  if ( *(_BYTE *)(((unsigned __int64)&v2[7]._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  M_size = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2[7]._M_impl._M_node._M_size;
  if ( M_size != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v2[8]._M_impl._M_node._M_prev )
    operator delete(M_size);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v2[6]._M_impl._M_node._M_prev;
  if ( *(_BYTE *)(((unsigned __int64)&v2[6]._M_impl._M_node._M_prev >> 3) + 0x7FFF8000) )
    goto LABEL_25;
  M_prev = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2[6]._M_impl._M_node._M_prev;
  if ( M_prev != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v2[7] )
    operator delete(M_prev);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v2[5];
  if ( *(_BYTE *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  M_next = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2[5]._M_impl._M_node._M_next;
  if ( M_next != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v2[5]._M_impl._M_node._M_size )
    operator delete(M_next);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v2[3]._M_impl._M_node._M_prev;
  if ( *(_BYTE *)(((unsigned __int64)&v2[3]._M_impl._M_node._M_prev >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  v6 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2[3]._M_impl._M_node._M_prev;
  if ( v6 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v2[4] )
    operator delete(v6);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)&v2[2];
  if ( *(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  v7 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v2[2]._M_impl._M_node._M_next;
  if ( v7 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&v2[2]._M_impl._M_node._M_size )
    operator delete(v7);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  v2->_M_impl._M_node._M_next = (std::__detail::_List_node_base *)(&`vtable for'mysqlpp::ConnectionPool + 2);
  p_M_prev = (mysqlpp::ConnectionPool::PoolT *)&v2->_M_impl._M_node._M_prev;
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_impl._M_node._M_prev >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_prev);
LABEL_31:
    __asan_handle_no_return(p_M_prev, v1);
    __assert_fail(
      "empty()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/mysql++_3_2_3/include/mysql++/cpool.h",
      0x4Eu,
      "virtual mysqlpp::ConnectionPool::~ConnectionPool()");
  }
  if ( (std::__detail::_List_node_base **)v2->_M_impl._M_node._M_prev != &v2->_M_impl._M_node._M_prev )
    goto LABEL_31;
  mysqlpp::BeecryptMutex::~BeecryptMutex((mysqlpp::BeecryptMutex *const)&v2[1]._M_impl._M_node._M_prev);
  std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo>::_M_clear((std::_List_base<mysqlpp::ConnectionPool::ConnectionInfo> *const)&v2->_M_impl._M_node._M_prev);
};

// Line 48: range 000000000CA2A4D6-000000000CA2A4ED
void __fastcall common::midb::MysqlConnPoolT<std::mutex>::~MysqlConnPoolT(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  common::midb::MysqlConnPoolT<std::mutex>::~MysqlConnPoolT(this);
  operator delete(this, 0x108uLL);
};

// Line 56: range 000000000CA2A4EE-000000000CA2AED0
mysqlpp::Connection *__fastcall common::midb::MysqlConnPoolT<std::mutex>::create(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  mysqlpp::Connection *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  std::forward_iterator_tag v6; // cl
  std::string::pointer M_p; // rsi
  std::forward_iterator_tag v8; // cl
  std::string *v9; // r12
  std::string *p_M_string_length; // rdi
  unsigned __int64 v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rsi
  char v14; // al
  unsigned __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // rax
  void *p_dbname; // rdi
  char v19; // dl
  std::string v21; // [rsp+0h] [rbp-50h] BYREF

  v2 = (mysqlpp::Connection *)operator new(0x40uLL);
  mysqlpp::Connection::Connection(v2, 1);
  v5 = operator new(0x10uLL);
  if ( *(char *)(((v5 + 8) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(v5 + 8, v5, v3, v4);
  }
  else
  {
    *(_BYTE *)(v5 + 8) = 1;
    if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v5 = &`vtable for'mysqlpp::ReconnectOption + 2;
      mysqlpp::Connection::set_option(v2, (mysqlpp::Option *)v5);
      goto LABEL_6;
    }
  }
  __asan_report_store8(v5, v5);
LABEL_6:
  v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
  M_p = (std::string::pointer)&byte_19ED00A4[-4];
  std::string::_M_construct<char const*>(&v21, &byte_19ED00A4[-4], byte_19ED00A4, v6);
  v9 = (std::string *)operator new(0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = v9;
    __asan_report_store8(v9, M_p);
  }
  else
  {
    v9->_M_dataplus._M_p = (std::string::pointer)(&`vtable for'mysqlpp::DataOption<std::string> + 2);
    p_M_string_length = (std::string *)&v9->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&v9->_M_string_length >> 3) + 0x7FFF8000) )
    {
      v9->_M_string_length = (std::string::size_type)(&v9->_anon_0._M_allocated_capacity + 1);
      M_p = v21._M_dataplus._M_p;
      std::string::_M_construct<char *>(
        p_M_string_length,
        v21._M_dataplus._M_p,
        &v21._M_dataplus._M_p[v21._M_string_length],
        v8);
      goto LABEL_11;
    }
  }
  __asan_report_store8(p_M_string_length, M_p);
LABEL_11:
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v9, M_p);
  }
  else
  {
    v9->_M_dataplus._M_p = (std::string::pointer)(&`vtable for'mysqlpp::SetCharsetNameOption + 2);
    mysqlpp::Connection::set_option(v2, (mysqlpp::Option *)v9);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
    operator delete(v21._M_dataplus._M_p);
  v11 = operator new(0x10uLL);
  v12 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    __asan_report_store4(v11 + 8, v11);
    goto LABEL_21;
  }
  *(_DWORD *)(v11 + 8) = 10;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(v11, v11);
    goto LABEL_22;
  }
  *(_QWORD *)v11 = &`vtable for'mysqlpp::ConnectTimeoutOption + 2;
  mysqlpp::Connection::set_option(v2, (mysqlpp::Option *)v11);
LABEL_22:
  v13 = operator new(0x10uLL);
  v14 = *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_store4(v13 + 8, v13);
    goto LABEL_27;
  }
  *(_DWORD *)(v13 + 8) = 10;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(v13, v13);
    goto LABEL_28;
  }
  *(_QWORD *)v13 = &`vtable for'mysqlpp::ReadTimeoutOption + 2;
  mysqlpp::Connection::set_option(v2, (mysqlpp::Option *)v13);
LABEL_28:
  v15 = operator new(0x10uLL);
  v16 = *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000);
  if ( v16 && v16 <= 3 )
  {
    __asan_report_store4(v15 + 8, v15);
  }
  else
  {
    *(_DWORD *)(v15 + 8) = 10;
    if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v15 = &`vtable for'mysqlpp::WriteTimeoutOption + 2;
      mysqlpp::Connection::set_option(v2, (mysqlpp::Option *)v15);
      goto LABEL_34;
    }
  }
  __asan_report_store8(v15, v15);
LABEL_34:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v21,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./include/mysql_conn_pool.hpp",
    "create",
    69);
  v17 = mysqlpp::Connection::thread_id(v2);
  p_dbname = &this->dbname_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dbname_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_dbname);
LABEL_41:
    __asan_report_load2(p_dbname);
    goto LABEL_42;
  }
  p_dbname = &this->port_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 1 )
    goto LABEL_41;
  p_dbname = &this->host_;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_dbname);
    goto LABEL_43;
  }
  p_dbname = &this->name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_dbname);
    goto LABEL_44;
  }
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&v21,
    "[MYSQL] create a new connection to %s %s:%u %s conn: %p, with id=%lu",
    this->name_._M_dataplus._M_p,
    this->host_._M_dataplus._M_p,
    this->port_,
    this->dbname_._M_dataplus._M_p,
    v2,
    v17);
LABEL_44:
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
  return v2;
};

// Line 84: range 000000000CA29308-000000000CA296C1
void __fastcall common::midb::MysqlConnPoolT<std::mutex>::destroy(
        common::midb::MysqlConnPoolT<std::mutex> *const this,
        mysqlpp::Connection *conn)
{
  common::milog::MiLog *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 p_dbname; // rdi
  char v7; // dl
  mysqlpp::Connection *v8; // rdi
  struct _Unwind_Exception *v9; // rbx
  common::milog::MiLogStream v10; // [rsp-38h] [rbp-38h] BYREF

  if ( conn )
  {
    v4 = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./include/mysql_conn_pool.hpp",
      "destroy",
      88);
    v5 = mysqlpp::Connection::thread_id(conn);
    p_dbname = (unsigned __int64)&this->dbname_;
    if ( *(_BYTE *)((p_dbname >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_dbname);
    }
    else
    {
      p_dbname = (unsigned __int64)&this->port_;
      v7 = *(_BYTE *)(((unsigned __int64)&this->port_ >> 3) + 0x7FFF8000);
      if ( !v7 || v7 > 1 )
      {
        p_dbname = (unsigned __int64)&this->host_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
        {
          p_dbname = (unsigned __int64)&this->name_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
          {
            v4 = (common::milog::MiLog *)"destroy connection to %s %s:%u %s with id=%lu";
            common::milog::MiLogStream::operator()(
              &v10,
              "destroy connection to %s %s:%u %s with id=%lu",
              this->name_._M_dataplus._M_p,
              this->host_._M_dataplus._M_p,
              this->port_,
              this->dbname_._M_dataplus._M_p,
              v5);
            goto LABEL_12;
          }
LABEL_11:
          __asan_report_load8(p_dbname);
LABEL_12:
          common::milog::MiLogStream::~MiLogStream(&v10);
          if ( *(_BYTE *)(((unsigned __int64)conn >> 3) + 0x7FFF8000) )
          {
            v8 = conn;
            __asan_report_load8(conn);
          }
          else
          {
            v8 = (mysqlpp::Connection *)(conn->_vptr_OptionalExceptions + 1);
            if ( !*(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            {
              (*((void (__fastcall **)(mysqlpp::Connection *))conn->_vptr_OptionalExceptions + 1))(conn);
              return;
            }
          }
          v9 = (struct _Unwind_Exception *)__asan_report_load8(v8);
          common::milog::MiLogStream::~MiLogStream(&v10);
          __asan_handle_no_return(&v10, v4);
          _Unwind_Resume(v9);
        }
LABEL_10:
        __asan_report_load8(p_dbname);
        goto LABEL_11;
      }
    }
    __asan_report_load2(p_dbname);
    goto LABEL_10;
  }
};

// Line 102: range 000000000CA2B47E-000000000CA2BF8D
mysqlpp::Connection *__fastcall common::midb::MysqlConnPoolT<std::mutex>::grab(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  common::midb::MysqlConnPoolT<std::mutex> *v1; // rbx
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  pthread_mutex_t *p_M_mutex; // r14
  std::mutex *p_conn_mutex; // rdi
  void *p_pool_max_size; // rdi
  char v7; // al
  uint32_t pool_max_size; // eax
  __int64 v9; // rax
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char **p_data; // rdi
  char *v14; // rdi
  char v15; // dl
  char **v16; // rdi
  char *v17; // rdi
  common::milog::MilogStringStream *v18; // rdi
  char *v19; // rdi
  size_t M_string_length; // rbx
  void *p_host; // rdi
  void *p_dbname; // rdi
  char v23; // al
  unsigned __int64 p_port; // rdi
  unsigned __int8 (__fastcall *v25)(unsigned __int64, std::string::pointer, std::string::pointer, std::string::pointer, std::string::pointer, __int64); // r10
  char v26; // al
  __int64 port; // r9
  std::string::pointer v28; // r8
  void *p_user; // rdi
  std::string::pointer M_p; // rcx
  std::string::pointer v31; // rdx
  std::string::pointer v32; // rsi
  void *p_name; // rdi
  char v36; // al
  unsigned __int64 conn; // [rsp+18h] [rbp-B8h]
  std::string v38; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-90h] BYREF
  char v40[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = this;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v2 = v9;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:108";
  *(_QWORD *)(v2 + 16) = common::midb::MysqlConnPoolT<std::mutex>::grab;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  p_M_mutex = &this->conn_mutex_._M_mutex;
  *(_QWORD *)(v2 + 32) = &this->conn_mutex_;
  if ( &_pthread_key_create )
  {
    p_conn_mutex = &this->conn_mutex_;
    LODWORD(conn) = pthread_mutex_lock(&v1->conn_mutex_._M_mutex);
    if ( (_DWORD)conn )
    {
      __asan_handle_no_return(p_conn_mutex);
      std::__throw_system_error(conn);
    }
  }
  p_pool_max_size = &v1->pool_max_size_;
  v7 = *(_BYTE *)(((unsigned __int64)&v1->pool_max_size_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(p_pool_max_size);
LABEL_14:
    __asan_report_load8(p_pool_max_size);
    goto LABEL_15;
  }
  pool_max_size = v1->pool_max_size_;
  if ( !pool_max_size )
  {
LABEL_9:
    conn = mysqlpp::ConnectionPool::grab(v1);
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./include/mysql_conn_pool.hpp",
      "grab",
      116);
    goto LABEL_51;
  }
  p_pool_max_size = &v1->pool_._M_impl._M_node._M_size;
  if ( *(_BYTE *)(((unsigned __int64)&v1->pool_._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  if ( pool_max_size > v1->pool_._M_impl._M_node._M_size )
    goto LABEL_9;
LABEL_15:
  common::milog::MiLogStream::MiLogStream(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./include/mysql_conn_pool.hpp",
    "grab",
    111);
  ostr = v39.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v39.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v39.ostr_;
    __asan_report_load8(v39.ostr_);
    goto LABEL_32;
  }
  p_cur = (common::milog::MilogStringStream *)&v39.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v39.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_cur);
LABEL_33:
    __asan_report_load8(p_cur);
    goto LABEL_34;
  }
  cur = v39.ostr_->buffer_.cur_;
  conn = (unsigned __int64)&v39.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( conn > 0x12 )
    conn = 19LL;
  memcpy(cur, "pool is full, size:", conn);
  ostr->buffer_.cur_ += conn;
  p_cur = (common::milog::MilogStringStream *)&v1->pool_._M_impl._M_node._M_size;
  if ( *(_BYTE *)(((unsigned __int64)&v1->pool_._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v39.ostr_,
    v1->pool_._M_impl._M_node._M_size);
  ostr = v39.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v39.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    p_data = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_35;
  }
  p_data = &v39.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v39.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_data);
LABEL_36:
    __asan_report_load4(p_data);
    goto LABEL_37;
  }
  v14 = v39.ostr_->buffer_.cur_;
  conn = (unsigned __int64)&v39.ostr_->buffer_.data_[-(int)v14 + 0x4000];
  if ( conn > 9 )
    conn = 10LL;
  memcpy(v14, " max size:", conn);
  ostr->buffer_.cur_ += conn;
  p_data = (char **)&v1->pool_max_size_;
  v15 = *(_BYTE *)(((unsigned __int64)&v1->pool_max_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v1 - 40) & 7) + 3) >= v15 && v15 )
    goto LABEL_36;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v39.ostr_, v1->pool_max_size_);
  ostr = v39.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v39.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    v16 = &ostr->buffer_.data_;
    __asan_report_load8(ostr);
    goto LABEL_38;
  }
  v16 = &v39.ostr_->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v39.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v17 = v39.ostr_->buffer_.cur_;
    conn = (unsigned __int64)&v39.ostr_->buffer_.data_[-(int)v17 + 0x4000];
    if ( conn > 4 )
      conn = 5LL;
    memcpy(v17, " key:", conn);
    ostr->buffer_.cur_ += conn;
    common::midb::MysqlConnPoolT<std::mutex>::getUniqueKey[abi:cxx11](&v38, v1);
    goto LABEL_39;
  }
LABEL_38:
  __asan_report_load8(v16);
LABEL_39:
  p_M_mutex = (pthread_mutex_t *)v39.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v39.ostr_ >> 3) + 0x7FFF8000) )
  {
    v18 = v39.ostr_;
    __asan_report_load8(v39.ostr_);
  }
  else
  {
    conn = (unsigned __int64)v39.ostr_->buffer_.data_;
    v1 = (common::midb::MysqlConnPoolT<std::mutex> *)(v39.ostr_->buffer_.data_ + 0x4000);
    v18 = (common::milog::MilogStringStream *)&v39.ostr_->buffer_.cur_;
    if ( !*(_BYTE *)(((unsigned __int64)&v39.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      v19 = v39.ostr_->buffer_.cur_;
      M_string_length = (int)v1 - (int)v19;
      if ( v38._M_string_length <= M_string_length )
        M_string_length = v38._M_string_length;
      memcpy(v19, v38._M_dataplus._M_p, M_string_length);
      *(&p_M_mutex->__align + 1) += M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v38._M_dataplus._M_p != &v38._anon_0 )
        operator delete(v38._M_dataplus._M_p);
      common::milog::MiLogStream::~MiLogStream(&v39);
      goto LABEL_46;
    }
  }
  __asan_report_load8(v18);
LABEL_51:
  p_host = &v1->host_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->host_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_host);
  }
  else
  {
    p_host = &v1->pool_._M_impl._M_node._M_size;
    if ( !*(_BYTE *)(((unsigned __int64)&v1->pool_._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
    {
      common::milog::MiLogStream::operator()(
        &v39,
        "[MYSQL] after grab ConnPool Size:%lu, conn:%p, host:%s",
        v1->pool_._M_impl._M_node._M_size,
        (const void *)conn,
        v1->host_._M_dataplus._M_p);
      goto LABEL_56;
    }
  }
  __asan_report_load8(p_host);
LABEL_56:
  common::milog::MiLogStream::~MiLogStream(&v39);
  if ( !conn )
  {
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./include/mysql_conn_pool.hpp",
      "grab",
      119);
    p_dbname = &v1->dbname_;
    if ( *(_BYTE *)(((unsigned __int64)&v1->dbname_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_dbname);
    }
    else
    {
      p_dbname = &v1->port_;
      v23 = *(_BYTE *)(((unsigned __int64)&v1->port_ >> 3) + 0x7FFF8000);
      if ( !v23 || v23 > 1 )
      {
        p_dbname = &v1->host_;
        if ( !*(_BYTE *)(((unsigned __int64)&v1->host_ >> 3) + 0x7FFF8000) )
        {
          p_dbname = &v1->name_;
          if ( !*(_BYTE *)(((unsigned __int64)&v1->name_ >> 3) + 0x7FFF8000) )
          {
            common::milog::MiLogStream::operator()(
              &v39,
              "[MYSQL]grab connection to %s %s:%u %s failed.",
              v1->name_._M_dataplus._M_p,
              v1->host_._M_dataplus._M_p,
              v1->port_,
              v1->dbname_._M_dataplus._M_p);
LABEL_70:
            common::milog::MiLogStream::~MiLogStream(&v39);
            mysqlpp::ConnectionPool::remove(v1, 0LL);
LABEL_46:
            if ( &_pthread_key_create )
              pthread_mutex_unlock(*(pthread_mutex_t **)(v2 + 32));
            conn = 0LL;
            goto LABEL_99;
          }
LABEL_69:
          __asan_report_load8(p_dbname);
          goto LABEL_70;
        }
LABEL_68:
        __asan_report_load8(p_dbname);
        goto LABEL_69;
      }
    }
    __asan_report_load2(p_dbname);
    goto LABEL_68;
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(p_M_mutex);
  if ( !mysqlpp::Connection::connected((const mysqlpp::Connection *const)conn) )
  {
    if ( *(_BYTE *)((conn >> 3) + 0x7FFF8000) )
    {
      p_port = conn;
      __asan_report_load8(conn);
    }
    else
    {
      p_port = *(_QWORD *)conn + 16LL;
      if ( !*(_BYTE *)((p_port >> 3) + 0x7FFF8000) )
      {
        v25 = *(unsigned __int8 (__fastcall **)(unsigned __int64, std::string::pointer, std::string::pointer, std::string::pointer, std::string::pointer, __int64))(*(_QWORD *)conn + 16LL);
        p_port = (unsigned __int64)&v1->port_;
        v26 = *(_BYTE *)(((unsigned __int64)&v1->port_ >> 3) + 0x7FFF8000);
        if ( !v26 || v26 > 1 )
        {
          port = v1->port_;
          p_port = (unsigned __int64)&v1->pwd_._M_string_length;
          if ( !*(_BYTE *)(((unsigned __int64)&v1->pwd_._M_string_length >> 3) + 0x7FFF8000) )
          {
            if ( !v1->pwd_._M_string_length )
            {
LABEL_92:
              v28 = 0LL;
LABEL_80:
              p_user = &v1->user_;
              if ( *(_BYTE *)(((unsigned __int64)&v1->user_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_user);
              }
              else
              {
                M_p = v1->user_._M_dataplus._M_p;
                p_user = &v1->host_;
                if ( !*(_BYTE *)(((unsigned __int64)&v1->host_ >> 3) + 0x7FFF8000) )
                {
                  v31 = v1->host_._M_dataplus._M_p;
                  p_user = &v1->dbname_._M_string_length;
                  if ( !*(_BYTE *)(((unsigned __int64)&v1->dbname_._M_string_length >> 3) + 0x7FFF8000) )
                  {
                    if ( !v1->dbname_._M_string_length )
                    {
LABEL_97:
                      v32 = 0LL;
                      goto LABEL_86;
                    }
                    p_user = &v1->dbname_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v1->dbname_ >> 3) + 0x7FFF8000) )
                    {
                      v32 = v1->dbname_._M_dataplus._M_p;
LABEL_86:
                      if ( v25(conn, v32, v31, M_p, v28, port) )
                        goto LABEL_99;
                      common::milog::MiLogStream::MiLogStream(
                        &v39,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./include/mysql_conn_pool.hpp",
                        "grab",
                        136);
                      p_name = &v1->dbname_;
                      if ( *(_BYTE *)(((unsigned __int64)&v1->dbname_ >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(p_name);
                      }
                      else
                      {
                        p_name = &v1->port_;
                        v36 = *(_BYTE *)(((unsigned __int64)&v1->port_ >> 3) + 0x7FFF8000);
                        if ( !v36 || v36 > 1 )
                        {
                          p_name = &v1->host_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v1->host_ >> 3) + 0x7FFF8000) )
                          {
                            p_name = &v1->name_;
                            if ( !*(_BYTE *)(((unsigned __int64)&v1->name_ >> 3) + 0x7FFF8000) )
                            {
                              common::milog::MiLogStream::operator()(
                                &v39,
                                "[MYSQL]connect %s %s:%u %s failed",
                                v1->name_._M_dataplus._M_p,
                                v1->host_._M_dataplus._M_p,
                                v1->port_,
                                v1->dbname_._M_dataplus._M_p);
LABEL_112:
                              common::milog::MiLogStream::~MiLogStream(&v39);
                              common::midb::MysqlConnPoolT<std::mutex>::remove_with_mutex(
                                v1,
                                (const mysqlpp::Connection *)conn);
                              conn = 0LL;
                              goto LABEL_99;
                            }
LABEL_111:
                            __asan_report_load8(p_name);
                            goto LABEL_112;
                          }
LABEL_110:
                          __asan_report_load8(p_name);
                          goto LABEL_111;
                        }
                      }
                      __asan_report_load2(p_name);
                      goto LABEL_110;
                    }
LABEL_96:
                    __asan_report_load8(p_user);
                    goto LABEL_97;
                  }
LABEL_95:
                  __asan_report_load8(p_user);
                  goto LABEL_96;
                }
              }
              __asan_report_load8(p_user);
              goto LABEL_95;
            }
            p_port = (unsigned __int64)&v1->pwd_;
            if ( !*(_BYTE *)(((unsigned __int64)&v1->pwd_ >> 3) + 0x7FFF8000) )
            {
              v28 = v1->pwd_._M_dataplus._M_p;
              goto LABEL_80;
            }
LABEL_91:
            __asan_report_load8(p_port);
            goto LABEL_92;
          }
LABEL_90:
          __asan_report_load8(p_port);
          goto LABEL_91;
        }
LABEL_89:
        __asan_report_load2(p_port);
        goto LABEL_90;
      }
    }
    __asan_report_load8(p_port);
    goto LABEL_89;
  }
LABEL_99:
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (mysqlpp::Connection *)conn;
};

// Line 206: range 000000000CA29F6A-000000000CA2A0DC
std::string *__fastcall common::midb::MysqlConnPoolT<std::mutex>::getUniqueKey[abi:cxx11](
        std::string *retstr,
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  const char *v2; // r12
  std::string::size_type *p_M_string_length; // rdi
  common::midb::MysqlConnPoolT<std::mutex> *v5; // rbx
  std::string::size_type v6; // rax
  common::midb::MysqlConnPoolT<std::mutex> *v7; // r14
  void *v8; // rsp
  char v9; // al
  std::forward_iterator_tag v10; // cl
  const char *v11; // rdx
  char v13[31]; // [rsp+0h] [rbp-20h] BYREF
  char v14; // [rsp+1Fh] [rbp-1h] BYREF

  p_M_string_length = &this->host_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_12;
  }
  v5 = this;
  p_M_string_length = &this->dbname_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->dbname_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_string_length);
    goto LABEL_13;
  }
  v6 = this->dbname_._M_string_length + this->host_._M_string_length;
  v7 = (common::midb::MysqlConnPoolT<std::mutex> *)(v6 + 32);
  v8 = alloca(v6 + 32 - (v6 & 0x1F) + 120);
  v2 = (const char *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0LL) + 32);
  this = (common::midb::MysqlConnPoolT<std::mutex> *const)(v6 + 32);
  __asan_alloca_poison(v2, v6 + 32);
  p_M_string_length = (std::string::size_type *)&v5->dbname_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->dbname_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_string_length);
LABEL_14:
    __asan_report_load2(p_M_string_length);
    goto LABEL_15;
  }
  p_M_string_length = (std::string::size_type *)&v5->port_;
  v9 = *(_BYTE *)(((unsigned __int64)&v5->port_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 1 )
    goto LABEL_14;
  p_M_string_length = (std::string::size_type *)&v5->host_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->host_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_M_string_length);
    goto LABEL_16;
  }
  this = v7;
  snprintf(
    (char *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0LL) + 32),
    (size_t)v7,
    "%s:%u %s",
    v5->host_._M_dataplus._M_p,
    v5->port_,
    v5->dbname_._M_dataplus._M_p);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(retstr, this);
    goto LABEL_17;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0LL) == -32LL )
  {
LABEL_17:
    v11 = v2 - 1;
    goto LABEL_10;
  }
  v11 = &v2[strlen((const char *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0LL) + 32))];
LABEL_10:
  std::string::_M_construct<char const*>(retstr, v2, v11, v10);
  __asan_allocas_unpoison(v13, v13);
  return retstr;
};

// Line 214: range 000000000CA296C4-000000000CA29912
uint32_t __fastcall common::midb::MysqlConnPoolT<std::mutex>::getSize(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  const mysqlpp::Connection *v1; // rsi
  std::mutex *p_conn_mutex; // r12
  std::mutex *v4; // rdi
  int v5; // ebp
  std::size_t *p_M_size; // rdi
  std::size_t M_size; // rbx
  uint32_t result; // eax

  p_conn_mutex = &this->conn_mutex_;
  if ( &_pthread_key_create )
  {
    v4 = &this->conn_mutex_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  p_M_size = &this->pool_._M_impl._M_node._M_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_._M_impl._M_node._M_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_size);
    common::midb::MysqlConnPoolT<std::mutex>::remove_with_mutex(
      (common::midb::MysqlConnPoolT<std::mutex> *const)p_M_size,
      v1);
  }
  else
  {
    M_size = this->pool_._M_impl._M_node._M_size;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&p_conn_mutex->_M_mutex);
    return M_size;
  }
  return result;
};

// Line 222: range 000000000CA29A76-000000000CA29F68
std::string *__fastcall common::midb::MysqlConnPoolT<std::mutex>::getIpByHost[abi:cxx11](
        std::string *retstr,
        const common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  common::milog::MilogStringStream *i; // rbp
  unsigned __int64 v4; // r15
  common::milog::MilogStringStream *ostr; // r12
  _DWORD *v6; // r14
  __int64 v7; // rax
  std::string::pointer M_p; // rsi
  int v9; // eax
  __int64 v10; // rax
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v13; // rbp
  unsigned __int64 p_host; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type M_string_length; // rax
  char **p_data; // rdi
  char *v18; // rdi
  size_t v19; // rbx
  __int64 v20; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  unsigned __int64 v22; // rcx
  std::string *v23; // rdi
  const void *v24; // rsi
  size_t v25; // rax
  char *v26; // rdi
  size_t v27; // rbx
  char *v28; // rdi
  char *data; // rax
  size_t v30; // rbx
  char v31; // dl
  void *v32; // rdi
  common::milog::MiLogStream v35; // [rsp+10h] [rbp-178h] BYREF
  char v36[344]; // [rsp+30h] [rbp-158h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(288LL);
    if ( v10 )
      v4 = v10;
  }
  ostr = (common::milog::MilogStringStream *)(v4 + 288);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 8 15 ai_list_ptr:225 80 16 10 ip_str:227 112 48 9 hints:224 192 64 7 buf:226";
  *(_QWORD *)(v4 + 16) = common::midb::MysqlConnPoolT<std::mutex>::getIpByHost[abi:cxx11];
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862725] = -218959118;
  v6[536862728] = -202116109;
  v7 = operator new[](0x1000uLL);
  *(_QWORD *)(v4 + 80) = v7;
  *(_QWORD *)(v4 + 88) = v7;
  M_p = 0LL;
  memset((void *)(v4 + 112), 0, 0x30uLL);
  if ( *(_BYTE *)(((unsigned __int64)&this->host_ >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load8(&this->host_);
  }
  else
  {
    M_p = 0LL;
    v9 = getaddrinfo(
           this->host_._M_dataplus._M_p,
           0LL,
           (const struct addrinfo *)(v4 + 112),
           (struct addrinfo **)(v4 + 48));
  }
  if ( v9 )
  {
    M_p = (std::string::pointer)&common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./include/mysql_conn_pool.hpp",
      "getIpByHost",
      234);
    ostr = v35.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v35.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v35.ostr_;
      __asan_report_load8(v35.ostr_);
    }
    else
    {
      i = (common::milog::MilogStringStream *)(v35.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v35.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v35.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v35.ostr_->buffer_.cur_;
        v13 = (int)i - (int)cur;
        if ( v13 > 0x1B )
          v13 = 28LL;
        M_p = "get ip by host failed, host:";
        memcpy(cur, "get ip by host failed, host:", v13);
        ostr->buffer_.cur_ += v13;
        p_host = (unsigned __int64)&this->host_;
        i = v35.ostr_;
        p_M_string_length = &this->host_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->host_._M_string_length >> 3) + 0x7FFF8000) )
        {
          M_string_length = this->host_._M_string_length;
          if ( !*(_BYTE *)((p_host >> 3) + 0x7FFF8000) )
          {
            M_p = this->host_._M_dataplus._M_p;
            if ( !*(_BYTE *)(((unsigned __int64)v35.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_data = &v35.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v35.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                v18 = v35.ostr_->buffer_.cur_;
                v19 = (size_t)&v35.ostr_->buffer_.data_[-(int)v18 + 0x4000];
                if ( M_string_length <= v19 )
                  v19 = M_string_length;
                memcpy(v18, M_p, v19);
                i->buffer_.cur_ += v19;
                common::milog::MiLogStream::~MiLogStream(&v35);
                M_p = *(std::string::pointer *)(v4 + 80);
                v20 = (int)(*(_QWORD *)(v4 + 88) - (_DWORD)M_p);
                p_anon_0 = &retstr->_anon_0;
                v22 = (unsigned __int64)retstr >> 3;
                if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
                  goto LABEL_20;
LABEL_27:
                v23 = retstr;
                __asan_report_store8(retstr, M_p);
                goto LABEL_28;
              }
LABEL_26:
              __asan_report_load8(p_data);
              goto LABEL_27;
            }
LABEL_25:
            p_data = &i->buffer_.data_;
            __asan_report_load8(i);
            goto LABEL_26;
          }
LABEL_24:
          __asan_report_load8(p_host);
          goto LABEL_25;
        }
LABEL_23:
        p_host = (unsigned __int64)p_M_string_length;
        __asan_report_load8(p_M_string_length);
        goto LABEL_24;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_load8(p_cur);
    goto LABEL_23;
  }
  for ( i = *(common::milog::MilogStringStream **)(v4 + 48); i; i = (common::milog::MilogStringStream *)i[2].buffer_.cur_ )
  {
    v23 = (std::string *)&i[1].buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&i[1].buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
LABEL_28:
      __asan_report_load8(v23);
LABEL_29:
      __asan_report_load4(v23);
LABEL_30:
      v24 = M_p + 4;
      goto LABEL_31;
    }
    M_p = i[1].buffer_.cur_;
    if ( !M_p )
      goto LABEL_36;
    v23 = (std::string *)((char *)&i->buffer_.data_ + 4);
    v31 = *(_BYTE *)((((unsigned __int64)&i->buffer_.data_ + 4) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)i + 4) & 7) + 3) >= v31 && v31 )
      goto LABEL_29;
    LODWORD(v23) = HIDWORD(i->buffer_.data_);
    if ( (_DWORD)v23 == 2 )
      goto LABEL_30;
    if ( (_DWORD)v23 != 10 )
      goto LABEL_36;
    v24 = M_p + 8;
LABEL_31:
    inet_ntop((int)v23, v24, (char *)&ostr[-6], 0x40u);
    v25 = strlen((const char *)&ostr[-6]);
    v26 = ostr[-13].buffer_.cur_;
    v27 = (int)&ostr[-13].buffer_.data_[-(_DWORD)v26 + 4096];
    if ( v25 <= v27 )
      v27 = v25;
    memcpy(v26, &ostr[-6], v27);
    v28 = &ostr[-13].buffer_.cur_[v27];
    ostr[-13].buffer_.cur_ = v28;
    data = ostr[-13].buffer_.data_;
    v30 = (int)data + 4096 - (int)v28;
    if ( (_DWORD)data + 4096 != (_DWORD)v28 )
      v30 = 1LL;
    M_p = " ";
    memcpy(v28, " ", v30);
    ostr[-13].buffer_.cur_ += v30;
LABEL_36:
    if ( *(_BYTE *)(((unsigned __int64)&i[2].buffer_.cur_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&i[2].buffer_.cur_);
      break;
    }
  }
  freeaddrinfo(*(struct addrinfo **)(v4 + 48));
  M_p = *(std::string::pointer *)(v4 + 80);
  v20 = (int)(*(_QWORD *)(v4 + 88) - (_DWORD)M_p);
  p_anon_0 = &retstr->_anon_0;
  v22 = (unsigned __int64)retstr >> 3;
  if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    std::string::_M_construct<char const*>(retstr, M_p, &M_p[v20], (std::forward_iterator_tag)v22);
    goto LABEL_49;
  }
  __asan_report_store8(retstr, M_p);
LABEL_49:
  v32 = *(void **)(v4 + 80);
  if ( v32 )
    operator delete[](v32);
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};

// Line 271: range 000000000CA2A0DE-000000000CA2A2A2
void __fastcall common::midb::MysqlConnPoolT<std::mutex>::removeUnusedConnections(
        common::midb::MysqlConnPoolT<std::mutex> *const this)
{
  size_t v1; // rbx
  common::milog::MilogStringStream *ostr; // r12
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  common::milog::MilogStringStream *v6; // r12
  void *p_conn_mutex; // rdi
  char *v8; // rdi
  size_t M_string_length; // rbx
  common::milog::MiLogStream v10; // [rsp+0h] [rbp-58h] BYREF
  std::string v11; // [rsp+20h] [rbp-38h] BYREF

  common::milog::MiLogStream::MiLogStream(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./include/mysql_conn_pool.hpp",
    "removeUnusedConnections",
    273);
  ostr = v10.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v10.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v10.ostr_;
    __asan_report_load8(v10.ostr_);
    goto LABEL_7;
  }
  v1 = (size_t)(v10.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v10.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v10.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(p_cur);
    goto LABEL_8;
  }
  cur = v10.ostr_->buffer_.cur_;
  v1 = (int)v1 - (int)cur;
  if ( v1 > 0x17 )
    v1 = 24LL;
  memcpy(cur, "Connection Pool Shrink: ", v1);
  ostr->buffer_.cur_ += v1;
  common::midb::MysqlConnPoolT<std::mutex>::getUniqueKey[abi:cxx11](&v11, this);
LABEL_8:
  v6 = v10.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v10.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_conn_mutex = v10.ostr_;
    __asan_report_load8(v10.ostr_);
    goto LABEL_18;
  }
  v1 = (size_t)(v10.ostr_->buffer_.data_ + 0x4000);
  p_conn_mutex = &v10.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v10.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_conn_mutex);
    goto LABEL_19;
  }
  v8 = v10.ostr_->buffer_.cur_;
  M_string_length = (int)v1 - (int)v8;
  if ( v11._M_string_length <= M_string_length )
    M_string_length = v11._M_string_length;
  memcpy(v8, v11._M_dataplus._M_p, M_string_length);
  v6->buffer_.cur_ += M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
    operator delete(v11._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( &_pthread_key_create )
  {
    p_conn_mutex = &this->conn_mutex_;
    LODWORD(v1) = pthread_mutex_lock(&this->conn_mutex_._M_mutex);
    if ( (_DWORD)v1 )
    {
LABEL_19:
      __asan_handle_no_return(p_conn_mutex);
      std::__throw_system_error(v1);
    }
  }
  mysqlpp::ConnectionPool::clear(this, 0);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->conn_mutex_._M_mutex);
};
