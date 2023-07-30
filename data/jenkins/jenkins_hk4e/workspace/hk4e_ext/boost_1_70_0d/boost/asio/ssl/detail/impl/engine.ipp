// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/detail/impl/engine.ipp

// Line 146: range 0000000019B811A8-0000000019B81333
boost::asio::ssl::detail::engine::want __fastcall boost::asio::ssl::detail::engine::write(
        boost::asio::ssl::detail::engine *const this,
        const boost::asio::const_buffer *data,
        boost::system::error_code *ec,
        std::size_t *bytes_transferred)
{
  boost::system::error_code *v4; // r9
  boost::system::error_code *size; // r8

  v4 = ec;
  if ( *(_BYTE *)(((unsigned __int64)&data->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&data->size_);
LABEL_6:
    this = (boost::asio::ssl::detail::engine *const)v4;
    __asan_report_store16(v4);
    goto LABEL_7;
  }
  size = (boost::system::error_code *)data->size_;
  if ( !size )
  {
    if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)&ec->val_ = 0LL;
      ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      return 0;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(data);
    JUMPOUT(0x19B81243LL);
  }
  return boost::asio::ssl::detail::engine::perform(
           this,
           (int (*)(boost::asio::ssl::detail::engine *, void *, std::size_t))boost::asio::ssl::detail::engine::do_write,
           0LL,
           (std::size_t)data->data_,
           size,
           (std::size_t *)v4);
};
