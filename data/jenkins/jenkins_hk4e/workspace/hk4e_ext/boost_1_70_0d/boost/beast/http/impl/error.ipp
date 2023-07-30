// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/error.ipp

// Line 28: range 0000000019B749DA-0000000019B749E1
const char *__fastcall boost::beast::http::detail::http_error_category::name(
        const boost::beast::http::detail::http_error_category *const this)
{
  return "beast.http";
};

// Line 31: range 0000000019B842B4-0000000019B844ED
std::string *__fastcall boost::beast::http::detail::http_error_category::message[abi:cxx11](
        std::string *retstr,
        const boost::beast::http::detail::http_error_category *const this,
        int ev)
{
  std::allocator<char> __a; // [rsp+Fh] [rbp-9h] BYREF

  switch ( ev )
  {
    case 1:
      std::string::basic_string<std::allocator<char>>(retstr, "end of stream", &__a);
      break;
    case 2:
      std::string::basic_string<std::allocator<char>>(retstr, "partial message", &__a);
      break;
    case 3:
      std::string::basic_string<std::allocator<char>>(retstr, "need more", &__a);
      break;
    case 4:
      std::string::basic_string<std::allocator<char>>(retstr, "unexpected body", &__a);
      break;
    case 5:
      std::string::basic_string<std::allocator<char>>(retstr, "need buffer", &__a);
      break;
    case 6:
      std::string::basic_string<std::allocator<char>>(retstr, "end of chunk", &__a);
      break;
    case 7:
      std::string::basic_string<std::allocator<char>>(retstr, "buffer overflow", &__a);
      break;
    case 8:
      std::string::basic_string<std::allocator<char>>(retstr, "header limit exceeded", &__a);
      break;
    case 9:
      std::string::basic_string<std::allocator<char>>(retstr, "body limit exceeded", &__a);
      break;
    case 10:
      std::string::basic_string<std::allocator<char>>(retstr, "bad alloc", &__a);
      break;
    case 11:
      std::string::basic_string<std::allocator<char>>(retstr, "bad line ending", &__a);
      break;
    case 12:
      std::string::basic_string<std::allocator<char>>(retstr, "bad method", &__a);
      break;
    case 13:
      std::string::basic_string<std::allocator<char>>(retstr, "bad target", &__a);
      break;
    case 14:
      std::string::basic_string<std::allocator<char>>(retstr, "bad version", &__a);
      break;
    case 15:
      std::string::basic_string<std::allocator<char>>(retstr, "bad status", &__a);
      break;
    case 16:
      std::string::basic_string<std::allocator<char>>(retstr, "bad reason", &__a);
      break;
    case 17:
      std::string::basic_string<std::allocator<char>>(retstr, "bad field", &__a);
      break;
    case 18:
      std::string::basic_string<std::allocator<char>>(retstr, "bad value", &__a);
      break;
    case 19:
      std::string::basic_string<std::allocator<char>>(retstr, "bad Content-Length", &__a);
      break;
    case 20:
      std::string::basic_string<std::allocator<char>>(retstr, "bad Transfer-Encoding", &__a);
      break;
    case 21:
      std::string::basic_string<std::allocator<char>>(retstr, "bad chunk", &__a);
      break;
    case 22:
      std::string::basic_string<std::allocator<char>>(retstr, "bad chunk extension", &__a);
      break;
    case 23:
      std::string::basic_string<std::allocator<char>>(retstr, "bad obs-fold", &__a);
      break;
    case 24:
      std::string::basic_string<std::allocator<char>>(retstr, "stale parser", &__a);
      break;
    default:
      std::string::basic_string<std::allocator<char>>(retstr, "beast.http error", &__a);
      break;
  }
  return retstr;
};

// Line 66: range 0000000019B749E2-0000000019B74ADC
boost::beast::error_condition __fastcall boost::beast::http::detail::http_error_category::default_error_condition(
        const boost::beast::http::detail::http_error_category *const this,
        int ev)
{
  __int64 v2; // rbp
  boost::ulong_long_type *p_id; // rdi
  boost::ulong_long_type id; // rax
  const boost::beast::http::detail::http_error_category *v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rax
  const boost::beast::http::detail::http_error_category *v9; // rdx
  boost::beast::error_condition result; // 0:rax.5,8:rdx.8

  p_id = &this->id_;
  if ( *(_BYTE *)(((unsigned __int64)p_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_id);
LABEL_9:
    v7 = ev != 0;
    goto LABEL_7;
  }
  v2 = (unsigned int)ev;
  id = this->id_;
  if ( id == 0x8FAFD21E25C5E09BLL || id == 0xB2AB117A257EDF0DLL )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v6 = this;
    __asan_report_load8(this);
    goto LABEL_11;
  }
  v6 = (const boost::beast::http::detail::http_error_category *)(this->_vptr_error_category + 6);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(v6);
    JUMPOUT(0x19B74A7DLL);
  }
  v7 = (*((__int64 (__fastcall **)(const boost::beast::http::detail::http_error_category *const))this->_vptr_error_category
        + 6))(this);
LABEL_7:
  v8 = v2 | ((unsigned __int64)v7 << 32);
  v9 = this;
  result.cat_ = v9;
  result.val_ = v8;
  result.failed_ = BYTE4(v8);
  return result;
};

// Line 82: range 0000000019B74ADE-0000000019B74B3C
bool __fastcall boost::beast::http::detail::http_error_category::equivalent(
        const boost::beast::http::detail::http_error_category *const this,
        const boost::beast::error_code *error,
        int ev)
{
  char v3; // al

  v3 = *(_BYTE *)(((unsigned __int64)error >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
  {
    this = (const boost::beast::http::detail::http_error_category *const)error;
    __asan_report_load4(error);
  }
  else if ( ev != error->val_ )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&error->cat_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&error->cat_);
  }
  else if ( this != error->cat_ )
  {
    return 0;
  }
  return 1;
};
