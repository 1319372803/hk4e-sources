// File: /home/peng.huang/serverCode/hk4e/ext/LUrlParser/LUrlParser.h

// Line 46: range 0000000019FC191C-0000000019FC1A26
void __cdecl LUrlParser::clParseURL::clParseURL(LUrlParser::clParseURL_0 *const this, LUrlParser::clParseURL_0 *a2)
{
  this->m_ErrorCode = a2->m_ErrorCode;
  std::string::basic_string(&this->m_Scheme, &a2->m_Scheme);
  std::string::basic_string(&this->m_Host, &a2->m_Host);
  std::string::basic_string(&this->m_Port, &a2->m_Port);
  std::string::basic_string(&this->m_Path, &a2->m_Path);
  std::string::basic_string(&this->m_Query, &a2->m_Query);
  std::string::basic_string(&this->m_Fragment, &a2->m_Fragment);
  std::string::basic_string(&this->m_UserName, &a2->m_UserName);
  std::string::basic_string(&this->m_Password, &a2->m_Password);
};

// Line 46: range 000000000C7A487A-000000000C7A4910
void __cdecl LUrlParser::clParseURL::~clParseURL(LUrlParser::clParseURL *const this)
{
  std::string::~string(&this->m_Password);
  std::string::~string(&this->m_UserName);
  std::string::~string(&this->m_Fragment);
  std::string::~string(&this->m_Query);
  std::string::~string(&this->m_Path);
  std::string::~string(&this->m_Port);
  std::string::~string(&this->m_Host);
  std::string::~string(&this->m_Scheme);
};

// Line 73: range 0000000019FC1878-0000000019FC191A
void __cdecl LUrlParser::clParseURL::clParseURL(
        LUrlParser::clParseURL_0 *const this,
        LUrlParser::LUrlParserError ErrorCode)
{
  this->m_ErrorCode = ErrorCode;
  std::string::basic_string(&this->m_Scheme);
  std::string::basic_string(&this->m_Host);
  std::string::basic_string(&this->m_Port);
  std::string::basic_string(&this->m_Path);
  std::string::basic_string(&this->m_Query);
  std::string::basic_string(&this->m_Fragment);
  std::string::basic_string(&this->m_UserName);
  std::string::basic_string(&this->m_Password);
};

// Line 264: range 0000000019FC17D6-0000000019FC1876
void __cdecl LUrlParser::clParseURL::clParseURL(LUrlParser::clParseURL_0 *const this)
{
  this->m_ErrorCode = LUrlParserError_Uninitialized;
  std::string::basic_string(&this->m_Scheme);
  std::string::basic_string(&this->m_Host);
  std::string::basic_string(&this->m_Port);
  std::string::basic_string(&this->m_Path);
  std::string::basic_string(&this->m_Query);
  std::string::basic_string(&this->m_Fragment);
  std::string::basic_string(&this->m_UserName);
  std::string::basic_string(&this->m_Password);
};
