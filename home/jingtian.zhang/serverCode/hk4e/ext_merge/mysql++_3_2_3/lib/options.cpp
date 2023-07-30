// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/options.cpp

// Line 43: range 000000000CF833B0-000000000CF833F7
mysqlpp::Option::Error __fastcall mysqlpp::CompressOption::set(
        mysqlpp::CompressOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_COMPRESS, 0LL) != 0);
};

// Line 52: range 000000000CF83400-000000000CF83446
mysqlpp::Option::Error __fastcall mysqlpp::ConnectTimeoutOption::set(
        mysqlpp::ConnectTimeoutOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_CONNECT_TIMEOUT, &this->arg_) != 0);
};

// Line 61: range 000000000CF83220-000000000CF83263
mysqlpp::Option::Error __fastcall mysqlpp::FoundRowsOption::set(
        mysqlpp::FoundRowsOption *const this,
        mysqlpp::DBDriver *dbd)
{
  if ( dbd->is_connected_ )
    return 3;
  else
    return 2 * !mysqlpp::DBDriver::set_option(dbd, 2u, this->arg_);
};

// Line 71: range 000000000CF83450-000000000CF83497
mysqlpp::Option::Error __fastcall mysqlpp::GuessConnectionOption::set(
        mysqlpp::GuessConnectionOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_GUESS_CONNECTION, 0LL) != 0);
};

// Line 83: range 000000000CF83270-000000000CF832B3
mysqlpp::Option::Error __fastcall mysqlpp::IgnoreSpaceOption::set(
        mysqlpp::IgnoreSpaceOption *const this,
        mysqlpp::DBDriver *dbd)
{
  if ( dbd->is_connected_ )
    return 3;
  else
    return 2 * !mysqlpp::DBDriver::set_option(dbd, 0x100u, this->arg_);
};

// Line 92: range 000000000CF834A0-000000000CF834E9
mysqlpp::Option::Error __fastcall mysqlpp::InitCommandOption::set(
        mysqlpp::InitCommandOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_INIT_COMMAND, v4) != 0);
};

// Line 101: range 000000000CF832C0-000000000CF83303
mysqlpp::Option::Error __fastcall mysqlpp::InteractiveOption::set(
        mysqlpp::InteractiveOption *const this,
        mysqlpp::DBDriver *dbd)
{
  if ( dbd->is_connected_ )
    return 3;
  else
    return 2 * !mysqlpp::DBDriver::set_option(dbd, 0x400u, this->arg_);
};

// Line 110: range 000000000CF83310-000000000CF83353
mysqlpp::Option::Error __fastcall mysqlpp::LocalFilesOption::set(
        mysqlpp::LocalFilesOption *const this,
        mysqlpp::DBDriver *dbd)
{
  if ( dbd->is_connected_ )
    return 3;
  else
    return 2 * !mysqlpp::DBDriver::set_option(dbd, 0x80u, this->arg_);
};

// Line 119: range 000000000CF834F0-000000000CF83539
mysqlpp::Option::Error __fastcall mysqlpp::LocalInfileOption::set(
        mysqlpp::LocalInfileOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_LOCAL_INFILE, &this->arg_) != 0);
};

// Line 127: range 000000000CF839A0-000000000CF83A0B
mysqlpp::Option::Error __fastcall mysqlpp::MultiResultsOption::set(
        mysqlpp::MultiResultsOption *const this,
        mysqlpp::DBDriver *dbd)
{
  bool v4; // zf
  bool arg; // si
  std::string::pointer M_p; // rax
  MYSQL *p_mysql; // rdi

  v4 = !dbd->is_connected_;
  arg = this->arg_;
  if ( v4 )
  {
    if ( mysqlpp::DBDriver::set_option(dbd, 0x20000u, arg) )
      return 0;
  }
  else
  {
    M_p = dbd->error_message_._M_dataplus._M_p;
    p_mysql = &dbd->mysql_;
    *(_QWORD *)&p_mysql[1].net.last_error[25] = 0LL;
    *M_p = 0;
    if ( !mysql_set_server_option(p_mysql, (enum_mysql_set_option)!arg) )
      return 0;
  }
  return 2;
};

// Line 146: range 000000000CF83A10-000000000CF83A7B
mysqlpp::Option::Error __fastcall mysqlpp::MultiStatementsOption::set(
        mysqlpp::MultiStatementsOption *const this,
        mysqlpp::DBDriver *dbd)
{
  bool v4; // zf
  bool arg; // si
  std::string::pointer M_p; // rax
  MYSQL *p_mysql; // rdi

  v4 = !dbd->is_connected_;
  arg = this->arg_;
  if ( v4 )
  {
    if ( mysqlpp::DBDriver::set_option(dbd, 0x10000u, arg) )
      return 0;
  }
  else
  {
    M_p = dbd->error_message_._M_dataplus._M_p;
    p_mysql = &dbd->mysql_;
    *(_QWORD *)&p_mysql[1].net.last_error[25] = 0LL;
    *M_p = 0;
    if ( !mysql_set_server_option(p_mysql, (enum_mysql_set_option)!arg) )
      return 0;
  }
  return 2;
};

// Line 166: range 000000000CF83540-000000000CF83587
mysqlpp::Option::Error __fastcall mysqlpp::NamedPipeOption::set(
        mysqlpp::NamedPipeOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_NAMED_PIPE, 0LL) != 0);
};

// Line 175: range 000000000CF83360-000000000CF833A3
mysqlpp::Option::Error __fastcall mysqlpp::NoSchemaOption::set(
        mysqlpp::NoSchemaOption *const this,
        mysqlpp::DBDriver *dbd)
{
  if ( dbd->is_connected_ )
    return 3;
  else
    return 2 * !mysqlpp::DBDriver::set_option(dbd, 0x10u, this->arg_);
};

// Line 185: range 000000000CF83590-000000000CF835D9
mysqlpp::Option::Error __fastcall mysqlpp::ProtocolOption::set(
        mysqlpp::ProtocolOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_PROTOCOL, &this->arg_) != 0);
};

// Line 195: range 000000000CF835E0-000000000CF83629
mysqlpp::Option::Error __fastcall mysqlpp::ReadDefaultFileOption::set(
        mysqlpp::ReadDefaultFileOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_READ_DEFAULT_FILE, v4) != 0);
};

// Line 204: range 000000000CF83630-000000000CF83679
mysqlpp::Option::Error __fastcall mysqlpp::ReadDefaultGroupOption::set(
        mysqlpp::ReadDefaultGroupOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_READ_DEFAULT_GROUP, v4) != 0);
};

// Line 214: range 000000000CF83680-000000000CF836C9
mysqlpp::Option::Error __fastcall mysqlpp::ReadTimeoutOption::set(
        mysqlpp::ReadTimeoutOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_READ_TIMEOUT, &this->arg_) != 0);
};

// Line 225: range 000000000CF831E0-000000000CF83219
mysqlpp::Option::Error __fastcall mysqlpp::ReconnectOption::set(
        mysqlpp::ReconnectOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_RECONNECT, &this->arg_) != 0);
};

// Line 250: range 000000000CF836D0-000000000CF83719
mysqlpp::Option::Error __fastcall mysqlpp::ReportDataTruncationOption::set(
        mysqlpp::ReportDataTruncationOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_REPORT_DATA_TRUNCATION, &this->arg_) != 0);
};

// Line 263: range 000000000CF83720-000000000CF83769
mysqlpp::Option::Error __fastcall mysqlpp::SecureAuthOption::set(
        mysqlpp::SecureAuthOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_SECURE_AUTH, &this->arg_) != 0);
};

// Line 275: range 000000000CF83770-000000000CF837B9
mysqlpp::Option::Error __fastcall mysqlpp::SetCharsetDirOption::set(
        mysqlpp::SetCharsetDirOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_SET_CHARSET_DIR, v4) != 0);
};

// Line 284: range 000000000CF837C0-000000000CF83809
mysqlpp::Option::Error __fastcall mysqlpp::SetCharsetNameOption::set(
        mysqlpp::SetCharsetNameOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_SET_CHARSET_NAME, v4) != 0);
};

// Line 294: range 000000000CF83810-000000000CF83859
mysqlpp::Option::Error __fastcall mysqlpp::SetClientIpOption::set(
        mysqlpp::SetClientIpOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_SET_CLIENT_IP, v4) != 0);
};

// Line 307: range 000000000CF83860-000000000CF838A9
mysqlpp::Option::Error __fastcall mysqlpp::SharedMemoryBaseNameOption::set(
        mysqlpp::SharedMemoryBaseNameOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax
  std::string::pointer v4; // rdx

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  v4 = this->arg_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_SHARED_MEMORY_BASE_NAME, v4) != 0);
};

// Line 332: range 000000000CF831D0-000000000CF831D5
mysqlpp::Option::Error __fastcall mysqlpp::SslOption::set(mysqlpp::SslOption *const this, mysqlpp::DBDriver *dbd)
{
  return 1;
};

// Line 339: range 000000000CF838B0-000000000CF838F7
mysqlpp::Option::Error __fastcall mysqlpp::UseEmbeddedConnectionOption::set(
        mysqlpp::UseEmbeddedConnectionOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_USE_EMBEDDED_CONNECTION, 0LL) != 0);
};

// Line 352: range 000000000CF83900-000000000CF83947
mysqlpp::Option::Error __fastcall mysqlpp::UseRemoteConnectionOption::set(
        mysqlpp::UseRemoteConnectionOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_USE_REMOTE_CONNECTION, 0LL) != 0);
};

// Line 365: range 000000000CF83950-000000000CF83999
mysqlpp::Option::Error __fastcall mysqlpp::WriteTimeoutOption::set(
        mysqlpp::WriteTimeoutOption *const this,
        mysqlpp::DBDriver *dbd)
{
  std::string::pointer M_p; // rax

  if ( dbd->is_connected_ )
    return 3;
  M_p = dbd->error_message_._M_dataplus._M_p;
  dbd->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return 2 * (mysql_options(&dbd->mysql_, MYSQL_OPT_WRITE_TIMEOUT, &this->arg_) != 0);
};
