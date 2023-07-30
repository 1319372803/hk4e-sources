// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/address_v6.hpp

// Line 90: range 000000000C714830-000000000C71486A
unsigned __int64 __cdecl boost::asio::ip::address_v6::scope_id(const boost::asio::ip::address_v6 *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->scope_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scope_id_, v1);
  return this->scope_id_;
};
