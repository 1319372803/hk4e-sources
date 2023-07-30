// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/buffers_range_adaptor.hpp

// Line 43: range 000000000C81D644-000000000C81D6DB
void __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::const_iterator(
        boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *const this,
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> *b,
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::iter_type *it)
{
  const boost::asio::const_buffer *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, b);
  v3 = *it;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->b_ = b;
};

// Line 63: range 000000000C81D6FE-000000000C81D7CF
bool __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::operator==(
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *const this,
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *other)
{
  const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> *b; // rcx
  const boost::asio::const_buffer *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->b_, other);
  b = this->b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->b_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other->b_, other);
  if ( b != other->b_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, other);
  it = this->it_;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8(other, other);
  return it == other->it_;
};

// Line 69: range 000000000C815716-000000000C81573D
bool __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::operator!=(
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *const this,
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *other)
{
  return !boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::operator==(
            this,
            other);
};

// Line 75: range 000000000C815784-000000000C8157E1
boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::reference __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::operator*(
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *const this)
{
  __int64 v1; // rsi
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::reference *it; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  it = (boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::reference *)this->it_;
  if ( *(_WORD *)(((unsigned __int64)this->it_ >> 3) + 0x7FFF8000) )
    it = (boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::reference *)__asan_report_load16();
  return *it;
};

// Line 84: range 000000000C81573E-000000000C815782
boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *__cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::operator++(
        boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  ++this->it_;
  return this;
};

// Line 120: range 000000000C81D5E6-000000000C81D624
void __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::buffers_range_adaptor(
        boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> *const this,
        const boost::asio::const_buffers_1 *b)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->b_ = b;
};

// Line 126: range 000000000C81564A-000000000C8156AF
boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::begin(
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> *const this)
{
  __int64 v1; // rsi
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::iter_type it; // [rsp+18h] [rbp-18h] BYREF
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator v4; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  it = boost::asio::buffer_sequence_begin<boost::asio::const_buffers_1>(this->b_, 0LL);
  boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::const_iterator(
    &v4,
    this,
    &it);
  return v4;
};

// Line 132: range 000000000C8156B0-000000000C815715
boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator __cdecl boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::end(
        const boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&> *const this)
{
  __int64 v1; // rsi
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator::iter_type it; // [rsp+18h] [rbp-18h] BYREF
  boost::beast::detail::buffers_range_adaptor<const boost::asio::const_buffers_1&>::const_iterator v4; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  it = boost::asio::buffer_sequence_end<boost::asio::const_buffers_1>(this->b_, 0LL);
  boost::beast::detail::buffers_range_adaptor<boost::asio::const_buffers_1 const&>::const_iterator::const_iterator(
    &v4,
    this,
    &it);
  return v4;
};
