// File: /home/peng.huang/serverCode/hk4e/ext/LUrlParser/LUrlParser.cpp

// Line 36: range 0000000019FC0E54-0000000019FC0ECD
bool __cdecl IsSchemeValid(const std::string *SchemeName)
{
  char c; // [rsp+17h] [rbp-9h]
  size_t inx; // [rsp+18h] [rbp-8h]

  for ( inx = 0LL; inx < std::string::size(SchemeName); ++inx )
  {
    c = *(_BYTE *)std::string::operator[](SchemeName, inx);
    if ( !isalpha(c) && c != 43 && c != 45 && c != 46 )
      return 0;
  }
  return 1;
};

// Line 47: range 0000000019FC0ECE-0000000019FC0F3F
bool __cdecl LUrlParser::clParseURL::GetPort(const LUrlParser::clParseURL_0 *const this, int *OutPort)
{
  const char *v3; // rax
  int Port; // [rsp+1Ch] [rbp-4h]

  if ( !LUrlParser::clParseURL::IsValid((const LUrlParser::clParseURL *const)this) )
    return 0;
  v3 = (const char *)std::string::c_str();
  Port = atoi(v3);
  if ( Port <= 0 || Port > 0xFFFF )
    return 0;
  if ( OutPort )
    *OutPort = Port;
  return 1;
};

// Line 61: range 0000000019FC0F40-0000000019FC17D5
LUrlParser::clParseURL_0 *__cdecl LUrlParser::clParseURL::ParseURL(
        LUrlParser::clParseURL_0 *retstr,
        const std::string *URL)
{
  __gnu_cxx::__normal_iterator<char*,std::string > v2; // r12
  __gnu_cxx::__normal_iterator<char*,std::string > v3; // rbx
  __gnu_cxx::__normal_iterator<char*,std::string > v4; // rax
  const char *v5; // rax
  LUrlParser::clParseURL_0 Result; // [rsp+10h] [rbp-2C0h] BYREF
  char v8[47]; // [rsp+120h] [rbp-1B0h] BYREF
  char v9; // [rsp+14Fh] [rbp-181h] BYREF
  char v10[47]; // [rsp+150h] [rbp-180h] BYREF
  char v11; // [rsp+17Fh] [rbp-151h] BYREF
  char v12[47]; // [rsp+180h] [rbp-150h] BYREF
  char v13; // [rsp+1AFh] [rbp-121h] BYREF
  char v14[47]; // [rsp+1B0h] [rbp-120h] BYREF
  char v15; // [rsp+1DFh] [rbp-F1h] BYREF
  char v16[47]; // [rsp+1E0h] [rbp-F0h] BYREF
  char v17; // [rsp+20Fh] [rbp-C1h] BYREF
  char v18[47]; // [rsp+210h] [rbp-C0h] BYREF
  char v19; // [rsp+23Fh] [rbp-91h] BYREF
  char v20[47]; // [rsp+240h] [rbp-90h] BYREF
  char v21; // [rsp+26Fh] [rbp-61h] BYREF
  char v22[46]; // [rsp+270h] [rbp-60h] BYREF
  char v23; // [rsp+29Eh] [rbp-32h] BYREF
  bool bHasBracket; // [rsp+29Fh] [rbp-31h]
  const char *LocalString_0; // [rsp+2A0h] [rbp-30h]
  const char *LocalString; // [rsp+2A8h] [rbp-28h]
  bool bHasUserName; // [rsp+2B7h] [rbp-19h]
  const char *CurrentString; // [rsp+2B8h] [rbp-18h]

  LUrlParser::clParseURL::clParseURL(&Result);
  CurrentString = (const char *)std::string::c_str();
  LocalString_0 = strchr(CurrentString, 58);
  if ( LocalString_0 )
  {
    std::allocator<char>::allocator(&v9);
    std::string::basic_string(v8, CurrentString, LocalString_0 - CurrentString, &v9);
    std::string::operator=(&Result.m_Scheme, v8);
    std::string::~string(v8);
    std::allocator<char>::~allocator(&v9);
    if ( !IsSchemeValid(&Result.m_Scheme) )
    {
      LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_InvalidSchemeName);
    }
    else
    {
      v2._M_current = (char *)std::string::begin(&Result.m_Scheme);
      v3._M_current = (char *)std::string::end(&Result.m_Scheme);
      v4._M_current = (char *)std::string::begin(&Result.m_Scheme);
      std::transform<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,int (*)(int)>(
        v4,
        v3,
        v2,
        tolower);
      CurrentString = LocalString_0 + 2;
      if ( LocalString_0[1] == 47 && (v5 = CurrentString, ++CurrentString, *v5 == 47) )
      {
        bHasUserName = 0;
        for ( LocalString = CurrentString; *LocalString; ++LocalString )
        {
          if ( *LocalString == 64 )
          {
            bHasUserName = 1;
            break;
          }
          if ( *LocalString == 47 )
          {
            bHasUserName = 0;
            break;
          }
        }
        LocalString = CurrentString;
        if ( bHasUserName )
        {
          while ( *LocalString && *LocalString != 58 && *LocalString != 64 )
            ++LocalString;
          std::allocator<char>::allocator(&v11);
          std::string::basic_string(v10, CurrentString, LocalString - CurrentString, &v11);
          std::string::operator=(&Result.m_UserName, v10);
          std::string::~string(v10);
          std::allocator<char>::~allocator(&v11);
          CurrentString = LocalString;
          if ( *LocalString == 58 )
          {
            for ( LocalString = ++CurrentString; *LocalString && *LocalString != 64; ++LocalString )
              ;
            std::allocator<char>::allocator(&v13);
            std::string::basic_string(v12, CurrentString, LocalString - CurrentString, &v13);
            std::string::operator=(&Result.m_Password, v12);
            std::string::~string(v12);
            std::allocator<char>::~allocator(&v13);
            CurrentString = LocalString;
          }
          if ( *CurrentString != 64 )
          {
            LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_NoAtSign);
            goto LABEL_65;
          }
          ++CurrentString;
        }
        bHasBracket = *CurrentString == 91;
        for ( LocalString = CurrentString; *LocalString; ++LocalString )
        {
          if ( bHasBracket && *LocalString == 93 )
          {
            ++LocalString;
            break;
          }
          if ( !bHasBracket && (*LocalString == 58 || *LocalString == 47) )
            break;
        }
        std::allocator<char>::allocator(&v15);
        std::string::basic_string(v14, CurrentString, LocalString - CurrentString, &v15);
        std::string::operator=(&Result.m_Host, v14);
        std::string::~string(v14);
        std::allocator<char>::~allocator(&v15);
        CurrentString = LocalString;
        if ( *LocalString == 58 )
        {
          for ( LocalString = ++CurrentString; *LocalString && *LocalString != 47; ++LocalString )
            ;
          std::allocator<char>::allocator(&v17);
          std::string::basic_string(v16, CurrentString, LocalString - CurrentString, &v17);
          std::string::operator=(&Result.m_Port, v16);
          std::string::~string(v16);
          std::allocator<char>::~allocator(&v17);
          CurrentString = LocalString;
        }
        if ( *CurrentString )
        {
          if ( *CurrentString == 47 )
          {
            for ( LocalString = ++CurrentString; *LocalString && *LocalString != 35 && *LocalString != 63; ++LocalString )
              ;
            std::allocator<char>::allocator(&v19);
            std::string::basic_string(v18, CurrentString, LocalString - CurrentString, &v19);
            std::string::operator=(&Result.m_Path, v18);
            std::string::~string(v18);
            std::allocator<char>::~allocator(&v19);
            CurrentString = LocalString;
            if ( *LocalString == 63 )
            {
              for ( LocalString = ++CurrentString; *LocalString && *LocalString != 35; ++LocalString )
                ;
              std::allocator<char>::allocator(&v21);
              std::string::basic_string(v20, CurrentString, LocalString - CurrentString, &v21);
              std::string::operator=(&Result.m_Query, v20);
              std::string::~string(v20);
              std::allocator<char>::~allocator(&v21);
              CurrentString = LocalString;
            }
            if ( *CurrentString == 35 )
            {
              for ( LocalString = ++CurrentString; *LocalString; ++LocalString )
                ;
              std::allocator<char>::allocator(&v23);
              std::string::basic_string(v22, CurrentString, LocalString - CurrentString, &v23);
              std::string::operator=(&Result.m_Fragment, v22);
              std::string::~string(v22);
              std::allocator<char>::~allocator(&v23);
              CurrentString = LocalString;
            }
            Result.m_ErrorCode = LUrlParserError_Ok;
            LUrlParser::clParseURL::clParseURL(retstr, &Result);
          }
          else
          {
            LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_NoSlash);
          }
        }
        else
        {
          LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_UnexpectedEndOfLine);
        }
      }
      else
      {
        LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_NoDoubleSlash);
      }
    }
  }
  else
  {
    LUrlParser::clParseURL::clParseURL(retstr, LUrlParserError_NoUrlCharacter);
  }
LABEL_65:
  LUrlParser::clParseURL::~clParseURL((LUrlParser::clParseURL *const)&Result);
  return retstr;
};
