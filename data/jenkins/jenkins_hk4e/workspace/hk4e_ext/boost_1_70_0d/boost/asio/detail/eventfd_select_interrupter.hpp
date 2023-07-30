// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/eventfd_select_interrupter.hpp

// Line 48: range 000000000C642B42-000000000C642B8C
int __cdecl boost::asio::detail::eventfd_select_interrupter::read_descriptor(
        const boost::asio::detail::eventfd_select_interrupter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->read_descriptor_;
};
