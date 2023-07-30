// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/buffers_suffix.hpp

// Line 71: range 0000000019BB6E82-0000000019BB6EFB
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 71: range 0000000019BB631C-0000000019BB639B
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 71: range 0000000019BB589C-0000000019BB5915
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 71: range 0000000019BD3854-0000000019BD38CD
boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 141: range 0000000019BA78AC-0000000019BA7932
void __fastcall boost::beast::buffers_suffix<boost::asio::const_buffer>::buffers_suffix(
        boost::beast::buffers_suffix<boost::asio::const_buffer> *const this,
        const boost::asio::const_buffer *bs)
{
  std::size_t *p_skip; // rax
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *v3; // rdi

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(this);
    goto LABEL_7;
  }
  if ( *(_WORD *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load16(bs);
    goto LABEL_8;
  }
  this->bs_ = (boost::asio::const_buffer)_mm_loadu_si128((const __m128i *)bs);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  this->begin_ = &this->bs_;
  p_skip = &this->skip_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
    this->skip_ = 0LL;
    return;
  }
LABEL_9:
  v3 = (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *)p_skip;
  __asan_report_store8();
  boost::beast::detail::make_buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>(v3);
};

// Line 141: range 0000000019BDCECA-0000000019BDD5F3
void __fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::buffers_suffix(
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *const this,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *bs)
{
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *p_begin; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)bs >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(bs);
    goto LABEL_10;
  }
  this->bs_ = (boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >)bs->buffers_;
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_begin = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)this;
    __asan_report_load8(this);
LABEL_11:
    __asan_report_store_n(p_begin, 24LL);
    goto LABEL_12;
  }
  if ( *(_BYTE *)(((unsigned __int64)(&p_begin->it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&p_begin->it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_begin + 23) & 7)
    || *(char *)(((unsigned __int64)p_begin >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_11;
  }
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::begin(
    p_begin,
    this->bs_.buffers_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    JUMPOUT(0x19BDCF99LL);
  }
  this->skip_ = 0LL;
};

// Line 154: range 0000000019BBBAB2-0000000019BBC400
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<boost::asio::const_buffer const&,boost::asio::const_buffer,boost::beast::http::chunk_crlf>(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        const boost::asio::const_buffer *a2,
        const boost::asio::const_buffer *a3,
        const boost::beast::http::chunk_crlf *a4,
        boost::asio::const_buffer *a5,
        boost::asio::const_buffer *a6)
{
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *p_begin; // rdi
  __int64 v8; // rsi

  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::buffers_cat_view(
    &this->bs_,
    a2,
    a3,
    a4);
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 63) & 7)
    || *(char *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) < 0 )
  {
    v8 = 24LL;
    __asan_report_store_n(p_begin, 24LL);
  }
  else
  {
    v8 = (__int64)this;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::begin(
      p_begin,
      &this->bs_);
    p_begin = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&this->skip_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      this->skip_ = 0LL;
      return;
    }
  }
  __asan_report_store8();
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    (std::size_t)p_begin,
    (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v8);
};

// Line 154: range 0000000019BDDB6E-0000000019BDDECF
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer&>(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *const this,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *a2,
        const boost::asio::const_buffer *a3,
        boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *a4,
        boost::asio::const_buffer *a5,
        boost::asio::const_buffer *a6)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::iter_type *p_begin; // rdi

  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::buffers_cat_view(
    &this->bs_,
    a2,
    a3);
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 63) & 7)
    || *(char *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(p_begin, 40LL);
    goto LABEL_6;
  }
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::begin(
    p_begin,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_store8();
    JUMPOUT(0x19BDDBEFLL);
  }
  this->skip_ = 0LL;
};

// Line 154: range 0000000019BE80F6-0000000019BE84AF
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf,boost::asio::const_buffer const&,boost::asio::const_buffer,boost::beast::http::chunk_crlf>(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *a2,
        unsigned __int64 a3,
        const boost::asio::const_buffer *a4,
        const boost::beast::http::chunk_crlf *a5,
        const boost::asio::const_buffer *a6,
        boost::beast::http::chunk_crlf *bn_5,
        boost::asio::const_buffer *a8,
        boost::asio::const_buffer *bn_7,
        boost::beast::http::chunk_crlf *bn_8)
{
  unsigned __int64 v12; // rbp
  _DWORD *v13; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  char v16; // al
  unsigned __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // cl
  char v24; // si
  unsigned __int64 v25; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *v26; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *p_begin; // rdi
  char v28; // cl
  boost::beast::http::detail::chunk_size bn_1; // [rsp+20h] [rbp-A8h] BYREF
  char v34[152]; // [rsp+30h] [rbp-98h] BYREF

  v12 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_1(96LL);
    if ( v22 )
      v12 = v22;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v12 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf,boost::asio::const_buffer const&,boost::asio::const_buffer,boost::beast::http::chunk_crlf>;
  v13 = (_DWORD *)(v12 >> 3);
  v13[536862720] = -235802127;
  v13[536862721] = -234753551;
  v13[536862722] = -202178560;
  if ( *(_BYTE *)((a3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a3);
LABEL_15:
    __asan_report_store4(v15);
LABEL_16:
    __asan_report_store4(v17);
    goto LABEL_17;
  }
  a3 = *(_QWORD *)a3;
  bn_1.sp_._M_ptr = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2> > *)(v12 + 48));
  v14 = *(_QWORD *)(v12 + 72);
  v15 = v14 + 8;
  v16 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
  if ( v16 && v16 <= 3 )
    goto LABEL_15;
  *(_DWORD *)(v14 + 8) = 1;
  v17 = v14 + 12;
  v18 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 12) & 7) + 3) >= v18 && v18 )
    goto LABEL_16;
  *(_DWORD *)(v14 + 12) = 1;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)v14 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)(v14 + 16) = 0LL;
  v19 = v14 + 24;
  if ( *(_BYTE *)(((v14 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v14 = v19;
    __asan_report_store8();
LABEL_20:
    v21 = v14 + 48;
    v23 = *(_BYTE *)(((v14 + 48) >> 3) + 0x7FFF8000);
    v24 = (v14 + 48) & 7;
    if ( v23 <= v24 && v23 )
    {
      v14 += 48LL;
      v21 = __asan_report_store1(v14);
      goto LABEL_32;
    }
    *(_BYTE *)(v14 + 48) = 48;
    goto LABEL_23;
  }
  *(_QWORD *)(v14 + 24) = 0LL;
  v20 = v14 + 49;
  if ( !a3 )
    goto LABEL_20;
  v21 = v14 + 49;
  while ( a3 )
  {
    v24 = a0123456789abcd[a3 & 0xF];
    v28 = *(_BYTE *)(((unsigned __int64)--v21 >> 3) + 0x7FFF8000);
    if ( v28 <= (v21 & 7) && v28 )
    {
      __asan_report_store1(v21);
      goto LABEL_37;
    }
LABEL_32:
    *(_BYTE *)v21 = v24;
    a3 >>= 4;
  }
LABEL_23:
  v25 = v20 - v21;
  v26 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *)(v14 + 16);
  if ( *(_WORD *)(((v14 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_begin = v26;
    __asan_report_store16(v26);
LABEL_38:
    __asan_report_store_n(p_begin, 40LL);
    goto LABEL_39;
  }
  *(_QWORD *)(v14 + 16) = v21;
  *(_QWORD *)(v14 + 24) = v25;
  *(_QWORD *)(v12 + 72) = 0LL;
  bn_1.sp_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v14;
  bn_1.sp_._M_ptr = (std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type *)(v14 + 16);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::buffers_cat_view(
    &this->bs_,
    a2,
    &bn_1,
    a4,
    a5,
    a6,
    bn_5,
    a8,
    bn_7,
    bn_8);
  if ( bn_1.sp_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(bn_1.sp_._M_refcount._M_pi);
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 105) & 7)
    || *(char *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_38;
  }
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::begin(
    p_begin,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  this->skip_ = 0LL;
  if ( v34 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v12 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_40:
  *(_QWORD *)v12 = 1172321806LL;
  *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v12 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 154: range 0000000019BE0604-0000000019BE09A3
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf>(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *a2,
        unsigned __int64 a3,
        const boost::asio::const_buffer *a4,
        const boost::beast::http::chunk_crlf *a5,
        const boost::asio::const_buffer *a6,
        boost::beast::http::chunk_crlf *bn_5)
{
  unsigned __int64 v9; // rbp
  _DWORD *v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  char v13; // al
  unsigned __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // cl
  char v21; // si
  unsigned __int64 v22; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *v23; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *p_begin; // rdi
  char v25; // cl
  boost::beast::http::detail::chunk_size bn_1; // [rsp+20h] [rbp-A8h] BYREF
  char v31[152]; // [rsp+30h] [rbp-98h] BYREF

  v9 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(96LL);
    if ( v19 )
      v9 = v19;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v9 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf>;
  v10 = (_DWORD *)(v9 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862722] = -202178560;
  if ( *(_BYTE *)((a3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a3);
LABEL_15:
    __asan_report_store4(v12);
LABEL_16:
    __asan_report_store4(v14);
    goto LABEL_17;
  }
  a3 = *(_QWORD *)a3;
  bn_1.sp_._M_ptr = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2> > *)(v9 + 48));
  v11 = *(_QWORD *)(v9 + 72);
  v12 = v11 + 8;
  v13 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_15;
  *(_DWORD *)(v11 + 8) = 1;
  v14 = v11 + 12;
  v15 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v11 + 12) & 7) + 3) >= v15 && v15 )
    goto LABEL_16;
  *(_DWORD *)(v11 + 12) = 1;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)v11 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  if ( *(_BYTE *)(((v11 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)(v11 + 16) = 0LL;
  v16 = v11 + 24;
  if ( *(_BYTE *)(((v11 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v11 = v16;
    __asan_report_store8();
LABEL_20:
    v18 = v11 + 48;
    v20 = *(_BYTE *)(((v11 + 48) >> 3) + 0x7FFF8000);
    v21 = (v11 + 48) & 7;
    if ( v20 <= v21 && v20 )
    {
      v11 += 48LL;
      v18 = __asan_report_store1(v11);
      goto LABEL_32;
    }
    *(_BYTE *)(v11 + 48) = 48;
    goto LABEL_23;
  }
  *(_QWORD *)(v11 + 24) = 0LL;
  v17 = v11 + 49;
  if ( !a3 )
    goto LABEL_20;
  v18 = v11 + 49;
  while ( a3 )
  {
    v21 = a0123456789abcd[a3 & 0xF];
    v25 = *(_BYTE *)(((unsigned __int64)--v18 >> 3) + 0x7FFF8000);
    if ( v25 <= (v18 & 7) && v25 )
    {
      __asan_report_store1(v18);
      goto LABEL_37;
    }
LABEL_32:
    *(_BYTE *)v18 = v21;
    a3 >>= 4;
  }
LABEL_23:
  v22 = v17 - v18;
  v23 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *)(v11 + 16);
  if ( *(_WORD *)(((v11 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_begin = v23;
    __asan_report_store16(v23);
LABEL_38:
    __asan_report_store_n(p_begin, 40LL);
    goto LABEL_39;
  }
  *(_QWORD *)(v11 + 16) = v18;
  *(_QWORD *)(v11 + 24) = v22;
  *(_QWORD *)(v9 + 72) = 0LL;
  bn_1.sp_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v11;
  bn_1.sp_._M_ptr = (std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type *)(v11 + 16);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::buffers_cat_view(
    &this->bs_,
    a2,
    &bn_1,
    a4,
    a5,
    a6,
    bn_5);
  if ( bn_1.sp_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(bn_1.sp_._M_refcount._M_pi);
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 111) & 7)
    || *(char *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_38;
  }
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::begin(
    p_begin,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  this->skip_ = 0LL;
  if ( v31 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v9 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_40:
  *(_QWORD *)v9 = 1172321806LL;
  *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v9 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 154: range 0000000019BE51D0-0000000019BE5583
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf,boost::asio::const_buffer const&,boost::asio::const_buffer,boost::beast::http::chunk_crlf>(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        unsigned __int64 a2,
        const boost::asio::const_buffer *a3,
        const boost::beast::http::chunk_crlf *a4,
        boost::asio::const_buffer *a5,
        const boost::beast::http::chunk_crlf *a6,
        const boost::asio::const_buffer *a7,
        boost::asio::const_buffer *bn_6,
        boost::beast::http::chunk_crlf *bn_7)
{
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbp
  _DWORD *v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  char v15; // al
  unsigned __int64 v16; // rdx
  char v17; // cl
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  char v23; // si
  unsigned __int64 v24; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *v25; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *p_begin; // rdi
  char v27; // cl
  boost::beast::http::detail::chunk_size bn_0; // [rsp+20h] [rbp-A8h] BYREF
  char v33[152]; // [rsp+30h] [rbp-98h] BYREF

  v10 = a2;
  v11 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v21 = __asan_stack_malloc_1(96LL);
    if ( v21 )
      v11 = v21;
  }
  *(_QWORD *)v11 = 1102416563LL;
  *(_QWORD *)(v11 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v11 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::buffers_suffix<unsigned long,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer&,boost::beast::http::chunk_crlf,boost::asio::const_buffer const&,boost::asio::const_buffer,boost::beast::http::chunk_crlf>;
  v12 = (_DWORD *)(v11 >> 3);
  v12[536862720] = -235802127;
  v12[536862721] = -234753551;
  v12[536862722] = -202178560;
  if ( *(_BYTE *)((a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a2);
LABEL_15:
    __asan_report_store4(v14);
LABEL_16:
    __asan_report_store4(v16);
    goto LABEL_17;
  }
  v10 = *(_QWORD *)a2;
  bn_0.sp_._M_ptr = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2> > *)(v11 + 48));
  v13 = *(_QWORD *)(v11 + 72);
  v14 = v13 + 8;
  v15 = *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_15;
  *(_DWORD *)(v13 + 8) = 1;
  v16 = v13 + 12;
  v17 = *(_BYTE *)(((v13 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v13 + 12) & 7) + 3) >= v17 && v17 )
    goto LABEL_16;
  *(_DWORD *)(v13 + 12) = 1;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)v13 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<boost::beast::http::detail::chunk_size::sequence>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  if ( *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)(v13 + 16) = 0LL;
  v18 = v13 + 24;
  if ( *(_BYTE *)(((v13 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v13 = v18;
    __asan_report_store8();
LABEL_20:
    v20 = v13 + 48;
    v22 = *(_BYTE *)(((v13 + 48) >> 3) + 0x7FFF8000);
    v23 = (v13 + 48) & 7;
    if ( v22 <= v23 && v22 )
    {
      v13 += 48LL;
      v20 = __asan_report_store1(v13);
      goto LABEL_32;
    }
    *(_BYTE *)(v13 + 48) = 48;
    goto LABEL_23;
  }
  *(_QWORD *)(v13 + 24) = 0LL;
  v19 = v13 + 49;
  if ( !v10 )
    goto LABEL_20;
  v20 = v13 + 49;
  while ( v10 )
  {
    v23 = a0123456789abcd[v10 & 0xF];
    v27 = *(_BYTE *)(((unsigned __int64)--v20 >> 3) + 0x7FFF8000);
    if ( v27 <= (v20 & 7) && v27 )
    {
      __asan_report_store1(v20);
      goto LABEL_37;
    }
LABEL_32:
    *(_BYTE *)v20 = v23;
    v10 >>= 4;
  }
LABEL_23:
  v24 = v19 - v20;
  v25 = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::iter_type *)(v13 + 16);
  if ( *(_WORD *)(((v13 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_begin = v25;
    __asan_report_store16(v25);
LABEL_38:
    __asan_report_store_n(p_begin, 24LL);
    goto LABEL_39;
  }
  *(_QWORD *)(v13 + 16) = v20;
  *(_QWORD *)(v13 + 24) = v24;
  *(_QWORD *)(v11 + 72) = 0LL;
  bn_0.sp_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v13;
  bn_0.sp_._M_ptr = (std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type *)(v13 + 16);
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::buffers_cat_view(
    &this->bs_,
    &bn_0,
    a3,
    a4,
    a5,
    a6,
    a7,
    bn_6,
    bn_7);
  if ( bn_0.sp_._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(bn_0.sp_._M_refcount._M_pi);
  p_begin = &this->begin_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->begin_.it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
    || *(char *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_38;
  }
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::begin(
    p_begin,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8();
    goto LABEL_40;
  }
  this->skip_ = 0LL;
  if ( v33 == (char *)v11 )
  {
    *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v11 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_40:
  *(_QWORD *)v11 = 1172321806LL;
  *(_QWORD *)((v11 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v11 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 193: range 0000000019BD2C8A-0000000019BD3173
boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::end(
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *const this)
{
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *v2; // rbx
  unsigned __int8 *p_i; // rdi
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v5; // [rsp+8h] [rbp-50h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-48h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v7; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_7;
  }
  v2 = retstr;
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    &v7,
    this->bs_.buffers_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    p_i = (unsigned __int8 *)v2;
    __asan_report_store8();
    goto LABEL_8;
  }
  retstr->it_.bn_ = v7.bn_;
  p_i = &retstr->it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_8:
    __asan_report_store1(p_i);
    goto LABEL_9;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v7.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v7.it_.i_,
    &f);
  p_i = (unsigned __int8 *)&v2->b_;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
    v2->b_ = this;
    v5.self = &v7.it_;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v7.it_.i_,
      &v5);
    return v2;
  }
LABEL_9:
  __asan_report_store8();
  return (boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *)boost::beast::http::basic_fields<std::allocator<char>>::value_type::buffer((const boost::beast::http::basic_fields<std::allocator<char> >::value_type *const)p_i).data_;
};

// Line 203: range 0000000019BE3B20-0000000019BE3C92
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        std::size_t amount)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v5; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-A0h] BYREF
  char v8[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 7 end:206";
  *(_QWORD *)(v3 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 32),
    &this->bs_);
  while ( amount
       && !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->begin_,
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 32)) )
  {
    v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->begin_);
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      v6.data_ = (const void *)__asan_report_load8(&this->skip_);
    }
    else
    {
      v6.data_ = (const void *)this->skip_;
      if ( amount < v6.size_ - (unsigned __int64)v6.data_ )
      {
        this->skip_ = (std::size_t)v6.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v6.data_ - v6.size_;
    this->skip_ = 0LL;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&this->begin_);
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 40);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 48),
    &f);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 203: range 0000000019BE3466-0000000019BE35E5
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::consume(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *const this,
        std::size_t amount)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v5; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-C0h] BYREF
  char v8[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 7 end:206";
  *(_QWORD *)(v3 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::consume;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::end(
    (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v3 + 48),
    &this->bs_);
  while ( amount
       && !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
             &this->begin_,
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v3 + 48)) )
  {
    v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&this->begin_);
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      v6.data_ = (const void *)__asan_report_load8(&this->skip_);
    }
    else
    {
      v6.data_ = (const void *)this->skip_;
      if ( amount < v6.size_ - (unsigned __int64)v6.data_ )
      {
        this->skip_ = (std::size_t)v6.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v6.data_ - v6.size_;
    this->skip_ = 0LL;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++(&this->begin_);
  }
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 80),
    &f);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 203: range 0000000019BE382A-0000000019BE39A9
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        std::size_t amount)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v5; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-C0h] BYREF
  char v8[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 7 end:206";
  *(_QWORD *)(v3 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 48),
    &this->bs_);
  while ( amount
       && !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->begin_,
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 48)) )
  {
    v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->begin_);
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      v6.data_ = (const void *)__asan_report_load8(&this->skip_);
    }
    else
    {
      v6.data_ = (const void *)this->skip_;
      if ( amount < v6.size_ - (unsigned __int64)v6.data_ )
      {
        this->skip_ = (std::size_t)v6.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v6.data_ - v6.size_;
    this->skip_ = 0LL;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&this->begin_);
  }
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 80),
    &f);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 203: range 0000000019BE5CF2-0000000019BE5E7D
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        std::size_t amount)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r15
  void *p_begin; // rdi
  __int64 v7; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v8; // rax
  char v9[152]; // [rsp+10h] [rbp-98h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 7 end:206";
  *(_QWORD *)(v4 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  p_begin = (void *)(v4 + 32);
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v4 + 32),
    &this->bs_);
  while ( amount )
  {
    p_begin = &this->begin_;
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &this->begin_,
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v4 + 32)) )
    {
      break;
    }
    v8 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->begin_);
    p_begin = &this->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      v8.data_ = (const void *)__asan_report_load8(p_begin);
    }
    else
    {
      v8.data_ = (const void *)this->skip_;
      if ( amount < v8.size_ - (unsigned __int64)v8.data_ )
      {
        this->skip_ = (std::size_t)v8.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v8.data_ - v8.size_;
    this->skip_ = 0LL;
    p_begin = &this->begin_;
    boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&this->begin_);
  }
  if ( *(_BYTE *)(v4 + 48) > 9u )
  {
    __asan_handle_no_return(p_begin);
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
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 203: range 0000000019BE39AC-0000000019BE3B1E
void __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this,
        std::size_t amount)
{
  unsigned __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v5; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-A0h] BYREF
  char v8[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 7 end:206";
  *(_QWORD *)(v3 + 16) = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::consume;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 32),
    &this->bs_);
  while ( amount
       && !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             &this->begin_,
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 32)) )
  {
    v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->begin_);
    if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
    {
      v6.data_ = (const void *)__asan_report_load8(&this->skip_);
    }
    else
    {
      v6.data_ = (const void *)this->skip_;
      if ( amount < v6.size_ - (unsigned __int64)v6.data_ )
      {
        this->skip_ = (std::size_t)v6.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v6.data_ - v6.size_;
    this->skip_ = 0LL;
    boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++(&this->begin_);
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 40);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 48),
    &f);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 203: range 0000000019BE35E8-0000000019BE377D
void __fastcall boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::consume(
        boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *const this,
        std::size_t amount)
{
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *p_begin; // r12
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *v3; // rbx
  unsigned __int64 v5; // r14
  _DWORD *v6; // r15
  __int64 v7; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v8; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-A0h] BYREF
  char v10[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = this;
  v5 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 7 end:206";
  *(_QWORD *)(v5 + 16) = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::consume;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_7;
  }
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v5 + 32),
    this->bs_.buffers_);
  while ( amount )
  {
    p_begin = &v3->begin_;
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v3->begin_,
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v5 + 32)) )
    {
      break;
    }
    v8 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v3->begin_);
    this = (boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *const)&v3->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&v3->skip_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      v8.data_ = (const void *)__asan_report_load8(this);
    }
    else
    {
      v8.data_ = (const void *)v3->skip_;
      if ( amount < v8.size_ - (unsigned __int64)v8.data_ )
      {
        v3->skip_ = (std::size_t)v8.data_ + amount;
        break;
      }
    }
    amount += (std::size_t)v8.data_ - v8.size_;
    v3->skip_ = 0LL;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++(p_begin);
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v5 + 40);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v5 + 48),
    &f);
  if ( v10 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 219: range 0000000019BD333C-0000000019BD33B5
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 219: range 0000000019BD3E60-0000000019BD3EDF
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 219: range 0000000019BD37D8-0000000019BD3851
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference __fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const this)
{
  unsigned __int64 p_b; // rdi
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b; // rbp
  std::size_t skip; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference result; // rax

  p_b = (unsigned __int64)&this->b_;
  if ( *(_BYTE *)((p_b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_b);
    goto LABEL_8;
  }
  b = this->b_;
  if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          &this->it_,
          &b->begin_) )
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  p_b = (unsigned __int64)&b->skip_;
  if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_b);
    return boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  }
  skip = b->skip_;
  v5 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&this->it_);
  if ( skip >= v5.size_ )
    skip = v5.size_;
  v5.data_ = (char *)v5.data_ + skip;
  result.size_ = v5.size_ - skip;
  return result;
};

// Line 438: range 0000000019BBD4E0-0000000019BBDBBA
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v4; // [rsp+8h] [rbp-50h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-48h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v6; // [rsp+20h] [rbp-38h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    &v6,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  retstr->it_.bn_ = v6.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)((char *)retstr + 16);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_store1(retstr);
    goto LABEL_7;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v6.it_;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    JUMPOUT(0x19BBD599LL);
  }
  v2->b_ = this;
  v4.self = &v6.it_;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v6.it_.i_,
    &v4);
  return v2;
};

// Line 438: range 0000000019BBCD30-0000000019BBCDEC
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v4; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::end(
    &v6,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  retstr->it_.bn_ = v6.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)((char *)retstr + 32);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_store1(retstr);
    goto LABEL_7;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v6.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6.it_.i_,
    &f);
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)&v2->b_;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
    v2->b_ = this;
    v4.self = &v6.it_;
    boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v6.it_.i_,
      &v4);
    return v2;
  }
LABEL_7:
  __asan_report_store8();
  return (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *)boost::beast::detail::get<2ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<2,boost::asio::const_buffer> *)retstr);
};

// Line 438: range 0000000019BBD376-0000000019BBD4DF
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v4; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    &v6,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  retstr->it_.bn_ = v6.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)((char *)retstr + 32);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_store1(retstr);
    goto LABEL_7;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v6.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    JUMPOUT(0x19BBD42FLL);
  }
  v2->b_ = this;
  v4.self = &v6.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v6.it_.i_,
    &v4);
  return v2;
};

// Line 438: range 0000000019BBCEE6-0000000019BBD04F
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v4; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    &v6,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  retstr->it_.bn_ = v6.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)((char *)retstr + 32);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_store1(retstr);
    goto LABEL_7;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v6.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    JUMPOUT(0x19BBCF9FLL);
  }
  v2->b_ = this;
  v4.self = &v6.it_;
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v6.it_.i_,
    &v4);
  return v2;
};

// Line 438: range 0000000019BBD1B6-0000000019BBD279
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v4; // [rsp+0h] [rbp-48h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v5; // [rsp+10h] [rbp-38h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    &v5,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  retstr->it_.bn_ = v5.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)((char *)retstr + 16);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_7:
    __asan_report_store1(retstr);
    goto LABEL_8;
  }
  v2->it_.it_.i_ = 0;
  v4.self = &v2->it_.it_;
  v4.other = &v5.it_;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v5.it_.i_,
    &v4);
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)&v2->b_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
LABEL_9:
    __asan_handle_no_return(retstr);
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
  v2->b_ = this;
  if ( v5.it_.i_ > 9u )
    goto LABEL_9;
  return v2;
};

// Line 438: range 0000000019BBD050-0000000019BBD1B5
boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *__fastcall boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
        boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *retstr,
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *const this)
{
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *v2; // rbx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v4; // [rsp+8h] [rbp-50h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-48h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v6; // [rsp+20h] [rbp-38h] BYREF

  v2 = retstr;
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::end(
    &v6,
    &this->bs_);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  retstr->it_.bn_ = v6.bn_;
  retstr = (boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *)((char *)retstr + 16);
  if ( *(char *)(((unsigned __int64)&v2->it_.it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_store1(retstr);
    goto LABEL_7;
  }
  v2->it_.it_.i_ = 0;
  f.self = &v2->it_.it_;
  f.other = &v6.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v6.it_.i_,
    &f);
  if ( *(_BYTE *)(((unsigned __int64)&v2->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_store8();
    JUMPOUT(0x19BBD109LL);
  }
  v2->b_ = this;
  v4.self = &v6.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v6.it_.i_,
    &v4);
  return v2;
};
