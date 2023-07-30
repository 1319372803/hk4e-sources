// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/consuming_buffers.hpp

// Line 167: range 000000000CB13C80-000000000CB13CEF
void __cdecl boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::consuming_single_buffer<boost::asio::mutable_buffers_1>(
        boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1> *const this,
        const boost::asio::mutable_buffers_1 *buffer)
{
  boost::asio::const_buffer b; // [rsp+10h] [rbp-20h] BYREF

  boost::asio::const_buffer::const_buffer(&b, buffer);
  boost::asio::const_buffers_1::const_buffers_1(&this->buffer_, &b);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_consumed_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->total_consumed_, &b);
  this->total_consumed_ = 0LL;
};

// Line 174: range 000000000CCED5E0-000000000CCED632
bool __cdecl boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::empty(
        const boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1> *const this)
{
  __int64 v1; // rsi
  std::size_t total_consumed; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->total_consumed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->total_consumed_, v1);
  total_consumed = this->total_consumed_;
  return total_consumed >= boost::asio::const_buffer::size(&this->buffer_);
};

// Line 180: range 000000000CCED4E0-000000000CCED548
boost::asio::const_buffers_1 __cdecl boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::prepare(
        boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1> *const this,
        std::size_t max_size)
{
  boost::asio::const_buffer b; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->total_consumed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->total_consumed_, max_size);
  b = boost::asio::operator+(&this->buffer_, this->total_consumed_);
  return boost::asio::buffer(&b, max_size);
};

// Line 186: range 000000000CCED590-000000000CCED5DE
void __cdecl boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::consume(
        boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1> *const this,
        std::size_t size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_consumed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->total_consumed_, size);
  this->total_consumed_ += size;
};

// Line 192: range 000000000CCED4A4-000000000CCED4DE
std::size_t __cdecl boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::total_consumed(
        const boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1> *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->total_consumed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->total_consumed_, v1);
  return this->total_consumed_;
};

// Line 254: range 000000000CAE2B9E-000000000CAE2BC3
void __cdecl boost::asio::detail::consuming_buffers<boost::asio::const_buffer,boost::asio::mutable_buffers_1,boost::asio::mutable_buffer const*>::consuming_buffers(
        boost::asio::detail::consuming_buffers<boost::asio::const_buffer,boost::asio::mutable_buffers_1,const boost::asio::mutable_buffer*> *const this,
        const boost::asio::mutable_buffers_1 *buffer)
{
  boost::asio::detail::consuming_single_buffer<boost::asio::const_buffers_1>::consuming_single_buffer<boost::asio::mutable_buffers_1>(
    this,
    buffer);
};
