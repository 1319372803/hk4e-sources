// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/address.hpp

// Line 86: range 000000000C714F7E-000000000C714FC5
bool __cdecl boost::asio::ip::address::is_v4(const boost::asio::ip::address *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->type_ == ipv4;
};
