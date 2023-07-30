// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/executor.ipp

// Line 26: range 000000000BEF52E0-000000000BEF532D
void __cdecl boost::asio::bad_executor::bad_executor(boost::asio::bad_executor *const this)
{
  __int64 *v1; // rdx

  std::exception::exception((std::exception *const)this);
  v1 = &`vtable for'boost::asio::bad_executor + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *this = (boost::asio::bad_executor)v1;
};

// Line 31: range 000000000BEF532E-000000000BEF533E
const char *__cdecl boost::asio::bad_executor::what(const boost::asio::bad_executor *const this)
{
  return "bad executor";
};
