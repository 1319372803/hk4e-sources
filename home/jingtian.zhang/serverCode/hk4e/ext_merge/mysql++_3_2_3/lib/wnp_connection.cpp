// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/wnp_connection.cpp

// Line 43: range 000000000CF999F0-000000000CF99A27
__int64 __fastcall mysqlpp::WindowsNamedPipeConnection::connect(
        mysqlpp::WindowsNamedPipeConnection *this,
        const char *a2,
        const char *a3,
        const char *a4)
{
  std::string::_M_replace(
    &this->error_message_,
    0LL,
    this->error_message_._M_string_length,
    "WindowsNamedPipeConnection only works on Windows",
    48LL);
  if ( this->exceptions_ )
    mysqlpp::WindowsNamedPipeConnection::connect();
  return 0LL;
};

// Line 52: range 000000000C739A22-000000000C739A62
void __fastcall __noreturn mysqlpp::WindowsNamedPipeConnection::connect()
{
  __int64 v0; // rbx
  mysqlpp::Exception *exception; // rbp

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  mysqlpp::Exception::Exception(exception, *(const char **)(v0 + 16));
  *(_DWORD *)exception[1].baseclass_0 = 0;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ConnectionFailed + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
    (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
};

// Line 70: range 000000000CF99A30-000000000CF99A32
bool __fastcall mysqlpp::WindowsNamedPipeConnection::is_wnp(const char *server)
{
  return 0;
};
