// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ip/bad_address_cast.hpp

// Line 40: range 000000000CDF5360-000000000CDF5634
void __fastcall boost::asio::ip::bad_address_cast::~bad_address_cast(boost::asio::ip::bad_address_cast *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0xCDF5391LL);
  }
  *this = (boost::asio::ip::bad_address_cast)(&`vtable for'boost::asio::ip::bad_address_cast + 2);
  std::bad_cast::~bad_cast((std::bad_cast *)this);
};

// Line 46: range 000000000CDF52E4-000000000CDF52EB
const char *__fastcall boost::asio::ip::bad_address_cast::what(const boost::asio::ip::bad_address_cast *const this)
{
  return "bad address cast";
};
