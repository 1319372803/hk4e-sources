// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/buffers_prefix.hpp

// Line 63: range 0000000019BE205A-0000000019BE20F3
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 63: range 0000000019BE1FBE-0000000019BE2057
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 63: range 0000000019BE1DE6-0000000019BE1E7F
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 63: range 0000000019BE1F22-0000000019BE1FBB
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 63: range 0000000019BE1E86-0000000019BE1F1F
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 63: range 0000000019BDF8C8-0000000019BDF961
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};

// Line 75: range 0000000019BD33B8-0000000019BD37D3
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator::reference __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::const_iterator::operator*(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator::reference result; // rax
  std::size_t *p_remain; // rdi

  result = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*(&this->it_);
  p_remain = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)p_remain >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_remain);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)p_remain);
  }
  else if ( this->remain_ < result.size_ )
  {
    result.size_ = this->remain_;
  }
  return result;
};

// Line 75: range 0000000019BD402E-0000000019BD4065
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator::reference __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator*(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator::reference result; // rax
  std::size_t *p_remain; // rdi

  result = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&this->it_);
  p_remain = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)p_remain >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_remain);
    result.data_ = boost::beast::detail::get<4ul,boost::beast::http::chunk_crlf>((const boost::beast::detail::tuple_element_impl<4,boost::beast::http::chunk_crlf> *)p_remain);
  }
  else if ( this->remain_ < result.size_ )
  {
    result.size_ = this->remain_;
  }
  return result;
};

// Line 75: range 0000000019BD3EE2-0000000019BD402C
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator::reference __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator::operator*(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator::reference result; // rax
  std::size_t *p_remain; // rdi

  result = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*(&this->it_);
  p_remain = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)p_remain >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_remain);
    return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::const_iterator::operator*((const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *const)p_remain);
  }
  else if ( this->remain_ < result.size_ )
  {
    result.size_ = this->remain_;
  }
  return result;
};

// Line 144: range 0000000019BAE936-0000000019BAE9F1
void __fastcall boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::setup(
        boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *const this,
        std::size_t size)
{
  boost::asio::const_buffer *end; // rax
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_10;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->remain_ = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
    this->end_ = &this->bs_;
    while ( 1 )
    {
      end = (boost::asio::const_buffer *)this->end_;
      if ( end == (boost::asio::const_buffer *)&this->size_ )
        return;
      this->end_ = end + 1;
      if ( *(_WORD *)(((unsigned __int64)end >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      v3 = end->size_;
      if ( size <= v3 )
        goto LABEL_13;
      size -= v3;
      this->size_ += v3;
    }
  }
LABEL_11:
  __asan_report_store8();
LABEL_12:
  this = (boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *const)end;
  v3 = __asan_report_load16(end);
LABEL_13:
  this->size_ += size;
  this->remain_ = size - v3;
};

// Line 144: range 0000000019BE8CA6-0000000019BE9127
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size)
{
  std::size_t b; // rbp
  std::size_t v3; // r13
  const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r14
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *v5; // rbx
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *p_b; // rdi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v9; // rcx
  std::size_t *p_size; // rdi
  void *p_end; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  std::size_t v14; // r12
  unsigned __int64 v15; // [rsp+0h] [rbp-128h]
  _DWORD *v16; // [rsp+10h] [rbp-118h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-100h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v18; // [rsp+30h] [rbp-F8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v19; // [rsp+40h] [rbp-E8h] BYREF
  char v20[184]; // [rsp+70h] [rbp-B8h] BYREF

  v5 = this;
  v15 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v15 = v7;
  }
  *(_QWORD *)v15 = 1102416563LL;
  *(_QWORD *)(v15 + 8) = "1 48 48 8 last:150";
  *(_QWORD *)(v15 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup;
  v16 = (_DWORD *)(v15 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = 61937;
  v16[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_16;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v19,
    this->bs_);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)((char *)this + 24);
  if ( *(_BYTE *)(((unsigned __int64)&v5->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
LABEL_19:
    __asan_report_load1(this);
    goto LABEL_20;
  }
  v5->end_.it_.bn_ = v19.it_.bn_;
  p_it = &v5->end_.it_.it_;
  if ( &v5->end_.it_.it_ == &v19.it_.it_ )
    goto LABEL_10;
  f.self = &v5->end_.it_.it_;
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)&v5->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_19;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v5->end_.it_.it_.i_,
    &f);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)&v5->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_20:
    __asan_report_store1(this);
    goto LABEL_21;
  }
  v5->end_.it_.it_.i_ = 0;
  v18.self = &v5->end_.it_.it_;
  v18.other = &v19.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v19.it_.it_.i_,
    &v18);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  v5->end_.b_ = v19.b_;
  f.self = &v19.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v19.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_b = v5;
    __asan_report_load8(v5);
    goto LABEL_23;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)(v15 + 48),
    v5->bs_);
  while ( 1 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *)&v5->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_23:
      __asan_report_load8(p_b);
    }
    else if ( v5->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v15 + 88) )
    {
      goto LABEL_37;
    }
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v5->end_.it_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 48)) )
    {
      goto LABEL_25;
    }
LABEL_37:
    p_end = &v5->end_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end);
LABEL_28:
      __asan_report_load1(p_end);
LABEL_29:
      __asan_report_load8(p_end);
      goto LABEL_30;
    }
    v19.it_.bn_ = v5->end_.it_.bn_;
    v19.it_.it_.i_ = 0;
    v18.self = &v19.it_.it_;
    v18.other = p_it;
    p_end = &v5->end_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_28;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v5->end_.it_.it_.i_,
      &v18);
    p_end = &v5->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v19.b_ = v5->end_.b_;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&v5->end_.it_);
    b = (std::size_t)v19.b_;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v19.it_,
           &v19.b_->begin_) )
    {
      p_end = (void *)(b + 152);
      if ( !*(_BYTE *)(((b + 152) >> 3) + 0x7FFF8000) )
      {
        v3 = *(_QWORD *)(b + 152);
        v12 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v19.it_);
        b = v12.size_;
        if ( v3 >= v12.size_ )
          v3 = v12.size_;
        goto LABEL_31;
      }
LABEL_30:
      __asan_report_load8(p_end);
LABEL_31:
      b -= v3;
      goto LABEL_32;
    }
    v13 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v19.it_);
    b = v13.size_;
LABEL_32:
    f.self = &v19.it_.it_;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v19.it_.it_.i_,
      &f);
    if ( size <= b )
      break;
    size -= b;
    p_size = &v5->size_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_50;
    v5->size_ += b;
  }
  p_size = &v5->size_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
    goto LABEL_49;
  }
  v5->size_ += size;
  v14 = size - b;
  p_size = &v5->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
LABEL_50:
    __asan_report_load8(p_size);
    goto LABEL_51;
  }
  v5->remain_ = v14;
LABEL_25:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v15 + 56);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v15 + 80),
    &f);
  v9 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)v15;
  if ( v20 == (char *)v15 )
  {
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v15 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_51:
  v9->it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)1172321806;
  *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v15 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 144: range 0000000019BE120C-0000000019BE1687
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size)
{
  std::size_t b; // rbp
  std::size_t v3; // r13
  const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r14
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *v5; // rbx
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *p_b; // rdi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v9; // rcx
  std::size_t *p_size; // rdi
  void *p_end; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  std::size_t v14; // r12
  unsigned __int64 v15; // [rsp+0h] [rbp-128h]
  _DWORD *v16; // [rsp+10h] [rbp-118h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-100h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v18; // [rsp+30h] [rbp-F8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v19; // [rsp+40h] [rbp-E8h] BYREF
  char v20[184]; // [rsp+70h] [rbp-B8h] BYREF

  v5 = this;
  v15 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v15 = v7;
  }
  *(_QWORD *)v15 = 1102416563LL;
  *(_QWORD *)(v15 + 8) = "1 48 48 8 last:150";
  *(_QWORD *)(v15 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup;
  v16 = (_DWORD *)(v15 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = 61937;
  v16[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_16;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v19,
    this->bs_);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)((char *)this + 24);
  if ( *(_BYTE *)(((unsigned __int64)&v5->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
LABEL_19:
    __asan_report_load1(this);
    goto LABEL_20;
  }
  v5->end_.it_.bn_ = v19.it_.bn_;
  p_it = &v5->end_.it_.it_;
  if ( &v5->end_.it_.it_ == &v19.it_.it_ )
    goto LABEL_10;
  f.self = &v5->end_.it_.it_;
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)&v5->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_19;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v5->end_.it_.it_.i_,
    &f);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)&v5->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_20:
    __asan_report_store1(this);
    goto LABEL_21;
  }
  v5->end_.it_.it_.i_ = 0;
  v18.self = &v5->end_.it_.it_;
  v18.other = &v19.it_.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v19.it_.it_.i_,
    &v18);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  v5->end_.b_ = v19.b_;
  f.self = &v19.it_.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v19.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_b = v5;
    __asan_report_load8(v5);
    goto LABEL_23;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)(v15 + 48),
    v5->bs_);
  while ( 1 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *)&v5->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_23:
      __asan_report_load8(p_b);
    }
    else if ( v5->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v15 + 88) )
    {
      goto LABEL_37;
    }
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v5->end_.it_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 48)) )
    {
      goto LABEL_25;
    }
LABEL_37:
    p_end = &v5->end_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end);
LABEL_28:
      __asan_report_load1(p_end);
LABEL_29:
      __asan_report_load8(p_end);
      goto LABEL_30;
    }
    v19.it_.bn_ = v5->end_.it_.bn_;
    v19.it_.it_.i_ = 0;
    v18.self = &v19.it_.it_;
    v18.other = p_it;
    p_end = &v5->end_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&v5->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_28;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      v5->end_.it_.it_.i_,
      &v18);
    p_end = &v5->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->end_.b_ >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v19.b_ = v5->end_.b_;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&v5->end_.it_);
    b = (std::size_t)v19.b_;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v19.it_,
           &v19.b_->begin_) )
    {
      p_end = (void *)(b + 112);
      if ( !*(_BYTE *)(((b + 112) >> 3) + 0x7FFF8000) )
      {
        v3 = *(_QWORD *)(b + 112);
        v12 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v19.it_);
        b = v12.size_;
        if ( v3 >= v12.size_ )
          v3 = v12.size_;
        goto LABEL_31;
      }
LABEL_30:
      __asan_report_load8(p_end);
LABEL_31:
      b -= v3;
      goto LABEL_32;
    }
    v13 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v19.it_);
    b = v13.size_;
LABEL_32:
    f.self = &v19.it_.it_;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v19.it_.it_.i_,
      &f);
    if ( size <= b )
      break;
    size -= b;
    p_size = &v5->size_;
    if ( *(_BYTE *)(((unsigned __int64)&v5->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_50;
    v5->size_ += b;
  }
  p_size = &v5->size_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
    goto LABEL_49;
  }
  v5->size_ += size;
  v14 = size - b;
  p_size = &v5->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
LABEL_50:
    __asan_report_load8(p_size);
    goto LABEL_51;
  }
  v5->remain_ = v14;
LABEL_25:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v15 + 56);
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v15 + 80),
    &f);
  v9 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)v15;
  if ( v20 == (char *)v15 )
  {
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v15 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_51:
  v9->it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)1172321806;
  *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v15 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 144: range 0000000019BE5E80-0000000019BE632E
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // rbx
  unsigned __int64 b; // r13
  unsigned __int64 v6; // r15
  unsigned __int8 *p_i; // rdi
  __int64 v8; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *p_b; // rdi
  void *p_size; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  void *v12; // rdi
  std::size_t v13; // r12
  unsigned __int64 v14; // [rsp+10h] [rbp-D8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v16; // [rsp+30h] [rbp-B8h] BYREF
  char v17[152]; // [rsp+50h] [rbp-98h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 32 8 last:150";
  *(_QWORD *)(v6 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup;
  v14 = v6 >> 3;
  *(_DWORD *)(v14 + 2147450880) = -235802127;
  *(_DWORD *)(v14 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(this);
    goto LABEL_19;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v16,
    this->bs_);
  p_end = &this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    p_i = (unsigned __int8 *)p_end;
    __asan_report_store8();
LABEL_20:
    __asan_report_load1(p_i);
LABEL_21:
    __asan_handle_no_return(p_i);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  this->end_.it_.bn_ = v16.it_.bn_;
  if ( &this->end_.it_.it_ == &v16.it_.it_ )
    goto LABEL_10;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_20;
  if ( this->end_.it_.it_.i_ > 9u )
    goto LABEL_21;
  this->end_.it_.it_.i_ = 0;
  f.self = &this->end_.it_.it_;
  f.other = &v16.it_.it_;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v16.it_.it_.i_,
    &f);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_23:
    __asan_handle_no_return(&this->end_.b_);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  this->end_.b_ = v16.b_;
  if ( v16.it_.it_.i_ > 9u )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_b = this;
    __asan_report_load8(this);
    goto LABEL_25;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)(v6 + 32),
    this->bs_);
  while ( 1 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *)&this->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_25:
      __asan_report_load8(p_b);
    }
    else if ( this->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v6 + 56) )
    {
      goto LABEL_41;
    }
    p_size = &this->end_;
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->end_.it_,
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v6 + 32)) )
    {
      goto LABEL_27;
    }
LABEL_41:
    v12 = &this->end_;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v12);
LABEL_31:
      __asan_report_load1(v12);
LABEL_32:
      __asan_report_load8(v12);
      goto LABEL_33;
    }
    v16.it_.bn_ = p_end->it_.bn_;
    v16.it_.it_.i_ = 0;
    f.self = &v16.it_.it_;
    f.other = &this->end_.it_.it_;
    v12 = &this->end_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_31;
    boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      this->end_.it_.it_.i_,
      &f);
    v12 = &this->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
      goto LABEL_32;
    v16.b_ = this->end_.b_;
    boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&this->end_.it_);
    b = (unsigned __int64)v16.b_;
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v16.it_,
           &v16.b_->begin_) )
    {
      v12 = (void *)(b + 128);
      if ( !*(_BYTE *)(((b + 128) >> 3) + 0x7FFF8000) )
      {
        b = *(_QWORD *)(b + 128);
        v12 = &v16;
        v11 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v16.it_);
        if ( b >= v11.size_ )
          b = v11.size_;
        goto LABEL_34;
      }
LABEL_33:
      __asan_report_load8(v12);
LABEL_34:
      v11.size_ -= b;
      goto LABEL_35;
    }
    v12 = &v16;
    v11 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v16.it_);
LABEL_35:
    if ( v16.it_.it_.i_ > 9u )
    {
      __asan_handle_no_return(v12);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const "
        "boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
        "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval"
        "<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0"
        ">; std::size_t = long unsigned int]");
    }
    if ( size <= v11.size_ )
      break;
    size -= v11.size_;
    p_size = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_55;
    this->size_ += v11.size_;
  }
  p_size = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
LABEL_54:
    __asan_report_store8();
LABEL_55:
    __asan_report_load8(p_size);
LABEL_56:
    __asan_handle_no_return(p_size);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  this->size_ += size;
  v13 = size - v11.size_;
  p_size = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  this->remain_ = v13;
LABEL_27:
  if ( *(_BYTE *)(v6 + 48) > 9u )
    goto LABEL_56;
  if ( v17 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 144: range 0000000019BD4EF2-0000000019BD55C6
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size)
{
  unsigned __int64 p_end; // rbx
  unsigned __int8 *p_i; // rdi
  __int64 v6; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *p_b; // rdi
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v8; // rdi
  unsigned __int64 p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // r12
  std::size_t skip; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  std::size_t v13; // r12
  std::size_t *p_size; // rdi
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 p_it; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  char v22; // cl
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v23; // rax
  std::size_t v24; // r13
  unsigned __int64 v25; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+10h] [rbp-E8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-D0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v28; // [rsp+30h] [rbp-C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v29; // [rsp+40h] [rbp-B8h] BYREF
  char v30[152]; // [rsp+60h] [rbp-98h] BYREF

  v25 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v25 = v6;
  }
  *(_QWORD *)v25 = 1102416563LL;
  *(_QWORD *)(v25 + 8) = "1 32 32 8 last:150";
  p_end = (unsigned __int64)boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup;
  *(_QWORD *)(v25 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup;
  v26 = v25 >> 3;
  *(_DWORD *)(v26 + 2147450880) = -235802127;
  *(_DWORD *)(v26 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_16;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v29,
    this->bs_);
  p_end = (unsigned __int64)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_i = (unsigned __int8 *)p_end;
    __asan_report_store8();
LABEL_19:
    __asan_report_load1(p_i);
    goto LABEL_20;
  }
  this->end_.it_.bn_ = v29.it_.bn_;
  if ( &this->end_.it_.it_ == &v29.it_.it_ )
    goto LABEL_10;
  f.self = &this->end_.it_.it_;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_19;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.i_,
    &f);
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_20:
    __asan_report_store1(p_i);
    goto LABEL_21;
  }
  this->end_.it_.it_.i_ = 0;
  v28.self = &this->end_.it_.it_;
  v28.other = &v29.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v29.it_.it_.i_,
    &v28);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = v29.b_;
  f.self = &v29.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v29.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_b = this;
    __asan_report_load8(this);
    goto LABEL_23;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)(v25 + 32),
    this->bs_);
  while ( 2 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *)&this->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_23:
      __asan_report_load8(p_b);
    }
    else if ( this->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v25 + 56) )
    {
      goto LABEL_45;
    }
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->end_.it_,
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v25 + 32)) )
    {
      goto LABEL_25;
    }
LABEL_45:
    v15 = (unsigned __int8 *)p_end;
    if ( *(_BYTE *)((p_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end);
LABEL_28:
      __asan_report_load1(v15);
LABEL_29:
      __asan_handle_no_return(v15);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const b"
        "oost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio"
        "::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(d"
        "eclval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned "
        "int, 0>; std::size_t = long unsigned int]");
    }
    v29.it_.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)p_end;
    v16 = p_end + 8;
    v29.it_.it_.i_ = 0;
    p_it = (unsigned __int64)&v29.it_.it_;
    v15 = (unsigned __int8 *)(p_end + 16);
    if ( *(char *)(((p_end + 16) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_28;
    switch ( *(_BYTE *)(p_end + 16) )
    {
      case 0:
        goto LABEL_34;
      case 1:
        v8 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_end + 8);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v8);
LABEL_49:
          __asan_report_store8();
          goto LABEL_50;
        }
        v8 = &v29.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v29.it_.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_49;
        v29.it_.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(p_end + 8);
        v8 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v29.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&v29.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v29.it_.it_.i_ = 1;
          goto LABEL_34;
        }
LABEL_50:
        p_it = __asan_report_store1(v8);
LABEL_51:
        v18 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_56:
          __asan_report_store8();
          goto LABEL_57;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_56;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 8);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_34;
        }
LABEL_57:
        p_it = __asan_report_store1(v18);
LABEL_58:
        v19 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_63:
          __asan_report_store8();
          goto LABEL_64;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 8);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_34;
        }
LABEL_64:
        p_it = __asan_report_store1(v19);
LABEL_65:
        v20 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_70:
          __asan_report_store8();
          goto LABEL_71;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 8);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_34;
        }
LABEL_71:
        p_it = __asan_report_store1(v20);
LABEL_72:
        v21 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_77:
          __asan_report_store8();
          goto LABEL_78;
        }
        v21 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 8);
        v21 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_34;
        }
LABEL_78:
        p_it = __asan_report_store1(v21);
LABEL_79:
        p_skip = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_85:
          __asan_report_load1(p_skip);
LABEL_86:
          __asan_report_store1(p_skip);
LABEL_87:
          __asan_report_load8(p_skip);
LABEL_88:
          __asan_report_load8(p_skip);
LABEL_89:
          v23 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29.it_);
          v13 = v23.size_;
          goto LABEL_40;
        }
        p_skip = v16;
        v22 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v22 <= (char)(v16 & 7) && v22 )
          goto LABEL_85;
        *(_BYTE *)p_it = *(_BYTE *)(p_end + 8);
        p_skip = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_86;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_34:
        p_skip = p_end + 24;
        if ( *(_BYTE *)(((p_end + 24) >> 3) + 0x7FFF8000) )
          goto LABEL_87;
        v29.b_ = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(p_end + 24);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)p_end);
        b = v29.b_;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v29.it_,
                &v29.b_->begin_) )
          goto LABEL_89;
        p_skip = (unsigned __int64)&b->skip_;
        if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
          goto LABEL_88;
        skip = b->skip_;
        v12 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29.it_);
        if ( skip >= v12.size_ )
          skip = v12.size_;
        v13 = v12.size_ - skip;
LABEL_40:
        f.self = &v29.it_.it_;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v29.it_.it_.i_,
          &f);
        if ( size > v13 )
        {
          size -= v13;
          p_size = &this->size_;
          if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
            goto LABEL_95;
          this->size_ += v13;
          continue;
        }
        p_size = &this->size_;
        if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_size);
LABEL_94:
          __asan_report_store8();
LABEL_95:
          __asan_report_load8(p_size);
          goto LABEL_96;
        }
        this->size_ += size;
        v24 = size - v13;
        p_size = &this->remain_;
        if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
          goto LABEL_94;
        this->remain_ = v24;
LABEL_25:
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v25 + 40);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v25 + 48),
          &f);
        p_end = v25;
        if ( v30 == (char *)v25 )
        {
          *(_DWORD *)((v25 >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)((v25 >> 3) + 0x7FFF8008) = 0;
          return;
        }
LABEL_96:
        *(_QWORD *)p_end = 1172321806LL;
        *(_QWORD *)((v25 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_DWORD *)((v25 >> 3) + 0x7FFF8008) = -168430091;
        return;
      case 2:
        goto LABEL_51;
      case 3:
        goto LABEL_58;
      case 4:
        goto LABEL_65;
      case 5:
        goto LABEL_72;
      case 6:
        goto LABEL_79;
      default:
        goto LABEL_29;
    }
  }
};

// Line 144: range 0000000019BDEE34-0000000019BDF2B1
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *p_end; // rbx
  std::size_t p_it; // r12
  std::size_t v4; // r14
  unsigned __int8 *p_i; // rdi
  __int64 v8; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *p_b; // rdi
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *v10; // rcx
  std::size_t *p_size; // rdi
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *v12; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v14; // rax
  std::size_t v15; // r13
  unsigned __int64 v16; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v17; // [rsp+10h] [rbp-E8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-D0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v19; // [rsp+30h] [rbp-C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v20; // [rsp+40h] [rbp-B8h] BYREF
  char v21[152]; // [rsp+60h] [rbp-98h] BYREF

  v16 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v16 = v8;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "1 32 32 8 last:150";
  *(_QWORD *)(v16 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup;
  v17 = v16 >> 3;
  *(_DWORD *)(v17 + 2147450880) = -235802127;
  *(_DWORD *)(v17 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_16;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::begin(
    &v20,
    this->bs_);
  p_end = &this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_i = (unsigned __int8 *)p_end;
    __asan_report_store8();
LABEL_19:
    __asan_report_load1(p_i);
    goto LABEL_20;
  }
  this->end_.it_.bn_ = v20.it_.bn_;
  p_it = (std::size_t)&this->end_.it_.it_;
  if ( &this->end_.it_.it_ == &v20.it_.it_ )
    goto LABEL_10;
  f.self = &this->end_.it_.it_;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_19;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.i_,
    &f);
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_20:
    __asan_report_store1(p_i);
    goto LABEL_21;
  }
  this->end_.it_.it_.i_ = 0;
  v19.self = &this->end_.it_.it_;
  v19.other = &v20.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v20.it_.it_.i_,
    &v19);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = v20.b_;
  f.self = &v20.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v20.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_b = this;
    __asan_report_load8(this);
    goto LABEL_23;
  }
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::end(
    (boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *)(v16 + 32),
    this->bs_);
  while ( 1 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *)&this->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_23:
      __asan_report_load8(p_b);
    }
    else if ( this->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)(v16 + 56) )
    {
      goto LABEL_37;
    }
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->end_.it_,
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v16 + 32)) )
    {
      goto LABEL_25;
    }
LABEL_37:
    v12 = p_end;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end);
LABEL_28:
      __asan_report_load1(v12);
LABEL_29:
      __asan_report_load8(v12);
      goto LABEL_30;
    }
    v20.it_.bn_ = p_end->it_.bn_;
    v20.it_.it_.i_ = 0;
    v19.self = &v20.it_.it_;
    v19.other = &p_end->it_.it_;
    v12 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *)&p_end->it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&p_end->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_28;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      p_end->it_.it_.i_,
      &v19);
    v12 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *)&p_end->b_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->b_ >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v20.b_ = p_end->b_;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++(&p_end->it_);
    p_it = (std::size_t)v20.b_;
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v20.it_,
           &v20.b_->begin_) )
    {
      v12 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *)(p_it + 32);
      if ( !*(_BYTE *)(((p_it + 32) >> 3) + 0x7FFF8000) )
      {
        v4 = *(_QWORD *)(p_it + 32);
        v13 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v20.it_);
        p_it = v13.size_;
        if ( v4 >= v13.size_ )
          v4 = v13.size_;
        goto LABEL_31;
      }
LABEL_30:
      __asan_report_load8(v12);
LABEL_31:
      p_it -= v4;
      goto LABEL_32;
    }
    v14 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v20.it_);
    p_it = v14.size_;
LABEL_32:
    f.self = &v20.it_.it_;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v20.it_.it_.i_,
      &f);
    if ( size <= p_it )
      break;
    size -= p_it;
    p_size = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_50;
    this->size_ += p_it;
  }
  p_size = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
    goto LABEL_49;
  }
  this->size_ += size;
  v15 = size - p_it;
  p_size = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
LABEL_50:
    __asan_report_load8(p_size);
    goto LABEL_51;
  }
  this->remain_ = v15;
LABEL_25:
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v16 + 40);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v16 + 48),
    &f);
  v10 = (boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *)v16;
  if ( v21 == (char *)v16 )
  {
    *(_DWORD *)((v16 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v16 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_51:
  v10->it_.bn_ = (const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)1172321806;
  *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v16 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 144: range 0000000019BF19DE-0000000019BF1E13
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *v2; // rbx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  void *p_b; // rdi
  __int64 p_end; // rax
  boost::asio::const_buffer *it; // rdx
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *b; // rcx
  boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type *p_skip; // rdi
  std::size_t skip; // rcx
  std::size_t v13; // rdx
  std::size_t v14; // rdx
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v15; // rax
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type v16; // rcx
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type v17; // rdi
  std::size_t v18; // rdx
  std::size_t v19; // rax
  std::size_t remain; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator v21; // [rsp+10h] [rbp-B8h] BYREF
  char v22[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = this;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v4 = v6;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 8 last:150";
  *(_QWORD *)(v4 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::setup;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_11;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(this);
LABEL_13:
    __asan_report_store_n(this, 32LL);
    goto LABEL_14;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
    &v21,
    this->bs_.buffers_);
  this = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const)((char *)this + 24);
  if ( *(_BYTE *)((((unsigned __int64)&v2->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v2->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v2 + 55) & 7)
    || *(char *)(((unsigned __int64)&v2->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_13;
  }
  *(__m128i *)&v2->end_.b_ = _mm_load_si128((const __m128i *)&v21);
  v2->end_.it_ = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::iter_type)_mm_load_si128((const __m128i *)&v21.it_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *)(v4 + 32),
    v2->bs_.buffers_);
  while ( 1 )
  {
    this = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const)&v2->end_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->end_ >> 3) + 0x7FFF8000) )
    {
LABEL_14:
      __asan_report_load8(this);
    }
    else if ( v2->end_.b_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> **)(v4 + 32) )
    {
      goto LABEL_47;
    }
    p_b = &v2->end_.it_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->end_.it_.b_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_b);
LABEL_21:
      __asan_report_load8(p_b);
LABEL_22:
      __asan_report_load16(p_b);
LABEL_23:
      __asan_report_load8(p_b);
LABEL_24:
      p_end = __asan_report_load8(p_b);
      goto LABEL_25;
    }
    if ( v2->end_.it_.b_ == *(const boost::beast::buffers_suffix<boost::asio::const_buffer> **)(v4 + 56) )
    {
      p_b = &v2->end_.it_;
      if ( *(_BYTE *)(((unsigned __int64)&v2->end_.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_21;
      if ( v2->end_.it_.it_ == *(boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type *)(v4 + 48) )
        goto LABEL_61;
    }
LABEL_47:
    p_end = (__int64)&v2->end_;
    *(__m128i *)&v21.b_ = _mm_loadu_si128((const __m128i *)&v2->end_);
    v21.it_ = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::iter_type)_mm_loadu_si128((const __m128i *)&v2->end_.it_);
    p_b = &v2->end_.it_;
    if ( *(_WORD *)(((unsigned __int64)&v2->end_.it_ >> 3) + 0x7FFF8000) )
      goto LABEL_22;
    it = (boost::asio::const_buffer *)v2->end_.it_.it_;
    b = v2->end_.it_.b_;
    p_b = &v2->end_.it_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->end_.it_ >> 3) + 0x7FFF8000) )
      goto LABEL_23;
    ++v2->end_.it_.it_;
    p_b = &b->begin_;
    if ( *(_BYTE *)(((unsigned __int64)&b->begin_ >> 3) + 0x7FFF8000) )
      goto LABEL_24;
    if ( it != b->begin_ )
    {
      p_skip = (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type *)it;
      if ( *(_WORD *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        goto LABEL_32;
      v14 = it->size_;
      goto LABEL_53;
    }
LABEL_25:
    p_skip = (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type *)&b->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_skip);
LABEL_31:
      __asan_report_load16(p_skip);
LABEL_32:
      __asan_report_load16(p_skip);
LABEL_33:
      __asan_report_load8(p_skip);
LABEL_34:
      v15 = (const boost::beast::buffers_suffix<boost::asio::const_buffer> *)__asan_report_load8(p_skip);
      goto LABEL_35;
    }
    skip = b->skip_;
    p_skip = (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type *)it;
    if ( *(_WORD *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    v13 = it->size_;
    if ( skip >= v13 )
      skip = v13;
    v14 = v13 - skip;
LABEL_53:
    p_skip = (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type *)(p_end + 8);
    if ( *(_BYTE *)(((unsigned __int64)(p_end + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_33;
    *(_QWORD *)(p_end + 8) -= v14;
    v16 = v21.it_.it_;
    v15 = v21.it_.b_;
    p_skip = &v21.it_.b_->begin_;
    if ( *(_BYTE *)(((unsigned __int64)&v21.it_.b_->begin_ >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    if ( v21.it_.it_ != v21.it_.b_->begin_ )
    {
      v17 = v21.it_.it_;
      if ( *(_WORD *)(((unsigned __int64)v21.it_.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_42;
      remain = v21.it_.it_->size_;
      goto LABEL_58;
    }
LABEL_35:
    v17 = (boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type)&v15->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&v15->skip_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
LABEL_41:
      __asan_report_load16(v17);
LABEL_42:
      remain = __asan_report_load16(v17);
      goto LABEL_43;
    }
    v18 = v15->skip_;
    v17 = v16;
    if ( *(_WORD *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      goto LABEL_41;
    v19 = v16->size_;
    if ( v18 >= v19 )
      v18 = v16->size_;
    remain = v19 - v18;
LABEL_58:
    if ( v21.remain_ < remain )
      remain = v21.remain_;
LABEL_43:
    if ( size <= remain )
      break;
    size -= remain;
    v2->size_ += remain;
  }
  v2->size_ += size;
  v2->remain_ = size - remain;
LABEL_61:
  if ( v22 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 144: range 0000000019BF860E-0000000019BF900D
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size)
{
  std::size_t v3; // r13
  unsigned __int64 p_end; // rbx
  unsigned __int64 p_remain; // rdi
  __int64 v6; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v7; // rdi
  bool v8; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v10; // rdi
  std::size_t v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 p_it; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  char v17; // cl
  unsigned __int8 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdi
  std::size_t v22; // r14
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v23; // rax
  std::size_t v24; // rbp
  std::size_t *p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // r14
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v28; // rax
  std::size_t remain; // rbp
  std::size_t *p_size; // rdi
  std::size_t *v31; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v32; // rcx
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v33; // rcx
  char v34; // cl
  unsigned __int64 v35; // rcx
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v36; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v37; // rax
  std::size_t v38; // r13
  unsigned __int64 v39; // [rsp+0h] [rbp-148h]
  _DWORD *v40; // [rsp+10h] [rbp-138h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-120h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v42; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v43; // [rsp+40h] [rbp-108h] BYREF
  const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn; // [rsp+58h] [rbp-F0h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v45; // [rsp+60h] [rbp-E8h] BYREF
  char v46[184]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = size;
  v39 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v39 = v6;
  }
  *(_QWORD *)v39 = 1102416563LL;
  *(_QWORD *)(v39 + 8) = "1 48 48 8 last:150";
  p_end = (unsigned __int64)boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  *(_QWORD *)(v39 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  v40 = (_DWORD *)(v39 >> 3);
  v40[536862720] = -235802127;
  v40[536862721] = 61937;
  v40[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  size = (std::size_t)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v45,
    this->bs_.buffers_);
  p_end = (unsigned __int64)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v45.b_;
  p_remain = (unsigned __int64)&this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v45.remain_;
  p_remain = (unsigned __int64)&this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v45.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v45.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = (unsigned __int64)&this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  size = (std::size_t)&f;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = (unsigned __int64)&this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v42.self = &this->end_.it_.it_.it_;
  v42.other = &v45.it_.it_.it_;
  size = (std::size_t)&v42;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v45.it_.it_.it_.i_,
    &v42);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v45.it_.b_;
  f.self = &v45.it_.it_.it_;
  size = (std::size_t)&f;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v45.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v7 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  size = (std::size_t)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v39 + 48),
    this->bs_.buffers_);
  while ( 2 )
  {
    v7 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_end;
    if ( *(_BYTE *)((p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v7);
    }
    else if ( *(_QWORD *)p_end != *(_QWORD *)(v39 + 48) )
    {
      v8 = 0;
      goto LABEL_98;
    }
    if ( *(_BYTE *)(((p_end + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end + 40);
    }
    else if ( *(_QWORD *)(p_end + 40) != *(_QWORD *)(v39 + 88) )
    {
      v8 = 0;
      goto LABEL_98;
    }
    size = v39 + 64;
    v8 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(p_end + 16),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v39 + 64));
LABEL_98:
    if ( v8 )
      goto LABEL_137;
    v45.b_ = *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)p_end;
    v31 = (std::size_t *)(p_end + 8);
    if ( *(_BYTE *)(((p_end + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
LABEL_34:
      __asan_report_load8(v31);
LABEL_35:
      __asan_report_load1(v31);
LABEL_36:
      __asan_handle_no_return(v31);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const b"
        "oost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_bas"
        "e::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_"
        "t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
    }
    v45.remain_ = *(_QWORD *)(p_end + 8);
    v31 = (std::size_t *)(p_end + 16);
    if ( *(_BYTE *)(((p_end + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v45.it_.it_.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(p_end + 16);
    v14 = p_end + 24;
    v45.it_.it_.it_.i_ = 0;
    p_it = (unsigned __int64)&v45.it_.it_.it_;
    v31 = (std::size_t *)(p_end + 32);
    if ( *(char *)(((p_end + 32) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    switch ( *(_BYTE *)(p_end + 32) )
    {
      case 0:
        goto LABEL_41;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_end + 24);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_46:
          __asan_report_store8();
          goto LABEL_47;
        }
        p_i = &v45.it_.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v45.it_.it_.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_46;
        v45.it_.it_.it_.buf_ = *(boost::beast::detail::aligned_union_t_7 *)(p_end + 24);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v45.it_.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&v45.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v45.it_.it_.it_.i_ = 1;
          goto LABEL_41;
        }
LABEL_47:
        p_it = __asan_report_store1(p_i);
LABEL_48:
        v15 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_53:
          __asan_report_store8();
          goto LABEL_54;
        }
        v15 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_53;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v15 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_41;
        }
LABEL_54:
        p_it = __asan_report_store1(v15);
LABEL_55:
        v16 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_60:
          __asan_report_store8();
          goto LABEL_61;
        }
        v16 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_60;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v16 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_41;
        }
LABEL_61:
        p_it = __asan_report_store1(v16);
LABEL_62:
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_68:
          __asan_report_load1(v10);
LABEL_69:
          __asan_report_store1(v10);
LABEL_70:
          __asan_report_load8(v10);
LABEL_71:
          __asan_report_load8(v10);
LABEL_72:
          v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)size;
          __asan_report_load1(size);
LABEL_73:
          __asan_handle_no_return(v10);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*,"
            " const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_"
            "iterator_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost"
            "::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v14;
        v17 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
        if ( v17 <= (char)(v14 & 7) && v17 )
          goto LABEL_68;
        *(_BYTE *)p_it = *(_BYTE *)(p_end + 24);
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_69;
        *(_BYTE *)(p_it + 8) = 4;
LABEL_41:
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_end + 40);
        if ( *(_BYTE *)(((p_end + 40) >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        v45.it_.b_ = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(p_end + 40);
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_end + 16);
        if ( *(_BYTE *)(((p_end + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_71;
        v43.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(p_end + 16);
        v11 = p_end + 24;
        v43.it_.i_ = 0;
        v12 = (unsigned __int64)&v43.it_;
        size = p_end + 32;
        if ( *(char *)(((p_end + 32) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_72;
        break;
      case 2:
        goto LABEL_48;
      case 3:
        goto LABEL_55;
      case 4:
        goto LABEL_62;
      default:
        goto LABEL_36;
    }
    switch ( *(_BYTE *)(p_end + 32) )
    {
      case 0:
        goto LABEL_78;
      case 1:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_end + 24);
LABEL_104:
          __asan_report_store8();
          goto LABEL_105;
        }
        if ( *(_BYTE *)(((unsigned __int64)&v43.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_104;
        v43.it_.buf_ = *(boost::beast::detail::aligned_union_t_7 *)(p_end + 24);
        v18 = &v43.it_.i_;
        if ( *(char *)(((unsigned __int64)&v43.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v43.it_.i_ = 1;
          goto LABEL_78;
        }
LABEL_105:
        v10 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v18;
        v12 = __asan_report_store1(v18);
LABEL_106:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_111:
          __asan_report_store8();
          goto LABEL_112;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_111;
        *(boost::beast::detail::aligned_union_t_7 *)v12 = v10->it_.buf_;
        v32 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 2;
          goto LABEL_78;
        }
LABEL_112:
        v10 = v32;
        v12 = __asan_report_store1(v32);
LABEL_113:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_118:
          __asan_report_store8();
          goto LABEL_119;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_118;
        *(boost::beast::detail::aligned_union_t_7 *)v12 = v10->it_.buf_;
        v33 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 3;
          goto LABEL_78;
        }
LABEL_119:
        v10 = v33;
        v12 = __asan_report_store1(v33);
LABEL_120:
        if ( *(char *)((v12 >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(v12);
LABEL_126:
          __asan_report_load1(size);
LABEL_127:
          v19 = __asan_report_store1(v35);
LABEL_128:
          v21 = v19;
          __asan_report_load8(v19);
LABEL_129:
          __asan_report_load8(v21);
LABEL_130:
          v36 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v43);
          v24 = v36.size_;
          goto LABEL_84;
        }
        size = v11;
        v34 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
        if ( v34 <= (char)(v11 & 7) && v34 )
          goto LABEL_126;
        *(_BYTE *)v12 = v10->it_.buf_.__data[0];
        v35 = v12 + 8;
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_127;
        *(_BYTE *)(v12 + 8) = 4;
LABEL_78:
        v19 = (__int64)&v10[1];
        if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
          goto LABEL_128;
        bn = v10[1].bn_;
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(v10);
        v20 = (__int64)bn;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v43,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&bn[1]) )
          goto LABEL_130;
        v21 = v20 + 64;
        if ( *(_BYTE *)(((unsigned __int64)(v20 + 64) >> 3) + 0x7FFF8000) )
          goto LABEL_129;
        v22 = *(_QWORD *)(v20 + 64);
        v23 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v43);
        if ( v22 >= v23.size_ )
          v22 = v23.size_;
        v24 = v23.size_ - v22;
LABEL_84:
        f.self = &v43.it_;
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v43.it_.i_,
          &f);
        p_skip = (std::size_t *)(p_end + 8);
        if ( *(_BYTE *)(((p_end + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_skip);
LABEL_132:
          __asan_report_load8(p_skip);
LABEL_133:
          v37 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v45.it_.it_);
          remain = v37.size_;
          goto LABEL_90;
        }
        *(_QWORD *)(p_end + 8) -= v24;
        b = v45.it_.b_;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v45.it_.it_,
                &v45.it_.b_->begin_) )
          goto LABEL_133;
        p_skip = &b->skip_;
        if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
          goto LABEL_132;
        skip = b->skip_;
        v28 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v45.it_.it_);
        if ( skip >= v28.size_ )
          skip = v28.size_;
        remain = v28.size_ - skip;
LABEL_90:
        if ( v45.remain_ < remain )
          remain = v45.remain_;
        f.self = &v45.it_.it_.it_;
        size = (std::size_t)&f;
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v45.it_.it_.it_.i_,
          &f);
        if ( v3 > remain )
        {
          v3 -= remain;
          p_size = &this->size_;
          if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
            goto LABEL_141;
          this->size_ += remain;
          continue;
        }
        p_size = &this->size_;
        if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_size);
LABEL_140:
          __asan_report_store8();
LABEL_141:
          __asan_report_load8(p_size);
          goto LABEL_142;
        }
        this->size_ += v3;
        v38 = v3 - remain;
        p_size = &this->remain_;
        if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
          goto LABEL_140;
        this->remain_ = v38;
LABEL_137:
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v39 + 72);
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v39 + 80),
          &f);
        p_end = v39;
        if ( v46 == (char *)v39 )
        {
          *(_QWORD *)((v39 >> 3) + 0x7FFF8000) = 0LL;
          *(_DWORD *)((v39 >> 3) + 0x7FFF800C) = 0;
          return;
        }
LABEL_142:
        *(_QWORD *)p_end = 1172321806LL;
        *(_QWORD *)((v39 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v39 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        return;
      case 2:
        goto LABEL_106;
      case 3:
        goto LABEL_113;
      case 4:
        goto LABEL_120;
      default:
        goto LABEL_73;
    }
  }
};

// Line 144: range 0000000019BECE3A-0000000019BED873
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *p_end; // rbx
  void *p_remain; // rdi
  __int64 v6; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *v7; // rdi
  bool v8; // al
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v10; // rdi
  char v11; // al
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v12; // rdi
  __int64 v13; // rbp
  std::size_t v14; // r15
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v15; // rax
  std::size_t v16; // rbp
  std::size_t *p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *b; // rbp
  std::size_t skip; // r15
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v20; // rax
  std::size_t remain; // rbp
  std::size_t *v22; // rdi
  void *p_size; // rdi
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  unsigned __int64 v27; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v28; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v29; // rdi
  char v30; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v31; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v32; // rax
  std::size_t v33; // r13
  _QWORD *v34; // rcx
  unsigned __int64 v35; // [rsp+0h] [rbp-168h]
  unsigned __int64 v36; // [rsp+10h] [rbp-158h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-140h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v38; // [rsp+30h] [rbp-138h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator v39; // [rsp+40h] [rbp-128h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *v40; // [rsp+68h] [rbp-100h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator v41; // [rsp+70h] [rbp-F8h] BYREF
  char v42[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v35 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v35 = v6;
  }
  *(_QWORD *)v35 = 1102416563LL;
  *(_QWORD *)(v35 + 8) = "1 32 64 8 last:150";
  *(_QWORD *)(v35 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::setup;
  v36 = v35 >> 3;
  *(_DWORD *)(v36 + 2147450880) = -235802127;
  *(_DWORD *)(v36 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::begin(
    &v41,
    this->bs_.buffers_);
  p_end = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v41.b_;
  p_remain = &this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v41.remain_;
  p_remain = &this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v41.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v41.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v38.self = &this->end_.it_.it_.it_;
  v38.other = &v41.it_.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v41.it_.it_.it_.i_,
    &v38);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v41.it_.b_;
  f.self = &v41.it_.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v41.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v7 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *)(v35 + 32),
    this->bs_.buffers_);
  while ( 1 )
  {
    v7 = p_end;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v7);
    }
    else if ( p_end->bs_.buffers_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> **)(v35 + 32) )
    {
      v8 = 0;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_end->end_.it_.it_.it_.buf_.1 + 1);
    }
    else if ( *((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1) != *(_QWORD *)(v35 + 88) )
    {
      v8 = 0;
      goto LABEL_86;
    }
    v8 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)&p_end->remain_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v35 + 48));
LABEL_86:
    if ( v8 )
      goto LABEL_137;
    v41.b_ = p_end->bs_.buffers_;
    p_size = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_size);
LABEL_34:
      __asan_report_load8(p_size);
LABEL_35:
      __asan_report_load1(p_size);
LABEL_36:
      __asan_handle_no_return(p_size);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asi"
        "o::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::all"
        "ocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<bo"
        "ost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; "
        "std::size_t = long unsigned int]");
    }
    v41.remain_ = p_end->size_;
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v41.it_.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *)p_end->remain_;
    v24 = (unsigned __int64)&p_end->end_;
    v41.it_.it_.it_.i_ = 0;
    p_size = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    v25 = p_end->end_.it_.it_.it_.buf_.__data[0];
    if ( v25 > 3 )
      goto LABEL_36;
    if ( v25 != 2 )
    {
      if ( v25 > 2 )
        goto LABEL_49;
      if ( !p_end->end_.it_.it_.it_.buf_.__data[0] )
        goto LABEL_100;
      p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_it);
      }
      else
      {
        p_it = &v41.it_.it_.it_;
        if ( !*(_BYTE *)(((unsigned __int64)&v41.it_.it_.it_ >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v41.it_.it_.it_.buf_.__data = p_end->end_.b_;
          p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v41.it_.it_.it_.buf_.1 + 2);
          if ( *(char *)(((unsigned __int64)(&v41.it_.it_.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v41.it_.it_.it_.buf_.__data[16] = 0;
            v38.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v41.it_.it_.it_.buf_.1 + 1);
            v38.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_.remain_;
            p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_.it_;
            if ( *(char *)(((unsigned __int64)&p_end->end_.it_ >> 3) + 0x7FFF8000) >= 0 )
            {
              boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                LOBYTE(p_end->end_.it_.it_.bn_),
                (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v38);
              p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v41.it_.it_.it_.i_;
              if ( *(char *)(((unsigned __int64)&v41.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
              {
                v41.it_.it_.it_.i_ = 1;
                goto LABEL_100;
              }
              goto LABEL_41;
            }
LABEL_40:
            __asan_report_load1(p_it);
LABEL_41:
            __asan_report_store1(p_it);
            goto LABEL_42;
          }
LABEL_39:
          __asan_report_store1(p_it);
          goto LABEL_40;
        }
      }
      __asan_report_store8();
      goto LABEL_39;
    }
LABEL_42:
    p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_i);
    }
    else
    {
      p_i = &v41.it_.it_.it_;
      if ( !*(_BYTE *)(((unsigned __int64)&v41.it_.it_.it_ >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)v41.it_.it_.it_.buf_.__data = p_end->end_.b_;
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v41.it_.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&v41.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v41.it_.it_.it_.i_ = 2;
          goto LABEL_100;
        }
        goto LABEL_48;
      }
    }
    __asan_report_store8();
LABEL_48:
    __asan_report_store1(p_i);
LABEL_49:
    v10 = &v41.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&v41.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(&v41.it_.it_.it_);
LABEL_55:
      __asan_report_load1(v10);
LABEL_56:
      __asan_report_store1(v10);
LABEL_57:
      __asan_report_load8(v10);
LABEL_58:
      __asan_report_load8(v10);
LABEL_59:
      __asan_report_load1(v10);
LABEL_60:
      __asan_handle_no_return(v10);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asi"
        "o::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::all"
        "ocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<bo"
        "ost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; "
        "std::size_t = long unsigned int]");
    }
    v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    v11 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
    if ( v11 <= (char)(v24 & 7) && v11 )
      goto LABEL_55;
    v41.it_.it_.it_.buf_.__data[0] = (unsigned __int8)p_end->end_.b_;
    v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v41.it_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&v41.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_56;
    v41.it_.it_.it_.i_ = 3;
LABEL_100:
    v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&p_end->end_.it_.it_.it_.buf_.1 + 1);
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    v41.it_.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_58;
    v39.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *)p_end->remain_;
    v39.it_.i_ = 0;
    v10 = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_59;
    v27 = p_end->end_.it_.it_.it_.buf_.__data[0];
    if ( v27 > 3 )
      goto LABEL_60;
    if ( v27 == 2 )
      goto LABEL_113;
    if ( v27 <= 2 )
    {
      if ( !p_end->end_.it_.it_.it_.buf_.__data[0] )
        goto LABEL_66;
      v28 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v28);
LABEL_62:
        __asan_report_store8();
LABEL_63:
        __asan_report_store1(v28);
LABEL_64:
        __asan_report_load1(v28);
LABEL_65:
        v39.it_.i_ = 1;
        goto LABEL_66;
      }
      v28 = &v39.it_;
      if ( *(_BYTE *)(((unsigned __int64)&v39.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_62;
      *(_QWORD *)v39.it_.buf_.__data = p_end->end_.b_;
      v28 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v39.it_.buf_.1 + 2);
      if ( *(char *)(((unsigned __int64)(&v39.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_63;
      v39.it_.buf_.__data[16] = 0;
      v38.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v39.it_.buf_.1 + 1);
      v38.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_.remain_;
      v28 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_.it_;
      if ( *(char *)(((unsigned __int64)&p_end->end_.it_ >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_64;
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        LOBYTE(p_end->end_.it_.it_.bn_),
        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v38);
      if ( *(char *)(((unsigned __int64)&v39.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        goto LABEL_65;
      __asan_report_store1(&v39.it_.i_);
LABEL_113:
      v29 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
      v24 >>= 3;
      if ( *(_BYTE *)(v24 + 2147450880) )
      {
        __asan_report_load8(v29);
      }
      else
      {
        v29 = &v39.it_;
        if ( !*(_BYTE *)(((unsigned __int64)&v39.it_ >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v39.it_.buf_.__data = p_end->end_.b_;
          v29 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v39.it_.i_;
          if ( *(char *)(((unsigned __int64)&v39.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
          {
            v39.it_.i_ = 2;
            goto LABEL_66;
          }
          goto LABEL_119;
        }
      }
      __asan_report_store8();
LABEL_119:
      __asan_report_store1(v29);
    }
    v12 = &v39.it_;
    if ( *(char *)(((unsigned __int64)&v39.it_ >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(&v39.it_);
LABEL_126:
      __asan_report_load1(v12);
LABEL_127:
      __asan_report_store1(v12);
LABEL_128:
      __asan_report_load8(v12);
LABEL_129:
      __asan_report_load8(v12);
LABEL_130:
      v31 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v39);
      v16 = v31.size_;
      goto LABEL_72;
    }
    v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v24;
    v30 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
    if ( v30 <= (char)(v24 & 7) && v30 )
      goto LABEL_126;
    v39.it_.buf_.__data[0] = (unsigned __int8)p_end->end_.b_;
    v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v39.it_.i_;
    if ( *(char *)(((unsigned __int64)&v39.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_127;
    v39.it_.i_ = 3;
LABEL_66:
    v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&p_end->end_.it_.it_.it_.buf_.1 + 1);
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_128;
    v40 = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)&p_end->remain_);
    v13 = (__int64)v40;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
            &v39,
            &v40->begin_) )
      goto LABEL_130;
    v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v13 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_129;
    v14 = *(_QWORD *)(v13 + 64);
    v15 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v39);
    if ( v14 >= v15.size_ )
      v14 = v15.size_;
    v16 = v15.size_ - v14;
LABEL_72:
    f.self = &v39.it_;
    boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v39.it_.i_,
      &f);
    p_skip = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_skip);
LABEL_132:
      __asan_report_load8(p_skip);
LABEL_133:
      v32 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v41.it_.it_);
      remain = v32.size_;
      goto LABEL_78;
    }
    p_end->size_ -= v16;
    b = v41.it_.b_;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
            &v41.it_.it_,
            &v41.it_.b_->begin_) )
      goto LABEL_133;
    p_skip = &b->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
      goto LABEL_132;
    skip = b->skip_;
    v20 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v41.it_.it_);
    if ( skip >= v20.size_ )
      skip = v20.size_;
    remain = v20.size_ - skip;
LABEL_78:
    if ( v41.remain_ < remain )
      remain = v41.remain_;
    f.self = &v41.it_.it_.it_;
    boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v41.it_.it_.it_.i_,
      &f);
    if ( size <= remain )
      break;
    size -= remain;
    v22 = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_141;
    this->size_ += remain;
  }
  v22 = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v22);
LABEL_140:
    __asan_report_store8();
LABEL_141:
    __asan_report_load8(v22);
    goto LABEL_142;
  }
  this->size_ += size;
  v33 = size - remain;
  v22 = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
    goto LABEL_140;
  this->remain_ = v33;
LABEL_137:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v35 + 56);
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v35 + 80),
    &f);
  v34 = (_QWORD *)v35;
  if ( v42 == (char *)v35 )
  {
    *(_DWORD *)((v35 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v35 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_142:
  *v34 = 1172321806LL;
  *(_QWORD *)((v35 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v35 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 144: range 0000000019BF7050-0000000019BF7705
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *p_end; // rbx
  std::size_t v3; // r14
  void *p_remain; // rdi
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  bool v9; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v10; // rax
  std::size_t b; // rbp
  std::size_t remain; // rbp
  std::size_t *v13; // rdi
  void *p_size; // rdi
  __int64 v15; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  std::size_t *v17; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v19; // rax
  std::size_t v20; // r13
  _QWORD *v21; // rcx
  unsigned __int64 v22; // [rsp+0h] [rbp-168h]
  unsigned __int64 v23; // [rsp+18h] [rbp-150h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-140h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v25; // [rsp+30h] [rbp-138h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+40h] [rbp-128h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v27; // [rsp+68h] [rbp-100h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v28; // [rsp+70h] [rbp-F8h] BYREF
  char v29[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v22 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v22 = v7;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "1 32 64 8 last:150";
  *(_QWORD *)(v22 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  v23 = v22 >> 3;
  *(_DWORD *)(v23 + 2147450880) = -235802127;
  *(_DWORD *)(v23 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v28,
    this->bs_.buffers_);
  p_end = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v28.b_;
  p_remain = &this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v28.remain_;
  p_remain = &this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v28.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v28.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v25.self = &this->end_.it_.it_.it_;
  v25.other = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v28.it_.it_.it_.i_,
    &v25);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v28.it_.b_;
  f.self = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v28.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v8 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v22 + 32),
    this->bs_.buffers_);
  while ( 1 )
  {
    v8 = p_end;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v8);
    }
    else if ( p_end->bs_.buffers_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v22 + 32) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_end->end_.it_.it_.it_.buf_.1 + 1);
    }
    else if ( *((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1) != *(_QWORD *)(v22 + 88) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    v9 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v22 + 48));
LABEL_53:
    if ( v9 )
      goto LABEL_75;
    v28.b_ = p_end->bs_.buffers_;
    p_size = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_size);
LABEL_34:
      __asan_report_load8(p_size);
LABEL_35:
      __asan_report_load1(p_size);
LABEL_36:
      __asan_report_load8(p_size);
LABEL_37:
      __asan_report_load8(p_size);
LABEL_38:
      __asan_report_load1(p_size);
LABEL_39:
      __asan_report_load8(p_size);
LABEL_40:
      __asan_report_load8(p_size);
LABEL_41:
      v10 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
      b = v10.size_;
      goto LABEL_66;
    }
    v28.remain_ = p_end->size_;
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v28.it_.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v28.it_.it_.it_.i_ = 0;
    v25.self = &v28.it_.it_.it_;
    v25.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      p_end->end_.it_.it_.it_.buf_.__data[0],
      &v25);
    p_size = &p_end->end_.it_.it_.it_.buf_.1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v28.it_.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_37;
    v26.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v26.it_.i_ = 0;
    v25.self = &v26.it_;
    v25.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_38;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      p_end->end_.it_.it_.it_.buf_.__data[0],
      &v25);
    p_size = &p_end->end_.it_.it_.it_.buf_.1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v27 = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_);
    v15 = (__int64)v27;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            &v26,
            &v27->begin_) )
      goto LABEL_41;
    p_size = (void *)(v15 + 152);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 152) >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    v3 = *(_QWORD *)(v15 + 152);
    v16 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
    if ( v3 >= v16.size_ )
      v3 = v16.size_;
    b = v16.size_ - v3;
LABEL_66:
    f.self = &v26.it_;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v26.it_.i_,
      &f);
    v17 = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
      goto LABEL_43;
    }
    p_end->size_ -= b;
    b = (std::size_t)v28.it_.b_;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v28.it_.it_,
           &v28.it_.b_->begin_) )
    {
      v17 = (std::size_t *)(b + 152);
      if ( !*(_BYTE *)(((b + 152) >> 3) + 0x7FFF8000) )
      {
        v3 = *(_QWORD *)(b + 152);
        v18 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
        b = v18.size_;
        if ( v3 >= v18.size_ )
          v3 = v18.size_;
        goto LABEL_44;
      }
LABEL_43:
      __asan_report_load8(v17);
LABEL_44:
      remain = b - v3;
      goto LABEL_45;
    }
    v19 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
    remain = v19.size_;
LABEL_45:
    if ( v28.remain_ < remain )
      remain = v28.remain_;
    f.self = &v28.it_.it_.it_;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v28.it_.it_.it_.i_,
      &f);
    if ( size <= remain )
      break;
    size -= remain;
    v13 = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_79;
    this->size_ += remain;
  }
  v13 = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
    goto LABEL_78;
  }
  this->size_ += size;
  v20 = size - remain;
  v13 = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
LABEL_79:
    __asan_report_load8(v13);
    goto LABEL_80;
  }
  this->remain_ = v20;
LABEL_75:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v22 + 56);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v22 + 80),
    &f);
  v21 = (_QWORD *)v22;
  if ( v29 == (char *)v22 )
  {
    *(_DWORD *)((v22 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v22 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_80:
  *v21 = 1172321806LL;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 144: range 0000000019BF27E2-0000000019BF2E8B
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *p_end; // rbx
  std::size_t v3; // r14
  void *p_remain; // rdi
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  bool v9; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v10; // rax
  std::size_t b; // rbp
  std::size_t remain; // rbp
  std::size_t *v13; // rdi
  void *p_size; // rdi
  __int64 v15; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  std::size_t *v17; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v19; // rax
  std::size_t v20; // r13
  _QWORD *v21; // rcx
  unsigned __int64 v22; // [rsp+0h] [rbp-168h]
  unsigned __int64 v23; // [rsp+18h] [rbp-150h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-140h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v25; // [rsp+30h] [rbp-138h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+40h] [rbp-128h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v27; // [rsp+68h] [rbp-100h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v28; // [rsp+70h] [rbp-F8h] BYREF
  char v29[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v22 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v22 = v7;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "1 32 64 8 last:150";
  *(_QWORD *)(v22 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  v23 = v22 >> 3;
  *(_DWORD *)(v23 + 2147450880) = -235802127;
  *(_DWORD *)(v23 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v28,
    this->bs_.buffers_);
  p_end = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v28.b_;
  p_remain = &this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v28.remain_;
  p_remain = &this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v28.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v28.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v25.self = &this->end_.it_.it_.it_;
  v25.other = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v28.it_.it_.it_.i_,
    &v25);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v28.it_.b_;
  f.self = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v28.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v8 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v22 + 32),
    this->bs_.buffers_);
  while ( 1 )
  {
    v8 = p_end;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v8);
    }
    else if ( p_end->bs_.buffers_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v22 + 32) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_end->end_.it_.it_.it_.buf_.1 + 1);
    }
    else if ( *((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1) != *(_QWORD *)(v22 + 88) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    v9 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v22 + 48));
LABEL_53:
    if ( v9 )
      goto LABEL_75;
    v28.b_ = p_end->bs_.buffers_;
    p_size = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_size);
LABEL_34:
      __asan_report_load8(p_size);
LABEL_35:
      __asan_report_load1(p_size);
LABEL_36:
      __asan_report_load8(p_size);
LABEL_37:
      __asan_report_load8(p_size);
LABEL_38:
      __asan_report_load1(p_size);
LABEL_39:
      __asan_report_load8(p_size);
LABEL_40:
      __asan_report_load8(p_size);
LABEL_41:
      v10 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
      b = v10.size_;
      goto LABEL_66;
    }
    v28.remain_ = p_end->size_;
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v28.it_.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v28.it_.it_.it_.i_ = 0;
    v25.self = &v28.it_.it_.it_;
    v25.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      p_end->end_.it_.it_.it_.buf_.__data[0],
      &v25);
    p_size = &p_end->end_.it_.it_.it_.buf_.1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v28.it_.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_37;
    v26.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v26.it_.i_ = 0;
    v25.self = &v26.it_;
    v25.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.it_.it_.it_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_38;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      p_end->end_.it_.it_.it_.buf_.__data[0],
      &v25);
    p_size = &p_end->end_.it_.it_.it_.buf_.1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(&p_end->end_.it_.it_.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v27 = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)*((_QWORD *)&p_end->end_.it_.it_.it_.buf_.1 + 1);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_);
    v15 = (__int64)v27;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            &v26,
            &v27->begin_) )
      goto LABEL_41;
    p_size = (void *)(v15 + 112);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 112) >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    v3 = *(_QWORD *)(v15 + 112);
    v16 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
    if ( v3 >= v16.size_ )
      v3 = v16.size_;
    b = v16.size_ - v3;
LABEL_66:
    f.self = &v26.it_;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v26.it_.i_,
      &f);
    v17 = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
      goto LABEL_43;
    }
    p_end->size_ -= b;
    b = (std::size_t)v28.it_.b_;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v28.it_.it_,
           &v28.it_.b_->begin_) )
    {
      v17 = (std::size_t *)(b + 112);
      if ( !*(_BYTE *)(((b + 112) >> 3) + 0x7FFF8000) )
      {
        v3 = *(_QWORD *)(b + 112);
        v18 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
        b = v18.size_;
        if ( v3 >= v18.size_ )
          v3 = v18.size_;
        goto LABEL_44;
      }
LABEL_43:
      __asan_report_load8(v17);
LABEL_44:
      remain = b - v3;
      goto LABEL_45;
    }
    v19 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
    remain = v19.size_;
LABEL_45:
    if ( v28.remain_ < remain )
      remain = v28.remain_;
    f.self = &v28.it_.it_.it_;
    boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v28.it_.it_.it_.i_,
      &f);
    if ( size <= remain )
      break;
    size -= remain;
    v13 = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_79;
    this->size_ += remain;
  }
  v13 = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
    goto LABEL_78;
  }
  this->size_ += size;
  v20 = size - remain;
  v13 = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
LABEL_79:
    __asan_report_load8(v13);
    goto LABEL_80;
  }
  this->remain_ = v20;
LABEL_75:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v22 + 56);
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v22 + 80),
    &f);
  v21 = (_QWORD *)v22;
  if ( v29 == (char *)v22 )
  {
    *(_DWORD *)((v22 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v22 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_80:
  *v21 = 1172321806LL;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 144: range 0000000019BF5A8E-0000000019BF6853
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // rbx
  unsigned __int64 v5; // r15
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *buffers; // rsi
  void *p_remain; // rdi
  __int64 v8; // rax
  void *p_b; // rdi
  bool v10; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v12; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v16; // rdx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v17; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v18; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v19; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v20; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v21; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v22; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v23; // rdi
  char v24; // cl
  unsigned __int8 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdi
  std::size_t v29; // r13
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v30; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v31; // rax
  std::size_t *p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // r13
  std::size_t skip; // r13
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v35; // rax
  void *p_it; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v37; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v38; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v39; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v40; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v41; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v42; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v43; // rcx
  char v44; // cl
  unsigned __int64 v45; // rcx
  std::size_t v46; // r12
  _DWORD *v47; // [rsp+10h] [rbp-128h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-118h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v49; // [rsp+30h] [rbp-108h] BYREF
  const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn; // [rsp+48h] [rbp-F0h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v51; // [rsp+50h] [rbp-E8h] BYREF
  char v52[184]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 48 8 last:150";
  *(_QWORD *)(v5 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  v47 = (_DWORD *)(v5 >> 3);
  v47[536862720] = -235802127;
  v47[536862721] = 61937;
  v47[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_19;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(this);
    goto LABEL_21;
  }
  buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v51,
    this->bs_.buffers_);
  p_end = &this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = v51.b_;
  p_remain = &this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  this->end_.remain_ = v51.remain_;
  p_remain = &this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
LABEL_24:
    __asan_report_load1(p_remain);
LABEL_25:
    __asan_handle_no_return(p_remain);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  this->end_.it_.it_.bn_ = v51.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v51.it_.it_.it_ )
    goto LABEL_12;
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_24;
  if ( this->end_.it_.it_.it_.i_ > 9u )
    goto LABEL_25;
  this->end_.it_.it_.it_.i_ = 0;
  f.self = &this->end_.it_.it_.it_;
  f.other = &v51.it_.it_.it_;
  buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&f;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v51.it_.it_.it_.i_,
    &f);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_27:
    __asan_handle_no_return(&this->end_.it_.b_);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  this->end_.it_.b_ = v51.it_.b_;
  if ( v51.it_.it_.it_.i_ > 9u )
    goto LABEL_27;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_b = this;
    __asan_report_load8(this);
    goto LABEL_29;
  }
  buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v5 + 48),
    this->bs_.buffers_);
  while ( 2 )
  {
    p_b = &this->end_;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
LABEL_29:
      __asan_report_load8(p_b);
    }
    else if ( p_end->b_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v5 + 48) )
    {
      v10 = 0;
      goto LABEL_137;
    }
    p_b = &this->end_.it_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_b);
    }
    else if ( this->end_.it_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v5 + 88) )
    {
      v10 = 0;
      goto LABEL_137;
    }
    buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v5 + 64);
    p_b = &this->end_.it_;
    v10 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            &this->end_.it_.it_,
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v5 + 64));
LABEL_137:
    if ( v10 )
      goto LABEL_213;
    v51.b_ = p_end->b_;
    p_it = &this->end_.remain_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_it);
LABEL_36:
      __asan_report_load8(p_it);
LABEL_37:
      __asan_report_load1(p_it);
LABEL_38:
      __asan_handle_no_return(p_it);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const "
        "boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
        "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<bo"
        "ost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; "
        "std::size_t = long unsigned int]");
    }
    v51.remain_ = this->end_.remain_;
    p_it = &this->end_.it_;
    if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v51.it_.it_.bn_ = this->end_.it_.it_.bn_;
    v16 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&this->end_.it_.it_.it_;
    v51.it_.it_.it_.i_ = 0;
    v15 = (unsigned __int64)&v51.it_.it_.it_;
    p_it = &this->end_.it_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_37;
    switch ( this->end_.it_.it_.it_.i_ )
    {
      case 0u:
        goto LABEL_43;
      case 1u:
        p_i = &this->end_.it_.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_48:
          __asan_report_store8();
          goto LABEL_49;
        }
        p_i = &v51.it_.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v51.it_.it_.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_48;
        v51.it_.it_.it_.buf_ = this->end_.it_.it_.it_.buf_;
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v51.it_.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&v51.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v51.it_.it_.it_.i_ = 1;
          goto LABEL_43;
        }
LABEL_49:
        v15 = __asan_report_store1(p_i);
LABEL_50:
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_55:
          __asan_report_store8();
          goto LABEL_56;
        }
        v17 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_55;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v17 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 2;
          goto LABEL_43;
        }
LABEL_56:
        v15 = __asan_report_store1(v17);
LABEL_57:
        v18 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_62:
          __asan_report_store8();
          goto LABEL_63;
        }
        v18 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_62;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v18 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 3;
          goto LABEL_43;
        }
LABEL_63:
        v15 = __asan_report_store1(v18);
LABEL_64:
        v19 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_69:
          __asan_report_store8();
          goto LABEL_70;
        }
        v19 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_69;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v19 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 4;
          goto LABEL_43;
        }
LABEL_70:
        v15 = __asan_report_store1(v19);
LABEL_71:
        v20 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_76:
          __asan_report_store8();
          goto LABEL_77;
        }
        v20 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_76;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v20 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 5;
          goto LABEL_43;
        }
LABEL_77:
        v15 = __asan_report_store1(v20);
LABEL_78:
        v21 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_83:
          __asan_report_store8();
          goto LABEL_84;
        }
        v21 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_83;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v21 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 6;
          goto LABEL_43;
        }
LABEL_84:
        v15 = __asan_report_store1(v21);
LABEL_85:
        v22 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_90:
          __asan_report_store8();
          goto LABEL_91;
        }
        v22 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_90;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v22 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 7;
          goto LABEL_43;
        }
LABEL_91:
        v15 = __asan_report_store1(v22);
LABEL_92:
        v23 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_97:
          __asan_report_store8();
          goto LABEL_98;
        }
        v23 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          goto LABEL_97;
        *(boost::beast::detail::aligned_union_t_5 *)v15 = this->end_.it_.it_.it_.buf_;
        v23 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v15 + 8) = 8;
          goto LABEL_43;
        }
LABEL_98:
        v15 = __asan_report_store1(v23);
LABEL_99:
        v12 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v15;
        if ( *(char *)((v15 >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(v15);
LABEL_105:
          __asan_report_load1(v12);
LABEL_106:
          __asan_report_store1(v12);
LABEL_107:
          __asan_report_load8(v12);
LABEL_108:
          __asan_report_load8(v12);
LABEL_109:
          v12 = buffers;
          __asan_report_load1(buffers);
LABEL_110:
          __asan_handle_no_return(v12);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*"
            ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, cons"
            "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
            "t::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (dec"
            "lval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant"
            "<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        v12 = v16;
        v24 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
        if ( v24 <= ((unsigned __int8)v16 & 7) && v24 )
          goto LABEL_105;
        *(_BYTE *)v15 = this->end_.it_.it_.it_.buf_.__data[0];
        v12 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 8);
        if ( *(char *)(((v15 + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_106;
        *(_BYTE *)(v15 + 8) = 9;
LABEL_43:
        v12 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&this->end_.it_.b_;
        if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
          goto LABEL_107;
        v51.it_.b_ = this->end_.it_.b_;
        v12 = &this->end_.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_108;
        v49.bn_ = this->end_.it_.it_.bn_;
        v13 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&this->end_.it_.it_.it_;
        v49.it_.i_ = 0;
        v14 = (unsigned __int64)&v49.it_;
        buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&this->end_.it_.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_109;
        break;
      case 2u:
        goto LABEL_50;
      case 3u:
        goto LABEL_57;
      case 4u:
        goto LABEL_64;
      case 5u:
        goto LABEL_71;
      case 6u:
        goto LABEL_78;
      case 7u:
        goto LABEL_85;
      case 8u:
        goto LABEL_92;
      case 9u:
        goto LABEL_99;
      default:
        goto LABEL_38;
    }
    switch ( this->end_.it_.it_.it_.i_ )
    {
      case 0u:
        goto LABEL_115;
      case 1u:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&this->end_.it_.it_.it_);
LABEL_143:
          __asan_report_store8();
          goto LABEL_144;
        }
        if ( *(_BYTE *)(((unsigned __int64)&v49.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_143;
        v49.it_.buf_ = this->end_.it_.it_.it_.buf_;
        v25 = &v49.it_.i_;
        if ( *(char *)(((unsigned __int64)&v49.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v49.it_.i_ = 1;
          goto LABEL_115;
        }
LABEL_144:
        v12 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v25;
        v14 = __asan_report_store1(v25);
LABEL_145:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_150:
          __asan_report_store8();
          goto LABEL_151;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_150;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v37 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 2;
          goto LABEL_115;
        }
LABEL_151:
        v12 = v37;
        v14 = __asan_report_store1(v37);
LABEL_152:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_157:
          __asan_report_store8();
          goto LABEL_158;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_157;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v38 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 3;
          goto LABEL_115;
        }
LABEL_158:
        v12 = v38;
        v14 = __asan_report_store1(v38);
LABEL_159:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_164:
          __asan_report_store8();
          goto LABEL_165;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_164;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v39 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 4;
          goto LABEL_115;
        }
LABEL_165:
        v12 = v39;
        v14 = __asan_report_store1(v39);
LABEL_166:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_171:
          __asan_report_store8();
          goto LABEL_172;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_171;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v40 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 5;
          goto LABEL_115;
        }
LABEL_172:
        v12 = v40;
        v14 = __asan_report_store1(v40);
LABEL_173:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_178:
          __asan_report_store8();
          goto LABEL_179;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_178;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v41 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 6;
          goto LABEL_115;
        }
LABEL_179:
        v12 = v41;
        v14 = __asan_report_store1(v41);
LABEL_180:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_185:
          __asan_report_store8();
          goto LABEL_186;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_185;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v42 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 7;
          goto LABEL_115;
        }
LABEL_186:
        v12 = v42;
        v14 = __asan_report_store1(v42);
LABEL_187:
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v13);
LABEL_192:
          __asan_report_store8();
          goto LABEL_193;
        }
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          goto LABEL_192;
        *(boost::beast::detail::aligned_union_t_5 *)v14 = v12->it_.buf_;
        v43 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v14 + 8);
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v14 + 8) = 8;
          goto LABEL_115;
        }
LABEL_193:
        v12 = v43;
        v14 = __asan_report_store1(v43);
LABEL_194:
        if ( *(char *)((v14 >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(v14);
LABEL_200:
          __asan_report_load1(buffers);
LABEL_201:
          v26 = __asan_report_store1(v45);
LABEL_202:
          v28 = v26;
          __asan_report_load8(v26);
LABEL_203:
          __asan_report_load8(v28);
LABEL_204:
          v31 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v49);
          goto LABEL_121;
        }
        buffers = v13;
        v44 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        if ( v44 <= ((unsigned __int8)v13 & 7) && v44 )
          goto LABEL_200;
        *(_BYTE *)v14 = v12->it_.buf_.__data[0];
        v45 = v14 + 8;
        if ( *(char *)(((v14 + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_201;
        *(_BYTE *)(v14 + 8) = 9;
LABEL_115:
        v26 = (__int64)&v12[1];
        if ( *(_BYTE *)(((unsigned __int64)&v12[1] >> 3) + 0x7FFF8000) )
          goto LABEL_202;
        bn = v12[1].bn_;
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(v12);
        v27 = (__int64)bn;
        buffers = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&bn[1];
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v49,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&bn[1]) )
          goto LABEL_204;
        v28 = v27 + 128;
        if ( *(_BYTE *)(((unsigned __int64)(v27 + 128) >> 3) + 0x7FFF8000) )
          goto LABEL_203;
        v29 = *(_QWORD *)(v27 + 128);
        v30 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v49);
        if ( v29 >= v30.size_ )
          v29 = v30.size_;
        v31.size_ = v30.size_ - v29;
LABEL_121:
        if ( v49.it_.i_ > 9u )
        {
          __asan_handle_no_return(&v49);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*"
            ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, cons"
            "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
            "t::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
            "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_const"
            "ant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        p_skip = &this->end_.remain_;
        if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_skip);
LABEL_207:
          __asan_report_load8(p_skip);
LABEL_208:
          v35 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v51.it_.it_);
          goto LABEL_128;
        }
        this->end_.remain_ -= v31.size_;
        b = v51.it_.b_;
        buffers = &v51.it_.b_->begin_;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v51.it_.it_,
                &v51.it_.b_->begin_) )
          goto LABEL_208;
        p_skip = &b->skip_;
        if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
          goto LABEL_207;
        skip = b->skip_;
        v35 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v51.it_.it_);
        if ( skip >= v35.size_ )
          skip = v35.size_;
        v35.size_ -= skip;
LABEL_128:
        if ( v51.remain_ < v35.size_ )
          v35.size_ = v51.remain_;
        if ( v51.it_.it_.it_.i_ > 9u )
        {
          __asan_handle_no_return(&v51.it_);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*"
            ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, cons"
            "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
            "t::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
            "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_const"
            "ant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        if ( size > v35.size_ )
        {
          size -= v35.size_;
          p_b = &this->size_;
          if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
            goto LABEL_218;
          this->size_ += v35.size_;
          continue;
        }
        p_b = &this->size_;
        if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_b);
LABEL_217:
          __asan_report_store8();
LABEL_218:
          __asan_report_load8(p_b);
          goto LABEL_219;
        }
        this->size_ += size;
        v46 = size - v35.size_;
        p_b = &this->remain_;
        if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
          goto LABEL_217;
        this->remain_ = v46;
LABEL_213:
        if ( *(_BYTE *)(v5 + 80) > 9u )
        {
LABEL_219:
          __asan_handle_no_return(p_b);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*"
            ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, cons"
            "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
            "t::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
            "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_const"
            "ant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        if ( v52 == (char *)v5 )
        {
          *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
          *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
        }
        else
        {
          *(_QWORD *)v5 = 1172321806LL;
          *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        }
        return;
      case 2u:
        goto LABEL_145;
      case 3u:
        goto LABEL_152;
      case 4u:
        goto LABEL_159;
      case 5u:
        goto LABEL_166;
      case 6u:
        goto LABEL_173;
      case 7u:
        goto LABEL_180;
      case 8u:
        goto LABEL_187;
      case 9u:
        goto LABEL_194;
      default:
        goto LABEL_110;
    }
  }
};

// Line 144: range 0000000019BF3E4E-0000000019BF49C1
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size)
{
  std::size_t v3; // r13
  unsigned __int64 p_end; // rbx
  unsigned __int64 p_remain; // rdi
  __int64 v6; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v7; // rdi
  bool v8; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v10; // rdi
  std::size_t v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 p_it; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  char v19; // cl
  unsigned __int8 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rdi
  std::size_t v24; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v25; // rax
  std::size_t v26; // rbp
  std::size_t *p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v30; // rax
  std::size_t remain; // rbp
  std::size_t *p_size; // rdi
  std::size_t *v33; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v34; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v35; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v36; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v37; // rcx
  char v38; // cl
  unsigned __int64 v39; // rcx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v40; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v41; // rax
  std::size_t v42; // r13
  unsigned __int64 v43; // [rsp+0h] [rbp-148h]
  _DWORD *v44; // [rsp+10h] [rbp-138h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-120h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v46; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v47; // [rsp+40h] [rbp-108h] BYREF
  const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn; // [rsp+58h] [rbp-F0h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v49; // [rsp+60h] [rbp-E8h] BYREF
  char v50[184]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = size;
  v43 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v43 = v6;
  }
  *(_QWORD *)v43 = 1102416563LL;
  *(_QWORD *)(v43 + 8) = "1 48 48 8 last:150";
  p_end = (unsigned __int64)boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  *(_QWORD *)(v43 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup;
  v44 = (_DWORD *)(v43 >> 3);
  v44[536862720] = -235802127;
  v44[536862721] = 61937;
  v44[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  size = (std::size_t)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v49,
    this->bs_.buffers_);
  p_end = (unsigned __int64)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v49.b_;
  p_remain = (unsigned __int64)&this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v49.remain_;
  p_remain = (unsigned __int64)&this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v49.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v49.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = (unsigned __int64)&this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  size = (std::size_t)&f;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = (unsigned __int64)&this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v46.self = &this->end_.it_.it_.it_;
  v46.other = &v49.it_.it_.it_;
  size = (std::size_t)&v46;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v49.it_.it_.it_.i_,
    &v46);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v49.it_.b_;
  f.self = &v49.it_.it_.it_;
  size = (std::size_t)&f;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v49.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v7 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  size = (std::size_t)this->bs_.buffers_;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v43 + 48),
    this->bs_.buffers_);
  while ( 2 )
  {
    v7 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_end;
    if ( *(_BYTE *)((p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v7);
    }
    else if ( *(_QWORD *)p_end != *(_QWORD *)(v43 + 48) )
    {
      v8 = 0;
      goto LABEL_112;
    }
    if ( *(_BYTE *)(((p_end + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end + 40);
    }
    else if ( *(_QWORD *)(p_end + 40) != *(_QWORD *)(v43 + 88) )
    {
      v8 = 0;
      goto LABEL_112;
    }
    size = v43 + 64;
    v8 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(p_end + 16),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v43 + 64));
LABEL_112:
    if ( v8 )
      goto LABEL_165;
    v49.b_ = *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)p_end;
    v33 = (std::size_t *)(p_end + 8);
    if ( *(_BYTE *)(((p_end + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v33);
LABEL_34:
      __asan_report_load8(v33);
LABEL_35:
      __asan_report_load1(v33);
LABEL_36:
      __asan_handle_no_return(v33);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const b"
        "oost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio"
        "::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(d"
        "eclval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned "
        "int, 0>; std::size_t = long unsigned int]");
    }
    v49.remain_ = *(_QWORD *)(p_end + 8);
    v33 = (std::size_t *)(p_end + 16);
    if ( *(_BYTE *)(((p_end + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v49.it_.it_.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(p_end + 16);
    v14 = p_end + 24;
    v49.it_.it_.it_.i_ = 0;
    p_it = (unsigned __int64)&v49.it_.it_.it_;
    v33 = (std::size_t *)(p_end + 32);
    if ( *(char *)(((p_end + 32) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    switch ( *(_BYTE *)(p_end + 32) )
    {
      case 0:
        goto LABEL_41;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_end + 24);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_46:
          __asan_report_store8();
          goto LABEL_47;
        }
        p_i = &v49.it_.it_.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v49.it_.it_.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_46;
        v49.it_.it_.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(p_end + 24);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v49.it_.it_.it_.i_;
        if ( *(char *)(((unsigned __int64)&v49.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v49.it_.it_.it_.i_ = 1;
          goto LABEL_41;
        }
LABEL_47:
        p_it = __asan_report_store1(p_i);
LABEL_48:
        v15 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_53:
          __asan_report_store8();
          goto LABEL_54;
        }
        v15 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_53;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v15 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_41;
        }
LABEL_54:
        p_it = __asan_report_store1(v15);
LABEL_55:
        v16 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_60:
          __asan_report_store8();
          goto LABEL_61;
        }
        v16 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_60;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v16 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_41;
        }
LABEL_61:
        p_it = __asan_report_store1(v16);
LABEL_62:
        v17 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_67:
          __asan_report_store8();
          goto LABEL_68;
        }
        v17 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_67;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v17 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_41;
        }
LABEL_68:
        p_it = __asan_report_store1(v17);
LABEL_69:
        v18 = v14;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
LABEL_74:
          __asan_report_store8();
          goto LABEL_75;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_74;
        *(_QWORD *)p_it = *(_QWORD *)(p_end + 24);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_41;
        }
LABEL_75:
        p_it = __asan_report_store1(v18);
LABEL_76:
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_82:
          __asan_report_load1(v10);
LABEL_83:
          __asan_report_store1(v10);
LABEL_84:
          __asan_report_load8(v10);
LABEL_85:
          __asan_report_load8(v10);
LABEL_86:
          v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)size;
          __asan_report_load1(size);
LABEL_87:
          __asan_handle_no_return(v10);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*,"
            " const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
            " boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype"
            " (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_con"
            "stant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v14;
        v19 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
        if ( v19 <= (char)(v14 & 7) && v19 )
          goto LABEL_82;
        *(_BYTE *)p_it = *(_BYTE *)(p_end + 24);
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_83;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_41:
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_end + 40);
        if ( *(_BYTE *)(((p_end + 40) >> 3) + 0x7FFF8000) )
          goto LABEL_84;
        v49.it_.b_ = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(p_end + 40);
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(p_end + 16);
        if ( *(_BYTE *)(((p_end + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_85;
        v47.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(p_end + 16);
        v11 = p_end + 24;
        v47.it_.i_ = 0;
        v12 = (unsigned __int64)&v47.it_;
        size = p_end + 32;
        if ( *(char *)(((p_end + 32) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_86;
        break;
      case 2:
        goto LABEL_48;
      case 3:
        goto LABEL_55;
      case 4:
        goto LABEL_62;
      case 5:
        goto LABEL_69;
      case 6:
        goto LABEL_76;
      default:
        goto LABEL_36;
    }
    switch ( *(_BYTE *)(p_end + 32) )
    {
      case 0:
        goto LABEL_92;
      case 1:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_end + 24);
LABEL_118:
          __asan_report_store8();
          goto LABEL_119;
        }
        if ( *(_BYTE *)(((unsigned __int64)&v47.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_118;
        v47.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(p_end + 24);
        v20 = &v47.it_.i_;
        if ( *(char *)(((unsigned __int64)&v47.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v47.it_.i_ = 1;
          goto LABEL_92;
        }
LABEL_119:
        v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v20;
        v12 = __asan_report_store1(v20);
LABEL_120:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_125:
          __asan_report_store8();
          goto LABEL_126;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_125;
        *(boost::beast::detail::aligned_union_t_4 *)v12 = v10->it_.buf_;
        v34 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 2;
          goto LABEL_92;
        }
LABEL_126:
        v10 = v34;
        v12 = __asan_report_store1(v34);
LABEL_127:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_132:
          __asan_report_store8();
          goto LABEL_133;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_132;
        *(boost::beast::detail::aligned_union_t_4 *)v12 = v10->it_.buf_;
        v35 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 3;
          goto LABEL_92;
        }
LABEL_133:
        v10 = v35;
        v12 = __asan_report_store1(v35);
LABEL_134:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_139:
          __asan_report_store8();
          goto LABEL_140;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_139;
        *(boost::beast::detail::aligned_union_t_4 *)v12 = v10->it_.buf_;
        v36 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 4;
          goto LABEL_92;
        }
LABEL_140:
        v10 = v36;
        v12 = __asan_report_store1(v36);
LABEL_141:
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_146:
          __asan_report_store8();
          goto LABEL_147;
        }
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          goto LABEL_146;
        *(boost::beast::detail::aligned_union_t_4 *)v12 = v10->it_.buf_;
        v37 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v12 + 8);
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(v12 + 8) = 5;
          goto LABEL_92;
        }
LABEL_147:
        v10 = v37;
        v12 = __asan_report_store1(v37);
LABEL_148:
        if ( *(char *)((v12 >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(v12);
LABEL_154:
          __asan_report_load1(size);
LABEL_155:
          v21 = __asan_report_store1(v39);
LABEL_156:
          v23 = v21;
          __asan_report_load8(v21);
LABEL_157:
          __asan_report_load8(v23);
LABEL_158:
          v40 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v47);
          v26 = v40.size_;
          goto LABEL_98;
        }
        size = v11;
        v38 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
        if ( v38 <= (char)(v11 & 7) && v38 )
          goto LABEL_154;
        *(_BYTE *)v12 = v10->it_.buf_.__data[0];
        v39 = v12 + 8;
        if ( *(char *)(((v12 + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_155;
        *(_BYTE *)(v12 + 8) = 6;
LABEL_92:
        v21 = (__int64)&v10[1];
        if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
          goto LABEL_156;
        bn = v10[1].bn_;
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(v10);
        v22 = (__int64)bn;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v47,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&bn[1]) )
          goto LABEL_158;
        v23 = v22 + 88;
        if ( *(_BYTE *)(((unsigned __int64)(v22 + 88) >> 3) + 0x7FFF8000) )
          goto LABEL_157;
        v24 = *(_QWORD *)(v22 + 88);
        v25 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v47);
        if ( v24 >= v25.size_ )
          v24 = v25.size_;
        v26 = v25.size_ - v24;
LABEL_98:
        f.self = &v47.it_;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v47.it_.i_,
          &f);
        p_skip = (std::size_t *)(p_end + 8);
        if ( *(_BYTE *)(((p_end + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_skip);
LABEL_160:
          __asan_report_load8(p_skip);
LABEL_161:
          v41 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v49.it_.it_);
          remain = v41.size_;
          goto LABEL_104;
        }
        *(_QWORD *)(p_end + 8) -= v26;
        b = v49.it_.b_;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v49.it_.it_,
                &v49.it_.b_->begin_) )
          goto LABEL_161;
        p_skip = &b->skip_;
        if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
          goto LABEL_160;
        skip = b->skip_;
        v30 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v49.it_.it_);
        if ( skip >= v30.size_ )
          skip = v30.size_;
        remain = v30.size_ - skip;
LABEL_104:
        if ( v49.remain_ < remain )
          remain = v49.remain_;
        f.self = &v49.it_.it_.it_;
        size = (std::size_t)&f;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v49.it_.it_.it_.i_,
          &f);
        if ( v3 > remain )
        {
          v3 -= remain;
          p_size = &this->size_;
          if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
            goto LABEL_169;
          this->size_ += remain;
          continue;
        }
        p_size = &this->size_;
        if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_size);
LABEL_168:
          __asan_report_store8();
LABEL_169:
          __asan_report_load8(p_size);
          goto LABEL_170;
        }
        this->size_ += v3;
        v42 = v3 - remain;
        p_size = &this->remain_;
        if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
          goto LABEL_168;
        this->remain_ = v42;
LABEL_165:
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v43 + 72);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v43 + 80),
          &f);
        p_end = v43;
        if ( v50 == (char *)v43 )
        {
          *(_QWORD *)((v43 >> 3) + 0x7FFF8000) = 0LL;
          *(_DWORD *)((v43 >> 3) + 0x7FFF800C) = 0;
          return;
        }
LABEL_170:
        *(_QWORD *)p_end = 1172321806LL;
        *(_QWORD *)((v43 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v43 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        return;
      case 2:
        goto LABEL_120;
      case 3:
        goto LABEL_127;
      case 4:
        goto LABEL_134;
      case 5:
        goto LABEL_141;
      case 6:
        goto LABEL_148;
      default:
        goto LABEL_87;
    }
  }
};

// Line 144: range 0000000019BF0C94-0000000019BF1330
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::setup(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const this,
        std::size_t size)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *p_end; // rbx
  std::size_t v3; // r14
  void *p_remain; // rdi
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *v8; // rdi
  bool v9; // al
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v10; // rax
  std::size_t b; // rbp
  std::size_t remain; // rbp
  std::size_t *v13; // rdi
  void *p_size; // rdi
  __int64 v15; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  std::size_t *v17; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v19; // rax
  std::size_t v20; // r13
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *v21; // rcx
  unsigned __int64 v22; // [rsp+0h] [rbp-148h]
  _DWORD *v23; // [rsp+18h] [rbp-130h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-120h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v25; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+40h] [rbp-108h] BYREF
  const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *bn; // [rsp+58h] [rbp-F0h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator v28; // [rsp+60h] [rbp-E8h] BYREF
  char v29[184]; // [rsp+90h] [rbp-B8h] BYREF

  v22 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v22 = v7;
  }
  *(_QWORD *)v22 = 1102416563LL;
  *(_QWORD *)(v22 + 8) = "1 48 48 8 last:150";
  *(_QWORD *)(v22 + 16) = boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::setup;
  v23 = (_DWORD *)(v22 >> 3);
  v23[536862720] = -235802127;
  v23[536862721] = 61937;
  v23[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::begin(
    &v28,
    this->bs_.buffers_);
  p_end = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *)&this->end_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_remain = p_end;
    __asan_report_store8();
    goto LABEL_21;
  }
  this->end_.b_ = v28.b_;
  p_remain = &this->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.remain_ = v28.remain_;
  p_remain = &this->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    __asan_report_load1(p_remain);
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = v28.it_.it_.bn_;
  if ( &this->end_.it_.it_.it_ == &v28.it_.it_.it_ )
    goto LABEL_12;
  f.self = &this->end_.it_.it_.it_;
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_23;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    this->end_.it_.it_.it_.i_,
    &f);
  p_remain = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_store1(p_remain);
    goto LABEL_25;
  }
  this->end_.it_.it_.it_.i_ = 0;
  v25.self = &this->end_.it_.it_.it_;
  v25.other = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v28.it_.it_.it_.i_,
    &v25);
LABEL_12:
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->end_.it_.b_ = v28.it_.b_;
  f.self = &v28.it_.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v28.it_.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v8 = this;
    __asan_report_load8(this);
    goto LABEL_27;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v22 + 48),
    this->bs_.buffers_);
  while ( 1 )
  {
    v8 = p_end;
    if ( *(_BYTE *)(((unsigned __int64)p_end >> 3) + 0x7FFF8000) )
    {
LABEL_27:
      __asan_report_load8(v8);
    }
    else if ( p_end->bs_.buffers_ != *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> **)(v22 + 48) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)&p_end->end_.it_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&p_end->end_.it_);
    }
    else if ( p_end->end_.it_.it_.bn_ != *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> **)(v22 + 88) )
    {
      v9 = 0;
      goto LABEL_53;
    }
    v9 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_,
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v22 + 64));
LABEL_53:
    if ( v9 )
      goto LABEL_75;
    v28.b_ = p_end->bs_.buffers_;
    p_size = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_size);
LABEL_34:
      __asan_report_load8(p_size);
LABEL_35:
      __asan_report_load1(p_size);
LABEL_36:
      __asan_report_load8(p_size);
LABEL_37:
      __asan_report_load8(p_size);
LABEL_38:
      __asan_report_load1(p_size);
LABEL_39:
      __asan_report_load8(p_size);
LABEL_40:
      __asan_report_load8(p_size);
LABEL_41:
      v10 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
      b = v10.size_;
      goto LABEL_66;
    }
    v28.remain_ = p_end->size_;
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v28.it_.it_.bn_ = (const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v28.it_.it_.it_.i_ = 0;
    v25.self = &v28.it_.it_.it_;
    v25.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.remain_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.remain_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_35;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      LOBYTE(p_end->end_.remain_),
      &v25);
    p_size = &p_end->end_.it_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->end_.it_ >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v28.it_.b_ = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *)p_end->end_.it_.it_.bn_;
    p_size = &p_end->remain_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->remain_ >> 3) + 0x7FFF8000) )
      goto LABEL_37;
    v26.bn_ = (const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)p_end->remain_;
    v26.it_.i_ = 0;
    v25.self = &v26.it_;
    v25.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&p_end->end_;
    p_size = &p_end->end_.remain_;
    if ( *(char *)(((unsigned __int64)&p_end->end_.remain_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_38;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      LOBYTE(p_end->end_.remain_),
      &v25);
    p_size = &p_end->end_.it_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->end_.it_ >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    bn = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *)p_end->end_.it_.it_.bn_;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)&p_end->remain_);
    v15 = (__int64)bn;
    if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            &v26,
            &bn->begin_) )
      goto LABEL_41;
    p_size = (void *)(v15 + 32);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    v3 = *(_QWORD *)(v15 + 32);
    v16 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
    if ( v3 >= v16.size_ )
      v3 = v16.size_;
    b = v16.size_ - v3;
LABEL_66:
    f.self = &v26.it_;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v26.it_.i_,
      &f);
    v17 = &p_end->size_;
    if ( *(_BYTE *)(((unsigned __int64)&p_end->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
      goto LABEL_43;
    }
    p_end->size_ -= b;
    b = (std::size_t)v28.it_.b_;
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v28.it_.it_,
           &v28.it_.b_->begin_) )
    {
      v17 = (std::size_t *)(b + 32);
      if ( !*(_BYTE *)(((b + 32) >> 3) + 0x7FFF8000) )
      {
        v3 = *(_QWORD *)(b + 32);
        v18 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
        b = v18.size_;
        if ( v3 >= v18.size_ )
          v3 = v18.size_;
        goto LABEL_44;
      }
LABEL_43:
      __asan_report_load8(v17);
LABEL_44:
      remain = b - v3;
      goto LABEL_45;
    }
    v19 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28.it_.it_);
    remain = v19.size_;
LABEL_45:
    if ( v28.remain_ < remain )
      remain = v28.remain_;
    f.self = &v28.it_.it_.it_;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v28.it_.it_.it_.i_,
      &f);
    if ( size <= remain )
      break;
    size -= remain;
    v13 = &this->size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_79;
    this->size_ += remain;
  }
  v13 = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
    goto LABEL_78;
  }
  this->size_ += size;
  v20 = size - remain;
  v13 = &this->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
LABEL_79:
    __asan_report_load8(v13);
    goto LABEL_80;
  }
  this->remain_ = v20;
LABEL_75:
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v22 + 72);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v22 + 80),
    &f);
  v21 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)v22;
  if ( v29 == (char *)v22 )
  {
    *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v22 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_80:
  v21->b_ = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *)1172321806;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v22 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 170: range 0000000019BBEFFC-0000000019BC0362
void __fastcall boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *const this,
        const boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *other,
        std::size_t dist)
{
  __int64 p_size; // rax
  std::size_t *p_remain; // rax
  const boost::asio::const_buffer *v5; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(this);
    goto LABEL_10;
  }
  if ( *(_WORD *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_size = __asan_report_load16(other);
    goto LABEL_11;
  }
  this->bs_ = (boost::asio::const_buffers_1)_mm_loadu_si128((const __m128i *)other);
  p_size = (__int64)&other->size_;
  if ( *(_BYTE *)(((unsigned __int64)&other->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(p_size);
    goto LABEL_12;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = other->size_;
  p_remain = &other->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&other->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_remain);
    goto LABEL_14;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  this->remain_ = other->remain_;
  v5 = &this->bs_ + dist;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    JUMPOUT(0x19BBF0EBLL);
  }
  this->end_ = v5;
};

// Line 170: range 0000000019BFFF62-0000000019C00321
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const this,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *other,
        std::size_t dist)
{
  __m128i *v4; // r13
  unsigned __int64 v5; // r15
  void *p_size; // rdi
  std::size_t v7; // r12
  __int64 v8; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  std::size_t v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  std::size_t v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator v26; // [rsp+10h] [rbp-B8h] BYREF
  char v27[152]; // [rsp+30h] [rbp-98h] BYREF

  v4 = (__m128i *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v4 = (__m128i *)v8;
  }
  v4->m128i_i64[0] = 1102416563LL;
  v4->m128i_i64[1] = (__int64)"1 32 32 7 __x:170";
  v4[1].m128i_i64[0] = (__int64)boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view;
  v5 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    p_size = (void *)other;
    __asan_report_load8(other);
    goto LABEL_15;
  }
  this->bs_.buffers_ = other->bs_.buffers_;
  p_size = &other->size_;
  if ( *(_BYTE *)(((unsigned __int64)&other->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_size);
    goto LABEL_16;
  }
  p_size = &this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->size_ = other->size_;
  p_size = &other->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&other->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_size);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->remain_ = other->remain_;
  v7 = dist;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v9 = this;
    __asan_report_load8(this);
    goto LABEL_20;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
    &v26,
    this->bs_.buffers_);
  v4[2] = _mm_load_si128((const __m128i *)&v26);
  v4[3] = _mm_load_si128((const __m128i *)&v26.it_);
  if ( (__int64)dist <= 0 )
  {
    while ( 1 )
    {
      v20 = v7 + 1;
      if ( !v7 )
        goto LABEL_50;
      v18 = v4[3].m128i_i64[0] - 16;
      v4[3].m128i_i64[0] = v18;
      v19 = v4[3].m128i_i64[1];
      v17 = v19 + 16;
      if ( *(_BYTE *)(((unsigned __int64)(v19 + 16) >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        v18 = __asan_report_load8(v17);
      }
      else if ( v18 != *(_QWORD *)(v19 + 16) )
      {
        if ( *(_WORD *)((v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load16(v18);
          goto LABEL_50;
        }
        goto LABEL_43;
      }
      v21 = v19 + 24;
      if ( *(_BYTE *)(((unsigned __int64)(v19 + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v21);
LABEL_42:
        v18 = __asan_report_load16(v21);
LABEL_43:
        v24 = *(_QWORD *)(v18 + 8);
        goto LABEL_44;
      }
      v22 = *(_QWORD *)(v19 + 24);
      v21 = v18;
      if ( *(_WORD *)((v18 >> 3) + 0x7FFF8000) )
        goto LABEL_42;
      v23 = *(_QWORD *)(v18 + 8);
      if ( v22 >= v23 )
        v22 = v23;
      v24 = v23 - v22;
LABEL_44:
      v4[2].m128i_i64[1] += v24;
      v7 = v20;
    }
  }
  while ( 1 )
  {
    v12 = v7 - 1;
    if ( !v7 )
      break;
    v10 = v4[3].m128i_u64[0];
    v4[3].m128i_i64[0] = v10 + 16;
    v11 = v4[3].m128i_i64[1];
    v9 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *)(v11 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000) )
    {
LABEL_20:
      v10 = __asan_report_load8(v9);
    }
    else if ( v10 != *(_QWORD *)(v11 + 16) )
    {
      v17 = v10;
      if ( *(_WORD *)((v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load16(v10);
        goto LABEL_35;
      }
      goto LABEL_28;
    }
    v13 = v11 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13);
LABEL_27:
      v10 = __asan_report_load16(v13);
LABEL_28:
      v16 = *(_QWORD *)(v10 + 8);
      goto LABEL_29;
    }
    v14 = *(_QWORD *)(v11 + 24);
    v13 = v10;
    if ( *(_WORD *)((v10 >> 3) + 0x7FFF8000) )
      goto LABEL_27;
    v15 = *(_QWORD *)(v10 + 8);
    if ( v14 >= v15 )
      v14 = v15;
    v16 = v15 - v14;
LABEL_29:
    v4[2].m128i_i64[1] -= v16;
    v7 = v12;
  }
LABEL_50:
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 55) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(&this->end_, 32LL);
  }
  else
  {
    *(__m128i *)&this->end_.b_ = _mm_load_si128(v4 + 2);
    this->end_.it_ = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::iter_type)_mm_load_si128(v4 + 3);
    if ( v27 == (char *)v4 )
    {
      *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
      return;
    }
  }
  v4->m128i_i64[0] = 1172321806LL;
  *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 182: range 0000000019C00324-0000000019C00601
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const this,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *other)
{
  __m128i *v3; // r14
  _DWORD *v4; // r12
  void *p_end; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *b; // rsi
  std::size_t remain; // rdi
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type it; // rax
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v9; // rdx
  std::size_t i; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator v16; // [rsp+10h] [rbp-178h] BYREF
  char v17[344]; // [rsp+30h] [rbp-158h] BYREF

  v3 = (__m128i *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_3(288LL);
    if ( v11 )
      v3 = (__m128i *)v11;
  }
  v3->m128i_i64[0] = 1102416563LL;
  v3->m128i_i64[1] = (__int64)"4 32 32 11 __first:182 96 32 10 __last:182 160 32 6 __last 224 32 7 __first";
  v3[1].m128i_i64[0] = (__int64)boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view;
  v4 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    p_end = (void *)other;
    __asan_report_load8(other);
LABEL_9:
    __asan_report_load_n(p_end, 32LL);
    goto LABEL_10;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
    &v16,
    other->bs_.buffers_);
  v3[2] = _mm_load_si128((const __m128i *)&v16);
  v3[3] = _mm_load_si128((const __m128i *)&v16.it_);
  p_end = &other->end_;
  if ( *(_BYTE *)((((unsigned __int64)&other->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&other->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)other + 55) & 7)
    || *(char *)(((unsigned __int64)&other->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_9;
  }
  b = other->end_.b_;
  remain = other->end_.remain_;
  v3[6].m128i_i64[0] = (__int64)b;
  v3[6].m128i_i64[1] = remain;
  it = other->end_.it_.it_;
  v9 = other->end_.it_.b_;
  v3[7].m128i_i64[0] = (__int64)it;
  v3[7].m128i_i64[1] = (__int64)v9;
  v3[14] = _mm_load_si128(v3 + 2);
  v3[15] = _mm_load_si128(v3 + 3);
  v3[10].m128i_i64[0] = (__int64)b;
  v3[10].m128i_i64[1] = remain;
  v3[11].m128i_i64[0] = (__int64)it;
  v3[11].m128i_i64[1] = (__int64)v9;
  for ( i = 0LL; ; ++i )
  {
    if ( v3[14].m128i_i64[0] != v3[10].m128i_i64[0] )
      goto LABEL_18;
LABEL_10:
    if ( v3[15].m128i_i64[1] == v3[11].m128i_i64[1] && v3[15].m128i_i64[0] == v3[11].m128i_i64[0] )
      break;
LABEL_18:
    v13 = v3[15].m128i_u64[0];
    v3[15].m128i_i64[0] = v13 + 16;
    v14 = v3[15].m128i_i64[1];
    if ( *(_BYTE *)(((unsigned __int64)(v14 + 16) >> 3) + 0x7FFF8000) )
    {
      v12 = v14 + 16;
      __asan_report_load8(v12);
LABEL_15:
      __asan_report_load8(v12);
      continue;
    }
    if ( v13 == *(_QWORD *)(v14 + 16) )
    {
      v12 = v14 + 24;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        goto LABEL_15;
      if ( *(_WORD *)((v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load16(v13);
        goto LABEL_23;
      }
    }
  }
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
    this,
    other,
    i);
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = 0;
    return;
  }
LABEL_23:
  v3->m128i_i64[0] = 1172321806LL;
  *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = -168430091;
};

// Line 182: range 0000000019C28302-0000000019C28A8C
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *other)
{
  const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v2; // rbx
  std::size_t v3; // r12
  void *p_end; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *i; // rdi
  bool v7; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v9; // r13
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v10; // rdi
  std::size_t size; // r13
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  unsigned __int64 p_it; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v15; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v16; // rdi
  boost::beast::detail::aligned_union_t_5 buf; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v18; // rdi
  boost::beast::detail::aligned_union_t_5 v19; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v20; // rdi
  boost::beast::detail::aligned_union_t_5 v21; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v22; // rdi
  boost::beast::detail::aligned_union_t_5 v23; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v24; // rdi
  boost::beast::detail::aligned_union_t_5 v25; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v26; // rdi
  boost::beast::detail::aligned_union_t_5 v27; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v28; // rdi
  boost::beast::detail::aligned_union_t_5 v29; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v30; // [rsp+0h] [rbp-118h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v31; // [rsp+10h] [rbp-108h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v32; // [rsp+28h] [rbp-F0h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v33; // [rsp+30h] [rbp-E8h] BYREF
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *b; // [rsp+60h] [rbp-B8h]
  std::size_t remain; // [rsp+68h] [rbp-B0h]
  const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn; // [rsp+70h] [rbp-A8h]
  char v37; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int8 v38; // [rsp+80h] [rbp-98h]
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v39; // [rsp+88h] [rbp-90h]
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *v40; // [rsp+90h] [rbp-88h]
  std::size_t v41; // [rsp+98h] [rbp-80h]
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v42; // [rsp+A0h] [rbp-78h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v43; // [rsp+B8h] [rbp-60h]
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *v44; // [rsp+C0h] [rbp-58h]
  std::size_t v45; // [rsp+C8h] [rbp-50h]
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v46; // [rsp+D0h] [rbp-48h] BYREF
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v47; // [rsp+E8h] [rbp-30h]

  p_end = &other->end_;
  if ( *(_BYTE *)(((unsigned __int64)&other->end_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_end);
    goto LABEL_9;
  }
  v2 = other;
  b = other->end_.b_;
  p_end = &other->end_.remain_;
  if ( *(_BYTE *)(((unsigned __int64)&other->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(p_end);
    goto LABEL_10;
  }
  remain = other->end_.remain_;
  p_end = &other->end_.it_;
  if ( *(_BYTE *)(((unsigned __int64)&other->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(p_end);
    goto LABEL_11;
  }
  bn = other->end_.it_.it_.bn_;
  v38 = 0;
  v30.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v37;
  v30.other = &other->end_.it_.it_.it_;
  p_end = &other->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&other->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(p_end);
    goto LABEL_12;
  }
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    other->end_.it_.it_.it_.i_,
    &v30);
  p_end = &other->end_.it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_end);
    goto LABEL_13;
  }
  v39 = other->end_.it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    i = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v2;
    __asan_report_load8(v2);
    goto LABEL_14;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v33,
    other->bs_.buffers_);
  v44 = b;
  v45 = remain;
  v46.bn_ = bn;
  v46.it_.i_ = 0;
  v30.self = &v46.it_;
  v30.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v37;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v38,
    &v30);
  v47 = v39;
  v40 = v33.b_;
  v41 = v33.remain_;
  v42.bn_ = v33.it_.it_.bn_;
  v42.it_.i_ = 0;
  v30.self = &v42.it_;
  v30.other = &v33.it_.it_.it_;
  i = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v33.it_.it_.it_.i_;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v33.it_.it_.it_.i_,
    &v30);
  v43 = v33.it_.b_;
  v3 = 0LL;
  while ( 1 )
  {
    if ( v40 == v44 )
    {
LABEL_14:
      if ( v43 == v47 )
      {
        i = &v42;
        v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               &v42,
               &v46);
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      break;
    v31.bn_ = v42.bn_;
    v31.it_.i_ = 0;
    p_it = (unsigned __int64)&v31.it_;
    v15 = &v42.it_;
    switch ( v42.it_.i_ )
    {
      case 0u:
        goto LABEL_22;
      case 1u:
        p_i = &v42.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v42.it_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&v42.it_);
LABEL_34:
          __asan_report_store8();
          goto LABEL_35;
        }
        p_i = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_34;
        v31.it_.buf_ = v42.it_.buf_;
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 1;
          goto LABEL_22;
        }
LABEL_35:
        p_it = __asan_report_store1(p_i);
LABEL_36:
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_41:
          __asan_report_store8();
          goto LABEL_42;
        }
        buf = v15->buf_;
        v16 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_41;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = buf;
        v16 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_22;
        }
LABEL_42:
        p_it = __asan_report_store1(v16);
LABEL_43:
        v18 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_48:
          __asan_report_store8();
          goto LABEL_49;
        }
        v19 = v15->buf_;
        v18 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_48;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v19;
        v18 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_22;
        }
LABEL_49:
        p_it = __asan_report_store1(v18);
LABEL_50:
        v20 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_55:
          __asan_report_store8();
          goto LABEL_56;
        }
        v21 = v15->buf_;
        v20 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_55;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v21;
        v20 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_22;
        }
LABEL_56:
        p_it = __asan_report_store1(v20);
LABEL_57:
        v22 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_62:
          __asan_report_store8();
          goto LABEL_63;
        }
        v23 = v15->buf_;
        v22 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_62;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v23;
        v22 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_22;
        }
LABEL_63:
        p_it = __asan_report_store1(v22);
LABEL_64:
        v24 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_69:
          __asan_report_store8();
          goto LABEL_70;
        }
        v25 = v15->buf_;
        v24 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_69;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v25;
        v24 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 6;
          goto LABEL_22;
        }
LABEL_70:
        p_it = __asan_report_store1(v24);
LABEL_71:
        v26 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_76:
          __asan_report_store8();
          goto LABEL_77;
        }
        v27 = v15->buf_;
        v26 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_76;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v27;
        v26 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 7;
          goto LABEL_22;
        }
LABEL_77:
        p_it = __asan_report_store1(v26);
LABEL_78:
        v28 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_83:
          __asan_report_store8();
          goto LABEL_84;
        }
        v29 = v15->buf_;
        v28 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_83;
        *(boost::beast::detail::aligned_union_t_5 *)p_it = v29;
        v28 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 8;
          goto LABEL_22;
        }
LABEL_84:
        p_it = __asan_report_store1(v28);
LABEL_85:
        v10 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_90:
          __asan_report_load1(v10);
LABEL_91:
          __asan_report_store1(v10);
LABEL_92:
          __asan_report_load8(v10);
LABEL_93:
          i = &v31;
          v13 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
          goto LABEL_27;
        }
        v10 = v15;
        if ( *(char *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_90;
        *(_BYTE *)p_it = v15->buf_.__data[0];
        v10 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(p_it + 8);
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_91;
        *(_BYTE *)(p_it + 8) = 9;
LABEL_22:
        v32 = v43;
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&v42);
        v9 = (__int64)v32;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v31,
                &v32->begin_) )
          goto LABEL_93;
        v10 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v9 + 128);
        if ( *(_BYTE *)(((unsigned __int64)(v9 + 128) >> 3) + 0x7FFF8000) )
          goto LABEL_92;
        size = *(_QWORD *)(v9 + 128);
        i = &v31;
        v12 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
        if ( size >= v12.size_ )
          size = v12.size_;
        v13.size_ = v12.size_ - size;
LABEL_27:
        if ( v31.it_.i_ > 9u )
        {
          __asan_handle_no_return(&v31);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*"
            ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, cons"
            "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
            "t::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
            "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_const"
            "ant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        v41 -= v13.size_;
        ++v3;
        break;
      case 2u:
        goto LABEL_36;
      case 3u:
        goto LABEL_43;
      case 4u:
        goto LABEL_50;
      case 5u:
        goto LABEL_57;
      case 6u:
        goto LABEL_64;
      case 7u:
        goto LABEL_71;
      case 8u:
        goto LABEL_78;
      case 9u:
        goto LABEL_85;
      default:
        __asan_handle_no_return(i);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
          ":const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()("
          "declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsign"
          "ed int, 0>; std::size_t = long unsigned int]");
    }
  }
  if ( v42.it_.i_ > 9u )
  {
    __asan_handle_no_return(i);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  if ( v46.it_.i_ > 9u )
  {
    __asan_handle_no_return(i);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    this,
    v2,
    v3);
  if ( v33.it_.it_.it_.i_ > 9u )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
  if ( v38 > 9u )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp"
      "11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size"
      "_t = long unsigned int]");
  }
};

// Line 210: range 0000000019BAE9F2-0000000019BAEAAF
void __fastcall boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *const this,
        std::size_t size,
        const boost::asio::const_buffers_1 *bs)
{
  boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::iter_type *p_end; // rax
  boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *v4; // rdi
  const boost::asio::const_buffers_1 *v5; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(this);
    goto LABEL_8;
  }
  if ( *(_WORD *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load16(bs);
    goto LABEL_9;
  }
  this->bs_ = (boost::asio::const_buffers_1)_mm_loadu_si128((const __m128i *)bs);
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
    this->end_ = 0LL;
    boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::setup(this, size);
    return;
  }
LABEL_11:
  v4 = (boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *)p_end;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::asio::const_buffers_1>(v4, size, v5);
};

// Line 210: range 0000000019B9CADA-0000000019B9CB97
void __fastcall boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1> *const this,
        std::size_t size,
        const boost::asio::mutable_buffers_1 *bs)
{
  boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::iter_type *p_end; // rax
  boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1> *v4; // rdi
  const boost::asio::mutable_buffers_1 *v5; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(this);
    goto LABEL_8;
  }
  if ( *(_WORD *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load16(bs);
    goto LABEL_9;
  }
  this->bs_ = (boost::asio::mutable_buffers_1)_mm_loadu_si128((const __m128i *)bs);
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
    this->end_ = 0LL;
    boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::setup(this, size);
    return;
  }
LABEL_11:
  v4 = (boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1> *)p_end;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::asio::mutable_buffers_1>(v4, size, v5);
};

// Line 210: range 0000000019BB4C2E-0000000019BB50F6
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::asio::const_buffer> *bs)
{
  const boost::beast::buffers_suffix<boost::asio::const_buffer> **p_b; // rax
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> >,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *v4; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->end_.it_ = 0LL;
  p_b = &this->end_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::setup(this, size);
    return;
  }
LABEL_11:
  v4 = (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> >,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *)p_b;
  __asan_report_store8();
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>::~transfer_op(v4);
};

// Line 210: range 0000000019BBDBC0-0000000019BBDD54
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *v7; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
LABEL_14:
    __asan_report_store_n(p_end, 32LL);
    goto LABEL_15;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 55) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_14;
  }
  this->end_.it_.bn_ = 0LL;
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store16(p_it);
    goto LABEL_17;
  }
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_18;
  }
  this->end_.it_.it_.i_ = 0;
  p_b = &this->end_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
      this,
      size);
    return;
  }
LABEL_18:
  v7 = (boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *)p_b;
  __asan_report_store8();
  boost::beast::asio_handler_is_continuation<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>(v7);
};

// Line 210: range 0000000019BDE526-0000000019BDEE2F
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **p_b; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *v7; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
LABEL_15:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_16;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_15;
  }
  this->end_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
LABEL_17:
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_18;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 63) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_17;
  }
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_18:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)__asan_report_store1(p_i);
    goto LABEL_19;
  }
  this->end_.it_.it_.i_ = 0;
  p_b = &this->end_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::setup(
      this,
      size);
    return;
  }
LABEL_19:
  v7 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::const_iterator::operator++(v7);
};

// Line 210: range 0000000019BE912C-0000000019BE9597
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v7; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
LABEL_15:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_16;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_15;
  }
  this->end_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
LABEL_17:
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_18;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 63) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_17;
  }
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_18:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_19;
  }
  this->end_.it_.it_.i_ = 0;
  p_b = &this->end_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
      this,
      size);
    return;
  }
LABEL_19:
  v7 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator++(v7);
};

// Line 210: range 0000000019BE168C-0000000019BE1DE0
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v7; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_13;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
LABEL_15:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_16;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_15;
  }
  this->end_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
LABEL_17:
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_18;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 63) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_17;
  }
  *(_OWORD *)this->end_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_18:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_19;
  }
  this->end_.it_.it_.i_ = 0;
  p_b = &this->end_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
      this,
      size);
    return;
  }
LABEL_19:
  v7 = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator++(v7);
};

// Line 210: range 0000000019BE6334-0000000019BE6A6E
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
LABEL_14:
    __asan_report_store_n(p_end, 32LL);
    goto LABEL_15;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 55) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_14;
  }
  this->end_.it_.bn_ = 0LL;
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store16(p_it);
    goto LABEL_17;
  }
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_store1(p_i);
    goto LABEL_18;
  }
  this->end_.it_.it_.i_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    JUMPOUT(0x19BE64C3LL);
  }
  this->end_.b_ = 0LL;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
    this,
    size);
};

// Line 210: range 0000000019BD55CC-0000000019BD5910
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
LABEL_14:
    __asan_report_store_n(p_end, 32LL);
    goto LABEL_15;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 55) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_14;
  }
  this->end_.it_.bn_ = 0LL;
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store16(p_it);
    goto LABEL_17;
  }
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_store1(p_i);
    goto LABEL_18;
  }
  this->end_.it_.it_.i_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    JUMPOUT(0x19BD575BLL);
  }
  this->end_.b_ = 0LL;
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::setup(
    this,
    size);
};

// Line 210: range 0000000019BDF2B6-0000000019BDF8C2
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *const this,
        std::size_t size,
        const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *bs)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *p_end; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rdx
  __int8 v6; // al
  boost::asio::detail::one_buffer v7; // di
  const boost::asio::mutable_buffer *v8; // rdx
  const boost::asio::mutable_buffer *v9; // rcx
  std::size_t v10; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator v11; // [rsp+10h] [rbp+8h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator v12; // [rsp+40h] [rbp+38h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  this->bs_ = bs;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
LABEL_14:
    LOBYTE(size) = 32;
    __asan_report_store_n(p_end, 32LL);
    goto LABEL_15;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 55) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_14;
  }
  this->end_.it_.bn_ = 0LL;
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->end_.it_.bn_ = 0LL;
  p_it = &this->end_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store16(p_it);
    goto LABEL_17;
  }
  this->end_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    v6 = __asan_report_store1(p_i);
    goto LABEL_18;
  }
  this->end_.it_.it_.i_ = 0;
  v6 = (_BYTE)this + 48;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::setup(
      this,
      size);
    return;
  }
LABEL_18:
  v7.gap0[0] = v6;
  __asan_report_store8();
  boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator>(
    v7,
    (boost::asio::detail::multiple_buffers)size,
    v8,
    v9,
    v11,
    v12,
    v10);
};

// Line 210: range 0000000019BF1E16-0000000019BF1F50
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > *bs)
{
  const boost::beast::buffers_suffix<boost::asio::const_buffer> **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *v4; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_11;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(bs);
    goto LABEL_12;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->end_.remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->end_.it_.it_ = 0LL;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_17:
  v4 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>(
    v4,
    size,
    v5);
};

// Line 210: range 0000000019BF9010-0000000019BF92AB
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(bs);
    goto LABEL_18;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
LABEL_20:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_21;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_20;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    size = 32LL;
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_24;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_23;
  }
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store16(v5);
    goto LABEL_26;
  }
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_27;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_27:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BED876-0000000019BEDB78
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(bs);
    goto LABEL_19;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
LABEL_21:
    __asan_report_store_n(p_end, 64LL);
    goto LABEL_22;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_21;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
LABEL_24:
    __asan_report_store_n(p_it, 48LL);
    goto LABEL_25;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
LABEL_26:
    size = 32LL;
    __asan_report_store_n(v5, 32LL);
    goto LABEL_27;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_26;
  }
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)__asan_report_store1(p_i);
    goto LABEL_28;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_28:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BF7708-0000000019BF7A0A
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(bs);
    goto LABEL_19;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
LABEL_21:
    __asan_report_store_n(p_end, 64LL);
    goto LABEL_22;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_21;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
LABEL_24:
    __asan_report_store_n(p_it, 48LL);
    goto LABEL_25;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
LABEL_26:
    size = 32LL;
    __asan_report_store_n(v5, 32LL);
    goto LABEL_27;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_26;
  }
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_28;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_28:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BF2E8E-0000000019BF3190
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // r8
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(bs);
    goto LABEL_19;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
LABEL_21:
    __asan_report_store_n(p_end, 64LL);
    goto LABEL_22;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_21;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
LABEL_24:
    __asan_report_store_n(p_it, 48LL);
    goto LABEL_25;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 87) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_24;
  }
  this->end_.it_.it_.bn_ = 0LL;
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
LABEL_26:
    size = 32LL;
    __asan_report_store_n(v5, 32LL);
    goto LABEL_27;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->end_.it_.it_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_26;
  }
  *(_OWORD *)this->end_.it_.it_.it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->end_.it_.it_.it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_28;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_28:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BF6856-0000000019BF6AF1
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(bs);
    goto LABEL_18;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
LABEL_20:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_21;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_20;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    size = 32LL;
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_24;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_23;
  }
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store16(v5);
    goto LABEL_26;
  }
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_27;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_27:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BF49C4-0000000019BF4C5F
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(bs);
    goto LABEL_18;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
LABEL_20:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_21;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_20;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    size = 32LL;
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_24;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_23;
  }
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store16(v5);
    goto LABEL_26;
  }
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)__asan_report_store1(p_i);
    goto LABEL_27;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_27:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
    v8,
    size,
    v9);
};

// Line 210: range 0000000019BF1332-0000000019BF15CD
void __fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::buffers_prefix_view(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const this,
        std::size_t size,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > *bs)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::iter_type *p_end; // r8
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::iter_type *p_it; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  unsigned __int8 *p_i; // rdx
  const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **p_b; // rax
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *v8; // rdi
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > *v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(bs);
    goto LABEL_18;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> >)bs->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
LABEL_20:
    __asan_report_store_n(p_end, 48LL);
    goto LABEL_21;
  }
  this->remain_ = 0LL;
  p_end = &this->end_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_20;
  }
  this->end_.b_ = 0LL;
  this->end_.remain_ = 0LL;
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  this->end_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
LABEL_23:
    size = 32LL;
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_24;
  }
  this->end_.remain_ = 0LL;
  p_it = &this->end_.it_;
  if ( *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->end_.it_.b_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 71) & 7)
    || *(char *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_23;
  }
  this->end_.it_.it_.bn_ = 0LL;
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  this->end_.it_.b_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->end_.it_.it_.bn_ = 0LL;
  v5 = &this->end_.it_.it_.it_;
  if ( *(_WORD *)(((unsigned __int64)&this->end_.it_.it_.it_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store16(v5);
    goto LABEL_26;
  }
  this->end_.it_.it_.it_.buf_ = 0LL;
  *(_QWORD *)&this->end_.it_.it_.it_.i_ = 0LL;
  p_i = &this->end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    p_b = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)__asan_report_store1(p_i);
    goto LABEL_27;
  }
  this->end_.it_.it_.it_.i_ = 0;
  p_b = &this->end_.it_.b_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->end_.it_.b_ >> 3) + 0x7FFF8000) )
  {
    this->end_.it_.b_ = 0LL;
    boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::setup(
      this,
      size);
    return;
  }
LABEL_27:
  v8 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *)p_b;
  __asan_report_store8();
  boost::beast::buffers_prefix<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>(
    v8,
    size,
    v9);
};

// Line 233: range 0000000019BBDD7A-0000000019BBE0B6
boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::begin(
        boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::asio::const_buffers_1> *const this)
{
  boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::const_iterator *result; // rax

  result = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::asio::const_buffers_1>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(retstr);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&result->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  result->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&result->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    JUMPOUT(0x19BBDDF5LL);
  }
  result->it_ = &this->bs_;
  return result;
};

// Line 233: range 0000000019BA7948-0000000019BA7C84
boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::begin(
        boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1> *const this)
{
  boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::const_iterator *result; // rax

  result = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::asio::mutable_buffers_1>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(retstr);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&result->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  result->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&result->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    JUMPOUT(0x19BA79C3LL);
  }
  result->it_ = &this->bs_;
  return result;
};

// Line 233: range 0000000019C0286E-0000000019C030C6
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *v2; // rbx
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *buffers; // rsi
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  p_it = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator *)&v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
      &v2->it_,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 32LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::end(
           p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *const)0x20);
};

// Line 233: range 0000000019C05BFC-0000000019C068CE
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)0x30);
};

// Line 233: range 0000000019C0526E-0000000019C05BF7
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 79) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 64LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)0x40);
};

// Line 233: range 0000000019C030CC-0000000019C03A43
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 79) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 64LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)0x40);
};

// Line 233: range 0000000019C04894-0000000019C0526C
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)0x30);
};

// Line 233: range 0000000019C03A48-0000000019C0488E
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *const)0x30);
};

// Line 233: range 0000000019C01ED8-0000000019C02869
boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::begin(
        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const this)
{
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator *v2; // rbx
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *p_it; // rdi
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> *buffers; // rsi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  p_it = &v2->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  buffers = this->bs_.buffers_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::begin(
      p_it,
      buffers);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::end(
           (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *const)0x30);
};

// Line 233: range 0000000019BF15CE-0000000019BF19DB
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *v2; // rbx
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator v3; // rax
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(retstr);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_it = this;
    __asan_report_load8(this);
    goto LABEL_11;
  }
  v3 = boost::beast::buffers_suffix<boost::asio::const_buffer>::begin(this->bs_);
  p_it = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *)&v2->it_;
  if ( *(_WORD *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store16(p_it);
    JUMPOUT(0x19BF166BLL);
  }
  v2->it_ = v3;
  return v2;
};

// Line 233: range 0000000019BF7A0C-0000000019BF8113
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 32LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)0x20);
};

// Line 233: range 0000000019BEC6B4-0000000019BECE38
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const)0x30);
};

// Line 233: range 0000000019BF6AF2-0000000019BF704D
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)0x30);
};

// Line 233: range 0000000019BF1F52-0000000019BF27DF
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 63) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 48LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)0x30);
};

// Line 233: range 0000000019BF4C60-0000000019BF5566
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 32LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)0x20);
};

// Line 233: range 0000000019BF3192-0000000019BF3953
boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *__fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *retstr,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const this)
{
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *v2; // rbx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *bs; // rsi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *p_it; // rdi

  v2 = retstr;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  retstr->b_ = this;
  retstr = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)&this->size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(retstr);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v2->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  v2->remain_ = this->size_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    p_it = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)this;
    __asan_report_load8(this);
    goto LABEL_12;
  }
  bs = this->bs_;
  p_it = &v2->it_;
  if ( (*(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&v2->it_.b_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
    && *(char *)(((unsigned __int64)&v2->it_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
      p_it,
      bs);
    return v2;
  }
LABEL_12:
  __asan_report_store_n(p_it, 32LL);
  return boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
           (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)p_it,
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> *const)0x20);
};

// Line 243: range 0000000019BDDED4-0000000019BDE520
void __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::setup(
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const this,
        std::size_t size)
{
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r12
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *v3; // rbx
  __int64 v5; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *p_b; // rdi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *v7; // rcx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_skip; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *b; // rbp
  std::size_t skip; // r14
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v11; // rax
  std::size_t v12; // rbp
  std::size_t *p_size; // rdi
  void *p_end; // rdi
  unsigned __int64 i; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v16; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  char v18; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v19; // rax
  std::size_t v20; // r13
  unsigned __int64 v21; // [rsp+0h] [rbp-128h]
  _DWORD *v22; // [rsp+18h] [rbp-110h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+28h] [rbp-100h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v24; // [rsp+30h] [rbp-F8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator v25; // [rsp+40h] [rbp-E8h] BYREF
  char v26[184]; // [rsp+70h] [rbp-B8h] BYREF

  v3 = this;
  v21 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v21 = v5;
  }
  *(_QWORD *)v21 = 1102416563LL;
  *(_QWORD *)(v21 + 8) = "1 48 48 8 last:150";
  *(_QWORD *)(v21 + 16) = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::setup;
  v22 = (_DWORD *)(v21 >> 3);
  v22[536862720] = -235802127;
  v22[536862721] = 61937;
  v22[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_16;
  }
  this->size_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_ >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8();
    goto LABEL_17;
  }
  this->remain_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin(
    &v25,
    this->bs_);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const)((char *)this + 24);
  if ( *(_BYTE *)(((unsigned __int64)&v3->end_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
LABEL_19:
    __asan_report_load1(this);
    goto LABEL_20;
  }
  v3->end_.it_.bn_ = v25.it_.bn_;
  p_it = &v3->end_.it_.it_;
  if ( &v3->end_.it_.it_ == &v25.it_.it_ )
    goto LABEL_10;
  f.self = &v3->end_.it_.it_;
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const)&v3->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v3->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_19;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v3->end_.it_.it_.i_,
    &f);
  this = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *const)&v3->end_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v3->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_20:
    __asan_report_store1(this);
    goto LABEL_21;
  }
  v3->end_.it_.it_.i_ = 0;
  v24.self = &v3->end_.it_.it_;
  v24.other = &v25.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v25.it_.it_.i_,
    &v24);
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)&v3->end_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8();
    goto LABEL_22;
  }
  v3->end_.b_ = v25.b_;
  f.self = &v25.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v25.it_.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    p_b = v3;
    __asan_report_load8(v3);
    goto LABEL_23;
  }
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::end(
    (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)(v21 + 48),
    v3->bs_);
  while ( 1 )
  {
    p_b = (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> *)&v3->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->end_.b_ >> 3) + 0x7FFF8000) )
    {
LABEL_23:
      __asan_report_load8(p_b);
    }
    else if ( v3->end_.b_ != *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)(v21 + 88) )
    {
      goto LABEL_46;
    }
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
           &v3->end_.it_,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v21 + 48)) )
    {
      goto LABEL_25;
    }
LABEL_46:
    p_end = &v3->end_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->end_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_end);
LABEL_28:
      __asan_report_load1(p_end);
LABEL_29:
      __asan_handle_no_return(p_end);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asi"
        "o::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::all"
        "ocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<bo"
        "ost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; "
        "std::size_t = long unsigned int]");
    }
    v25.it_.bn_ = v3->end_.it_.bn_;
    v25.it_.it_.i_ = 0;
    p_end = &v3->end_.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&v3->end_.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_28;
    i = v3->end_.it_.it_.i_;
    if ( i > 3 )
      goto LABEL_29;
    if ( i == 2 )
      goto LABEL_58;
    if ( i <= 2 )
    {
      if ( !v3->end_.it_.it_.i_ )
        goto LABEL_35;
      v16 = p_it;
      if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_it);
LABEL_31:
        __asan_report_store8();
LABEL_32:
        __asan_report_store1(v16);
LABEL_33:
        __asan_report_load1(v16);
LABEL_34:
        v25.it_.it_.i_ = 1;
        goto LABEL_35;
      }
      v16 = &v25.it_.it_;
      if ( *(_BYTE *)(((unsigned __int64)&v25.it_.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_31;
      *(_QWORD *)v25.it_.it_.buf_.__data = *(_QWORD *)p_it->buf_.__data;
      v16 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v25.it_.it_.buf_.1 + 2);
      if ( *(char *)(((unsigned __int64)(&v25.it_.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_32;
      v25.it_.it_.buf_.__data[16] = 0;
      v24.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v25.it_.it_.buf_.1 + 1);
      v24.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&p_it->buf_.1 + 1);
      v16 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&p_it->buf_.1 + 2);
      if ( *(char *)(((unsigned __int64)(&p_it->buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_33;
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        p_it->buf_.__data[16],
        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v24);
      if ( *(char *)(((unsigned __int64)&v25.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        goto LABEL_34;
      __asan_report_store1(&v25.it_.it_.i_);
LABEL_58:
      p_i = p_it;
      if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_it);
      }
      else
      {
        p_i = &v25.it_.it_;
        if ( !*(_BYTE *)(((unsigned __int64)&v25.it_.it_ >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v25.it_.it_.buf_.__data = *(_QWORD *)p_it->buf_.__data;
          p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v25.it_.it_.i_;
          if ( *(char *)(((unsigned __int64)&v25.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
          {
            v25.it_.it_.i_ = 2;
            goto LABEL_35;
          }
          goto LABEL_64;
        }
      }
      __asan_report_store8();
LABEL_64:
      __asan_report_store1(p_i);
    }
    p_skip = &v25.it_.it_;
    if ( *(char *)(((unsigned __int64)&v25.it_.it_ >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(&v25.it_.it_);
LABEL_71:
      __asan_report_load1(p_skip);
LABEL_72:
      __asan_report_store1(p_skip);
LABEL_73:
      __asan_report_load8(p_skip);
LABEL_74:
      __asan_report_load8(p_skip);
LABEL_75:
      v19 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v25.it_);
      v12 = v19.size_;
      goto LABEL_41;
    }
    p_skip = p_it;
    v18 = *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000);
    if ( v18 <= ((unsigned __int8)p_it & 7) && v18 )
      goto LABEL_71;
    v25.it_.it_.buf_.__data[0] = p_it->buf_.__data[0];
    p_skip = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v25.it_.it_.i_;
    if ( *(char *)(((unsigned __int64)&v25.it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_72;
    v25.it_.it_.i_ = 3;
LABEL_35:
    p_skip = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v3->end_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->end_.b_ >> 3) + 0x7FFF8000) )
      goto LABEL_73;
    v25.b_ = v3->end_.b_;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++(&v3->end_.it_);
    b = v25.b_;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
            &v25.it_,
            &v25.b_->begin_) )
      goto LABEL_75;
    p_skip = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&b->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
      goto LABEL_74;
    skip = b->skip_;
    v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v25.it_);
    if ( skip >= v11.size_ )
      skip = v11.size_;
    v12 = v11.size_ - skip;
LABEL_41:
    f.self = &v25.it_.it_;
    boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v25.it_.it_.i_,
      &f);
    if ( size <= v12 )
      break;
    size -= v12;
    p_size = &v3->size_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->size_ >> 3) + 0x7FFF8000) )
      goto LABEL_81;
    v3->size_ += v12;
  }
  p_size = &v3->size_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_size);
LABEL_80:
    __asan_report_store8();
LABEL_81:
    __asan_report_load8(p_size);
    goto LABEL_82;
  }
  v3->size_ += size;
  v20 = size - v12;
  p_size = &v3->remain_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->remain_ >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  v3->remain_ = v20;
LABEL_25:
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v21 + 56);
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v21 + 80),
    &f);
  v7 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)v21;
  if ( v26 == (char *)v21 )
  {
    *(_QWORD *)((v21 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v21 >> 3) + 0x7FFF800C) = 0;
    return;
  }
LABEL_82:
  v7->it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *)1172321806;
  *(_QWORD *)((v21 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v21 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 924: range 0000000019BDBDE4-0000000019BDBE7D
bool __fastcall boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::const_iterator::operator==(
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *const this,
        const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *other)
{
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **p_b; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    this = other;
    __asan_report_load8(other);
    goto LABEL_7;
  }
  if ( this->b_ != other->b_ )
    return 0;
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->it_.b_ >> 3) + 0x7FFF8000) )
  {
    p_b = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)__asan_report_load8(&this->it_.b_);
    goto LABEL_12;
  }
  p_b = &other->it_.b_;
  if ( *(_BYTE *)(((unsigned __int64)&other->it_.b_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    this = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *const)p_b;
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
             &this->it_.it_,
             &other->it_.it_);
  }
  if ( this->it_.b_ != other->it_.b_ )
    return 0;
  return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
           &this->it_.it_,
           &other->it_.it_);
};
