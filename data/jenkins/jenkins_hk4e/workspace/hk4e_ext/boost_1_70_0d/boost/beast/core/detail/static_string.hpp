// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/static_string.hpp

// Line 139: range 000000000CBF789E-000000000CBF7983
char *__fastcall boost::beast::detail::raw_to_string<char,unsigned long,std::char_traits<char>>(
        char *buf,
        std::size_t x)
{
  char *v2; // rax
  char v3; // dl
  char v5; // dl
  char v6; // al
  unsigned __int64 v7; // rdx

  if ( x )
    goto LABEL_8;
  v2 = buf - 1;
  v3 = *(_BYTE *)(((unsigned __int64)(buf - 1) >> 3) + 0x7FFF8000);
  if ( v3 <= (((unsigned __int8)buf - 1) & 7) && v3 )
  {
    --buf;
    __asan_report_store1(v2);
    while ( 1 )
    {
      *buf = v5;
      x /= 0xAuLL;
LABEL_8:
      if ( !x )
        break;
      --buf;
      v5 = a0123456789[x % 0xA];
      v6 = *(_BYTE *)(((unsigned __int64)buf >> 3) + 0x7FFF8000);
      if ( v6 <= ((unsigned __int8)buf & 7) && v6 )
      {
        __asan_report_store1(buf);
        return boost::beast::detail::raw_to_string<char,unsigned long,std::char_traits<char>>(buf, x, v7);
      }
    }
  }
  else
  {
    *--buf = 48;
  }
  return buf;
};
