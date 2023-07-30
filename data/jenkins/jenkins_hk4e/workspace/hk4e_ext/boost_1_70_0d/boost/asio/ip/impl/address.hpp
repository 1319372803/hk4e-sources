// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/impl/address.hpp

// Line 42: range 000000000C714FC6-000000000C715052
boost::asio::ip::address *__cdecl boost::asio::ip::address::from_string(
        boost::asio::ip::address *retstr,
        const std::string *str)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->ipv6_address_.scope_id_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->ipv6_address_.scope_id_ + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(
      retstr,
      32LL,
      (*(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&retstr->ipv6_address_.scope_id_
                                                                                                + 7) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->ipv6_address_.scope_id_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)retstr + 31) & 7);
  }
  boost::asio::ip::make_address(retstr, str);
  return retstr;
};
