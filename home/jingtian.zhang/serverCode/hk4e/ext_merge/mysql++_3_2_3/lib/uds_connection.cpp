// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/uds_connection.cpp

// Line 47: range 000000000CF98330-000000000CF9838A
__int64 __fastcall mysqlpp::UnixDomainSocketConnection::connect(
        mysqlpp::UnixDomainSocketConnection *this,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5)
{
  if ( mysqlpp::UnixDomainSocketConnection::is_socket(a2, &this->error_message_) )
    return mysqlpp::Connection::connect(this, a3, a2, a4, a5, 0);
  if ( this->exceptions_ )
    mysqlpp::UnixDomainSocketConnection::connect();
  return 0LL;
};

// Line 58: range 000000000C7399DA-000000000C739A1C
void __fastcall __noreturn mysqlpp::UnixDomainSocketConnection::connect()
{
  __int64 v0; // rbp
  mysqlpp::Exception *exception; // r12

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  mysqlpp::Exception::Exception(exception, *(const char **)(v0 + 16));
  *(_DWORD *)exception[1].baseclass_0 = 0;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ConnectionFailed + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
    (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
};

// Line 68: range 000000000CF98140-000000000CF98325
bool __fastcall mysqlpp::UnixDomainSocketConnection::is_socket(const char *path, std::string *error)
{
  size_t v2; // rax
  bool v3; // r12
  size_t v5; // rax
  std::string::pointer M_p; // rax
  struct stat v7; // [rsp+0h] [rbp-A8h] BYREF

  if ( path )
  {
    if ( access(path, 0) )
    {
      if ( !error )
        return 0;
      v2 = strlen(path);
      std::string::_M_replace(error, 0LL, error->_M_string_length, path, v2);
      if ( 0x3FFFFFFFFFFFFFFFLL - error->_M_string_length > 0xE )
      {
        std::string::_M_append(error, " does not exist", 15LL);
        return 0;
      }
    }
    else
    {
      if ( access(path, 6) )
      {
        if ( !error )
          return 0;
        std::string::_M_replace(error, 0LL, error->_M_string_length, "Don't have read-write permission for ", 37LL);
      }
      else
      {
        if ( !__xstat(1, path, &v7) )
        {
          if ( (v7.st_mode & 0xF000) == 49152 )
          {
            if ( error )
            {
              M_p = error->_M_dataplus._M_p;
              error->_M_string_length = 0LL;
              *M_p = 0;
            }
            return 1;
          }
          if ( !error )
            return 0;
          v5 = strlen(path);
          std::string::_M_replace(error, 0LL, error->_M_string_length, path, v5);
          if ( 0x3FFFFFFFFFFFFFFFLL - error->_M_string_length > 0x1B )
          {
            std::string::_M_append(error, " is not a Unix domain socket", 28LL);
            return 0;
          }
          goto LABEL_25;
        }
        if ( !error )
          return 0;
        std::string::_M_replace(error, 0LL, error->_M_string_length, "Failed to get information for ", 30LL);
      }
      if ( strlen(path) <= 0x3FFFFFFFFFFFFFFFLL - error->_M_string_length )
      {
        std::string::_M_append(error, path);
        return 0;
      }
    }
LABEL_25:
    std::__throw_length_error("basic_string::append");
  }
  v3 = 0;
  if ( !error )
    return v3;
  std::string::_M_replace(error, 0LL, error->_M_string_length, "NULL is not a valid Unix domain socket", 38LL);
  return 0;
};
