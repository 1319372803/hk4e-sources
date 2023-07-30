// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/error.hpp

// Line 74: range 0000000019B8070E-0000000019B811A3
boost::system::error_code __fastcall boost::asio::ssl::error::make_error_code(boost::asio::ssl::error::stream_errors e)
{
  __int64 v1; // rax
  unsigned __int8 v2; // al
  unsigned __int64 v3; // rax
  const boost::system::error_category *v4; // rdx
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  v1 = (__int64)*(&boost::asio::ssl::error::get_stream_category(void)::instance + 1);
  if ( v1 == 0x8FAFD21E25C5E09BLL || v1 == 0xB2AB117A257EDF0DLL )
  {
    v2 = e != 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)(boost::asio::ssl::error::get_stream_category(void)::instance + 6) >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8(boost::asio::ssl::error::get_stream_category(void)::instance + 6);
      JUMPOUT(0x19B80783LL);
    }
    v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(boost::asio::ssl::error::detail::stream_category *__hidden), _QWORD))boost::asio::ssl::error::get_stream_category(void)::instance[6])(
           &boost::asio::ssl::error::get_stream_category(void)::instance,
           (unsigned int)e);
  }
  v3 = (unsigned int)e | ((unsigned __int64)v2 << 32);
  v4 = (const boost::system::error_category *)&boost::asio::ssl::error::get_stream_category(void)::instance;
  result.cat_ = v4;
  result.val_ = v3;
  result.failed_ = BYTE4(v3);
  return result;
};
